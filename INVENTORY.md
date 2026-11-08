# CTF Journal Inventory

Generated 2026-11-08. Canonical record of what this journal contains, what is
published to the Field Archive site, and how the publishing pipeline works.

## 1. Content inventory (per event)

`files` = all files, `md` = markdown files, `notes` = files named
`notes*.md` / `*writeup*.md` / `wu.md`.

| Event dir | files | md | notes | Published articles |
|---|---|---|---|---|
| cscv | 3328 | 28 | 14 | 14 |
| flareon | 1500 | 12 | 10 | 10 |
| hicybercon | 517 | 10 | 9 | 9 |
| writeups/ (multi-event collection) | 158 | 132 | 3 | 15 authored + skills KB |
| htb-cymbal | 41 | 3 | 3 | 3 |
| upctf | 26 | 3 | 2 | 3 |
| crux | 71 | 2 | 1 | 1 |
| HTB | 547 | 1 | 1 | 1 |
| nns | 5 | 1 | 1 | 1 |
| dreamhack | 141 | 1 | 0 | 1 |
| crackme | 3140 | 3 | 0 | 0 (support notes only) |
| plaidCTF | 440 | 11 | 0 | 0 (challenge READMEs, no `## Solution`) |
| knowledge | 6 | 6 | 0 | 0 (index READMEs; see §4) |
| byuctf | 12148 | 0 | 0 | 0 (Java/XML handout tree) |
| DownUnderCTF, UTCTF, picoCTF, BKSEC*, 0ctf, ICC, sekai2026, and ~24 other event dirs | ~700 | 0 | 0 | 0 (handouts/binaries only, no notes ever added) |

Totals: 215 markdown files, of which **59 are authored writeup/notes entries**
(all 59 published), 35 are support files (manifests, indexes, READMEs without
solutions), and the rest are skills-KB files covered in §3.

**Key fact:** most event directories contain only challenge handouts and never
had a `notes.md`/`writeup.md`. Authored writeups concentrate in `cscv/`,
`flareon/`, `hicybercon/`, and the top-level `writeups/` collection
(`(BKSEC-TTV) *.md`, `(UTCTF) *.md`, `(Article) *.md`, etc.).

## 2. Nothing tracked was ever lost

- Git history (all commits, all branches) contains **209 distinct `.md` paths
  ever added**; all 209 exist on disk today. Zero missing.
- The accidental working-tree deletion of 2026-11-08 removed 17,167 tracked
  files; all were restored from history in commit `e7c2666b`.
- The artifact cleanup (same day, commit `b77080e` line) removed only
  untracked solver artifacts: `scratch/`, `work/`, wine prefixes, `recovered/`,
  `tools/`, `dumps/`, volatility output, extracted git trees. No `notes.md`
  or `writeup.md` was deleted.
- Large raw handouts (`mem.raw` 4 GB, `resurrection.raw` 1 GB, `*.dmp`,
  `*.pcap`) are intentionally local-only (gitignored; GitHub blocks >100 MB).

## 3. Agentic skills (published 2026-11-08)

- Source: `writeups/ctf_skill_research/staging_skills/` (18 live skills,
  e.g. `web-jwt-auth-bypass`, `pwn-ret2libc-rop-chain`) and
  `writeups/ctf_skill_research/backups/broad-ctf-skills-20260603/`
  (91 knowledge-base documents across ctf-crypto/pwn/web/reverse/forensics/
  malware/osint/misc).
- Published as **109 articles** at `/research/skill-*` on the Field Archive,
  `kind: skill`, first tag **`agentic_skill`**, event "Agentic Skills".
- The CTFtime harvest (`ctf_skill_research/artifacts/*.json`, 38,971 metadata
  rows) is an external index of other people's writeups; it is data, not
  prose, and is not published.

## 4. Publishing pipeline

Push to `main` → `.github/workflows/publish-to-site.yml` → clones
`loegaire/Personal_Site` (SSH write deploy key `ctf-journal-publisher`) →
runs `scripts/import-content.mjs` with `CTF_ROOT` = this journal → commits
regenerated articles to the site repo → site's Pages workflow builds and
deploys. Manual re-run: `workflow_dispatch`.

Importer rules (what becomes an article):

- `writeups/*.md` (top level, excluding `README.md`, `CTF.md`)
- any `notes*.md`, `*writeup*.md`, `wu.md`, `report.md`, `*solution*.md`
- `README.md` only if it contains a `## Solution` section
- agentic skills per §3
- 64 B–1.5 MB, not inside `artifacts/ scratch/ extracted/ node_modules/ .git/` etc.

Auto-labeling: event (dir name or `(Event)` filename prefix), category
(path/content keywords), kind, status (solved/partial/reference), tags
(category + event + technique keywords). Dates come from git commit history
(first commit = published, last = updated) so output is deterministic.
Secrets (CTFd tokens, AWS keys, bearer tokens) are redacted on import.

To promote an excluded README into an article: add a `## Solution` section or
rename to `notes.md`, then push — the pipeline publishes it automatically.
