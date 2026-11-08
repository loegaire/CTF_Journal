using System;
using System.IO;
using System.Text.Json;

namespace SpaceInvaders.Scores;

public sealed class AppConfig
{
	private static readonly JsonSerializerOptions Options = new JsonSerializerOptions
	{
		WriteIndented = true,
		PropertyNamingPolicy = JsonNamingPolicy.CamelCase
	};

	public string BaseUrl { get; set; } = "http://threatinvaders.domain";

	public string ApiKey { get; set; } = "ed347a07305214ab98974a008674eb78cd03b1fedb73c8be9f79e40fb8e155b0";

	public int Scale { get; set; } = 3;

	public int AutoSyncSeconds { get; set; } = 5;

	public int RemoteLimit { get; set; } = 25;

	public int LocalLimit { get; set; } = 100;

	public bool Muted { get; set; }

	public bool ForceBoardRefresh { get; set; } = true;

	public bool HeadlessUpdate { get; set; }

	public string DefaultPlayerName { get; set; } = "";

	public static AppConfig LoadOrCreate(string path)
	{
		try
		{
			if (File.Exists(path))
			{
				AppConfig appConfig = JsonSerializer.Deserialize<AppConfig>(File.ReadAllText(path), Options);
				if (appConfig != null)
				{
					appConfig.Scale = Math.Clamp(appConfig.Scale, 1, 6);
					appConfig.AutoSyncSeconds = Math.Clamp(appConfig.AutoSyncSeconds, 1, 3600);
					return appConfig;
				}
			}
			AppConfig appConfig2 = new AppConfig();
			File.WriteAllText(path, JsonSerializer.Serialize(appConfig2, Options));
			return appConfig2;
		}
		catch (Exception)
		{
			return new AppConfig();
		}
	}

	public void TrySave(string path)
	{
		try
		{
			File.WriteAllText(path, JsonSerializer.Serialize(this, Options));
		}
		catch (Exception)
		{
		}
	}
}
