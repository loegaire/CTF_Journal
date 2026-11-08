namespace SpaceInvaders.Core;

public readonly struct RectF(float x, float y, float w, float h)
{
	public readonly float X = x;

	public readonly float Y = y;

	public readonly float W = w;

	public readonly float H = h;

	public float Right => X + W;

	public float Bottom => Y + H;

	public float CenterX => X + W * 0.5f;

	public float CenterY => Y + H * 0.5f;

	public bool Intersects(in RectF other)
	{
		if (X < other.Right && Right > other.X && Y < other.Bottom)
		{
			return Bottom > other.Y;
		}
		return false;
	}

	public override string ToString()
	{
		return $"({X:0.#},{Y:0.#} {W}x{H})";
	}
}
