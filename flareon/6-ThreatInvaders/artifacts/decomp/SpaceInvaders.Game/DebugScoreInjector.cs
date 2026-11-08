using System;
using System.Drawing;
using System.Windows.Forms;
using SpaceInvaders.Scores;

namespace SpaceInvaders.Game;

internal sealed class DebugScoreInjector
{
	private static readonly string[] Labels = new string[5] { "NAME", "SCORE", "WAVE", "SECONDS", "COMMENT" };

	private static readonly int[] MaxLengths = new int[5] { 12, 8, 3, 6, 256 };

	private static readonly string[] NamePool = new string[8] { "TESTER", "INJECT", "MOCKY", "FIXTURE", "SYNTH", "DUMMY", "PROBE", "STUB" };

	private static readonly string[] CommentPool = new string[5] { "injected from the debug panel", "not a real run", "fabricated for testing sync", "arena allocation check", "" };

	private readonly HighscoreService _scores;

	private readonly Action<string> _toast;

	private readonly Random _rng = new Random();

	private readonly string[] _values = new string[5] { "TESTER", "1000", "1", "60", "injected from the debug panel" };

	private int _field;

	private int _submitted;

	private string _last = "";

	public DebugScoreInjector(HighscoreService scores, Action<string> toast)
	{
		_scores = scores;
		_toast = toast;
	}

	public void HandleKey(KeyEventArgs e, Action close)
	{
		switch (e.KeyCode)
		{
		case Keys.Escape:
			close();
			e.Handled = true;
			break;
		case Keys.Up:
			_field = (_field + Labels.Length - 1) % Labels.Length;
			e.Handled = true;
			break;
		case Keys.Tab:
		case Keys.Down:
			_field = (_field + 1) % Labels.Length;
			e.Handled = true;
			break;
		case Keys.Back:
			if (_values[_field].Length > 0)
			{
				string[] values = _values;
				int field = _field;
				string text = _values[_field];
				values[field] = text.Substring(0, text.Length - 1);
			}
			e.Handled = true;
			break;
		case Keys.Return:
			Submit();
			e.Handled = true;
			break;
		case Keys.F5:
			Randomise();
			e.Handled = true;
			break;
		case Keys.F6:
			Burst(10);
			e.Handled = true;
			break;
		}
	}

	public void HandleChar(char c)
	{
		if (_values[_field].Length < MaxLengths[_field])
		{
			int field = _field;
			bool flag = (uint)(field - 1) <= 2u;
			if (!flag || (c >= '0' && c <= '9'))
			{
				_values[_field] += ((_field == 0) ? char.ToUpperInvariant(c) : c);
			}
		}
	}

	private void Submit()
	{
		string text = HighscoreEntry.Sanitise(_values[0]);
		int num = ParseOr(_values[1], 1000);
		int wave = Math.Clamp(ParseOr(_values[2], 1), 1, 999);
		int durationSeconds = ParseOr(_values[3], 60);
		string comment = _values[4];
		HighscoreEntry highscoreEntry = _scores.Submit(text, comment, num, wave, durationSeconds);
		_submitted++;
		_last = $"{text} {num} -> {highscoreEntry.Id.ToString().Substring(0, 8)}";
		_toast($"injected {text} {num}, queued for upload");
	}

	private void Burst(int count)
	{
		for (int i = 0; i < count; i++)
		{
			Randomise();
			Submit();
		}
		_toast($"injected {count} scores");
	}

	private void Randomise()
	{
		_values[0] = NamePool[_rng.Next(NamePool.Length)] + _rng.Next(10, 99);
		_values[1] = _rng.Next(100, 25000).ToString();
		_values[2] = _rng.Next(1, 12).ToString();
		_values[3] = _rng.Next(30, 900).ToString();
		_values[4] = CommentPool[_rng.Next(CommentPool.Length)];
	}

	private static int ParseOr(string text, int fallback)
	{
		if (!int.TryParse(text, out var result) || result < 0)
		{
			return fallback;
		}
		return result;
	}

	public void Draw(DebugTextWriter write, float blink)
	{
		Color color = Color.FromArgb(255, 235, 200, 90);
		Color color2 = Color.FromArgb(255, 80, 255, 100);
		Color color3 = Color.FromArgb(255, 235, 235, 235);
		Color color4 = Color.FromArgb(255, 130, 130, 130);
		Color colour = Color.FromArgb(255, 235, 70, 70);
		write("DEBUG - INJECT SCORE", 0f, 34f, colour, DebugTextStyle.MediumCentred);
		write("not part of the shipping game", 0f, 48f, color4, DebugTextStyle.SmallCentred);
		for (int i = 0; i < Labels.Length; i++)
		{
			float y = 70 + i * 14;
			bool flag = i == _field;
			write(flag ? ">" : " ", 10f, y, color, DebugTextStyle.Small);
			write(Labels[i], 20f, y, flag ? color : color4, DebugTextStyle.Small);
			string text = _values[i];
			if (i == 4 && text.Length > 26)
			{
				text = text.Substring(0, 26) + "...";
			}
			string text2 = ((flag && (int)(blink * 3f) % 2 == 0) ? "_" : "");
			write(text + text2, 84f, y, flag ? color2 : color3, DebugTextStyle.Small);
		}
		write($"submitted this session: {_submitted}", 0f, 150f, color4, DebugTextStyle.SmallCentred);
		if (_last.Length > 0)
		{
			write("last: " + _last, 0f, 162f, color4, DebugTextStyle.SmallCentred);
		}
		write("UP/DN FIELD   TYPE TO EDIT   BKSP DELETE", 0f, 190f, color4, DebugTextStyle.SmallCentred);
		write("ENTER SUBMIT   F5 RANDOMISE   F6 BURST x10", 0f, 202f, color4, DebugTextStyle.SmallCentred);
		write("ESC BACK", 0f, 214f, color4, DebugTextStyle.SmallCentred);
	}
}
