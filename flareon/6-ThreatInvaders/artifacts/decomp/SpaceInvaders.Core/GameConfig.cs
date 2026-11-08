namespace SpaceInvaders.Core;

public static class GameConfig
{
	public const int ScreenWidth = 224;

	public const int ScreenHeight = 256;

	public const int FieldLeft = 8;

	public const int FieldRight = 216;

	public const int PlayerWidth = 13;

	public const int PlayerHeight = 8;

	public const int PlayerY = 216;

	public const float PlayerSpeed = 78f;

	public const float BulletSpeed = 300f;

	public const int BulletWidth = 1;

	public const int BulletHeight = 4;

	public const int BulletCeiling = 20;

	public const float BombSpeed = 95f;

	public const int BombWidth = 3;

	public const int BombHeight = 7;

	public const int MaxBombs = 3;

	public const int InvaderCols = 11;

	public const int InvaderRows = 5;

	public const int InvaderTotal = 55;

	public const int CellWidth = 12;

	public const int CellHeight = 8;

	public const int SpacingX = 16;

	public const int SpacingY = 16;

	public const int GridStartX = 24;

	public const int GridStartY = 48;

	public const int GridWaveDrop = 8;

	public const int GridMaxDrop = 40;

	public const int StepX = 2;

	public const int StepY = 8;

	public const float StepIntervalMax = 0.55f;

	public const float StepIntervalMin = 0.045f;

	public const int BunkerCount = 4;

	public const int BunkerY = 192;

	public const int BunkerFirstX = 20;

	public const int BunkerGap = 54;

	public const int GroundY = 232;

	public const int UfoY = 24;

	public const float UfoSpeed = 40f;

	public const float UfoInterval = 25f;

	public const int UfoWidth = 16;

	public const int UfoHeight = 7;

	public const int UfoMinInvaders = 8;

	public const int StartLives = 3;

	public const int ExtraLifeScore = 1500;

	public const float PlayerDeathTime = 1.6f;

	public const float WaveClearTime = 1.6f;

	public const float GameOverTime = 2.4f;

	public static readonly int[] UfoScoreTable = new int[15]
	{
		100, 50, 50, 100, 150, 100, 100, 50, 300, 100,
		100, 100, 50, 150, 100
	};

	public static int ScoreFor(InvaderType type)
	{
		return type switch
		{
			InvaderType.Squid => 30, 
			InvaderType.Crab => 20, 
			_ => 10, 
		};
	}

	public static int WidthFor(InvaderType type)
	{
		return type switch
		{
			InvaderType.Squid => 8, 
			InvaderType.Crab => 11, 
			_ => 12, 
		};
	}
}
