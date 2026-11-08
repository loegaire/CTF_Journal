using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text;

namespace SpaceInvaders.Scores;

public struct HighscoreStruct
{
	[InlineArray(20)]
	public struct NameBuffer
	{
		private byte _first;
	}

	public const int Size64 = 80;

	public const int NameCapacity = 20;

	public const byte Version = 3;

	public Guid Id;

	public long AchievedAtUnixMs;

	public int Score;

	public int WaveReached;

	public int DurationSeconds;

	public int SyncState;

	public short UtcOffsetMinutes;

	public byte FormatVersion;

	public byte Reserved;

	public NameBuffer PlayerName;

	public nint Comment;

	public int CommentLength;

	public int Reserved2;

	internal static HighscoreStruct FromScalarFields(HighscoreEntry entry)
	{
		HighscoreStruct native = new HighscoreStruct
		{
			Id = entry.Id,
			AchievedAtUnixMs = entry.AchievedAtUtc.ToUnixTimeMilliseconds(),
			UtcOffsetMinutes = (short)entry.AchievedAtUtc.Offset.TotalMinutes,
			Score = entry.Score,
			WaveReached = entry.WaveReached,
			DurationSeconds = entry.DurationSeconds,
			SyncState = (int)entry.Sync,
			FormatVersion = 3
		};
		WriteName(ref native, entry.PlayerName);
		return native;
	}

	public readonly HighscoreEntry ToEntry()
	{
		return new HighscoreEntry
		{
			Id = Id,
			PlayerName = ReadName(this),
			Comment = ReadComment(),
			Score = Score,
			WaveReached = Math.Max(1, WaveReached),
			DurationSeconds = Math.Max(0, DurationSeconds),
			AchievedAtUtc = DateTimeOffset.FromUnixTimeMilliseconds(AchievedAtUnixMs).ToOffset(TimeSpan.FromMinutes(UtcOffsetMinutes)),
			Sync = (Enum.IsDefined((SyncState)SyncState) ? ((SyncState)SyncState) : SpaceInvaders.Scores.SyncState.Local)
		};
	}

	public readonly byte[] ReadComment()
	{
		if (Comment == IntPtr.Zero || CommentLength <= 0)
		{
			return Array.Empty<byte>();
		}
		int num = Math.Min(CommentLength, 256);
		byte[] array = new byte[num];
		Marshal.Copy(Comment, array, 0, num);
		return array;
	}

	private static void WriteName(ref HighscoreStruct native, string name)
	{
		Span<byte> span = native.PlayerName;
		ReadOnlySpan<char> chars = HighscoreEntry.Sanitise(name).AsSpan();
		if (chars.Length > 19)
		{
			chars = chars.Slice(0, 19);
		}
		Encoding.UTF8.TryGetBytes(chars, span.Slice(0, 19), out var bytesWritten);
		span[bytesWritten] = 0;
	}

	private static string ReadName(in HighscoreStruct native)
	{
		ReadOnlySpan<byte> span = native.PlayerName;
		int num = span.IndexOf((byte)0);
		if (num < 0)
		{
			num = 20;
		}
		return HighscoreEntry.Sanitise(Encoding.UTF8.GetString(span.Slice(0, num)));
	}

	public static bool LayoutIsValid()
	{
		if (!RuntimeHelpers.IsReferenceOrContainsReferences<HighscoreStruct>())
		{
			return Unsafe.SizeOf<HighscoreStruct>() == ((IntPtr.Size == 8) ? 80 : 72);
		}
		return false;
	}
}
