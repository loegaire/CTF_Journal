#!/usr/bin/env python3
import json
import re
import time
from pathlib import Path
from urllib.parse import urljoin

import requests
from bs4 import BeautifulSoup


ROOT = Path(__file__).resolve().parents[2]
ART = ROOT / "ctf_skill_research" / "artifacts"
HEADERS = {"User-Agent": "Mozilla/5.0 ctf skill research"}

TOPICS = {
    "web-xss": ["xss", "bot", "csp"],
    "web-sqli": ["sqli", "sqlinjection", "sql"],
    "web-ssti": ["ssti", "template"],
    "web-ssrf": ["ssrf"],
    "web-jwt": ["jwt", "jwk", "jku"],
    "web-lfi": ["lfi", "file"],
    "pwn-heap": ["heap", "tcache", "malloc", "free"],
    "pwn-rop-ret2libc": ["rop", "ret2libc", "bof"],
    "pwn-format-string": ["format-string", "format"],
    "pwn-shellcode": ["shellcode", "seccomp"],
    "pwn-kernel": ["kernel"],
    "forensics-pcap": ["pcap", "wireshark", "network"],
    "forensics-memory": ["volatility", "memory"],
    "forensics-stego": ["stego", "steganography", "image"],
    "mobile-android": ["android", "apk"],
    "crypto-rsa": ["rsa"],
    "crypto-aes-block": ["aes", "cbc", "gcm", "padding"],
    "crypto-xor-stream": ["xor", "lcg", "random"],
    "misc-jail": ["jail", "pyjail", "bash"],
    "misc-z3": ["z3", "constraint"],
}


def row_text(row):
    return f"{row.get('event','')} {row.get('task','')} {row.get('tags','')}".lower()


def score(row, terms):
    text = row_text(row)
    return sum(text.count(term.lower()) for term in terms)


def extract_original(url):
    response = requests.get(url, headers=HEADERS, timeout=25)
    response.raise_for_status()
    soup = BeautifulSoup(response.text, "html.parser")
    for a in soup.find_all("a"):
        label = a.get_text(" ", strip=True).lower()
        href = a.get("href") or ""
        if "original writeup" in label and href:
            return urljoin(url, href)
    # Some CTFtime writeup pages inline the writeup with external technical links but no
    # explicit original label.
    for a in soup.find_all("a"):
        href = a.get("href") or ""
        if href.startswith("http") and "ctftime.org" not in href and "transdata" not in href:
            return href
    return ""


def main():
    rows = json.loads((ART / "ctftime_writeups_rows.json").read_text())
    out = {}
    for topic, terms in TOPICS.items():
        candidates = [row for row in rows if score(row, terms) > 0 and row.get("writeup_url")]
        candidates.sort(key=lambda row: score(row, terms), reverse=True)
        sources = []
        seen = set()
        for row in candidates[:30]:
            original = ""
            try:
                original = extract_original(row["writeup_url"])
            except Exception as exc:
                original = f"ERROR: {exc!r}"
            if original and original not in seen and not original.startswith("ERROR:"):
                seen.add(original)
                sources.append(
                    {
                        "ctftime": row["writeup_url"],
                        "original": original,
                        "event": row["event"],
                        "task": row["task"],
                        "tags": row["tags"],
                    }
                )
            print(f"{topic}: checked {row['writeup_url']} -> {original}", flush=True)
            if len(sources) >= 8:
                break
            time.sleep(0.2)
        out[topic] = sources
    (ART / "topic_original_sources.json").write_text(json.dumps(out, indent=2, sort_keys=True))
    print("wrote topic_original_sources.json")


if __name__ == "__main__":
    main()
