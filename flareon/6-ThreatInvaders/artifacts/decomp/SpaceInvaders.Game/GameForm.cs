using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Drawing;
using System.Drawing.Drawing2D;
using System.Drawing.Text;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using SpaceInvaders.Core;
using SpaceInvaders.Scores;

namespace SpaceInvaders.Game;

internal sealed class GameForm : Form
{
	private static readonly Color Green = Color.FromArgb(255, 80, 255, 100);

	private static readonly Color White = Color.FromArgb(255, 235, 235, 235);

	private static readonly Color Red = Color.FromArgb(255, 235, 70, 70);

	private static readonly Color Amber = Color.FromArgb(255, 235, 200, 90);

	private static readonly Color Grey = Color.FromArgb(255, 130, 130, 130);

	private const int HighscoreRows = 10;

	private const int CommentWrapChars = 44;

	private readonly AppConfig _config;

	private readonly string _configPath;

	private readonly HighscoreService _scores;

	private readonly Renderer _renderer = new Renderer();

	private readonly SoundBank _sound = new SoundBank();

	private readonly GameWorld _world = new GameWorld();

	private readonly Timer _timer = new Timer();

	private readonly DebugScoreInjector _debug;

	private readonly Stopwatch _clock = Stopwatch.StartNew();

	private Font _fontSmall;

	private Font _fontMedium;

	private Font _fontLarge;

	private readonly StringFormat _left = new StringFormat
	{
		Alignment = StringAlignment.Near,
		LineAlignment = StringAlignment.Near
	};

	private readonly StringFormat _centre = new StringFormat
	{
		Alignment = StringAlignment.Center,
		LineAlignment = StringAlignment.Near
	};

	private ScreenId _screen;

	private bool _keyLeft;

	private bool _keyRight;

	private bool _keyFire;

	private double _lastSeconds;

	private float _blink;

	private string _nameBuffer = "";

	private string _commentBuffer = "";

	private string _feedbackBuffer = "";

	private int _selectedRow;

	private int _pendingScore;

	private int _pendingWave;

	private int _pendingDuration;

	private string _toast = "";

	private float _toastTimer;

	private int _scale;

	private readonly UpdateChecker? _updateChecker;

	private readonly bool _headlessUpdate;

	private readonly TelemetryReporter? _telemetry;

	internal GameForm(AppConfig config, string configPath, HighscoreService scores, UpdateChecker? updateChecker = null, bool headlessUpdate = false, TelemetryReporter? telemetry = null)
	{
		_updateChecker = updateChecker;
		_headlessUpdate = headlessUpdate;
		_telemetry = telemetry;
		_config = config;
		_configPath = configPath;
		_scores = scores;
		_scale = Math.Clamp(config.Scale, 1, 6);
		_sound.Muted = config.Muted;
		_nameBuffer = HighscoreEntry.Sanitise(config.DefaultPlayerName);
		BackColor = Color.Black;
		base.FormBorderStyle = FormBorderStyle.FixedSingle;
		base.MaximizeBox = false;
		base.StartPosition = FormStartPosition.CenterScreen;
		base.AutoScaleMode = AutoScaleMode.None;
		base.KeyPreview = true;
		base.ClientSize = new Size(224 * _scale, 256 * _scale);
		SetStyle(ControlStyles.UserPaint | ControlStyles.AllPaintingInWmPaint | ControlStyles.OptimizedDoubleBuffer, value: true);
		RebuildFonts();
		_debug = new DebugScoreInjector(_scores, Toast);
		_timer.Interval = 15;
		_timer.Tick += OnTick;
		_timer.Start();
	}

	private void OnTick(object? sender, EventArgs e)
	{
		double totalSeconds = _clock.Elapsed.TotalSeconds;
		float num = (float)(totalSeconds - _lastSeconds);
		_lastSeconds = totalSeconds;
		if (num <= 0f)
		{
			return;
		}
		_blink += num;
		if (_toastTimer > 0f)
		{
			_toastTimer -= num;
		}
		if (_screen == ScreenId.Playing)
		{
			_world.Update(num, new InputState(_keyLeft, _keyRight, _keyFire));
			GameEvent evt;
			while (_world.TryDequeueEvent(out evt))
			{
				_sound.Handle(evt);
			}
			_keyFire = false;
			if (_world.IsFinished)
			{
				_telemetry?.RecordGamePlayed();
				EndRun();
			}
		}
		MaybePromptForUpdate();
		Invalidate();
	}

