using System.Collections.Generic;
using System.Text.Json.Serialization;

namespace SpaceInvaders.Scores;

internal sealed class ScoreListDto
{
	[JsonPropertyName("entries")]
	public List<ScoreDto> Entries { get; set; } = new List<ScoreDto>();

	[JsonPropertyName("total")]
	public int Total { get; set; }
}
