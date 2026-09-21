#!/usr/bin/env python3
import json
import subprocess
import time
from pathlib import Path
from urllib.parse import quote

import requests


ROOT = Path(__file__).resolve().parents[2]
ART = ROOT / "ctf_skill_research" / "artifacts"
HEADERS = {"User-Agent": "Mozilla/5.0 ctf skill research"}


def parse_names():
    names = []
    for line in (ROOT / "ctf_skill_research" / "research_index.md").read_text().splitlines():
        if line.startswith("## ") and line != "## Search log":
            names.append(line[3:])
    return names


def load_json(name):
    path = ART / name
    if not path.exists():
        return {}
    return json.loads(path.read_text())


def auth_headers():
    token = subprocess.check_output(["gh", "auth", "token"], text=True).strip()
    headers = dict(HEADERS)
    headers["Authorization"] = f"Bearer {token}"
    return headers


def search_repo(name, headers):
    query = f'"{name}" writeup in:name,description,readme'
    url = f"https://api.github.com/search/repositories?q={quote(query)}&per_page=5"
    response = requests.get(url, headers=headers, timeout=12)
    if response.status_code == 403:
        reset = int(response.headers.get("X-RateLimit-Reset", "0") or 0)
        wait = max(10, reset - int(time.time()) + 2)
        print(f"rate limited; sleeping {wait}s", flush=True)
        time.sleep(wait)
        response = requests.get(url, headers=headers, timeout=12)
    response.raise_for_status()
    data = response.json()
    return {
        "query": query,
        "total_count": data.get("total_count", 0),
        "items": [
            {
                "full_name": item.get("full_name"),
                "html_url": item.get("html_url"),
                "description": item.get("description"),
                "stargazers_count": item.get("stargazers_count"),
                "updated_at": item.get("updated_at"),
            }
            for item in data.get("items", [])
        ],
    }


def main():
    covered = set()
    for filename in ["ctfs_writeups_hits.json", "ctftime_event_hits.json", "ctftime_writeups_mapped.json"]:
        covered.update(load_json(filename).keys())
    names = [name for name in parse_names() if name not in covered]
    headers = auth_headers()
    out = {}
    errors = []
    for idx, name in enumerate(names, 1):
        print(f"searching {idx}/{len(names)}: {name}", flush=True)
        try:
            out[name] = search_repo(name, headers)
        except Exception as exc:
            errors.append({"name": name, "error": repr(exc)})
        if idx % 25 == 0 or idx == len(names):
            print(f"searched {idx}/{len(names)}; hits={sum(1 for v in out.values() if v.get('total_count', 0)>0)} errors={len(errors)}", flush=True)
            (ART / "github_nohit_repo_search.json").write_text(json.dumps(out, indent=2, sort_keys=True))
            (ART / "github_nohit_repo_search_errors.json").write_text(json.dumps(errors, indent=2, sort_keys=True))
        time.sleep(2.1)
    (ART / "github_nohit_repo_search.json").write_text(json.dumps(out, indent=2, sort_keys=True))
    (ART / "github_nohit_repo_search_errors.json").write_text(json.dumps(errors, indent=2, sort_keys=True))
    print("done")


if __name__ == "__main__":
    main()