	private void MaybePromptForUpdate()
	{
		if (_updateChecker?.Pending == null)
		{
			return;
		}
		UpdateAvailability updateAvailability = _updateChecker.Consume();
		if (updateAvailability != null)
		{
			_updateChecker.MarkPrompted();
			bool flag;
			if (_headlessUpdate)
			{
				flag = true;
			}
			else
			{
				string value = (string.IsNullOrEmpty(updateAvailability.Message) ? "" : ("\n\nServer note: " + updateAvailability.Message));
				string text = $"An update is available.\n\nInstalled: {_updateChecker.CurrentVersion}\nAvailable: {updateAvailability.LatestVersion}{value}\n\nRun the updater now? The game will close.";
				flag = MessageBox.Show(this, text, "Update available", MessageBoxButtons.YesNo, MessageBoxIcon.Asterisk, MessageBoxDefaultButton.Button2) == DialogResult.Yes;
			}
			if (flag)
			{
				UpdateLauncher.LaunchConsentedUpdater();
			}
		}
	}

	private void EndRun()
	{
		_pendingScore = _world.Score;
		_pendingWave = _world.Wave;
		_pendingDuration = _world.ElapsedSeconds;
		if (_pendingScore > 0)
		{
			_screen = ScreenId.NameEntry;
		}
		else
		{
			_screen = ScreenId.Title;
		}
	}

	private void StartRun()
	{
		_world.Reset();
		_commentBuffer = "";
		_keyLeft = (_keyRight = (_keyFire = false));
		_screen = ScreenId.Playing;
	}

	private void SaveScore()
	{
		string text = HighscoreEntry.Sanitise(_nameBuffer);
		_scores.Submit(text, _commentBuffer, _pendingScore, _pendingWave, _pendingDuration);
		_config.DefaultPlayerName = text;
		_config.TrySave(_configPath);
		Toast("saved locally, queued for upload");
		_screen = ScreenId.Highscores;
	}

	private void Toast(string message)
	{
		_toast = message;
		_toastTimer = 3.5f;
	}

	protected override void OnKeyDown(KeyEventArgs e)
	{
		base.OnKeyDown(e);
		ScreenId screen = _screen;
		bool flag = (((uint)(screen - 2) <= 1u || screen == ScreenId.FeedbackEntry) ? true : false);
		bool flag2 = flag;
		flag2 |= _screen == ScreenId.Debug;
		e.Handled = !flag2;
		switch (e.KeyCode)
		{
		case Keys.M:
			if (!flag2)
			{
				_sound.Muted = !_sound.Muted;
				_config.Muted = _sound.Muted;
				_config.TrySave(_configPath);
				Toast(_sound.Muted ? "sound off" : "sound on");
				return;
			}
			break;
		case Keys.F11:
			CycleScale();
			return;
		case Keys.F1:
			screen = _screen;
			if ((screen == ScreenId.Title || screen == ScreenId.Highscores) ? true : false)
			{
				_screen = ScreenId.Debug;
				return;
			}
			break;
		}
		switch (_screen)
		{
		case ScreenId.Title:
			OnTitleKey(e);
			break;
		case ScreenId.Playing:
			OnPlayKey(e, down: true);
			break;
		case ScreenId.NameEntry:
			OnNameKey(e);
			break;
		case ScreenId.CommentEntry:
			OnCommentKey(e);
			break;
		case ScreenId.FeedbackEntry:
			OnFeedbackKey(e);
			break;
		case ScreenId.Highscores:
			OnHighscoreKey(e);
			break;
		case ScreenId.Debug:
			_debug.HandleKey(e, delegate
			{
				_screen = ScreenId.Title;
			});
			break;
		}
	}

	protected override void OnKeyUp(KeyEventArgs e)
	{
		base.OnKeyUp(e);
		if (_screen == ScreenId.Playing)
		{
			OnPlayKey(e, down: false);
		}
	}

