using System.Text.Json.Serialization;

namespace SpaceInvaders.Scores;

internal sealed class ErrorBodyDto
{
	[JsonPropertyName("code")]
	public string Code { get; set; } = "";

	[JsonPropertyName("message")]
	public string Message { get; set; } = "";
}
