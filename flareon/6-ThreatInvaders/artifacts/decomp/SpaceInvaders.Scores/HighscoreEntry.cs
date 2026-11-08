using System;
using System.Text.Json.Serialization;

namespace SpaceInvaders.Scores;

public sealed class HighscoreEntry
{
	public const int CommentCapacity = 256;

	public Guid Id { get; set; } = Guid.NewGuid();

	public string PlayerName { get; set; } = "AAA";

	public byte[] Comment { get; set; } = Array.Empty<byte>();

	public int Score { get; set; }

	public int WaveReached { get; set; } = 1;

	public int DurationSeconds { get; set; }

	public DateTimeOffset AchievedAtUtc { get; set; } = DateTimeOffset.UtcNow;

	public SyncState Sync { get; set; }

	[JsonIgnore]
	public bool IsPending => Sync == SyncState.Pending;

	public HighscoreEntry Clone()
	{
		return new HighscoreEntry
		{
			Id = Id,
			PlayerName = PlayerName,
			Comment = (byte[])Comment.Clone(),
			Score = Score,
			WaveReached = WaveReached,
			DurationSeconds = DurationSeconds,
			AchievedAtUtc = AchievedAtUtc,
			Sync = Sync
		};
	}

	public static byte[] SanitiseComment(byte[]? comment)
	{
		if (comment == null || comment.Length == 0)
		{
			return Array.Empty<byte>();
		}
		if (comment.Length <= 256)
		{
			return (byte[])comment.Clone();
		}
		return comment[..256];
	}

	public static string Sanitise(string? name)
	{
		if (string.IsNullOrWhiteSpace(name))
		{
			return "AAA";
		}
		Span<char> span = stackalloc char[12];
		int num = 0;
		string text = name.Trim().ToUpperInvariant();
		foreach (char c in text)
		{
			if (num == 12)
			{
				break;
			}
			if ((c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9') || c == ' ' || c == '.' || c == '_' || c == '-')
			{
				span[num++] = c;
			}
		}
		if (num == 0)
		{
			return "AAA";
		}
		string text2 = new string(span.Slice(0, num)).Trim();
		if (text2.Length != 0)
		{
			return text2;
		}
		return "AAA";
	}
}
