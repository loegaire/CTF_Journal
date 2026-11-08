using System;
using System.Collections.Generic;
using System.IO;
using System.Media;
using SpaceInvaders.Core;

namespace SpaceInvaders.Game;

public sealed class SoundBank : IDisposable
{
	private const int SampleRate = 22050;

	private readonly Dictionary<string, SoundPlayer> _players = new Dictionary<string, SoundPlayer>();

	private readonly string[] _fleetSteps = new string[4] { "step0", "step1", "step2", "step3" };

	private int _stepIndex;

	public bool Available { get; }

	public bool Muted { get; set; }

	public SoundBank()
	{
		try
		{
			Register("shoot", Sweep(880.0, 260.0, 140, 0.22, square: true));
			Register("invader", Noise(200, 0.3, 1400.0, 400.0));
			Register("player", Noise(650, 0.35, 900.0, 120.0));
			Register("ufo", Vibrato(560.0, 90.0, 300, 0.14));
			Register("ufoKill", Sweep(700.0, 120.0, 420, 0.28, square: true));
			Register("extra", Sweep(400.0, 900.0, 260, 0.24, square: true));
			Register("step0", Tone(110.0, 90, 0.26));
			Register("step1", Tone(98.0, 90, 0.26));
			Register("step2", Tone(87.0, 90, 0.26));
			Register("step3", Tone(78.0, 90, 0.26));
			Available = true;
		}
		catch (Exception)
		{
			Available = false;
		}
	}

	public void Handle(GameEvent evt)
	{
		switch (evt)
		{
		case GameEvent.PlayerShoot:
			Play("shoot");
			break;
		case GameEvent.InvaderKilled:
			Play("invader");
			break;
		case GameEvent.PlayerKilled:
			Play("player");
			break;
		case GameEvent.UfoActive:
			Play("ufo");
			break;
		case GameEvent.UfoKilled:
			Play("ufoKill");
			break;
		case GameEvent.ExtraLife:
			Play("extra");
			break;
		case GameEvent.FleetStep:
			Play(_fleetSteps[_stepIndex]);
			_stepIndex = (_stepIndex + 1) & 3;
			break;
		}
	}

	public void Play(string name)
	{
		if (Muted || !Available || !_players.TryGetValue(name, out SoundPlayer value))
		{
			return;
		}
		try
		{
			value.Play();
		}
		catch (Exception)
		{
		}
	}

	private void Register(string name, byte[] wav)
	{
		SoundPlayer soundPlayer = new SoundPlayer(new MemoryStream(wav));
		soundPlayer.Load();
		_players[name] = soundPlayer;
	}

	private static byte[] Tone(double frequency, int milliseconds, double volume)
	{
		return Render(milliseconds, (double t, double _) => Square(frequency * t) * volume * Decay(t, (double)milliseconds / 1000.0));
	}

	private static byte[] Sweep(double from, double to, int milliseconds, double volume, bool square)
	{
		double seconds = (double)milliseconds / 1000.0;
		double phase = 0.0;
		return Render(milliseconds, delegate(double t, double dt)
		{
			double num = from + (to - from) * (t / seconds);
			phase += num * dt;
			return (square ? Square(phase) : Math.Sin(phase * 2.0 * Math.PI)) * volume * Decay(t, seconds);
		});
	}

	private static byte[] Vibrato(double centre, double depth, int milliseconds, double volume)
	{
		double phase = 0.0;
		return Render(milliseconds, delegate(double t, double dt)
		{
			double num = centre + depth * Math.Sin(Math.PI * 28.0 * t);
			phase += num * dt;
			return Square(phase) * volume;
		});
	}

	private static byte[] Noise(int milliseconds, double volume, double startFreq, double endFreq)
	{
		Random rng = new Random(1234);
		double seconds = (double)milliseconds / 1000.0;
		double phase = 0.0;
		double held = 0.0;
		return Render(milliseconds, delegate(double t, double dt)
		{
			double num = startFreq + (endFreq - startFreq) * (t / seconds);
			phase += num * dt;
			if (phase >= 1.0)
			{
				phase--;
				held = rng.NextDouble() * 2.0 - 1.0;
			}
			return held * volume * Decay(t, seconds);
		});
	}

	private static double Square(double phase)
	{
		if (!(phase % 1.0 < 0.5))
		{
			return -1.0;
		}
		return 1.0;
	}

	private static double Decay(double t, double total)
	{
		double num = 1.0 - t / total;
		if (!(num <= 0.0))
		{
			return Math.Pow(num, 0.8);
		}
		return 0.0;
	}

	private static byte[] Render(int milliseconds, Func<double, double, double> sampler)
	{
		int num = 22050 * milliseconds / 1000;
		int num2 = num * 2;
		using MemoryStream memoryStream = new MemoryStream(44 + num2);
		using BinaryWriter binaryWriter = new BinaryWriter(memoryStream);
		binaryWriter.Write(new char[4] { 'R', 'I', 'F', 'F' });
		binaryWriter.Write(36 + num2);
		binaryWriter.Write(new char[4] { 'W', 'A', 'V', 'E' });
		binaryWriter.Write(new char[4] { 'f', 'm', 't', ' ' });
		binaryWriter.Write(16);
		binaryWriter.Write((short)1);
		binaryWriter.Write((short)1);
		binaryWriter.Write(22050);
		binaryWriter.Write(44100);
		binaryWriter.Write((short)2);
		binaryWriter.Write((short)16);
		binaryWriter.Write(new char[4] { 'd', 'a', 't', 'a' });
		binaryWriter.Write(num2);
		double num3 = 4.5351473922902495E-05;
		for (int i = 0; i < num; i++)
		{
			double value = sampler((double)i * num3, num3);
			value = Math.Clamp(value, -1.0, 1.0);
			int num4 = Math.Min(64, num / 8);
			if (num4 > 0)
			{
				if (i < num4)
				{
					value *= (double)i / (double)num4;
				}
				else if (i > num - num4)
				{
					value *= (double)(num - i) / (double)num4;
				}
			}
			binaryWriter.Write((short)(value * 32767.0));
		}
		binaryWriter.Flush();
		return memoryStream.ToArray();
	}

	public void Dispose()
	{
		foreach (SoundPlayer value in _players.Values)
		{
			value.Dispose();
		}
		_players.Clear();
	}
}
