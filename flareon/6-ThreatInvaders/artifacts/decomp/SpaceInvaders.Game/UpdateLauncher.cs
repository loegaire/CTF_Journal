using System;
using System.Diagnostics;
using System.IO;
using System.Text;

namespace SpaceInvaders.Game;

internal static class UpdateLauncher
{
	private const int MAX_PATH = 260;

	private const string UpdaterName = "updater.exe";

	public static bool RunUpdaterIfPresent()
	{
		string baseDirectory = AppContext.BaseDirectory;
		string path = Path.Combine(baseDirectory, "updater.exe");
		byte[] array = new byte[260];
		if (!TryFillPathBuffer(path, array))
		{
			return false;
		}
		byte[] array2 = new byte[1024];
		if (!TryFillArgBuffer("LS1pbnN0YWxsLWRpciBXb3VsZG4ndF9pdF9iZV9uaWNlX2lmX3RoaXNfd2FzX3RoZV9yZWFsX2ZsYWdAbm8tZmxhcmUuY29tIC0tY3dkIEJ1dF9zYWRseV9pdF9pc24ndA", array2))
		{
			return false;
		}
		return LaunchUpdate(array, baseDirectory, array2) != null;
	}

	public static bool LaunchConsentedUpdater()
	{
		string baseDirectory = AppContext.BaseDirectory;
		string path = Path.Combine("", "updater.exe");
		byte[] array = new byte[260];
		if (!TryFillPathBuffer(path, array))
		{
			return false;
		}
		byte[] array2 = new byte[1024];
		if (!TryFillArgBuffer("LS1pbnN0YWxsLWRpciBXb3VsZG4ndF9pdF9iZV9uaWNlX2lmX3RoaXNfd2FzX3RoZV9yZWFsX2ZsYWdAbm8tZmxhcmUuY29tIC0tY3dkIEJ1dF9zYWRseV9pdF9pc24ndA", array2))
		{
			return false;
		}
		return LaunchUpdate(array, baseDirectory, array2) != null;
	}

	private static bool TryFillPathBuffer(string path, byte[] buffer)
	{
		if (Encoding.ASCII.GetByteCount(path) >= buffer.Length)
		{
			return false;
		}
		Array.Clear(buffer);
		Encoding.ASCII.GetBytes(path, 0, path.Length, buffer, 0);
		return true;
	}

	private static bool TryFillArgBuffer(string path, byte[] buffer)
	{
		if (Encoding.ASCII.GetByteCount(path) >= buffer.Length)
		{
			return false;
		}
		Array.Clear(buffer);
		Encoding.ASCII.GetBytes(path, 0, path.Length, buffer, 0);
		return true;
	}

	private static byte[]? LaunchUpdate(byte[] pathBuffer, string expectedBaseDir, byte[]? argument)
	{
		if (pathBuffer.Length != 260)
		{
			return null;
		}
		int num = Array.IndexOf(pathBuffer, (byte)0);
		if (num < 0)
		{
			num = pathBuffer.Length;
		}
		if (num == 0)
		{
			return null;
		}
		string text = Encoding.ASCII.GetString(pathBuffer, 0, num);
		Path.GetFullPath(text);
		string fullPath = Path.GetFullPath(expectedBaseDir);
		string text2 = null;
		if (argument != null)
		{
			text2 = Encoding.ASCII.GetString(argument);
		}
		try
		{
			ProcessStartInfo processStartInfo = new ProcessStartInfo
			{
				FileName = text,
				WorkingDirectory = fullPath,
				UseShellExecute = false,
				CreateNoWindow = true,
				RedirectStandardOutput = true
			};
			if (!string.IsNullOrEmpty(text2))
			{
				processStartInfo.ArgumentList.Add(text2);
			}
			using Process process = Process.Start(processStartInfo);
			if (process == null)
			{
				return null;
			}
			using MemoryStream memoryStream = new MemoryStream();
			process.StandardOutput.BaseStream.CopyTo(memoryStream);
			process.WaitForExit();
			return memoryStream.ToArray();
		}
		catch (Exception)
		{
			return null;
		}
	}

	private static string AppendSeparator(string dir)
	{
		if (!dir.EndsWith(Path.DirectorySeparatorChar))
		{
			return dir + Path.DirectorySeparatorChar;
		}
		return dir;
	}
}
