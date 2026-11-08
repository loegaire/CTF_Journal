using System;
using System.Collections.Generic;

namespace SpaceInvaders.Core;

public sealed class GameWorld
{
	private readonly Random _rng;

	private readonly Queue<GameEvent> _events = new Queue<GameEvent>();

	private readonly List<Bomb> _bombs = new List<Bomb>();

	private readonly List<Explosion> _explosions = new List<Explosion>();

	private int _direction = 1;

	private float _stepTimer;

	private float _bombTimer;

	private float _ufoTimer = 25f;

	private float _ufoSoundTimer;

	private int _ufoDirection = 1;

	private float _phaseTimer;

	private bool _extraLifeAwarded;

	private float _elapsed;

	public Invader[] Invaders { get; }

	public Bunker[] Bunkers { get; }

	public IReadOnlyList<Bomb> Bombs => _bombs;

	public IReadOnlyList<Explosion> Explosions => _explosions;

	public Bullet? PlayerBullet { get; private set; }

	public Ufo? Ufo { get; private set; }

	public int Score { get; private set; }

	public int Lives { get; private set; }

	public int Wave { get; private set; }

	public int ShotsFired { get; private set; }

	public float PlayerX { get; private set; }

	public float GridX { get; private set; }

	public float GridY { get; private set; }

	public WorldPhase Phase { get; private set; }

	public int AnimFrame { get; private set; }

	public bool PlayerVisible
	{
		get
		{
			if (Phase != WorldPhase.PlayerDying)
			{
				return Phase != WorldPhase.GameOver;
			}
			return false;
		}
	}

	public int ElapsedSeconds => (int)_elapsed;

	public int AliveCount
	{
		get
		{
			int num = 0;
			Invader[] invaders = Invaders;
			for (int i = 0; i < invaders.Length; i++)
			{
				if (invaders[i].Alive)
				{
					num++;
				}
			}
			return num;
		}
	}

	public RectF PlayerBounds => new RectF(PlayerX, 216f, 13f, 8f);

	public bool IsFinished
	{
		get
		{
			if (Phase == WorldPhase.GameOver)
			{
				return _phaseTimer <= 0f;
			}
			return false;
		}
	}

	public GameWorld(int seed = 0)
	{
		_rng = ((seed == 0) ? new Random() : new Random(seed));
		Invaders = new Invader[55];
		Bunkers = new Bunker[4];
		for (int i = 0; i < 4; i++)
		{
			Bunkers[i] = new Bunker(20 + i * 54, 192);
		}
		Reset();
	}

	public RectF CellRect(Invader invader)
	{
		return new RectF(GridX + (float)(invader.Col * 16), GridY + (float)(invader.Row * 16), 12f, 8f);
	}

	public RectF HitRect(Invader invader)
	{
		int num = GameConfig.WidthFor(invader.Type);
		float num2 = (float)(12 - num) * 0.5f;
		return new RectF(GridX + (float)(invader.Col * 16) + num2, GridY + (float)(invader.Row * 16), num, 8f);
	}

	public bool TryDequeueEvent(out GameEvent evt)
	{
		if (_events.Count > 0)
		{
			evt = _events.Dequeue();
			return true;
		}
		evt = GameEvent.PlayerShoot;
		return false;
	}

	public void Reset()
	{
		Score = 0;
		Lives = 3;
		Wave = 1;
		ShotsFired = 0;
		_extraLifeAwarded = false;
		_elapsed = 0f;
		_events.Clear();
		Bunker[] bunkers = Bunkers;
		for (int i = 0; i < bunkers.Length; i++)
		{
			bunkers[i].Reset();
		}
		StartWave();
	}

