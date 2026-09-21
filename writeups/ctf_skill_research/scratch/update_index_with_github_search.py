#!/usr/bin/env python3
import json
from pathlib import Path


ROOT = Path(__file__).resolve().parents[2]
INDEX = ROOT / "ctf_skill_research" / "research_index.md"
ART = ROOT / "ctf_skill_research" / "artifacts"


def truncate(value, limit=180):
    value = " ".join(str(value).split())
    if len(value) <= limit:
        return value
    return value[: limit - 3] + "..."


def main():
    path = ART / "github_nohit_repo_search.json"
    data = json.loads(path.read_text()) if path.exists() else {}
    text = INDEX.read_text()
    sections = text.split("\n## ")
    new_sections = [sections[0]]
    for section in sections[1:]:
        if section.startswith("Search log"):
            new_sections.append(section)
            continue
        lines = section.splitlines()
        name = lines[0]
        result = data.get(name)
        if not result or any("GitHub repository search" in line for line in lines):
            new_sections.append(section)
            continue
        total = result.get("total_count", 0)
        if total:
            items = result.get("items", [])
            samples = "; ".join(f"{item.get('full_name')} ({item.get('html_url')})" for item in items[:3])
            row = f"| archive | GitHub repository search | {total} | 0 | candidate-review | Authenticated search query `{result.get('query')}`; sample repos: {truncate(samples)} |"
            for idx, line in enumerate(lines):
                if line.startswith("Status: sparse"):
                    lines[idx] = "Status: partial"
                    break
        else:
            row = f"| archive | GitHub repository search | 0 | 0 | pending | Authenticated search query `{result.get('query')}` found no repositories. |"
        insert_at = None
        for idx, line in enumerate(lines):
            if "automated public-index scan" in line:
                insert_at = idx + 1
                break
        if insert_at is None:
            for idx, line in enumerate(lines):
                if line.startswith("|---|"):
                    insert_at = idx + 1
                    break
        if insert_at is not None:
            lines.insert(insert_at, row)
        new_sections.append("\n".join(lines))
    INDEX.write_text("\n## ".join(new_sections))
    print("updated research index with GitHub repository search results")


if __name__ == "__main__":
    main()
