using System.Text.Json.Serialization;

namespace SpaceInvaders.Scores;

internal sealed class PostResponseDto
{
	[JsonPropertyName("entry")]
	public ScoreDto? Entry { get; set; }

	[JsonPropertyName("rank")]
	public int Rank { get; set; }
}
