#!/usr/bin/env python3
import json
from pathlib import Path


ROOT = Path(__file__).resolve().parents[2]
INDEX = ROOT / "ctf_skill_research" / "research_index.md"
ART = ROOT / "ctf_skill_research" / "artifacts"


def load_json(name):
    path = ART / name
    if not path.exists():
        return {}
    return json.loads(path.read_text())


def truncate(value, limit=180):
    value = " ".join(str(value).split())
    if len(value) <= limit:
        return value
    return value[: limit - 3] + "..."


def mined_rows(name, ctfs_hits, event_hits, writeup_hits):
    rows = []
    if name in event_hits:
        events = event_hits[name]
        samples = ", ".join(f"{e.get('title')} ({e.get('ctftime_url')})" for e in events[:3])
        rows.append(
            f"| archive | CTFtime event index | {len(events)} | 0 | coverage-index | Automated strict match; sample events: {truncate(samples)} |"
        )
    if name in writeup_hits:
        writeups = writeup_hits[name]
        tag_counts = {}
        for row in writeups:
            for tag in str(row.get("tags", "")).split():
                tag_counts[tag] = tag_counts.get(tag, 0) + 1
        tags = ", ".join(tag for tag, _ in sorted(tag_counts.items(), key=lambda kv: -kv[1])[:8])
        samples = ", ".join(f"{row.get('task')} ({row.get('writeup_url')})" for row in writeups[:3])
        rows.append(
            f"| writeup-index | CTFtime writeups | {len(writeups)} | 0 | candidate-review | Automated writeup rows; common tags: {truncate(tags or 'none')}; sample: {truncate(samples)} |"
        )
    if name in ctfs_hits:
        entries = ctfs_hits[name]
        readmes = sum(entry.get("readme_count", 0) for entry in entries)
        samples = []
        for entry in entries[:3]:
            samples.append(f"{entry.get('repo')}:{','.join(entry.get('matched_dirs', [])[:2])}")
        rows.append(
            f"| archive | ctfs/write-ups GitHub archive | {readmes} | 0 | candidate-review | Automated repo README hits across {len(entries)} repos; sample: {truncate('; '.join(samples))} |"
        )
    if not rows:
        rows.append(
            "| archive | automated public-index scan | 0 | 0 | pending | No CTFtime event, CTFtime writeup, or `ctfs/write-ups-*` hit from automated strict matching; broader web/GitHub searches still required before final no-useful status. |"
        )
    return rows


def main():
    ctfs_hits = load_json("ctfs_writeups_hits.json")
    event_hits = load_json("ctftime_event_hits.json")
    writeup_hits = load_json("ctftime_writeups_mapped.json")
    text = INDEX.read_text()
    sections = text.split("\n## ")
    new_sections = [sections[0]]
    for section in sections[1:]:
        if section.startswith("Search log"):
            new_sections.append(section)
            continue
        lines = section.splitlines()
        name = lines[0]
        rows = mined_rows(name, ctfs_hits, event_hits, writeup_hits)
        already_mined = any("coverage-index" in line or "candidate-review" in line or "automated public-index scan" in line for line in lines)
        if already_mined:
            new_sections.append(section)
            continue
        if rows and not rows[0].startswith("| archive | automated public-index scan | 0"):
            for idx, line in enumerate(lines):
                if line.startswith("Status: sparse"):
                    lines[idx] = "Status: partial"
                    break
        insert_at = None
        for idx, line in enumerate(lines):
            if line.startswith("| series | untriaged |"):
                insert_at = idx + 1
                break
        if insert_at is None:
            for idx, line in enumerate(lines):
                if line.startswith("|---|"):
                    insert_at = idx + 1
                    break
        if insert_at is None:
            new_sections.append("\n".join(lines))
            continue
        lines[insert_at:insert_at] = rows
        new_sections.append("\n".join(lines))
    INDEX.write_text("\n## ".join(new_sections))
    print("updated research index with mined public coverage")


if __name__ == "__main__":
    main()