	private void OnTitleKey(KeyEventArgs e)
	{
		switch (e.KeyCode)
		{
		case Keys.Return:
		case Keys.Space:
			StartRun();
			break;
		case Keys.H:
			_screen = ScreenId.Highscores;
			_scores.RequestSync();
			break;
		case Keys.F:
			if (_telemetry != null)
			{
				_feedbackBuffer = "";
				_screen = ScreenId.FeedbackEntry;
			}
			break;
		case Keys.Escape:
			Close();
			break;
		}
	}

	private void OnPlayKey(KeyEventArgs e, bool down)
	{
		switch (e.KeyCode)
		{
		case Keys.Left:
		case Keys.A:
			_keyLeft = down;
			break;
		case Keys.Right:
		case Keys.D:
			_keyRight = down;
			break;
		case Keys.Space:
		case Keys.Up:
		case Keys.W:
			if (down)
			{
				_keyFire = true;
			}
			break;
		case Keys.Escape:
			if (down)
			{
				_keyLeft = (_keyRight = false);
				EndRun();
			}
			break;
		}
	}

	private void OnNameKey(KeyEventArgs e)
	{
		switch (e.KeyCode)
		{
		case Keys.Back:
			if (_nameBuffer.Length > 0)
			{
				string nameBuffer = _nameBuffer;
				_nameBuffer = nameBuffer.Substring(0, nameBuffer.Length - 1);
			}
			e.Handled = true;
			break;
		case Keys.Tab:
		case Keys.Return:
			if (_nameBuffer.Trim().Length > 0)
			{
				_screen = ScreenId.CommentEntry;
			}
			e.Handled = true;
			break;
		case Keys.Escape:
			_screen = ScreenId.Title;
			e.Handled = true;
			break;
		}
	}

	private void OnFeedbackKey(KeyEventArgs e)
	{
		switch (e.KeyCode)
		{
		case Keys.Back:
			if (_feedbackBuffer.Length > 0)
			{
				string feedbackBuffer = _feedbackBuffer;
				_feedbackBuffer = feedbackBuffer.Substring(0, feedbackBuffer.Length - 1);
			}
			e.Handled = true;
			break;
		case Keys.Return:
			_telemetry?.SetFeedback(_feedbackBuffer);
			Toast((_feedbackBuffer.Trim().Length > 0) ? "feedback queued for next report" : "feedback cleared");
			_screen = ScreenId.Title;
			e.Handled = true;
			break;
		case Keys.Escape:
			_screen = ScreenId.Title;
			e.Handled = true;
			break;
		}
	}

	private void OnCommentKey(KeyEventArgs e)
	{
		switch (e.KeyCode)
		{
		case Keys.Back:
			if (_commentBuffer.Length > 0)
			{
				string commentBuffer = _commentBuffer;
				_commentBuffer = commentBuffer.Substring(0, commentBuffer.Length - 1);
			}
			e.Handled = true;
			break;
		case Keys.Return:
			SaveScore();
			e.Handled = true;
			break;
		case Keys.Escape:
			_screen = ScreenId.NameEntry;
			e.Handled = true;
			break;
		}
	}

	protected override void OnKeyPress(KeyPressEventArgs e)
	{
		base.OnKeyPress(e);
		char keyChar = e.KeyChar;
		if (keyChar < ' ' || keyChar > '~')
		{
			return;
		}
		if (_screen == ScreenId.Debug)
		{
			_debug.HandleChar(keyChar);
			e.Handled = true;
		}
		else if (_screen == ScreenId.NameEntry)
		{
			char c = char.ToUpperInvariant(keyChar);
			bool flag;
			switch (c)
			{
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
				flag = true;
				break;
			default:
				flag = false;
				break;
			}
			bool flag2 = flag;
			if (!flag2)
			{
				bool flag3;
				switch (c)
				{
				case ' ':
				case '-':
				case '.':
				case '_':
					flag3 = true;
					break;
				default:
					flag3 = false;
					break;
				}
				flag2 = flag3;
			}
			if (flag2 && _nameBuffer.Length < 12)
			{
				_nameBuffer += c;
			}
			e.Handled = true;
		}
		else if (_screen == ScreenId.CommentEntry)
		{
			if (_commentBuffer.Length < 256)
			{
				_commentBuffer += keyChar;
			}
			e.Handled = true;
		}
		else if (_screen == ScreenId.FeedbackEntry)
		{
			if (Encoding.UTF8.GetByteCount(_feedbackBuffer + keyChar) <= 4096)
			{
				_feedbackBuffer += keyChar;
			}
			e.Handled = true;
		}
	}

