namespace SpaceInvaders.Scores;

public readonly struct SyncReport(int uploaded, int rejected, int downloaded, string message, bool ok)
{
	public int Uploaded { get; } = uploaded;

	public int Rejected { get; } = rejected;

	public int Downloaded { get; } = downloaded;

	public string Message { get; } = message;

	public bool Ok { get; } = ok;
}