	private void StartWave()
	{
		for (int i = 0; i < 5; i++)
		{
			InvaderType invaderType;
			switch (i)
			{
			case 0:
				invaderType = InvaderType.Squid;
				break;
			case 1:
			case 2:
				invaderType = InvaderType.Crab;
				break;
			default:
				invaderType = InvaderType.Octopus;
				break;
			}
			InvaderType type = invaderType;
			for (int j = 0; j < 11; j++)
			{
				Invaders[i * 11 + j] = new Invader(type, j, i);
			}
		}
		GridX = 24f;
		GridY = 48 + Math.Min((Wave - 1) * 8, 40);
		_direction = 1;
		_stepTimer = 0f;
		_bombTimer = 1.5f;
		_ufoTimer = 25f;
		PlayerBullet = null;
		Ufo = null;
		_bombs.Clear();
		_explosions.Clear();
		PlayerX = 105.5f;
		Phase = WorldPhase.Playing;
		_phaseTimer = 0f;
	}

	public void Update(float dt, InputState input)
	{
		if (dt > 0.1f)
		{
			dt = 0.1f;
		}
		UpdateExplosions(dt);
		switch (Phase)
		{
		case WorldPhase.Playing:
			_elapsed += dt;
			UpdatePlaying(dt, input);
			break;
		case WorldPhase.PlayerDying:
			_phaseTimer -= dt;
			if (_phaseTimer <= 0f)
			{
				if (Lives <= 0)
				{
					EnterGameOver();
					break;
				}
				PlayerX = 105.5f;
				Phase = WorldPhase.Playing;
			}
			break;
		case WorldPhase.WaveCleared:
			_phaseTimer -= dt;
			if (_phaseTimer <= 0f)
			{
				Wave++;
				Bunker[] bunkers = Bunkers;
				for (int i = 0; i < bunkers.Length; i++)
				{
					bunkers[i].Reset();
				}
				StartWave();
			}
			break;
		case WorldPhase.GameOver:
			_phaseTimer -= dt;
			break;
		}
	}

	private void UpdatePlaying(float dt, InputState input)
	{
		MovePlayer(dt, input);
		MoveFleet(dt);
		UpdateBullet(dt);
		UpdateBombs(dt);
		UpdateUfo(dt);
		if (AliveCount == 0 && Phase == WorldPhase.Playing)
		{
			_events.Enqueue(GameEvent.WaveCleared);
			Phase = WorldPhase.WaveCleared;
			_phaseTimer = 1.6f;
		}
	}

	private void MovePlayer(float dt, InputState input)
	{
		if (input.Left ^ input.Right)
		{
			PlayerX += (input.Left ? (-1f) : 1f) * 78f * dt;
			PlayerX = Math.Clamp(PlayerX, 8f, 203f);
		}
		if (input.Fire && PlayerBullet == null)
		{
			PlayerBullet = new Bullet(MathF.Round(PlayerX + 6.5f), 212f);
			ShotsFired++;
			_events.Enqueue(GameEvent.PlayerShoot);
		}
	}

	private float CurrentStepInterval()
	{
		int aliveCount = AliveCount;
		if (aliveCount <= 1)
		{
			return 0.045f;
		}
		float num = (float)(aliveCount - 1) / 54f;
		float num2 = 0.045f + 0.505f * num;
		float num3 = MathF.Max(0.5f, 1f - 0.07f * (float)(Wave - 1));
		return num2 * num3;
	}

	private void MoveFleet(float dt)
	{
		_stepTimer += dt;
		float num = CurrentStepInterval();
		if (_stepTimer < num)
		{
			return;
		}
		_stepTimer -= num;
		AnimFrame ^= 1;
		_events.Enqueue(GameEvent.FleetStep);
		if (TryFleetExtent(out var minCol, out var maxCol))
		{
			float num2 = GridX + (float)(_direction * 2);
			float num3 = num2 + (float)(minCol * 16);
			float num4 = num2 + (float)(maxCol * 16) + 12f;
			if (num3 < 8f || num4 > 216f)
			{
				_direction = -_direction;
				GridY += 8f;
				CrushBunkers();
			}
			else
			{
				GridX = num2;
			}
			CheckInvasion();
		}
	}

