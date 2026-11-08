namespace SpaceInvaders.Core;

public sealed class Bullet
{
	public float X;

	public float Y;

	public RectF Bounds => new RectF(X, Y, 1f, 4f);

	public Bullet(float x, float y)
	{
		X = x;
		Y = y;
	}
}
