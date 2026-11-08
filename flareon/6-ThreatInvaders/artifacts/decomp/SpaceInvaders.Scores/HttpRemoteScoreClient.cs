using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Net;
using System.Net.Http;
using System.Net.Http.Headers;
using System.Text;
using System.Text.Json;
using System.Threading;
using System.Threading.Tasks;

namespace SpaceInvaders.Scores;

public sealed class HttpRemoteScoreClient : IRemoteScoreClient, IDisposable
{
	private const int MaxAttempts = 3;

	private static readonly JsonSerializerOptions Json = new JsonSerializerOptions
	{
		PropertyNameCaseInsensitive = true
	};

	private readonly HttpClient _http;

	private readonly Random _jitter = new Random();

	private string? _lastEtag;

	public string? LastError { get; private set; }

	public HttpRemoteScoreClient(AppConfig config)
	{
		_http = new HttpClient
		{
			BaseAddress = new Uri(config.BaseUrl.TrimEnd('/') + "/"),
			Timeout = TimeSpan.FromSeconds(6L)
		};
		_http.DefaultRequestHeaders.Accept.Add(new MediaTypeWithQualityHeaderValue("application/json"));
		if (!string.IsNullOrWhiteSpace(config.ApiKey))
		{
			_http.DefaultRequestHeaders.Add("X-Api-Key", config.ApiKey);
		}
	}

	public async Task<bool> PingAsync(CancellationToken ct = default(CancellationToken))
	{
		try
		{
			using HttpResponseMessage httpResponseMessage = await _http.GetAsync("api/v1/health", ct).ConfigureAwait(continueOnCapturedContext: false);
			if (httpResponseMessage.IsSuccessStatusCode)
			{
				LastError = null;
				return true;
			}
			LastError = $"health check returned {(int)httpResponseMessage.StatusCode}";
			return false;
		}
		catch (Exception ex)
		{
			LastError = Describe(ex);
			return false;
		}
	}

	public async Task<byte[]?> DownloadVersionAsync(CancellationToken ct = default(CancellationToken))
	{
		_ = 1;
		try
		{
			using HttpResponseMessage response = await _http.GetAsync("api/v1/version", ct).ConfigureAwait(continueOnCapturedContext: false);
			if (!response.IsSuccessStatusCode)
			{
				LastError = $"version check returned {(int)response.StatusCode}";
				return null;
			}
			byte[] result = await response.Content.ReadAsByteArrayAsync(ct).ConfigureAwait(continueOnCapturedContext: false);
			LastError = null;
			return result;
		}
		catch (OperationCanceledException) when (ct.IsCancellationRequested)
		{
			throw;
		}
		catch (Exception ex2)
		{
			LastError = Describe(ex2);
			return null;
		}
	}

	public async Task<bool> UploadTelemetryAsync(string json, CancellationToken ct = default(CancellationToken))
	{
		try
		{
			using StringContent content = new StringContent(json, Encoding.UTF8, "application/json");
			using HttpResponseMessage httpResponseMessage = await _http.PostAsync("api/v1/telemetry", content, ct).ConfigureAwait(continueOnCapturedContext: false);
			if (httpResponseMessage.IsSuccessStatusCode)
			{
				LastError = null;
				return true;
			}
			LastError = $"telemetry returned {(int)httpResponseMessage.StatusCode}";
			return false;
		}
		catch (OperationCanceledException) when (ct.IsCancellationRequested)
		{
			throw;
		}
		catch (Exception ex2)
		{
			LastError = Describe(ex2);
			return false;
		}
	}