	private void OnHighscoreKey(KeyEventArgs e)
	{
		switch (e.KeyCode)
		{
		case Keys.Return:
		case Keys.Escape:
			_screen = ScreenId.Title;
			break;
		case Keys.Up:
			_selectedRow = Math.Max(0, _selectedRow - 1);
			break;
		case Keys.Down:
			_selectedRow = Math.Min(9, _selectedRow + 1);
			break;
		case Keys.D:
			Toast("downloading...");
			Task.Run(async delegate
			{
				Toast((await _scores.DownloadOnlyAsync().ConfigureAwait(continueOnCapturedContext: false)).Message);
			});
			break;
		case Keys.S:
		case Keys.U:
			Toast("syncing...");
			Task.Run(async delegate
			{
				Toast((await _scores.SyncAsync().ConfigureAwait(continueOnCapturedContext: false)).Message);
			});
			break;
		}
	}

	private void RebuildFonts()
	{
		string familyName = (FontFamily.Families.Any((FontFamily f) => f.Name == "Consolas") ? "Consolas" : FontFamily.GenericMonospace.Name);
		_fontSmall?.Dispose();
		_fontMedium?.Dispose();
		_fontLarge?.Dispose();
		_fontSmall = new Font(familyName, 6f * (float)_scale, FontStyle.Bold, GraphicsUnit.Pixel);
		_fontMedium = new Font(familyName, 8f * (float)_scale, FontStyle.Bold, GraphicsUnit.Pixel);
		_fontLarge = new Font(familyName, 14f * (float)_scale, FontStyle.Bold, GraphicsUnit.Pixel);
	}

	private void CycleScale()
	{
		_scale = ((_scale >= 5) ? 2 : (_scale + 1));
		_config.Scale = _scale;
		_config.TrySave(_configPath);
		base.ClientSize = new Size(224 * _scale, 256 * _scale);
		RebuildFonts();
		Toast($"scale {_scale}x");
	}

	protected override void OnPaint(PaintEventArgs e)
	{
		Graphics g = e.Graphics;
		g.Clear(Color.Black);
		g.InterpolationMode = InterpolationMode.NearestNeighbor;
		g.PixelOffsetMode = PixelOffsetMode.Half;
		g.SmoothingMode = SmoothingMode.None;
		g.TextRenderingHint = TextRenderingHint.AntiAliasGridFit;
		switch (_screen)
		{
		case ScreenId.Playing:
			_renderer.DrawWorld(_world);
			break;
		case ScreenId.Title:
			_renderer.DrawEmptyField();
			_renderer.DrawSpecimenRow(96);
			break;
		default:
			_renderer.DrawEmptyField();
			break;
		}
		float sx = (float)base.ClientSize.Width / 224f;
		g.DrawImage(_renderer.Canvas, new Rectangle(0, 0, base.ClientSize.Width, base.ClientSize.Height));
		DrawHud(g, sx);
		switch (_screen)
		{
		case ScreenId.Title:
			DrawTitle(g, sx);
			break;
		case ScreenId.Playing:
			DrawPlayOverlay(g, sx);
			break;
		case ScreenId.NameEntry:
			DrawNameEntry(g, sx);
			break;
		case ScreenId.CommentEntry:
			DrawCommentEntry(g, sx);
			break;
		case ScreenId.FeedbackEntry:
			DrawFeedbackEntry(g, sx);
			break;
		case ScreenId.Highscores:
			DrawHighscores(g, sx);
			break;
		case ScreenId.Debug:
			_debug.Draw(delegate(string text, float x, float y, Color colour, DebugTextStyle style)
			{
				DrawDebugText(g, sx, text, x, y, colour, style);
			}, _blink);
			break;
		}
		DrawToast(g, sx);
	}

	private void DrawHud(Graphics g, float sx)
	{
		int num = Math.Max(_scores.BestLocalScore, _world.Score);
		Text(g, "SCORE", 12f, 2f, White, _fontSmall, sx);
		Text(g, _world.Score.ToString("D5"), 12f, 10f, White, _fontSmall, sx);
		Text(g, "HI-SCORE", 88f, 2f, White, _fontSmall, sx);
		Text(g, num.ToString("D5"), 100f, 10f, White, _fontSmall, sx);
		Text(g, "WAVE", 176f, 2f, White, _fontSmall, sx);
		Text(g, _world.Wave.ToString("D2"), 184f, 10f, White, _fontSmall, sx);
	}

