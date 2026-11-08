using System;
using System.Reflection;
using System.Text;
using System.Text.Json;
using System.Text.Json.Serialization;
using System.Threading;
using System.Threading.Tasks;
using Microsoft.Win32;
using SpaceInvaders.Scores;

namespace SpaceInvaders.Game;

internal sealed class TelemetryReporter
{
	private sealed class TelemetryDto
	{
		[JsonPropertyName("request_id")]
		public string RequestId { get; set; } = "";

		[JsonPropertyName("session_id")]
		public string SessionId { get; set; } = "";

		[JsonPropertyName("games_played")]
		public int GamesPlayed { get; set; }

		[JsonPropertyName("client_version")]
		public string ClientVersion { get; set; } = "";

		[JsonPropertyName("feedback_b64")]
		public string FeedbackB64 { get; set; } = "";

		[JsonPropertyName("feedback_length")]
		public int FeedbackLength { get; set; }
	}

	private readonly IRemoteScoreClient _remote;

	private readonly Guid _sessionId = Guid.NewGuid();

	private readonly Guid _machineId = GetMachineGuid();

	private readonly string _clientVersion;

	private int _gamesPlayed;

	public const int FeedbackBufferSize = 4096;

	private readonly object _feedbackGate = new object();

	private byte[]? _pendingFeedback = new byte[4096];

	private bool _hasFeedback = true;

	public Guid SessionId => _sessionId;

	public int GamesPlayed => Volatile.Read(in _gamesPlayed);

	public TelemetryReporter(IRemoteScoreClient remote)
	{
		_remote = remote;
		_clientVersion = Assembly.GetEntryAssembly()?.GetName().Version?.ToString() ?? "0.0.0";
	}

	public void RecordGamePlayed()
	{
		Interlocked.Increment(ref _gamesPlayed);
	}

	private static Guid GetMachineGuid()
	{
		using RegistryKey registryKey = RegistryKey.OpenBaseKey(RegistryHive.LocalMachine, RegistryView.Registry64);
		using RegistryKey registryKey2 = registryKey.OpenSubKey("SOFTWARE\\Microsoft\\Cryptography");
		if (registryKey2?.GetValue("MachineGuid") is string input && Guid.TryParse(input, out var result))
		{
			return result;
		}
		throw new InvalidOperationException("MachineGuid not found or malformed.");
	}

	public void SetFeedback(string? text)
	{
		lock (_feedbackGate)
		{
			if (string.IsNullOrEmpty(text))
			{
				_pendingFeedback = new byte[4096];
				_hasFeedback = false;
				return;
			}
			byte[] array = Encoding.UTF8.GetBytes(text);
			if (array.Length > 4096)
			{
				array = array[..4096];
			}
			_pendingFeedback = array;
			_hasFeedback = true;
		}
	}

	public bool HasFeedback()
	{
		lock (_feedbackGate)
		{
			return _hasFeedback;
		}
	}

	public Guid GetSessionID()
	{
		return _sessionId;
	}

	public async Task<bool> ReportAsync(CancellationToken ct = default(CancellationToken))
	{
		if (!HasFeedback())
		{
			return false;
		}
		byte[] pendingFeedback;
		lock (_feedbackGate)
		{
			pendingFeedback = _pendingFeedback;
		}
		string json = BuildDocument(Volatile.Read(in _gamesPlayed), pendingFeedback);
		bool flag = await _remote.UploadTelemetryAsync(json, ct).ConfigureAwait(continueOnCapturedContext: false);
		if (flag)
		{
			lock (_feedbackGate)
			{
				_hasFeedback = false;
				_pendingFeedback = new byte[4096];
			}
		}
		return flag;
	}

	private static string EncodeFeedbackBuffer(byte[] fixedBuffer, ref int length)
	{
		if (fixedBuffer.Length != 4096)
		{
			throw new ArgumentException($"feedback buffer must be exactly {4096} bytes", "fixedBuffer");
		}
		if (length > 0)
		{
			return Convert.ToBase64String(fixedBuffer);
		}
		return "";
	}

	private string BuildDocument(int gamesPlayed, byte[]? feedback)
	{
		string feedbackB = "";
		int length = 0;
		if (feedback != null && feedback.Length != 0)
		{
			byte[] array = new byte[4096];
			length = Math.Min(feedback.Length, 4096);
			Array.Copy(feedback, array, length);
			feedbackB = EncodeFeedbackBuffer(array, ref length);
		}
		return JsonSerializer.Serialize(new TelemetryDto
		{
			RequestId = Guid.NewGuid().ToString(),
			FeedbackB64 = feedbackB,
			FeedbackLength = length,
			SessionId = GetSessionID().ToString(),
			GamesPlayed = gamesPlayed,
			ClientVersion = _clientVersion
		});
	}
}
