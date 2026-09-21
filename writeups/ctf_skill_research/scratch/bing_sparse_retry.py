#!/usr/bin/env python3
import json
import time
from pathlib import Path
from urllib.parse import quote

import requests
from bs4 import BeautifulSoup


ROOT = Path(__file__).resolve().parents[2]
ART = ROOT / "ctf_skill_research" / "artifacts"
HEADERS = {
    "User-Agent": (
        "Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 "
        "Chrome/124.0 Safari/537.36"
    )
}


def failed_duck_names():
    errors_path = ART / "duckduckgo_sparse_search_errors.json"
    errors = json.loads(errors_path.read_text()) if errors_path.exists() else []
    return [entry["name"] for entry in errors if entry.get("name")]


def search(name):
    query = f'"{name}" writeup'
    url = "https://www.bing.com/search?q=" + quote(query)
    response = requests.get(url, headers=HEADERS, timeout=12)
    response.raise_for_status()
    soup = BeautifulSoup(response.text, "html.parser")
    results = []
    for result in soup.select("li.b_algo")[:8]:
        a = result.find("a", href=True)
        caption = result.select_one(".b_caption p")
        if not a:
            continue
        results.append(
            {
                "title": a.get_text(" ", strip=True),
                "url": a["href"],
                "snippet": caption.get_text(" ", strip=True) if caption else "",
            }
        )
    return {"query": query, "results": results}


def main():
    names = failed_duck_names()
    out_path = ART / "bing_sparse_retry.json"
    err_path = ART / "bing_sparse_retry_errors.json"
    out = json.loads(out_path.read_text()) if out_path.exists() else {}
    errors = json.loads(err_path.read_text()) if err_path.exists() else []
    errored = {entry.get("name") for entry in errors}
    for idx, name in enumerate(names, 1):
        if name in out or name in errored:
            continue
        print(f"bing {idx}/{len(names)}: {name}", flush=True)
        try:
            out[name] = search(name)
        except Exception as exc:
            errors.append({"name": name, "error": repr(exc)})
            errored.add(name)
        if idx % 10 == 0 or idx == len(names):
            hits = sum(1 for value in out.values() if value.get("results"))
            print(f"checkpoint {idx}/{len(names)} hits={hits} errors={len(errors)}", flush=True)
            out_path.write_text(json.dumps(out, indent=2, sort_keys=True))
            err_path.write_text(json.dumps(errors, indent=2, sort_keys=True))
        time.sleep(0.35)
    out_path.write_text(json.dumps(out, indent=2, sort_keys=True))
    err_path.write_text(json.dumps(errors, indent=2, sort_keys=True))
    print("done")


if __name__ == "__main__":
    main()