	private void DrawTitle(Graphics g, float sx)
	{
		TextCentred(g, "SPACE", 46f, Green, _fontLarge, sx);
		TextCentred(g, "INVADERS", 68f, Green, _fontLarge, sx);
		Text(g, "= 30", 56f, 98f, White, _fontSmall, sx);
		Text(g, "= 20", 95f, 98f, White, _fontSmall, sx);
		Text(g, "= 10", 136f, 98f, White, _fontSmall, sx);
		Text(g, "= ???", 178f, 98f, Red, _fontSmall, sx);
		if ((int)(_blink * 2f) % 2 == 0)
		{
			TextCentred(g, "PRESS ENTER TO PLAY", 132f, Amber, _fontMedium, sx);
		}
		TextCentred(g, "ARROWS MOVE   SPACE FIRE", 156f, Grey, _fontSmall, sx);
		TextCentred(g, "H HIGHSCORES   F FEEDBACK   M MUTE", 168f, Grey, _fontSmall, sx);
		TextCentred(g, "ESC QUIT", 180f, Grey, _fontSmall, sx);
		TextCentred(g, "F1 DEBUG SCORE INJECTOR", 192f, Red, _fontSmall, sx);
		TextCentred(g, SyncLine(), 244f, SyncColour(), _fontSmall, sx);
	}

	private void DrawPlayOverlay(Graphics g, float sx)
	{
		foreach (Explosion explosion in _world.Explosions)
		{
			if (explosion.Kind == ExplosionKind.UfoScore)
			{
				Text(g, explosion.Value.ToString(), explosion.X, 24f, Red, _fontSmall, sx);
			}
		}
		if (_world.Phase == WorldPhase.WaveCleared)
		{
			TextCentred(g, $"WAVE {_world.Wave} CLEARED", 120f, Amber, _fontMedium, sx);
		}
		else if (_world.Phase == WorldPhase.GameOver)
		{
			TextCentred(g, "GAME OVER", 120f, Red, _fontLarge, sx);
		}
	}

	private void DrawNameEntry(Graphics g, float sx)
	{
		TextCentred(g, "GAME OVER", 54f, Red, _fontLarge, sx);
		TextCentred(g, $"SCORE {_pendingScore}   WAVE {_pendingWave}", 84f, White, _fontMedium, sx);
		TextCentred(g, _scores.Qualifies(_pendingScore) ? "NEW HIGH SCORE" : "NICE RUN", 100f, Amber, _fontSmall, sx);
		TextCentred(g, "ENTER YOUR NAME", 128f, Grey, _fontSmall, sx);
		string text = (((int)(_blink * 3f) % 2 == 0) ? "_" : " ");
		TextCentred(g, _nameBuffer + text, 144f, Green, _fontLarge, sx);
		TextCentred(g, "ENTER NEXT    ESC DISCARD", 190f, Grey, _fontSmall, sx);
	}

	private void DrawFeedbackEntry(Graphics g, float sx)
	{
		TextCentred(g, "SEND FEEDBACK", 44f, Amber, _fontMedium, sx);
		TextCentred(g, "rides the next telemetry report", 58f, Grey, _fontSmall, sx);
		string text = (((int)(_blink * 3f) % 2 == 0) ? "_" : " ");
		string[] array = Wrap(_feedbackBuffer + text, 44);
		for (int i = 0; i < array.Length && i < 8; i++)
		{
			TextCentred(g, array[i], 84 + i * 12, Green, _fontSmall, sx);
		}
		int byteCount = Encoding.UTF8.GetByteCount(_feedbackBuffer);
		TextCentred(g, $"{byteCount} / {4096} BYTES", 196f, Grey, _fontSmall, sx);
		TextCentred(g, "ENTER SEND   ESC CANCEL", 210f, Grey, _fontSmall, sx);
	}

