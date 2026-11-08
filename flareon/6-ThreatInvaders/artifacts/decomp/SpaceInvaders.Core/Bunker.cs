using System;

namespace SpaceInvaders.Core;

public sealed class Bunker
{
	public const int Width = 22;

	public const int Height = 16;

	private static readonly string[] Shape = new string[16]
	{
		".....############.....", "....##############....", "...################...", "..##################..", ".####################.", "######################", "######################", "######################", "######################", "######################",
		"######################", "#######........#######", "######..........######", "#####............#####", "#####............#####", "#####............#####"
	};

	private readonly bool[,] _solid = new bool[22, 16];

	public int X { get; }

	public int Y { get; }

	public int Revision { get; private set; }

	public RectF Bounds => new RectF(X, Y, 22f, 16f);

	public Bunker(int x, int y)
	{
		X = x;
		Y = y;
		Reset();
	}

	public void Reset()
	{
		for (int i = 0; i < 16; i++)
		{
			for (int j = 0; j < 22; j++)
			{
				_solid[j, i] = Shape[i][j] == '#';
			}
		}
		Revision++;
	}

	public bool IsSolid(int localX, int localY)
	{
		if (localX >= 0 && localY >= 0 && localX < 22 && localY < 16)
		{
			return _solid[localX, localY];
		}
		return false;
	}

	public bool TryHit(in RectF rect, bool scanFromTop, out int worldX, out int worldY)
	{
		worldX = 0;
		worldY = 0;
		if (!rect.Intersects(Bounds))
		{
			return false;
		}
		int num = Math.Max(0, (int)MathF.Floor(rect.X) - X);
		int num2 = Math.Min(21, (int)MathF.Ceiling(rect.Right) - X - 1);
		int num3 = Math.Max(0, (int)MathF.Floor(rect.Y) - Y);
		int num4 = Math.Min(15, (int)MathF.Ceiling(rect.Bottom) - Y - 1);
		if (scanFromTop)
		{
			for (int i = num3; i <= num4; i++)
			{
				for (int j = num; j <= num2; j++)
				{
					if (_solid[j, i])
					{
						worldX = X + j;
						worldY = Y + i;
						return true;
					}
				}
			}
		}
		else
		{
			for (int num5 = num4; num5 >= num3; num5--)
			{
				for (int k = num; k <= num2; k++)
				{
					if (_solid[k, num5])
					{
						worldX = X + k;
						worldY = Y + num5;
						return true;
					}
				}
			}
		}
		return false;
	}

	public void Blast(int worldX, int worldY, int radius, Random rng)
	{
		int num = worldX - X;
		int num2 = worldY - Y;
		int num3 = radius * radius;
		bool flag = false;
		for (int i = -radius; i <= radius; i++)
		{
			for (int j = -radius; j <= radius; j++)
			{
				int num4 = j * j + i * i;
				if (num4 <= num3 && (num4 <= num3 / 2 || rng.Next(100) >= 40))
				{
					int num5 = num + j;
					int num6 = num2 + i;
					if (num5 >= 0 && num6 >= 0 && num5 < 22 && num6 < 16 && _solid[num5, num6])
					{
						_solid[num5, num6] = false;
						flag = true;
					}
				}
			}
		}
		if (flag)
		{
			Revision++;
		}
	}

	public bool EraseRect(in RectF rect)
	{
		if (!rect.Intersects(Bounds))
		{
			return false;
		}
		int num = Math.Max(0, (int)MathF.Floor(rect.X) - X);
		int num2 = Math.Min(21, (int)MathF.Ceiling(rect.Right) - X - 1);
		int num3 = Math.Max(0, (int)MathF.Floor(rect.Y) - Y);
		int num4 = Math.Min(15, (int)MathF.Ceiling(rect.Bottom) - Y - 1);
		bool flag = false;
		for (int i = num3; i <= num4; i++)
		{
			for (int j = num; j <= num2; j++)
			{
				if (_solid[j, i])
				{
					_solid[j, i] = false;
					flag = true;
				}
			}
		}
		if (flag)
		{
			Revision++;
		}
		return flag;
	}
}
