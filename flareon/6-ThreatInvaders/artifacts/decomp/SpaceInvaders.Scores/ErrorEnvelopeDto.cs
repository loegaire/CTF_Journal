using System.Text.Json.Serialization;

namespace SpaceInvaders.Scores;

internal sealed class ErrorEnvelopeDto
{
	[JsonPropertyName("error")]
	public ErrorBodyDto? Error { get; set; }
}