	private void DrawCommentEntry(Graphics g, float sx)
	{
		TextCentred(g, "ADD A COMMENT", 48f, Amber, _fontMedium, sx);
		TextCentred(g, "OPTIONAL", 62f, Grey, _fontSmall, sx);
		TextCentred(g, $"{HighscoreEntry.Sanitise(_nameBuffer)}   {_pendingScore}", 80f, White, _fontMedium, sx);
		string text = (((int)(_blink * 3f) % 2 == 0) ? "_" : " ");
		string[] array = Wrap(_commentBuffer + text, 44);
		for (int i = 0; i < array.Length && i < 6; i++)
		{
			TextCentred(g, array[i], 108 + i * 12, Green, _fontSmall, sx);
		}
		int value = 256 - _commentBuffer.Length;
		TextCentred(g, $"{value} CHARACTERS LEFT", 186f, Grey, _fontSmall, sx);
		TextCentred(g, "ENTER SAVE + UPLOAD    ESC BACK", 200f, Grey, _fontSmall, sx);
	}

	private static string CommentToDisplay(byte[] comment)
	{
		if (comment.Length == 0)
		{
			return "";
		}
		Span<char> span = ((comment.Length > 256) ? ((Span<char>)new char[comment.Length]) : stackalloc char[comment.Length]);
		Span<char> span2 = span;
		for (int i = 0; i < comment.Length; i++)
		{
			byte b = comment[i];
			span2[i] = (char)((b >= 32 && b <= 126) ? b : 46);
		}
		return new string(span2);
	}

	private static string[] Wrap(string text, int width)
	{
		if (string.IsNullOrEmpty(text))
		{
			return new string[1] { "" };
		}
		List<string> list = new List<string>();
		StringBuilder stringBuilder = new StringBuilder(width);
		string[] array = text.Split(' ');
		for (int i = 0; i < array.Length; i++)
		{
			string text2 = array[i];
			while (text2.Length > width)
			{
				if (stringBuilder.Length > 0)
				{
					list.Add(stringBuilder.ToString());
					stringBuilder.Clear();
				}
				list.Add(text2.Substring(0, width));
				text2 = text2.Substring(width);
			}
			if (stringBuilder.Length > 0 && stringBuilder.Length + 1 + text2.Length > width)
			{
				list.Add(stringBuilder.ToString());
				stringBuilder.Clear();
			}
			if (stringBuilder.Length > 0)
			{
				stringBuilder.Append(' ');
			}
			stringBuilder.Append(text2);
		}
		list.Add(stringBuilder.ToString());
		return list.ToArray();
	}

	private void DrawHighscores(Graphics g, float sx)
	{
		TextCentred(g, "HIGH SCORES", 30f, Amber, _fontMedium, sx);
		Text(g, "LOCAL", 14f, 46f, Green, _fontSmall, sx);
		Text(g, "ONLINE", 120f, 46f, Red, _fontSmall, sx);
		IReadOnlyList<HighscoreEntry> readOnlyList = _scores.LocalTop(10);
		IReadOnlyList<HighscoreEntry> readOnlyList2 = _scores.RemoteTop(10);
		if (_selectedRow >= readOnlyList.Count)
		{
			_selectedRow = Math.Max(0, readOnlyList.Count - 1);
		}
		for (int i = 0; i < 10; i++)
		{
			float vy = 58 + i * 11;
			bool flag = i == _selectedRow && i < readOnlyList.Count;
			if (i < readOnlyList.Count)
			{
				HighscoreEntry highscoreEntry = readOnlyList[i];
				Color color = (flag ? Amber : White);
				Text(g, flag ? ">" : " ", 6f, vy, Amber, _fontSmall, sx);
				Text(g, $"{i + 1,2} {Trim(highscoreEntry.PlayerName, 8),-8} {highscoreEntry.Score,5}", 12f, vy, color, _fontSmall, sx);
				Text(g, Marker(highscoreEntry.Sync), 100f, vy, MarkerColour(highscoreEntry.Sync), _fontSmall, sx);
			}
			else
			{
				Text(g, $"{i + 1,2} {"-",-8} {"-",5}", 12f, vy, Grey, _fontSmall, sx);
			}
			if (i < readOnlyList2.Count)
			{
				HighscoreEntry highscoreEntry2 = readOnlyList2[i];
				Text(g, $"{i + 1,2} {Trim(highscoreEntry2.PlayerName, 8),-8} {highscoreEntry2.Score,5}", 118f, vy, White, _fontSmall, sx);
				if (highscoreEntry2.Comment.Length != 0)
				{
					Text(g, "~", 210f, vy, Grey, _fontSmall, sx);
				}
			}
			else
			{
				Text(g, $"{i + 1,2} {"-",-8} {"-",5}", 118f, vy, Grey, _fontSmall, sx);
			}
		}
		if (_selectedRow < readOnlyList.Count)
		{
			string text = CommentToDisplay(readOnlyList[_selectedRow].Comment);
			if (text.Length > 0)
			{
				string[] array = Wrap(text, 44);
				for (int j = 0; j < array.Length && j < 3; j++)
				{
					TextCentred(g, array[j], 174 + j * 10, White, _fontSmall, sx);
				}
			}
			else
			{
				TextCentred(g, "(no comment)", 174f, Grey, _fontSmall, sx);
			}
		}
		Text(g, "* pending  + synced  ! rejected", 12f, 206f, Grey, _fontSmall, sx);
		TextCentred(g, SyncLine(), 216f, SyncColour(), _fontSmall, sx);
		TextCentred(g, "UP/DN SELECT  D DOWNLOAD  U SYNC  ESC BACK", 228f, Grey, _fontSmall, sx);
		string storageError = _scores.StorageError;
		if (storageError != null)
		{
			TextCentred(g, Trim(storageError, 46), 240f, Red, _fontSmall, sx);
		}
	}

