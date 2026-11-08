using System.Threading;
using System.Threading.Tasks;

namespace SpaceInvaders.Scores;

public interface IRemoteScoreClient
{
	Task<bool> PingAsync(CancellationToken ct = default(CancellationToken));

	Task<byte[]?> DownloadVersionAsync(CancellationToken ct = default(CancellationToken));

	Task<bool> UploadTelemetryAsync(string json, CancellationToken ct = default(CancellationToken));

	Task<UploadResult> UploadAsync(HighscoreEntry entry, CancellationToken ct = default(CancellationToken));

	Task<HighscoreBatch?> DownloadAsync(int limit, bool bypassCache = false, CancellationToken ct = default(CancellationToken));
}
