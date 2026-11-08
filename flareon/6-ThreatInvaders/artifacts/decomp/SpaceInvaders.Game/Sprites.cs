using System;
using System.Drawing;
using System.Drawing.Imaging;
using System.Runtime.InteropServices;

namespace SpaceInvaders.Game;

public static class Sprites
{
	public static readonly string[] SquidA = new string[8] { "...##...", "..####..", ".######.", "##.##.##", "########", "..#..#..", ".#.##.#.", "#.#..#.#" };

	public static readonly string[] SquidB = new string[8] { "...##...", "..####..", ".######.", "##.##.##", "########", ".#.##.#.", "#......#", ".#....#." };

	public static readonly string[] CrabA = new string[8] { "..#.....#..", "...#...#...", "..#######..", ".##.###.##.", "###########", "#.#######.#", "#.#.....#.#", "...##.##..." };

	public static readonly string[] CrabB = new string[8] { "..#.....#..", "#..#...#..#", "#.#######.#", "###.###.###", "###########", ".#########.", "..#.....#..", ".#.......#." };

	public static readonly string[] OctopusA = new string[8] { "....####....", ".##########.", "############", "###..##..###", "############", "...##..##...", "..##.##.##..", "##........##" };

	public static readonly string[] OctopusB = new string[8] { "....####....", ".##########.", "############", "###..##..###", "############", "..###..###..", ".##......##.", "..##....##.." };

	public static readonly string[] Player = new string[8] { "......#......", ".....###.....", ".....###.....", ".###########.", "#############", "#############", "#############", "#############" };

	public static readonly string[] PlayerExplodeA = new string[8] { "..#...#..#...", "#...#...#..#.", "..#..#.#...#.", ".#.#####.#...", "#.#######..#.", ".##########..", "#.#########.#", ".###########." };

	public static readonly string[] PlayerExplodeB = new string[8] { "#...#...#....", "..#...#...#.#", "#..#.#..#....", "..#####..#..#", ".#######.#...", "#.########..#", ".##########.#", "#.#########.." };

	public static readonly string[] Ufo = new string[7] { ".....######.....", "...##########...", "..############..", ".##.##.##.##.##.", "################", "..###..##..###..", "...#........#..." };

	public static readonly string[] Burst = new string[8] { ".#..#...#..#.", "..#..#.#..#..", "...#.....#...", "##.........##", "...#.....#...", "..#..#.#..#..", ".#..#...#..#.", "............." };

	public static readonly string[][] BombRolling = new string[4][]
	{
		new string[7] { ".#.", ".#.", "###", ".#.", ".#.", "###", ".#." },
		new string[7] { ".#.", "###", ".#.", ".#.", "###", ".#.", ".#." },
		new string[7] { "###", ".#.", ".#.", "###", ".#.", ".#.", "###" },
		new string[7] { ".#.", ".#.", "###", ".#.", ".#.", "###", ".#." }
	};

	public static readonly string[][] BombPlunger = new string[4][]
	{
		new string[7] { ".#.", ".#.", ".#.", ".#.", ".#.", ".#.", "###" },
		new string[7] { ".#.", ".#.", ".#.", ".#.", ".#.", "###", ".#." },
		new string[7] { "#.#", ".#.", ".#.", ".#.", ".#.", ".#.", "#.#" },
		new string[7] { ".#.", "###", ".#.", ".#.", ".#.", ".#.", ".#." }
	};

	public static readonly string[][] BombSquiggly = new string[4][]
	{
		new string[7] { ".#.", "#..", ".#.", "..#", ".#.", "#..", ".#." },
		new string[7] { "..#", ".#.", "#..", ".#.", "..#", ".#.", "#.." },
		new string[7] { "#..", ".#.", "..#", ".#.", "#..", ".#.", "..#" },
		new string[7] { ".#.", "..#", ".#.", "#..", ".#.", "..#", ".#." }
	};

	public static Bitmap Build(string[] rows, Color color)
	{
		int num = rows.Length;
		int num2 = 0;
		foreach (string text in rows)
		{
			if (text.Length > num2)
			{
				num2 = text.Length;
			}
		}
		Bitmap bitmap = new Bitmap(num2, num, PixelFormat.Format32bppArgb);
		BitmapData bitmapData = bitmap.LockBits(new Rectangle(0, 0, num2, num), ImageLockMode.WriteOnly, PixelFormat.Format32bppArgb);
		try
		{
			int num3 = color.ToArgb();
			int[] array = new int[num2];
			for (int j = 0; j < num; j++)
			{
				string text2 = rows[j];
				for (int k = 0; k < num2; k++)
				{
					array[k] = ((k < text2.Length && text2[k] == '#') ? num3 : 0);
				}
				nint destination = IntPtr.Add(bitmapData.Scan0, j * bitmapData.Stride);
				Marshal.Copy(array, 0, destination, num2);
			}
		}
		finally
		{
			bitmap.UnlockBits(bitmapData);
		}
		return bitmap;
	}
}
