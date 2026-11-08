namespace SpaceInvaders.Game;

internal sealed class UpdateAvailability
{
	public string LatestVersion { get; }

	public string Message { get; }

	public bool UpdaterPresent { get; }

	public UpdateAvailability(string latestVersion, string message, bool updaterPresent)
	{
		LatestVersion = latestVersion;
		Message = message;
		UpdaterPresent = updaterPresent;
	}
}
