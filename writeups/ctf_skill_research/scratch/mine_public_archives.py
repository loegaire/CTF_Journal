#!/usr/bin/env python3
import json
import re
import time
from collections import defaultdict
from pathlib import Path
from urllib.parse import urljoin

import requests


ROOT = Path(__file__).resolve().parents[2]
OUT_DIR = ROOT / "ctf_skill_research" / "artifacts"
OUT_DIR.mkdir(parents=True, exist_ok=True)

HEADERS = {"User-Agent": "Mozilla/5.0 ctf skill research"}
GITHUB_API = "https://api.github.com"


def parse_ctf_md():
    lines = [line.strip() for line in (ROOT / "CTF.md").read_text(errors="replace").splitlines()]
    nonempty = [(idx, line) for idx, line in enumerate(lines) if line]
    skip = {
        "CTFtime.org",
        "CTFs",
        "Upcoming",
        "Archive",
        "Calendar",
        "Teams",
        "FAQ",
        "Contact us",
        "About",
        "Timezone: UTC",
        "hajjilla",
        "Home / CTFs",
        "Official URL",
        "no logo",
        "‹‹ Prev",
        "Next ››",
    }
    records = []
    for pos, (_, line) in enumerate(nonempty):
        if line in skip or line.startswith("Total events:") or line.startswith("Avg weight:"):
            continue
        following = [value for _, value in nonempty[pos + 1 : pos + 6]]
        if following and (following[0] in {"Official URL", "no logo"} or following[0].startswith("Total events:")):
            records.append(line)
    seen = set()
    result = []
    for name in records:
        if name not in seen:
            seen.add(name)
            result.append(name)
    return result


def slugify(value):
    value = value.lower().replace("&", "and")
    value = re.sub(r"[^a-z0-9]+", "-", value)
    return value.strip("-")


def ctf_aliases(name):
    aliases = {name, name.lower(), slugify(name)}
    normalized = re.sub(r"\bctf\b", "", name, flags=re.I).strip()
    if normalized:
        aliases.add(normalized)
        aliases.add(slugify(normalized))
    aliases.add(slugify(re.sub(r"\b(qualification|qualifier|quals|finals|final round|preliminary)\b", "", name, flags=re.I)))
    return {a for a in aliases if a and a not in {"ctf", "the", "and"}}


def slug_matches(candidate, aliases):
    c = f"-{candidate}-"
    for alias in aliases:
        a = slugify(alias)
        if len(a) < 4:
            continue
        if candidate == a or candidate.startswith(a + "-"):
            return True
        if len(a) >= 7 and f"-{a}-" in c:
            return True
    return False


def github_get(url):
    response = requests.get(url, headers=HEADERS, timeout=30)
    response.raise_for_status()
    return response.json()


def list_ctfs_writeup_repos():
    repos = []
    page = 1
    while True:
        url = f"{GITHUB_API}/orgs/ctfs/repos?per_page=100&page={page}"
        data = github_get(url)
        if not data:
            break
        repos.extend(repo for repo in data if re.fullmatch(r"write-ups-\d{4}", repo["name"]))
        page += 1
        time.sleep(0.25)
    return sorted(repos, key=lambda r: r["name"])


def tree_for_repo(full_name, default_branch):
    url = f"{GITHUB_API}/repos/{full_name}/git/trees/{default_branch}?recursive=1"
    return github_get(url).get("tree", [])


def mine_ctfs_org(ctf_names):
    aliases = {name: ctf_aliases(name) for name in ctf_names}
    hits = defaultdict(list)
    errors = []
    repos = list_ctfs_writeup_repos()
    for repo in repos:
        try:
            tree = tree_for_repo(repo["full_name"], repo["default_branch"])
        except Exception as exc:
            errors.append({"repo": repo["full_name"], "error": repr(exc)})
            continue
        top_dirs = sorted({item["path"].split("/", 1)[0] for item in tree if item["type"] == "tree" and "/" not in item["path"]})
        readmes = [item for item in tree if item["type"] == "blob" and item["path"].lower().endswith(("readme.md", ".md"))]
        for name, alias_set in aliases.items():
            matched_dirs = []
            for directory in top_dirs:
                dslug = slugify(directory)
                if slug_matches(dslug, alias_set):
                    matched_dirs.append(directory)
            if not matched_dirs:
                continue
            challenge_files = []
            for item in readmes:
                top = item["path"].split("/", 1)[0]
                if top in matched_dirs:
                    challenge_files.append(item["path"])
            hits[name].append(
                {
                    "source": "ctfs/write-ups",
                    "repo": repo["full_name"],
                    "url": repo["html_url"],
                    "matched_dirs": matched_dirs[:50],
                    "readme_count": len(challenge_files),
                    "sample_readmes": challenge_files[:30],
                }
            )
    return hits, errors


def mine_ctftime_events(start_year=2011, end_year=2026):
    events = []
    for year in range(start_year, end_year + 1):
        start = int(time.mktime(time.strptime(f"{year}-01-01", "%Y-%m-%d")))
        finish = int(time.mktime(time.strptime(f"{year + 1}-01-01", "%Y-%m-%d")))
        url = f"https://ctftime.org/api/v1/events/?limit=1000&start={start}&finish={finish}"
        try:
            data = requests.get(url, headers=HEADERS, timeout=45).json()
        except Exception as exc:
            events.append({"year": year, "error": repr(exc), "events": []})
            continue
        events.append({"year": year, "events": data})
        time.sleep(0.4)
    return events


def map_ctftime_events(ctf_names, events_by_year):
    aliases = {name: ctf_aliases(name) for name in ctf_names}
    hits = defaultdict(list)
    for bucket in events_by_year:
        for event in bucket.get("events", []):
            title = event.get("title", "")
            slug = slugify(title)
            for name, alias_set in aliases.items():
                if slug_matches(slug, alias_set):
                    hits[name].append(
                        {
                            "source": "ctftime-api",
                            "year": bucket["year"],
                            "event_id": event.get("id"),
                            "title": title,
                            "ctftime_url": event.get("ctftime_url"),
                            "weight": event.get("weight"),
                        }
                    )
                    break
    return hits


def main():
    names = parse_ctf_md()
    ctfs_hits, ctfs_errors = mine_ctfs_org(names)
    (OUT_DIR / "ctfs_writeups_hits.json").write_text(json.dumps(ctfs_hits, indent=2, sort_keys=True))
    (OUT_DIR / "ctfs_writeups_errors.json").write_text(json.dumps(ctfs_errors, indent=2, sort_keys=True))
    print(f"ctfs/write-ups hits: {len(ctfs_hits)} CTF names")
    print(f"ctfs/write-ups errors: {len(ctfs_errors)} repos")

    events = mine_ctftime_events()
    (OUT_DIR / "ctftime_events_2011_2026.json").write_text(json.dumps(events, indent=2, sort_keys=True))
    event_hits = map_ctftime_events(names, events)
    (OUT_DIR / "ctftime_event_hits.json").write_text(json.dumps(event_hits, indent=2, sort_keys=True))
    print(f"ctftime event hits: {len(event_hits)} CTF names")


if __name__ == "__main__":
    main()
