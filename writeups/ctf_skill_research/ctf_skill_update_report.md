# CTF Skill Update Report

## Summary

- CTFs researched/inventoried from `CTF.md`: 1,403.
- Challenges identified from CTFtime writeup rows: 19,256 unique event/task pairs.
- Writeup/source records reviewed or indexed: 38,971 CTFtime writeup URLs, 203 GitHub repository candidate sections, 4 DuckDuckGo candidate sections, 218 Bing secondary no-result retries, and 86 `ctfs/write-ups-*` archive matches.
- Writeups/sources used for installed skill knowledge: source URLs are embedded in the 18 focused skills and the 9 updated broad CTF skills.
- Writeups skipped: see skipped table below plus CTFtime-only rows without original technical links.
- CTF sections with public-index or candidate-source hits: 1,053 partial.
- CTF sections still sparse/no useful source found from completed clean searches: 350.
- CTFtime events indexed: 2,850 events from 2011-2026 API windows.
- CTFtime writeup index rows scraped: 38,971 rows across 1,300 pages, 0 page errors.
- CTFtime writeup rows mapped to CTFs: 440 CTF names.
- `ctfs/write-ups-*` archive matches: 86 CTF names; 1 repo tree error recorded.
- Authenticated GitHub repository searches: 557 no-hit CTFs searched; 203 candidate-hit sections; 354 no-repo-hit sections; 0 errors.
- DuckDuckGo sparse searches: 354 attempted; 4 candidate-hit sections; 132 clean no-result sections; 218 search errors from 403/timeouts.
- Bing sparse retry searches for the DuckDuckGo error set: 218 attempted; 0 candidate-hit sections; 218 clean no-result sections; 0 errors.
- Research index data rows: 4,478.
- Skills created/installed in this pass: 18 focused topic skills.
- Skills updated in this pass: 9 existing broad CTF category skills.
- Top-level skills validated in install target: 27.
- Skills installed to: `/home/thinh/.agents/skills`.
- Backups before broad-skill edits: `ctf_skill_research/backups/broad-ctf-skills-20260603/`.

No challenge-specific summaries were created. Skills are durable topic workflows with source URLs and reusable commands.

## Created skills

| Skill | Path | Why created |
|---|---|---|
| crypto-aes-mode-oracle-attacks | `/home/thinh/.agents/skills/crypto-aes-mode-oracle-attacks/SKILL.md` | Common AES mode/oracle failures across sampled crypto writeups. |
| crypto-algebraic-rsa-special-primes | `/home/thinh/.agents/skills/crypto-algebraic-rsa-special-primes/SKILL.md` | hxp-style algebraic RSA prime-generation and tailored factorization. |
| crypto-ring-lwe-implementation-leakage | `/home/thinh/.agents/skills/crypto-ring-lwe-implementation-leakage/SKILL.md` | Ring-LWE/KEM implementation leakage plus lattice reduction workflow. |
| forensics-memory-volatility-workflow | `/home/thinh/.agents/skills/forensics-memory-volatility-workflow/SKILL.md` | High-frequency memory forensics/Volatility workflow. |
| forensics-usb-pcap-reconstruction | `/home/thinh/.agents/skills/forensics-usb-pcap-reconstruction/SKILL.md` | USB pcap/pcapng reconstruction workflow. |
| misc-bash-ast-parser-jail-bypass | `/home/thinh/.agents/skills/misc-bash-ast-parser-jail-bypass/SKILL.md` | Bash parser-vs-executor jail bypass pattern. |
| mobile-android-apk-reversing | `/home/thinh/.agents/skills/mobile-android-apk-reversing/SKILL.md` | Android APK/JADX/apktool/JNI reversing workflow. |
| pwn-format-string-leak-write | `/home/thinh/.agents/skills/pwn-format-string-leak-write/SKILL.md` | Format-string leak/write exploitation pattern. |
| pwn-glibc-tcache-poisoning | `/home/thinh/.agents/skills/pwn-glibc-tcache-poisoning/SKILL.md` | Glibc heap/tcache poisoning, safe-linking, and allocation control. |
| pwn-ret2libc-rop-chain | `/home/thinh/.agents/skills/pwn-ret2libc-rop-chain/SKILL.md` | Stack overflow leak-then-ROP/ret2libc chain workflow. |
| web-electron-file-origin-ipc-rce | `/home/thinh/.agents/skills/web-electron-file-origin-ipc-rce/SKILL.md` | Electron file-origin/preload IPC local-read and RCE workflow. |
| web-jwt-auth-bypass | `/home/thinh/.agents/skills/web-jwt-auth-bypass/SKILL.md` | JWT/JWS algorithm, key lookup, and claim-forgery auth bypasses. |
| web-nextjs-server-actions-ssrf | `/home/thinh/.agents/skills/web-nextjs-server-actions-ssrf/SKILL.md` | Next.js Server Actions SSRF/CVE-2024-34351 workflow. |
| web-node-prototype-pollution-gadgets | `/home/thinh/.agents/skills/web-node-prototype-pollution-gadgets/SKILL.md` | Node/Bun prototype pollution to config/file-write/RCE gadgets. |
| web-php-lfi-nginx-tempfile | `/home/thinh/.agents/skills/web-php-lfi-nginx-tempfile/SKILL.md` | PHP LFI through Nginx temp body files and procfs fd indirection. |
| web-ssti-detection-exploitation | `/home/thinh/.agents/skills/web-ssti-detection-exploitation/SKILL.md` | Server-side template injection fingerprinting and exploitation. |
| web-url-parser-differential | `/home/thinh/.agents/skills/web-url-parser-differential/SKILL.md` | URL parser mismatch bugs across validators, browsers, and sinks. |
| web-xss-bot-csp-exfiltration | `/home/thinh/.agents/skills/web-xss-bot-csp-exfiltration/SKILL.md` | Browser/admin-bot XSS under CSP and sanitizer constraints. |

