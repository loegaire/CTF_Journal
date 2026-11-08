using System;
using System.Drawing;
using System.Drawing.Drawing2D;
using System.Drawing.Imaging;
using System.Linq;
using System.Runtime.InteropServices;
using SpaceInvaders.Core;

namespace SpaceInvaders.Game;

public sealed class Renderer : IDisposable
{
	private static readonly Color InvaderColor = Color.FromArgb(255, 235, 235, 235);

	private static readonly Color PlayerColor = Color.FromArgb(255, 80, 255, 100);

	private static readonly Color BunkerColor = Color.FromArgb(255, 60, 235, 90);

	private static readonly Color UfoColor = Color.FromArgb(255, 235, 70, 70);

	private static readonly Color BombColor = Color.FromArgb(255, 220, 220, 220);

	private readonly Bitmap _canvas;

	private readonly Bitmap[] _invaderSprites;

	private readonly Bitmap[][] _bombSprites;

	private readonly Bitmap _playerSprite;

	private readonly Bitmap _playerExplodeA;

	private readonly Bitmap _playerExplodeB;

	private readonly Bitmap _ufoSprite;

	private readonly Bitmap _burstSprite;

	private readonly Bitmap?[] _bunkerCache = new Bitmap[4];

	private readonly int[] _bunkerRevision = new int[4];

	private readonly SolidBrush _greenBrush = new SolidBrush(BunkerColor);

	private readonly SolidBrush _whiteBrush = new SolidBrush(BombColor);

	public Bitmap Canvas => _canvas;

	public Bitmap PlayerIcon => _playerSprite;

	public Renderer()
	{
		_canvas = new Bitmap(224, 256, PixelFormat.Format32bppPArgb);
		_invaderSprites = new Bitmap[6]
		{
			Sprites.Build(Sprites.SquidA, InvaderColor),
			Sprites.Build(Sprites.SquidB, InvaderColor),
			Sprites.Build(Sprites.CrabA, InvaderColor),
			Sprites.Build(Sprites.CrabB, InvaderColor),
			Sprites.Build(Sprites.OctopusA, InvaderColor),
			Sprites.Build(Sprites.OctopusB, InvaderColor)
		};
		_bombSprites = new Bitmap[3][]
		{
			Sprites.BombRolling.Select((string[] f) => Sprites.Build(f, BombColor)).ToArray(),
			Sprites.BombPlunger.Select((string[] f) => Sprites.Build(f, BombColor)).ToArray(),
			Sprites.BombSquiggly.Select((string[] f) => Sprites.Build(f, BombColor)).ToArray()
		};
		_playerSprite = Sprites.Build(Sprites.Player, PlayerColor);
		_playerExplodeA = Sprites.Build(Sprites.PlayerExplodeA, PlayerColor);
		_playerExplodeB = Sprites.Build(Sprites.PlayerExplodeB, PlayerColor);
		_ufoSprite = Sprites.Build(Sprites.Ufo, UfoColor);
		_burstSprite = Sprites.Build(Sprites.Burst, InvaderColor);
	}

	public void DrawWorld(GameWorld world, bool drawPlayer = true)
	{
		using Graphics graphics = Graphics.FromImage(_canvas);
		graphics.CompositingMode = CompositingMode.SourceOver;
		graphics.InterpolationMode = InterpolationMode.NearestNeighbor;
		graphics.PixelOffsetMode = PixelOffsetMode.Half;
		graphics.SmoothingMode = SmoothingMode.None;
		graphics.Clear(Color.Black);
		DrawInvaders(graphics, world);
		DrawUfo(graphics, world);
		DrawBunkers(graphics, world);
		DrawPlayer(graphics, world, drawPlayer);
		DrawProjectiles(graphics, world);
		DrawExplosions(graphics, world);
		DrawGround(graphics);
		DrawLives(graphics, world);
	}

	public void DrawEmptyField()
	{
		using Graphics graphics = Graphics.FromImage(_canvas);
		graphics.Clear(Color.Black);
		DrawGround(graphics);
	}

	public void DrawSpecimenRow(int y)
	{
		using Graphics graphics = Graphics.FromImage(_canvas);
		graphics.PixelOffsetMode = PixelOffsetMode.Half;
		Blit(graphics, _invaderSprites[0], 44, y);
		Blit(graphics, _invaderSprites[2], 82, y);
		Blit(graphics, _invaderSprites[4], 122, y);
		Blit(graphics, _ufoSprite, 160, y - 1);
	}

	private void DrawInvaders(Graphics g, GameWorld world)
	{
		Invader[] invaders = world.Invaders;
		foreach (Invader invader in invaders)
		{
			if (invader.Alive)
			{
				Bitmap sprite = _invaderSprites[(int)invader.Type * 2 + world.AnimFrame];
				RectF rectF = world.HitRect(invader);
				Blit(g, sprite, (int)MathF.Round(rectF.X), (int)MathF.Round(rectF.Y));
			}
		}
	}

