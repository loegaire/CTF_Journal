namespace SpaceInvaders.Core;

public sealed class Invader
{
	public InvaderType Type { get; }

	public int Col { get; }

	public int Row { get; }

	public bool Alive { get; set; }

	public Invader(InvaderType type, int col, int row)
	{
		Type = type;
		Col = col;
		Row = row;
		Alive = true;
	}
}
