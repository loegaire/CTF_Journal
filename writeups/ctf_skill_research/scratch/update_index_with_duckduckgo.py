#!/usr/bin/env python3
import json
from pathlib import Path


ROOT = Path(__file__).resolve().parents[2]
INDEX = ROOT / "ctf_skill_research" / "research_index.md"
ART = ROOT / "ctf_skill_research" / "artifacts"


def truncate(value, limit=180):
    value = " ".join(str(value).split())
    return value if len(value) <= limit else value[: limit - 3] + "..."


def main():
    results = json.loads((ART / "duckduckgo_sparse_search.json").read_text()) if (ART / "duckduckgo_sparse_search.json").exists() else {}
    errors = {row["name"]: row for row in json.loads((ART / "duckduckgo_sparse_search_errors.json").read_text())} if (ART / "duckduckgo_sparse_search_errors.json").exists() else {}
    text = INDEX.read_text()
    sections = text.split("\n## ")
    out = [sections[0]]
    for section in sections[1:]:
        if section.startswith("Search log"):
            out.append(section)
            continue
        lines = section.splitlines()
        name = lines[0]
        if any("DuckDuckGo HTML search" in line for line in lines):
            out.append(section)
            continue
        row = None
        if name in results:
            value = results[name]
            found = value.get("results", [])
            if found:
                samples = "; ".join(f"{item.get('title')} ({item.get('url')})" for item in found[:3])
                row = f"| archive | DuckDuckGo HTML search | {len(found)} | 0 | candidate-review | Query `{value.get('query')}`; sample results: {truncate(samples)} |"
                for idx, line in enumerate(lines):
                    if line.startswith("Status: sparse"):
                        lines[idx] = "Status: partial"
                        break
            else:
                row = f"| archive | DuckDuckGo HTML search | 0 | 0 | pending | Query `{value.get('query')}` returned no parsed results. |"
        elif name in errors:
            row = f"| archive | DuckDuckGo HTML search | 0 | 0 | search-error | Query attempted but failed: {truncate(errors[name].get('error'))} |"
        if row:
            insert_at = None
            for idx, line in enumerate(lines):
                if "GitHub repository search" in line:
                    insert_at = idx + 1
            if insert_at is None:
                for idx, line in enumerate(lines):
                    if "automated public-index scan" in line:
                        insert_at = idx + 1
                        break
            if insert_at is not None:
                lines.insert(insert_at, row)
        out.append("\n".join(lines))
    INDEX.write_text("\n## ".join(out))
    print("updated research index with DuckDuckGo sparse search results/errors")


if __name__ == "__main__":
    main()