## Updated skills

| Skill | Path | What changed |
|---|---|---|
| ctf-crypto | `/home/thinh/.agents/skills/ctf-crypto/SKILL.md` | Added required CTF-skill sections, examples table, and sources wrapper while preserving the existing detailed crypto reference. |
| ctf-forensics | `/home/thinh/.agents/skills/ctf-forensics/SKILL.md` | Added required CTF-skill sections, examples table, and sources wrapper while preserving the existing detailed forensics reference. |
| ctf-malware | `/home/thinh/.agents/skills/ctf-malware/SKILL.md` | Added required CTF-skill sections, examples table, and sources wrapper while preserving the existing detailed malware reference. |
| ctf-misc | `/home/thinh/.agents/skills/ctf-misc/SKILL.md` | Added required CTF-skill sections, examples table, and sources wrapper while preserving the existing detailed misc reference. |
| ctf-osint | `/home/thinh/.agents/skills/ctf-osint/SKILL.md` | Added required CTF-skill sections, examples table, and sources wrapper while preserving the existing detailed OSINT reference. |
| ctf-pwn | `/home/thinh/.agents/skills/ctf-pwn/SKILL.md` | Added required CTF-skill sections, examples table, and sources wrapper while preserving the existing detailed pwn reference. |
| ctf-reverse | `/home/thinh/.agents/skills/ctf-reverse/SKILL.md` | Added required CTF-skill sections, examples table, and sources wrapper while preserving the existing detailed reverse reference. |
| ctf-web | `/home/thinh/.agents/skills/ctf-web/SKILL.md` | Added required CTF-skill sections, examples table, and sources wrapper while preserving the existing detailed web reference. |
| solve-challenge | `/home/thinh/.agents/skills/solve-challenge/SKILL.md` | Added required CTF-skill sections, examples table, and sources wrapper while preserving the existing solver workflow. |

## Skipped writeups

| URL | Reason |
|---|---|
| https://jiniljeil.github.io/ctf/2024/07/05/DownUnderCTF.html | JWT material was useful but broader than the specific DUCTF row; JWT knowledge was later captured in `web-jwt-auth-bypass`. |
| https://habr.com/ru/companies/radcop/articles/835318/ | PKI.js material needs deeper X.509/parser validation review before a focused skill. |
| https://ouuan.moe/post/2024/07/ductf-2024 | C++ vector metadata overwrite was readable but too narrow for a durable standalone skill. |
| https://mzhang.io/posts/2022-08-01-uiuctf-2022-writeups/ | Mostly generic beginner lessons already covered by broader skills. |
| https://sigflag.at/blog/2025/writeup-uiuctf25-crypto/ | Crypto notes did not justify a focused durable skill in this pass. |
| https://wednesdei.com/ctf/plaid24 | PlaidCTF crypto material needs deeper derivation before a non-shallow protocol skill. |
| CTFtime-only rows with no original link | Used as coverage evidence only, not as source-quality writeups. |
| DuckDuckGo results pointing to press releases, YouTube-only pages, generic tool docs, or unrelated repos | Recorded as candidate/no-use rows, not used in skills. |

## Coverage gaps

| CTF | Missing challenge/writeup | Searches attempted |
|---|---|---|
| 350 sparse CTF sections | No clean public source after CTFtime, `ctfs/write-ups-*`, GitHub repository search, DuckDuckGo search, and Bing secondary retry where needed. | See `research_index.md` per CTF row. |
| DuckDuckGo sparse set | 218 queries failed with 403/timeouts after throttling, then all 218 were retried through Bing HTML search with 0 errors and 0 parsed results. | Errors saved in `artifacts/duckduckgo_sparse_search_errors.json`; retry results saved in `artifacts/bing_sparse_retry.json`. |
| GitHub repository candidate hits | 203 CTF sections need manual source-quality filtering; many repository search hits are noisy. | Candidate rows saved in `research_index.md` and `artifacts/github_nohit_repo_search.json`. |
| PKI.js/X.509 parser topics | Needs deeper extraction from DUCTF and related certificate-validation writeups. | Deferred recommended skill. |
| Advanced PlaidCTF crypto protocols | Needs full derivation before skill creation. | Deferred recommended skill. |

## Existing knowledge preservation

Existing broad CTF category skills were backed up before modification and then updated in place with compact required sections. Their previous detailed references and supporting files were left intact below the new wrappers. No existing focused skill was overwritten. New focused skills were installed as separate directories under `/home/thinh/.agents/skills`.

## Verification

- `find "$TARGET_SKILLS_DIR" -maxdepth 2 -name SKILL.md -print` confirms installed skills.
- `find -L "$TARGET_SKILLS_DIR" -maxdepth 2 -name SKILL.md -print` confirms the symlinked broad CTF skills as well.
- All 27 top-level installed skills have YAML frontmatter, `name`, `description`, required sections, examples tables, source URLs, and non-empty body.
- All 18 focused skills created in this pass have required sections, examples tables, and source URLs.
- `research_index.md` contains every CTF parsed from `CTF.md`.
- Mining artifacts are stored under `ctf_skill_research/artifacts/`.

## Recommended next skills

- `web-pkijs-certificate-validation`
- `crypto-plaidctf-protocol-and-commitment-attacks`
- `pwn-linux-kernel-module-exploitation`
- `forensics-stego-image-workflow`
- `forensics-pcap-network-reconstruction`
- `misc-z3-constraint-solving-workflow`