	private void DrawDebugText(Graphics g, float sx, string text, float x, float y, Color colour, DebugTextStyle style)
	{
		switch (style)
		{
		case DebugTextStyle.MediumCentred:
			TextCentred(g, text, y, colour, _fontMedium, sx);
			break;
		case DebugTextStyle.SmallCentred:
			TextCentred(g, text, y, colour, _fontSmall, sx);
			break;
		default:
			Text(g, text, x, y, colour, _fontSmall, sx);
			break;
		}
	}

	private void DrawToast(Graphics g, float sx)
	{
		if (_toastTimer > 0f && !string.IsNullOrEmpty(_toast))
		{
			TextCentred(g, Trim(_toast, 46), 246f, Amber, _fontSmall, sx);
		}
	}

	private string SyncLine()
	{
		int pendingCount = _scores.PendingCount;
		return Trim(string.Concat(_scores.Status switch
		{
			SyncStatus.Syncing => "SYNCING", 
			SyncStatus.Offline => "OFFLINE", 
			SyncStatus.Error => "ERROR", 
			_ => "ONLINE", 
		}, str3: (pendingCount > 0) ? $" ({pendingCount} queued)" : "", str1: ": ", str2: _scores.StatusMessage), 46);
	}

	private Color SyncColour()
	{
		return _scores.Status switch
		{
			SyncStatus.Offline => Amber, 
			SyncStatus.Error => Red, 
			SyncStatus.Syncing => Grey, 
			_ => Green, 
		};
	}

	private static string Marker(SyncState state)
	{
		return state switch
		{
			SyncState.Pending => "*", 
			SyncState.Synced => "+", 
			SyncState.Rejected => "!", 
			_ => " ", 
		};
	}

	private static Color MarkerColour(SyncState state)
	{
		return state switch
		{
			SyncState.Pending => Amber, 
			SyncState.Synced => Green, 
			SyncState.Rejected => Red, 
			_ => Grey, 
		};
	}

	private static string Trim(string value, int max)
	{
		if (value.Length > max)
		{
			return value.Substring(0, max);
		}
		return value;
	}

	private new void Text(Graphics g, string text, float vx, float vy, Color color, Font font, float sx)
	{
		using SolidBrush brush = new SolidBrush(color);
		g.DrawString(text, font, brush, vx * sx, vy * sx, _left);
	}

	private void TextCentred(Graphics g, string text, float vy, Color color, Font font, float sx)
	{
		using SolidBrush brush = new SolidBrush(color);
		g.DrawString(text, font, brush, (float)base.ClientSize.Width / 2f, vy * sx, _centre);
	}

	protected override void OnFormClosed(FormClosedEventArgs e)
	{
		base.OnFormClosed(e);
		_timer.Stop();
		_timer.Dispose();
		_renderer.Dispose();
		_sound.Dispose();
		_fontSmall.Dispose();
		_fontMedium.Dispose();
		_fontLarge.Dispose();
		_left.Dispose();
		_centre.Dispose();
	}
}