	public async Task<UploadResult> UploadAsync(HighscoreEntry entry, CancellationToken ct = default(CancellationToken))
	{
		string payload = JsonSerializer.Serialize(ScoreDto.From(entry));
		for (int attempt = 1; attempt <= 3; attempt++)
		{
			try
			{
				using StringContent content = new StringContent(payload, Encoding.UTF8, "application/json");
				using HttpResponseMessage response = await _http.PostAsync("api/v1/highscores", content, ct).ConfigureAwait(continueOnCapturedContext: false);
				string body = await response.Content.ReadAsStringAsync(ct).ConfigureAwait(continueOnCapturedContext: false);
				if (response.StatusCode == HttpStatusCode.Created || response.IsSuccessStatusCode)
				{
					PostResponseDto postResponseDto = SafeDeserialize<PostResponseDto>(body);
					LastError = null;
					return new UploadResult(UploadOutcome.Accepted, null, postResponseDto?.Rank ?? 0);
				}
				if (response.StatusCode == HttpStatusCode.Conflict)
				{
					LastError = null;
					return new UploadResult(UploadOutcome.Duplicate, "already on the server");
				}
				string text = SafeDeserialize<ErrorEnvelopeDto>(body)?.Error?.Message ?? $"HTTP {(int)response.StatusCode}";
				int statusCode = (int)response.StatusCode;
				if (statusCode >= 400 && statusCode < 500 && response.StatusCode != HttpStatusCode.RequestTimeout && response.StatusCode != HttpStatusCode.TooManyRequests)
				{
					LastError = text;
					return new UploadResult(UploadOutcome.Rejected, text);
				}
				LastError = text;
			}
			catch (OperationCanceledException) when (ct.IsCancellationRequested)
			{
				throw;
			}
			catch (Exception ex2)
			{
				LastError = Describe(ex2);
			}
			if (attempt < 3)
			{
				await Task.Delay(BackoffFor(attempt), ct).ConfigureAwait(continueOnCapturedContext: false);
			}
		}
		return new UploadResult(UploadOutcome.Transient, LastError);
	}

	public async Task<HighscoreBatch?> DownloadAsync(int limit, bool bypassCache = false, CancellationToken ct = default(CancellationToken))
	{
		for (int attempt = 1; attempt <= 3; attempt++)
		{
			try
			{
				using HttpRequestMessage request = new HttpRequestMessage(HttpMethod.Get, $"api/v1/highscores?limit={limit}");
				if (_lastEtag != null && !bypassCache)
				{
					request.Headers.TryAddWithoutValidation("If-None-Match", _lastEtag);
				}
				using HttpResponseMessage response = await _http.SendAsync(request, ct).ConfigureAwait(continueOnCapturedContext: false);
				if (response.StatusCode == HttpStatusCode.NotModified)
				{
					LastError = null;
					return null;
				}
				if (response.IsSuccessStatusCode)
				{
					if (response.Headers.TryGetValues("ETag", out IEnumerable<string> values))
					{
						_lastEtag = values.FirstOrDefault();
					}
					ScoreListDto scoreListDto = SafeDeserialize<ScoreListDto>(await response.Content.ReadAsStringAsync(ct).ConfigureAwait(continueOnCapturedContext: false));
					LastError = null;
					return HighscoreBatch.Create((scoreListDto == null) ? new List<HighscoreEntry>() : scoreListDto.Entries.ConvertAll((ScoreDto e) => e.ToEntry()));
				}
				LastError = $"HTTP {(int)response.StatusCode}";
			}
			catch (OperationCanceledException) when (ct.IsCancellationRequested)
			{
				throw;
			}
			catch (Exception ex2)
			{
				LastError = Describe(ex2);
			}
			if (attempt < 3)
			{
				await Task.Delay(BackoffFor(attempt), ct).ConfigureAwait(continueOnCapturedContext: false);
			}
		}
		throw new IOException(LastError ?? "download failed");
	}

	private TimeSpan BackoffFor(int attempt)
	{
		return TimeSpan.FromMilliseconds(200.0 * Math.Pow(3.0, attempt - 1) + (double)_jitter.Next(0, 150));
	}

	private static T? SafeDeserialize<T>(string body) where T : class
	{
		try
		{
			return string.IsNullOrWhiteSpace(body) ? null : JsonSerializer.Deserialize<T>(body, Json);
		}
		catch (JsonException)
		{
			return null;
		}
	}

	private static string Describe(Exception ex)
	{
		if (!(ex is TaskCanceledException))
		{
			if (ex is HttpRequestException ex2)
			{
				return ex2.InnerException?.Message ?? ex2.Message;
			}
			return ex.Message;
		}
		return "request timed out";
	}

	public void Dispose()
	{
		_http.Dispose();
	}
}
