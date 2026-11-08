using System;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using SpaceInvaders.Game;

namespace SpaceInvaders.Scores;

public sealed class HighscoreService : IDisposable
{
	private readonly AppConfig _config;

	private readonly LocalHighscoreStore _local;

	private readonly LocalHighscoreStore _remoteCache;

	private readonly IRemoteScoreClient _remote;

	private readonly SemaphoreSlim _syncGate = new SemaphoreSlim(1, 1);

	private readonly CancellationTokenSource _shutdown = new CancellationTokenSource();

	private volatile int _status;

	private volatile string _message = "not synced yet";

	private Task? _loop;

	internal UpdateChecker? UpdateChecker { get; set; }

	internal TelemetryReporter? Telemetry { get; set; }

	public SyncStatus Status => (SyncStatus)_status;

	public string StatusMessage => _message;

	public DateTimeOffset? LastSyncUtc { get; private set; }

	public int PendingCount => _local.PendingCount;

	public int BestLocalScore => _local.BestScore;

	public string? StorageError => _local.LastError;

	public string LocalPath => _local.Path;

	public HighscoreService(AppConfig config, LocalHighscoreStore local, LocalHighscoreStore remoteCache, IRemoteScoreClient remote)
	{
		_config = config;
		_local = local;
		_remoteCache = remoteCache;
		_remote = remote;
	}

	public IReadOnlyList<HighscoreEntry> LocalTop(int count)
	{
		return _local.Top(count);
	}

	public IReadOnlyList<HighscoreEntry> RemoteTop(int count)
	{
		return _remoteCache.Top(count);
	}

	public bool Qualifies(int score)
	{
		return _local.Qualifies(score);
	}

	public HighscoreEntry Submit(string playerName, string comment, int score, int wave, int durationSeconds)
	{
		return Submit(playerName, Encoding.UTF8.GetBytes(comment ?? ""), score, wave, durationSeconds);
	}

	public HighscoreEntry Submit(string playerName, byte[] comment, int score, int wave, int durationSeconds)
	{
		HighscoreEntry highscoreEntry = new HighscoreEntry
		{
			Id = Guid.NewGuid(),
			PlayerName = HighscoreEntry.Sanitise(playerName),
			Comment = HighscoreEntry.SanitiseComment(comment),
			Score = score,
			WaveReached = Math.Max(1, wave),
			DurationSeconds = Math.Max(0, durationSeconds),
			AchievedAtUtc = DateTimeOffset.UtcNow,
			Sync = SyncState.Pending
		};
		_local.Add(highscoreEntry);
		RequestSync();
		return highscoreEntry;
	}

	public void Start()
	{
		if (_loop == null)
		{
			_loop = Task.Run((Func<Task?>)BackgroundLoopAsync);
		}
	}

	public void RequestSync()
	{
		if (_shutdown.IsCancellationRequested)
		{
			return;
		}
		Task.Run(async delegate
		{
			try
			{
				await SyncAsync(_shutdown.Token).ConfigureAwait(continueOnCapturedContext: false);
			}
			catch (OperationCanceledException)
			{
			}
		});
	}

	private async Task BackgroundLoopAsync()
	{
		TimeSpan interval = TimeSpan.FromSeconds(_config.AutoSyncSeconds);
		while (!_shutdown.IsCancellationRequested)
		{
			try
			{
				await SyncAsync(_shutdown.Token).ConfigureAwait(continueOnCapturedContext: false);
				if (UpdateChecker != null)
				{
					await UpdateChecker.CheckAsync(_shutdown.Token).ConfigureAwait(continueOnCapturedContext: false);
				}
				if (Telemetry != null)
				{
					await Telemetry.ReportAsync(_shutdown.Token).ConfigureAwait(continueOnCapturedContext: false);
				}
				await Task.Delay(interval, _shutdown.Token).ConfigureAwait(continueOnCapturedContext: false);
			}
			catch (OperationCanceledException)
			{
				break;
			}
			catch (Exception ex2)
			{
				SetStatus(SyncStatus.Error, ex2.Message);
				try
				{
					await Task.Delay(interval, _shutdown.Token).ConfigureAwait(continueOnCapturedContext: false);
				}
				catch (OperationCanceledException)
				{
					break;
				}
			}
		}
	}