	private bool TryFleetExtent(out int minCol, out int maxCol)
	{
		minCol = int.MaxValue;
		maxCol = int.MinValue;
		Invader[] invaders = Invaders;
		foreach (Invader invader in invaders)
		{
			if (invader.Alive)
			{
				if (invader.Col < minCol)
				{
					minCol = invader.Col;
				}
				if (invader.Col > maxCol)
				{
					maxCol = invader.Col;
				}
			}
		}
		return minCol <= maxCol;
	}

	private void CrushBunkers()
	{
		Invader[] invaders = Invaders;
		foreach (Invader invader in invaders)
		{
			if (!invader.Alive)
			{
				continue;
			}
			RectF rect = CellRect(invader);
			if (!(rect.Bottom < 192f))
			{
				Bunker[] bunkers = Bunkers;
				for (int j = 0; j < bunkers.Length; j++)
				{
					bunkers[j].EraseRect(in rect);
				}
			}
		}
	}

	private void CheckInvasion()
	{
		Invader[] invaders = Invaders;
		foreach (Invader invader in invaders)
		{
			if (invader.Alive && CellRect(invader).Bottom >= 216f)
			{
				Lives = 0;
				EnterGameOver();
				break;
			}
		}
	}

	private void UpdateBullet(float dt)
	{
		if (PlayerBullet == null)
		{
			return;
		}
		Bullet playerBullet = PlayerBullet;
		playerBullet.Y -= 300f * dt;
		if (playerBullet.Y <= 20f)
		{
			PlayerBullet = null;
			return;
		}
		RectF rect = playerBullet.Bounds;
		if (Ufo != null && rect.Intersects(Ufo.Bounds))
		{
			int num = GameConfig.UfoScoreTable[ShotsFired % GameConfig.UfoScoreTable.Length];
			AddScore(num);
			_explosions.Add(new Explosion(ExplosionKind.Ufo, Ufo.X, 24f, 0.3f));
			_explosions.Add(new Explosion(ExplosionKind.UfoScore, Ufo.X, 24f, 1f, num));
			Ufo = null;
			PlayerBullet = null;
			_events.Enqueue(GameEvent.UfoKilled);
			return;
		}
		Invader[] invaders = Invaders;
		foreach (Invader invader in invaders)
		{
			if (invader.Alive && rect.Intersects(HitRect(invader)))
			{
				invader.Alive = false;
				AddScore(GameConfig.ScoreFor(invader.Type));
				RectF rectF = CellRect(invader);
				_explosions.Add(new Explosion(ExplosionKind.Invader, rectF.X, rectF.Y, 0.25f));
				PlayerBullet = null;
				_events.Enqueue(GameEvent.InvaderKilled);
				return;
			}
		}
		for (int j = 0; j < _bombs.Count; j++)
		{
			if (rect.Intersects(_bombs[j].Bounds))
			{
				_explosions.Add(new Explosion(ExplosionKind.Invader, _bombs[j].X - 4f, _bombs[j].Y, 0.18f));
				_bombs.RemoveAt(j);
				PlayerBullet = null;
				return;
			}
		}
		Bunker[] bunkers = Bunkers;
		foreach (Bunker bunker in bunkers)
		{
			if (bunker.TryHit(in rect, scanFromTop: false, out var worldX, out var worldY))
			{
				bunker.Blast(worldX, worldY, 3, _rng);
				PlayerBullet = null;
				break;
			}
		}
	}

