using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text.Json;
using System.Text.Json.Serialization;

namespace SpaceInvaders.Scores;

public sealed class LocalHighscoreStore
{
	private static readonly JsonSerializerOptions Options = new JsonSerializerOptions
	{
		WriteIndented = true,
		PropertyNamingPolicy = JsonNamingPolicy.CamelCase,
		Converters = { (JsonConverter)new JsonStringEnumConverter() }
	};

	private readonly object _gate = new object();

	private readonly List<HighscoreEntry> _entries = new List<HighscoreEntry>();

	private readonly int _capacity;

	public string Path { get; }

	public string? LastError { get; private set; }

	public static string DefaultDirectory
	{
		get
		{
			string text = Environment.GetFolderPath(Environment.SpecialFolder.ApplicationData);
			if (string.IsNullOrEmpty(text))
			{
				text = AppContext.BaseDirectory;
			}
			return System.IO.Path.Combine(text, "ThreatInvaders");
		}
	}

	public int PendingCount
	{
		get
		{
			lock (_gate)
			{
				return _entries.Count((HighscoreEntry e) => e.Sync == SyncState.Pending);
			}
		}
	}

	public int Count
	{
		get
		{
			lock (_gate)
			{
				return _entries.Count;
			}
		}
	}

	public int BestScore
	{
		get
		{
			lock (_gate)
			{
				return (_entries.Count != 0) ? _entries[0].Score : 0;
			}
		}
	}

	public LocalHighscoreStore(string path, int capacity = 100)
	{
		Path = path;
		_capacity = capacity;
		Load();
	}

	public IReadOnlyList<HighscoreEntry> Top(int count)
	{
		lock (_gate)
		{
			int num = Math.Min(count, _entries.Count);
			List<HighscoreEntry> list = new List<HighscoreEntry>(num);
			for (int i = 0; i < num; i++)
			{
				list.Add(_entries[i].Clone());
			}
			return list;
		}
	}

	public IReadOnlyList<HighscoreEntry> Pending()
	{
		lock (_gate)
		{
			return (from e in _entries
				where e.Sync == SyncState.Pending
				select e.Clone()).ToList();
		}
	}

	public bool Qualifies(int score, int visibleRows = 10)
	{
		if (score <= 0)
		{
			return false;
		}
		lock (_gate)
		{
			return _entries.Count < visibleRows || score > _entries[Math.Min(visibleRows, _entries.Count) - 1].Score;
		}
	}

	public void Add(HighscoreEntry entry)
	{
		lock (_gate)
		{
			_entries.RemoveAll((HighscoreEntry e) => e.Id == entry.Id);
			_entries.Add(entry.Clone());
			SortAndTrim();
			SaveLocked();
		}
	}

	public void SetSyncState(Guid id, SyncState state)
	{
		lock (_gate)
		{
			HighscoreEntry highscoreEntry = _entries.FirstOrDefault((HighscoreEntry e) => e.Id == id);
			if (highscoreEntry != null && highscoreEntry.Sync != state)
			{
				highscoreEntry.Sync = state;
				SaveLocked();
			}
		}
	}

	public void ReplaceHighscores(HighscoreStruct[] entries)
	{
		lock (_gate)
		{
			_entries.Clear();
			foreach (HighscoreStruct highscoreStruct in entries)
			{
				_entries.Add(highscoreStruct.ToEntry());
			}
			SortAndTrim();
			SaveLocked();
		}
	}

	public void Clear()
	{
		lock (_gate)
		{
			_entries.Clear();
			SaveLocked();
		}
	}

	private void SortAndTrim()
	{
		_entries.Sort(delegate(HighscoreEntry a, HighscoreEntry b)
		{
			int num = b.Score.CompareTo(a.Score);
			if (num != 0)
			{
				return num;
			}
			int num2 = a.AchievedAtUtc.CompareTo(b.AchievedAtUtc);
			return (num2 == 0) ? string.CompareOrdinal(a.PlayerName, b.PlayerName) : num2;
		});
		if (_entries.Count <= _capacity)
		{
			return;
		}
		List<HighscoreEntry> list = new List<HighscoreEntry>(_capacity);
		list.AddRange(_entries.Take(_capacity));
		foreach (HighscoreEntry item in _entries.Skip(_capacity))
		{
			if (item.Sync == SyncState.Pending)
			{
				list.Add(item);
			}
		}
		_entries.Clear();
		_entries.AddRange(list);
	}

	private void Load()
	{
		try
		{
			if (!File.Exists(Path))
			{
				return;
			}
			HighscoreFile highscoreFile = JsonSerializer.Deserialize<HighscoreFile>(File.ReadAllText(Path), Options);
			if (highscoreFile == null)
			{
				Quarantine("file deserialised to null");
				return;
			}
			if (highscoreFile.SchemaVersion > 2)
			{
				LastError = $"highscore file is schema v{highscoreFile.SchemaVersion}, this build understands v{2}";
				return;
			}
			foreach (HighscoreEntry entry in highscoreFile.Entries)
			{
				if (entry.Score >= 0)
				{
					entry.PlayerName = HighscoreEntry.Sanitise(entry.PlayerName);
					entry.Comment = HighscoreEntry.SanitiseComment(entry.Comment);
					_entries.Add(entry);
				}
			}
			SortAndTrim();
		}
		catch (JsonException ex)
		{
			Quarantine(ex.Message);
		}
		catch (Exception ex2)
		{
			LastError = ex2.Message;
		}
	}

	private void Quarantine(string reason)
	{
		LastError = "corrupt highscore file (" + reason + "); moved aside";
		try
		{
			string destFileName = $"{Path}.corrupt-{DateTime.UtcNow:yyyyMMddHHmmss}.bak";
			File.Move(Path, destFileName, overwrite: true);
		}
		catch (Exception)
		{
		}
		_entries.Clear();
	}

	private void SaveLocked()
	{
		try
		{
			string directoryName = System.IO.Path.GetDirectoryName(Path);
			if (!string.IsNullOrEmpty(directoryName))
			{
				Directory.CreateDirectory(directoryName);
			}
			HighscoreFile value = new HighscoreFile
			{
				SchemaVersion = 2,
				Entries = _entries
			};
			string text = Path + ".tmp";
			File.WriteAllText(text, JsonSerializer.Serialize(value, Options));
			File.Move(text, Path, overwrite: true);
			LastError = null;
		}
		catch (Exception ex)
		{
			LastError = "could not save scores: " + ex.Message;
		}
	}
}