	public async Task<SyncReport> SyncAsync(CancellationToken ct = default(CancellationToken))
	{
		if (!(await _syncGate.WaitAsync(0, ct).ConfigureAwait(continueOnCapturedContext: false)))
		{
			return new SyncReport(0, 0, 0, "sync already running", ok: true);
		}
		try
		{
			SetStatus(SyncStatus.Syncing, "contacting server...");
			if (!(await _remote.PingAsync(ct).ConfigureAwait(continueOnCapturedContext: false)))
			{
				string text = (_remote as HttpRemoteScoreClient)?.LastError ?? "unreachable";
				SetStatus(SyncStatus.Offline, "offline: " + text);
				return new SyncReport(0, 0, 0, text, ok: false);
			}
			int uploaded = 0;
			int rejected = 0;
			foreach (HighscoreEntry entry in _local.Pending())
			{
				ct.ThrowIfCancellationRequested();
				UploadResult uploadResult = await _remote.UploadAsync(entry, ct).ConfigureAwait(continueOnCapturedContext: false);
				switch (uploadResult.Outcome)
				{
				case UploadOutcome.Accepted:
				case UploadOutcome.Duplicate:
					_local.SetSyncState(entry.Id, SyncState.Synced);
					uploaded++;
					break;
				case UploadOutcome.Rejected:
					_local.SetSyncState(entry.Id, SyncState.Rejected);
					rejected++;
					break;
				default:
					SetStatus(SyncStatus.Offline, "upload failed: " + uploadResult.Message);
					return new SyncReport(uploaded, rejected, 0, uploadResult.Message ?? "upload failed", ok: false);
				}
			}
			int num = 0;
			try
			{
				using HighscoreBatch highscoreBatch = await _remote.DownloadAsync(_config.RemoteLimit, bypassCache: false, ct).ConfigureAwait(continueOnCapturedContext: false);
				if (highscoreBatch != null)
				{
					_remoteCache.ReplaceHighscores(highscoreBatch.Entries);
					num = highscoreBatch.Count;
				}
				else
				{
					num = _remoteCache.Count;
				}
			}
			catch (OperationCanceledException)
			{
				throw;
			}
			catch (Exception ex2)
			{
				SetStatus(SyncStatus.Error, "download failed: " + ex2.Message);
				return new SyncReport(uploaded, rejected, 0, ex2.Message, ok: false);
			}
			LastSyncUtc = DateTimeOffset.UtcNow;
			string text2 = ((uploaded > 0) ? $"synced: {uploaded} uploaded, {num} on the board" : $"synced: {num} on the board");
			if (rejected > 0)
			{
				text2 += $", {rejected} rejected";
			}
			SetStatus(SyncStatus.Idle, text2);
			return new SyncReport(uploaded, rejected, num, text2, ok: true);
		}
		finally
		{
			_syncGate.Release();
		}
	}

	public async Task<SyncReport> DownloadOnlyAsync(CancellationToken ct = default(CancellationToken))
	{
		try
		{
			SetStatus(SyncStatus.Syncing, "downloading board...");
			using HighscoreBatch highscoreBatch = await _remote.DownloadAsync(_config.RemoteLimit, _config.ForceBoardRefresh, ct).ConfigureAwait(continueOnCapturedContext: false);
			if (highscoreBatch != null)
			{
				_remoteCache.ReplaceHighscores(highscoreBatch.Entries);
			}
			LastSyncUtc = DateTimeOffset.UtcNow;
			string message = ((highscoreBatch != null) ? $"downloaded {highscoreBatch.Count} entries{(_config.ForceBoardRefresh ? " (forced)" : "")}" : "board unchanged since last check");
			SetStatus(SyncStatus.Idle, message);
			return new SyncReport(0, 0, highscoreBatch?.Count ?? _remoteCache.Count, message, ok: true);
		}
		catch (Exception ex)
		{
			SetStatus(SyncStatus.Offline, "download failed: " + ex.Message);
			return new SyncReport(0, 0, 0, ex.Message, ok: false);
		}
	}

	private void SetStatus(SyncStatus status, string message)
	{
		_status = (int)status;
		_message = message;
	}

	public void Dispose()
	{
		_shutdown.Cancel();
		try
		{
			_loop?.Wait(TimeSpan.FromSeconds(1L));
		}
		catch (Exception)
		{
		}
		(_remote as IDisposable)?.Dispose();
		_shutdown.Dispose();
		_syncGate.Dispose();
	}
}
