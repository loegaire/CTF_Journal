#!/usr/bin/env python3
from pathlib import Path


ROOT = Path(__file__).resolve().parents[2]
CTF_MD = ROOT / "CTF.md"
OUT = ROOT / "ctf_skill_research" / "research_index.md"


def parse_ctfs():
    lines = [line.strip() for line in CTF_MD.read_text(errors="replace").splitlines()]
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
        if not following:
            continue
        if following[0] not in {"Official URL", "no logo"} and not following[0].startswith("Total events:"):
            continue

        total_events = ""
        avg_weight = ""
        for value in following[:5]:
            if value.startswith("Total events:"):
                total_events = value.split(":", 1)[1].strip()
            elif value.startswith("Avg weight:"):
                avg_weight = value.split(":", 1)[1].strip()
        records.append((line, total_events, avg_weight))

    seen = set()
    unique = []
    for record in records:
        if record[0] not in seen:
            seen.add(record[0])
            unique.append(record)
    return unique


def main():
    records = parse_ctfs()
    lines = [
        "# CTF Writeup Research Index",
        "",
        f"Parsed CTF entries from `CTF.md`: {len(records)}.",
        "",
        "Coverage note: `CTF.md` is a full CTFtime-style index, so seeded entries begin as sparse until online research updates them. Do not interpret an untouched sparse section as complete research.",
        "",
    ]
    for name, total_events, avg_weight in records:
        detail = []
        if total_events:
            detail.append(f"CTFtime total events: {total_events}")
        if avg_weight:
            detail.append(f"average weight: {avg_weight}")
        notes = "; ".join(detail) if detail else "Parsed from CTF.md; online research pending."
        lines.extend(
            [
                f"## {name}",
                "",
                "Status: sparse",
                "",
                "| Category | Challenge | Sources found | Sources used | Skill target | Notes |",
                "|---|---|---:|---:|---|---|",
                f"| series | untriaged | 0 | 0 | pending | {notes} |",
                "",
            ]
        )

    lines.extend(
        [
            "## Search log",
            "",
            "| CTF | Query | Useful? | Notes |",
            "|---|---|---|---|",
        ]
    )
    OUT.write_text("\n".join(lines) + "\n")
    print(f"wrote {OUT} with {len(records)} CTF entries")


if __name__ == "__main__":
    main()