	private void UpdateBombs(float dt)
	{
		_bombTimer -= dt;
		if (_bombTimer <= 0f && _bombs.Count < 3 && Phase == WorldPhase.Playing)
		{
			TryDropBomb();
			_bombTimer = NextBombDelay();
		}
		for (int num = _bombs.Count - 1; num >= 0; num--)
		{
			Bomb bomb = _bombs[num];
			bomb.Y += 95f * dt;
			bomb.Age += dt;
			RectF rect = bomb.Bounds;
			if (bomb.Y >= 232f)
			{
				_explosions.Add(new Explosion(ExplosionKind.Invader, bomb.X - 4f, 228f, 0.2f));
				_bombs.RemoveAt(num);
			}
			else if (PlayerVisible && rect.Intersects(PlayerBounds))
			{
				_bombs.RemoveAt(num);
				KillPlayer();
			}
			else
			{
				bool flag = false;
				Bunker[] bunkers = Bunkers;
				foreach (Bunker bunker in bunkers)
				{
					if (bunker.TryHit(in rect, scanFromTop: true, out var worldX, out var worldY))
					{
						bunker.Blast(worldX, worldY, 4, _rng);
						flag = true;
						break;
					}
				}
				if (flag)
				{
					_bombs.RemoveAt(num);
				}
			}
		}
	}

	private float NextBombDelay()
	{
		float num = (float)AliveCount / 55f;
		float num2 = 0.3f + 1.3f * num;
		float num3 = MathF.Max(0.45f, 1f - 0.1f * (float)(Wave - 1));
		return num2 * num3 * (0.7f + (float)_rng.NextDouble() * 0.6f);
	}

	private void TryDropBomb()
	{
		Span<int> span = stackalloc int[11];
		int num = 0;
		for (int i = 0; i < 11; i++)
		{
			for (int num2 = 4; num2 >= 0; num2--)
			{
				if (Invaders[num2 * 11 + i].Alive)
				{
					span[num++] = num2 * 11 + i;
					break;
				}
			}
		}
		if (num != 0)
		{
			Invader invader = Invaders[span[_rng.Next(num)]];
			RectF rectF = CellRect(invader);
			_bombs.Add(new Bomb(MathF.Round(rectF.CenterX - 1.5f), rectF.Bottom, (BombKind)_rng.Next(3)));
		}
	}

	private void UpdateUfo(float dt)
	{
		if (Ufo == null)
		{
			_ufoTimer -= dt;
			if (_ufoTimer <= 0f && AliveCount >= 8)
			{
				_ufoDirection = -_ufoDirection;
				Ufo = new Ufo((_ufoDirection > 0) ? (-16) : 224, _ufoDirection);
				_ufoTimer = 25f;
				_ufoSoundTimer = 0f;
			}
			return;
		}
		Ufo.X += (float)Ufo.Direction * 40f * dt;
		_ufoSoundTimer -= dt;
		if (_ufoSoundTimer <= 0f)
		{
			_events.Enqueue(GameEvent.UfoActive);
			_ufoSoundTimer = 0.35f;
		}
		if (Ufo.X > 224f || Ufo.X < -16f)
		{
			Ufo = null;
		}
	}

	private void UpdateExplosions(float dt)
	{
		for (int num = _explosions.Count - 1; num >= 0; num--)
		{
			_explosions[num].Age += dt;
			if (_explosions[num].Age >= _explosions[num].Ttl)
			{
				_explosions.RemoveAt(num);
			}
		}
	}

	private void KillPlayer()
	{
		Lives--;
		PlayerBullet = null;
		_bombs.Clear();
		_explosions.Add(new Explosion(ExplosionKind.Player, PlayerX, 216f, 1.6f));
		Phase = WorldPhase.PlayerDying;
		_phaseTimer = 1.6f;
		_events.Enqueue(GameEvent.PlayerKilled);
	}

	private void EnterGameOver()
	{
		Phase = WorldPhase.GameOver;
		_phaseTimer = 2.4f;
		_events.Enqueue(GameEvent.GameOver);
	}

	private void AddScore(int amount)
	{
		Score += amount;
		if (!_extraLifeAwarded && Score >= 1500)
		{
			_extraLifeAwarded = true;
			Lives++;
			_events.Enqueue(GameEvent.ExtraLife);
		}
	}
}
