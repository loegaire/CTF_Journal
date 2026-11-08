using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Threading;

namespace SpaceInvaders.Scores;

public sealed class HighscoreBatch : IDisposable
{
	private nint _arena;

	public HighscoreStruct[] Entries { get; }

	public int Count => Entries.Length;

	private HighscoreBatch(HighscoreStruct[] entries, nint arena)
	{
		Entries = entries;
		_arena = arena;
	}

	public static HighscoreBatch Create(IReadOnlyList<HighscoreEntry> source)
	{
		HighscoreStruct[] array = new HighscoreStruct[source.Count];
		byte[][] array2 = new byte[source.Count][];
		int num = 0;
		for (int i = 0; i < source.Count; i++)
		{
			array2[i] = HighscoreEntry.SanitiseComment(source[i].Comment);
			if (array2[i].Length != 0)
			{
				num += array2[i].Length + 1;
			}
		}
		nint num2 = ((num > 0) ? Marshal.AllocHGlobal(num) : IntPtr.Zero);
		try
		{
			int num3 = 0;
			for (int j = 0; j < source.Count; j++)
			{
				array[j] = HighscoreStruct.FromScalarFields(source[j]);
				byte[] array3 = array2[j];
				if (array3.Length != 0)
				{
					nint num4 = IntPtr.Add(num2, num3);
					Marshal.Copy(array3, 0, num4, array3.Length);
					Marshal.WriteByte(num4, array3.Length, 0);
					array[j].Comment = num4;
					array[j].CommentLength = array3.Length;
					num3 += array3.Length + 1;
				}
			}
		}
		catch
		{
			if (num2 != IntPtr.Zero)
			{
				Marshal.FreeHGlobal(num2);
			}
			throw;
		}
		return new HighscoreBatch(array, num2);
	}

	public void Dispose()
	{
		nint num = Interlocked.Exchange(ref _arena, IntPtr.Zero);
		if (num != IntPtr.Zero)
		{
			Marshal.FreeHGlobal(num);
		}
	}
}
