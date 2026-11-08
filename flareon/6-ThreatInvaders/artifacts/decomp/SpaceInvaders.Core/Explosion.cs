namespace SpaceInvaders.Core;

public sealed class Explosion
{
	public ExplosionKind Kind { get; }

	public float X { get; }

	public float Y { get; }

	public float Ttl { get; }

	public float Age { get; set; }

	public int Value { get; }

	public int Frame => (int)(Age * 10f) & 1;

	public Explosion(ExplosionKind kind, float x, float y, float ttl, int value = 0)
	{
		Kind = kind;
		X = x;
		Y = y;
		Ttl = ttl;
		Age = 0f;
		Value = value;
	}
}
