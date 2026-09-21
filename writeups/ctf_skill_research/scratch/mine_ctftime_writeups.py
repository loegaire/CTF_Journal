#!/usr/bin/env python3
import json
import re
import time
from collections import defaultdict
from concurrent.futures import ThreadPoolExecutor, as_completed
from pathlib import Path
from urllib.parse import urljoin

import requests
from bs4 import BeautifulSoup


ROOT = Path(__file__).resolve().parents[2]
OUT_DIR = ROOT / "ctf_skill_research" / "artifacts"
OUT_DIR.mkdir(parents=True, exist_ok=True)
HEADERS = {"User-Agent": "Mozilla/5.0 ctf skill research"}


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
    names = []
    for pos, (_, line) in enumerate(nonempty):
        if line in skip or line.startswith("Total events:") or line.startswith("Avg weight:"):
            continue
        following = [value for _, value in nonempty[pos + 1 : pos + 6]]
        if following and (following[0] in {"Official URL", "no logo"} or following[0].startswith("Total events:")):
            names.append(line)
    seen = set()
    result = []
    for name in names:
        if name not in seen:
            seen.add(name)
            result.append(name)
    return result


def slugify(value):
    value = value.lower().replace("&", "and")
    value = re.sub(r"[^a-z0-9]+", "-", value)
    return value.strip("-")


def aliases_for(name):
    aliases = {slugify(name)}
    no_ctf = re.sub(r"\bctf\b", "", name, flags=re.I)
    no_stage = re.sub(r"\b(qualification|qualifier|quals|finals|final|round|preliminary)\b", "", no_ctf, flags=re.I)
    for value in [no_ctf, no_stage]:
        slug = slugify(value)
        if slug and slug not in {"ctf", "the", "and"} and len(slug) >= 4:
            aliases.add(slug)
    return aliases


def slug_matches(candidate, aliases):
    c = f"-{candidate}-"
    for alias in aliases:
        if candidate == alias or candidate.startswith(alias + "-"):
            return True
        if len(alias) >= 7 and f"-{alias}-" in c:
            return True
    return False


def parse_writeup_page(html, page):
    soup = BeautifulSoup(html, "html.parser")
    rows = []
    for tr in soup.find_all("tr"):
        cells = [cell.get_text(" ", strip=True) for cell in tr.find_all("td")]
        if len(cells) < 5:
            continue
        links = [urljoin("https://ctftime.org", a.get("href")) for a in tr.find_all("a") if a.get("href")]
        event_url = next((url for url in links if "/event/" in url), "")
        task_url = next((url for url in links if "/task/" in url), "")
        writeup_url = next((url for url in links if "/writeup/" in url), "")
        rows.append(
            {
                "page": page,
                "event": cells[0],
                "task": cells[1],
                "tags": cells[2],
                "author_team": cells[3],
                "event_url": event_url,
                "task_url": task_url,
                "writeup_url": writeup_url,
            }
        )
    pages = []
    for a in soup.find_all("a"):
        href = a.get("href") or ""
        match = re.search(r"page=(\d+)", href)
        if match:
            pages.append(int(match.group(1)))
    return rows, pages


def fetch_all_writeups(max_pages=None):
    last_page = max_pages or find_last_page()
    print(f"last page: {last_page}", flush=True)

    all_rows = []
    errors = []
    with ThreadPoolExecutor(max_workers=8) as pool:
        futures = {pool.submit(fetch_page, page): page for page in range(1, last_page + 1)}
        completed = 0
        for future in as_completed(futures):
            page = futures[future]
            completed += 1
            try:
                rows = future.result()
                all_rows.extend(rows)
            except Exception as exc:
                errors.append({"page": page, "error": repr(exc)})
            if completed % 50 == 0 or completed == last_page:
                print(f"completed {completed}/{last_page}; rows={len(all_rows)} errors={len(errors)}", flush=True)

    if errors:
        (OUT_DIR / "ctftime_writeups_errors.json").write_text(json.dumps(errors, indent=2, sort_keys=True))
    return sorted(all_rows, key=lambda row: (row["page"], row["event"], row["task"]))


def page_exists(page):
    response = requests.get(f"https://ctftime.org/writeups?page={page}", headers=HEADERS, timeout=15)
    return response.status_code == 200 and "CTFtime.org / Writeups" in response.text and parse_writeup_page(response.text, page)[0]


def find_last_page():
    low = 1
    high = 1
    while page_exists(high):
        print(f"page boundary probe ok: {high}", flush=True)
        low = high
        high *= 2
        time.sleep(0.1)
    while low + 1 < high:
        mid = (low + high) // 2
        if page_exists(mid):
            print(f"page boundary probe ok: {mid}", flush=True)
            low = mid
        else:
            print(f"page boundary probe missing: {mid}", flush=True)
            high = mid
        time.sleep(0.1)
    return low


def fetch_page(page):
    last_error = None
    for attempt in range(3):
        try:
            response = requests.get(f"https://ctftime.org/writeups?page={page}", headers=HEADERS, timeout=35)
            response.raise_for_status()
            rows, _ = parse_writeup_page(response.text, page)
            return rows
        except Exception as exc:
            last_error = exc
            time.sleep(0.5 * (attempt + 1))
    raise last_error


def map_rows_to_ctfs(ctf_names, rows):
    aliases = {name: aliases_for(name) for name in ctf_names}
    mapped = defaultdict(list)
    for row in rows:
        event_slug = slugify(row["event"])
        for name, alias_set in aliases.items():
            if slug_matches(event_slug, alias_set):
                mapped[name].append(row)
                break
    return mapped


def main():
    rows = fetch_all_writeups()
    (OUT_DIR / "ctftime_writeups_rows.json").write_text(json.dumps(rows, indent=2, sort_keys=True))
    mapped = map_rows_to_ctfs(parse_ctf_md(), rows)
    (OUT_DIR / "ctftime_writeups_mapped.json").write_text(json.dumps(mapped, indent=2, sort_keys=True))
    print(f"writeup rows: {len(rows)}")
    print(f"mapped CTF names: {len(mapped)}")


if __name__ == "__main__":
    main()
