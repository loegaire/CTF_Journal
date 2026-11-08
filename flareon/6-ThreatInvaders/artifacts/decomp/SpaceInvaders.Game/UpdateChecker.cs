using System;
using System.IO;
using System.Reflection;
using System.Text;
using System.Text.Json;
using System.Threading;
using System.Threading.Tasks;
using SpaceInvaders.Scores;

namespace SpaceInvaders.Game;

internal sealed class UpdateChecker
{
	private readonly IRemoteScoreClient _remote;

	private readonly Version _current;

	private volatile UpdateAvailability? _pending;

	private volatile bool _alreadyPrompted;

	public string CurrentVersion => _current.ToString();

	public UpdateAvailability? Pending => _pending;

	public UpdateChecker(IRemoteScoreClient remote)
	{
		_remote = remote;
		_current = Assembly.GetEntryAssembly()?.GetName().Version ?? new Version(0, 0, 0);
	}

	public UpdateAvailability? Consume()
	{
		UpdateAvailability? pending = _pending;
		_pending = null;
		return pending;
	}

	public async Task CheckAsync(CancellationToken ct = default(CancellationToken))
	{
		byte[] array = await _remote.DownloadVersionAsync(ct).ConfigureAwait(continueOnCapturedContext: false);
		if (array != null && array.Length != 0 && TryParse(array, out string latest, out string message) && IsNewer(latest))
		{
			_pending = new UpdateAvailability(latest, message, updaterPresent: true);
		}
	}

	public void MarkPrompted()
	{
		_alreadyPrompted = true;
	}

	private static bool TryParse(byte[] body, out string latest, out string message)
	{
		latest = "";
		message = "";
		if (body.Length > 4096)
		{
			return false;
		}
		try
		{
			using JsonDocument jsonDocument = JsonDocument.Parse(body);
			JsonElement rootElement = jsonDocument.RootElement;
			if (rootElement.ValueKind != JsonValueKind.Object)
			{
				return false;
			}
			if (!rootElement.TryGetProperty("latest", out var value) || value.ValueKind != JsonValueKind.String)
			{
				return false;
			}
			string text = value.GetString() ?? "";
			if (!LooksLikeVersion(text))
			{
				return false;
			}
			latest = text;
			if (rootElement.TryGetProperty("message", out var value2) && value2.ValueKind == JsonValueKind.String)
			{
				message = SanitiseMessage(value2.GetString());
			}
			return true;
		}
		catch (JsonException)
		{
			return false;
		}
	}

	private static bool LooksLikeVersion(string value)
	{
		if (string.IsNullOrEmpty(value) || value.Length > 32)
		{
			return false;
		}
		Version result;
		return Version.TryParse(value, out result);
	}

	private static string SanitiseMessage(string? raw)
	{
		if (string.IsNullOrEmpty(raw))
		{
			return "";
		}
		StringBuilder stringBuilder = new StringBuilder(Math.Min(raw.Length, 200));
		foreach (char c in raw)
		{
			if (stringBuilder.Length == 200)
			{
				break;
			}
			if (c >= ' ' && c != '\u007f')
			{
				stringBuilder.Append(c);
			}
		}
		return stringBuilder.ToString().Trim();
	}

	private bool IsNewer(string latest)
	{
		if (Version.TryParse(latest, out Version result))
		{
			return result > _current;
		}
		return false;
	}

	private static bool UpdaterOnDisk()
	{
		return File.Exists(Path.Combine(AppContext.BaseDirectory, "updater.exe"));
	}
}
