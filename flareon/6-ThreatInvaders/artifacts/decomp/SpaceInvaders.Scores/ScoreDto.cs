using System;
using System.Globalization;
using System.Text.Json.Serialization;

namespace SpaceInvaders.Scores;

internal sealed class ScoreDto
{
	[JsonPropertyName("id")]
	public string Id { get; set; } = "";

	[JsonPropertyName("player_name")]
	public string PlayerName { get; set; } = "";

	[JsonPropertyName("score")]
	public int Score { get; set; }

	[JsonPropertyName("wave_reached")]
	public int WaveReached { get; set; } = 1;

	[JsonPropertyName("duration_seconds")]
	public int DurationSeconds { get; set; }

	[JsonPropertyName("achieved_at")]
	public string AchievedAt { get; set; } = "";

	[JsonPropertyName("comment_b64")]
	public string CommentB64 { get; set; } = "";

	private static string EncodeComment(byte[] comment)
	{
		if (comment.Length != 0)
		{
			return Convert.ToBase64String(HighscoreEntry.SanitiseComment(comment));
		}
		return "";
	}

	private static byte[] DecodeComment(string? b64)
	{
		if (string.IsNullOrEmpty(b64))
		{
			return Array.Empty<byte>();
		}
		try
		{
			return HighscoreEntry.SanitiseComment(Convert.FromBase64String(b64));
		}
		catch (FormatException)
		{
			return Array.Empty<byte>();
		}
	}

	public static ScoreDto From(HighscoreEntry entry)
	{
		return new ScoreDto
		{
			Id = entry.Id.ToString(),
			PlayerName = entry.PlayerName,
			Score = entry.Score,
			WaveReached = Math.Max(1, entry.WaveReached),
			DurationSeconds = Math.Max(0, entry.DurationSeconds),
			AchievedAt = entry.AchievedAtUtc.ToUniversalTime().ToString("yyyy-MM-dd'T'HH:mm:ss'Z'"),
			CommentB64 = EncodeComment(entry.Comment)
		};
	}

	public HighscoreEntry ToEntry()
	{
		Guid result;
		DateTimeOffset result2;
		return new HighscoreEntry
		{
			Id = (Guid.TryParse(Id, out result) ? result : Guid.NewGuid()),
			PlayerName = HighscoreEntry.Sanitise(PlayerName),
			Score = Score,
			WaveReached = WaveReached,
			DurationSeconds = DurationSeconds,
			AchievedAtUtc = (DateTimeOffset.TryParse(AchievedAt, CultureInfo.InvariantCulture, DateTimeStyles.AdjustToUniversal | DateTimeStyles.AssumeUniversal, out result2) ? result2 : DateTimeOffset.UtcNow),
			Comment = DecodeComment(CommentB64),
			Sync = SyncState.Synced
		};
	}
}
