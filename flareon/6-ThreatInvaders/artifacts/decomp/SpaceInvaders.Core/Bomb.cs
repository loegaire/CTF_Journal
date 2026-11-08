namespace SpaceInvaders.Core;

public sealed class Bomb
{
	public float X;

	public float Y;

	public BombKind Kind;

	public float Age;

	public int Frame => (int)(Age * 12f) & 3;

	public RectF Bounds => new RectF(X, Y, 3f, 7f);

	public Bomb(float x, float y, BombKind kind)
	{
		X = x;
		Y = y;
		Kind = kind;
	}
}
