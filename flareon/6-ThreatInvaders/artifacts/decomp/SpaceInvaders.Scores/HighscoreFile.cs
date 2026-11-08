using System.Collections.Generic;

namespace SpaceInvaders.Scores;

public sealed class HighscoreFile
{
	public const int CurrentSchemaVersion = 2;

	public int SchemaVersion { get; set; } = 2;

	public List<HighscoreEntry> Entries { get; set; } = new List<HighscoreEntry>();
}
