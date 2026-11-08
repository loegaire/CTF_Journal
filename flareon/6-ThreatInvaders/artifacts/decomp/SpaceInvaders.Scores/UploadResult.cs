namespace SpaceInvaders.Scores;

public readonly struct UploadResult(UploadOutcome outcome, string? message = null, int rank = 0)
{
	public UploadOutcome Outcome { get; } = outcome;

	public string? Message { get; } = message;

	public int Rank { get; } = rank;
}
