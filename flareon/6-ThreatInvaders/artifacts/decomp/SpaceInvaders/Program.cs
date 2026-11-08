using System;
using System.IO;
using System.Windows.Forms;
using SpaceInvaders.Game;
using SpaceInvaders.Scores;

namespace SpaceInvaders;

internal static class Program
{
	[STAThread]
	private static void Main()
	{
		Application.EnableVisualStyles();
		Application.SetCompatibleTextRenderingDefault(defaultValue: false);
		Application.SetHighDpiMode(HighDpiMode.PerMonitorV2);
		UpdateLauncher.RunUpdaterIfPresent();
		string text = Path.Combine(AppContext.BaseDirectory, "config.json");
		AppConfig appConfig = AppConfig.LoadOrCreate(text);
		string defaultDirectory = LocalHighscoreStore.DefaultDirectory;
		Directory.CreateDirectory(defaultDirectory);
		LocalHighscoreStore local = new LocalHighscoreStore(Path.Combine(defaultDirectory, "highscores.json"), appConfig.LocalLimit);
		LocalHighscoreStore remoteCache = new LocalHighscoreStore(Path.Combine(defaultDirectory, "remote-cache.json"), appConfig.RemoteLimit);
		HttpRemoteScoreClient remote = new HttpRemoteScoreClient(appConfig);
		using HighscoreService highscoreService = new HighscoreService(appConfig, local, remoteCache, remote);
		UpdateChecker updateChecker = (highscoreService.UpdateChecker = new UpdateChecker(remote));
		TelemetryReporter telemetry = (highscoreService.Telemetry = new TelemetryReporter(remote));
		bool headlessUpdate = appConfig.HeadlessUpdate;
		headlessUpdate = true;
		highscoreService.Start();
		Application.Run(new GameForm(appConfig, text, highscoreService, updateChecker, headlessUpdate, telemetry));
	}
}
