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
    result_path = ART / "bing_sparse_retry.json"
    error_path = ART / "bing_sparse_retry_errors.json"
    results = json.loads(result_path.read_text()) if result_path.exists() else {}
    errors = {
        row["name"]: row
        for row in json.loads(error_path.read_text())
    } if error_path.exists() else {}
    text = INDEX.read_text()
    sections = text.split("\n## ")
    out = [sections[0]]
    added = 0
    for section in sections[1:]:
        if section.startswith("Search log"):
            out.append(section)
            continue
        lines = section.splitlines()
        name = lines[0]
        if any("Bing HTML retry" in line for line in lines):
            out.append(section)
            continue
        row = None
        if name in results:
            value = results[name]
            found = value.get("results", [])
            if found:
                samples = "; ".join(
                    f"{item.get('title')} ({item.get('url')})"
                    for item in found[:3]
                )
                row = (
                    f"| archive | Bing HTML retry | {len(found)} | 0 | "
                    f"candidate-review | Query `{value.get('query')}`; "
                    f"sample results: {truncate(samples)} |"
                )
                for idx, line in enumerate(lines):
                    if line.startswith("Status: sparse"):
                        lines[idx] = "Status: partial"
                        break
            else:
                row = (
                    f"| archive | Bing HTML retry | 0 | 0 | pending | "
                    f"Secondary query `{value.get('query')}` returned no parsed results. |"
                )
        elif name in errors:
            row = (
                f"| archive | Bing HTML retry | 0 | 0 | search-error | "
                f"Secondary query attempted but failed: "
                f"{truncate(errors[name].get('error'))} |"
            )
        if row:
            insert_at = None
            for idx, line in enumerate(lines):
                if "DuckDuckGo HTML search" in line:
                    insert_at = idx + 1
            if insert_at is None:
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
                added += 1
        out.append("\n".join(lines))
    INDEX.write_text("\n## ".join(out))
    print(f"updated research index with {added} Bing retry rows")


if __name__ == "__main__":
    main()
