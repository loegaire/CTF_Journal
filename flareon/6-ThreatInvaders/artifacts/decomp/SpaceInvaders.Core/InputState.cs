namespace SpaceInvaders.Core;

public readonly struct InputState(bool left, bool right, bool fire)
{
	public readonly bool Left = left;

	public readonly bool Right = right;

	public readonly bool Fire = fire;

	public static readonly InputState None = new InputState(left: false, right: false, fire: false);
}
