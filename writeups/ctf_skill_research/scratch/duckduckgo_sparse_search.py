#!/usr/bin/env python3
import json
import time
from pathlib import Path
from urllib.parse import parse_qs, quote, unquote, urlparse

import requests
from bs4 import BeautifulSoup


ROOT = Path(__file__).resolve().parents[2]
ART = ROOT / "ctf_skill_research" / "artifacts"
HEADERS = {"User-Agent": "Mozilla/5.0 ctf skill research"}


def sparse_names():
    names = []
    current = None
    for line in (ROOT / "ctf_skill_research" / "research_index.md").read_text().splitlines():
        if line.startswith("## ") and line != "## Search log":
            current = line[3:]
        elif line.startswith("Status: sparse") and current:
            names.append(current)
    return names


def unwrap_duck_url(href):
    if not href:
        return ""
    if href.startswith("//"):
        href = "https:" + href
    parsed = urlparse(href)
    if "duckduckgo.com" in parsed.netloc:
        qs = parse_qs(parsed.query)
        if "uddg" in qs:
            return unquote(qs["uddg"][0])
    return href


def search(name):
    query = f'"{name}" writeup'
    url = "https://html.duckduckgo.com/html/?q=" + quote(query)
    response = requests.get(url, headers=HEADERS, timeout=6)
    response.raise_for_status()
    soup = BeautifulSoup(response.text, "html.parser")
    results = []
    for result in soup.select(".result")[:8]:
        a = result.select_one(".result__a")
        snip = result.select_one(".result__snippet")
        if not a:
            continue
        results.append(
            {
                "title": a.get_text(" ", strip=True),
                "url": unwrap_duck_url(a.get("href")),
                "snippet": snip.get_text(" ", strip=True) if snip else "",
            }
        )
    return {"query": query, "results": results}


def main():
    names = sparse_names()
    out_path = ART / "duckduckgo_sparse_search.json"
    err_path = ART / "duckduckgo_sparse_search_errors.json"
    out = json.loads(out_path.read_text()) if out_path.exists() else {}
    errors = json.loads(err_path.read_text()) if err_path.exists() else []
    for idx, name in enumerate(names, 1):
        if name in out or any(err.get("name") == name for err in errors):
            continue
        print(f"ddg {idx}/{len(names)}: {name}", flush=True)
        try:
            out[name] = search(name)
        except Exception as exc:
            errors.append({"name": name, "error": repr(exc)})
        if idx % 5 == 0 or idx == len(names):
            hit_count = sum(1 for value in out.values() if value.get("results"))
            print(f"checkpoint {idx}/{len(names)} hits={hit_count} errors={len(errors)}", flush=True)
            out_path.write_text(json.dumps(out, indent=2, sort_keys=True))
            err_path.write_text(json.dumps(errors, indent=2, sort_keys=True))
        time.sleep(1.0)
    out_path.write_text(json.dumps(out, indent=2, sort_keys=True))
    err_path.write_text(json.dumps(errors, indent=2, sort_keys=True))
    print("done")


if __name__ == "__main__":
    main()
