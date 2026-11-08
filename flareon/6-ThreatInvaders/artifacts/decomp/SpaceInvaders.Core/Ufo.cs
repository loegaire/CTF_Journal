namespace SpaceInvaders.Core;

public sealed class Ufo
{
	public float X;

	public int Direction;

	public RectF Bounds => new RectF(X, 24f, 16f, 7f);

	public Ufo(float x, int direction)
	{
		X = x;
		Direction = direction;
	}
}