	private void DrawUfo(Graphics g, GameWorld world)
	{
		if (world.Ufo != null)
		{
			Blit(g, _ufoSprite, (int)MathF.Round(world.Ufo.X), 24);
		}
	}

	private void DrawPlayer(Graphics g, GameWorld world, bool drawPlayer)
	{
		if (drawPlayer && world.PlayerVisible)
		{
			Blit(g, _playerSprite, (int)MathF.Round(world.PlayerX), 216);
		}
	}

	private void DrawProjectiles(Graphics g, GameWorld world)
	{
		Bullet playerBullet = world.PlayerBullet;
		if (playerBullet != null)
		{
			g.FillRectangle(_whiteBrush, (int)MathF.Round(playerBullet.X), (int)MathF.Round(playerBullet.Y), 1, 4);
		}
		foreach (Bomb bomb in world.Bombs)
		{
			Bitmap sprite = _bombSprites[(int)bomb.Kind][bomb.Frame];
			Blit(g, sprite, (int)MathF.Round(bomb.X), (int)MathF.Round(bomb.Y));
		}
	}

	private void DrawExplosions(Graphics g, GameWorld world)
	{
		foreach (Explosion explosion in world.Explosions)
		{
			switch (explosion.Kind)
			{
			case ExplosionKind.Invader:
			case ExplosionKind.Ufo:
				Blit(g, _burstSprite, (int)explosion.X, (int)explosion.Y);
				break;
			case ExplosionKind.Player:
				Blit(g, (explosion.Frame == 0) ? _playerExplodeA : _playerExplodeB, (int)explosion.X, (int)explosion.Y);
				break;
			}
		}
	}

	private void DrawBunkers(Graphics g, GameWorld world)
	{
		for (int i = 0; i < world.Bunkers.Length; i++)
		{
			Bunker bunker = world.Bunkers[i];
			if (_bunkerCache[i] == null || _bunkerRevision[i] != bunker.Revision)
			{
				_bunkerCache[i]?.Dispose();
				_bunkerCache[i] = BuildBunkerBitmap(bunker);
				_bunkerRevision[i] = bunker.Revision;
			}
			Blit(g, _bunkerCache[i], bunker.X, bunker.Y);
		}
	}

	private static Bitmap BuildBunkerBitmap(Bunker bunker)
	{
		Bitmap bitmap = new Bitmap(22, 16, PixelFormat.Format32bppArgb);
		BitmapData bitmapData = bitmap.LockBits(new Rectangle(0, 0, 22, 16), ImageLockMode.WriteOnly, PixelFormat.Format32bppArgb);
		try
		{
			int num = BunkerColor.ToArgb();
			int[] array = new int[22];
			for (int i = 0; i < 16; i++)
			{
				for (int j = 0; j < 22; j++)
				{
					array[j] = (bunker.IsSolid(j, i) ? num : 0);
				}
				Marshal.Copy(array, 0, IntPtr.Add(bitmapData.Scan0, i * bitmapData.Stride), 22);
			}
		}
		finally
		{
			bitmap.UnlockBits(bitmapData);
		}
		return bitmap;
	}

	private void DrawGround(Graphics g)
	{
		g.FillRectangle(_greenBrush, 8, 232, 208, 1);
	}

	private void DrawLives(Graphics g, GameWorld world)
	{
		for (int i = 0; i < Math.Min(world.Lives - 1, 5); i++)
		{
			Blit(g, _playerSprite, 24 + i * 16, 236);
		}
	}

	private static void Blit(Graphics g, Bitmap sprite, int x, int y)
	{
		g.DrawImage(sprite, new Rectangle(x, y, sprite.Width, sprite.Height));
	}

	public void Dispose()
	{
		_canvas.Dispose();
		Bitmap[] invaderSprites = _invaderSprites;
		for (int i = 0; i < invaderSprites.Length; i++)
		{
			invaderSprites[i].Dispose();
		}
		Bitmap[][] bombSprites = _bombSprites;
		for (int i = 0; i < bombSprites.Length; i++)
		{
			invaderSprites = bombSprites[i];
			for (int j = 0; j < invaderSprites.Length; j++)
			{
				invaderSprites[j].Dispose();
			}
		}
		_playerSprite.Dispose();
		_playerExplodeA.Dispose();
		_playerExplodeB.Dispose();
		_ufoSprite.Dispose();
		_burstSprite.Dispose();
		invaderSprites = _bunkerCache;
		for (int i = 0; i < invaderSprites.Length; i++)
		{
			invaderSprites[i]?.Dispose();
		}
		_greenBrush.Dispose();
		_whiteBrush.Dispose();
	}
}
