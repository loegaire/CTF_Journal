#!/usr/bin/env python3
from pathlib import Path


ROOT = Path(__file__).resolve().parents[2]
STAGING = ROOT / "ctf_skill_research" / "staging_skills"


SKILLS = {
    "pwn-glibc-tcache-poisoning": {
        "description": "Use when solving CTF pwn challenges with glibc heap bugs, tcache dup/poisoning, use-after-free, double free, safe-linking leaks, malloc/free hooks, or arbitrary allocation primitives. Do not use for non-glibc allocators or pure stack overflows.",
        "title": "Pwn Glibc Tcache Poisoning",
        "use": ["glibc heap menu challenges with allocate/edit/free/show", "UAF, double free, off-by-null, overlapping chunks, or tcache freelist corruption", "safe-linking pointer mangling and heap/libc leaks"],
        "dont": ["the allocator is jemalloc, Windows LFH, a custom slab, or kernel SLUB", "the bug is a stack-only overflow with no malloc/free surface"],
        "core": "Turn a heap memory misuse primitive into a controlled allocation. In modern glibc, first obtain a heap leak for safe-linking, then corrupt tcache metadata so a later `malloc(size)` returns a target address or overlapping chunk.",
        "signals": ["`malloc`, `calloc`, `free`, `realloc`, `puts`/show functions", "one edit after free or free twice path", "fixed-size bins and count-limited tcache behavior", "mangled fd pointers that XOR with heap page address", "__free_hook or IO_FILE targets in older glibc"],
        "workflow": ["Identify glibc version and protections.", "Map chunk sizes to tcache bins and script deterministic heap grooming.", "Prove leak primitive for heap and libc before writing.", "Recover safe-linking key as `heap_base >> 12` when needed.", "Poison tcache fd to a target with correct alignment and size constraints.", "Allocate until the poisoned pointer is returned, then overwrite the target.", "Trigger a benign controlled call before final command/flag read."],
        "commands": "checksec --file ./chall\nldd ./chall\npython3 - <<'PY'\nfrom pwn import *\ne = context.binary = ELF('./chall')\nprint(e.checksec())\nPY",
        "pitfalls": ["Ignoring tcache count state and wondering why allocation order differs.", "Using pre-safe-linking exploits on glibc 2.32+ without a heap leak.", "Targeting hooks that do not exist in modern glibc.", "Forgetting 16-byte alignment and size-class consistency."],
        "verify": ["heap/libc leak values are reproducible", "the poisoned allocation returns the intended address", "a benign overwrite changes controlled behavior before final payload"],
        "examples": [
            ("HITCON CTF 2018", "Children Tcache", "pwn", "Classic tcache poisoning workflow around heap grooming and libc control."),
            ("angstromCTF 2022", "dreams", "pwn", "Menu heap primitives chained into tcache overwrite behavior."),
            ("corCTF 2022", "cshell2", "pwn", "Modern glibc heap exploitation required leak-first reasoning."),
        ],
        "sources": [
            "https://github.com/sajjadium/ctf-writeups/tree/master/HITCON/2018/children_tcache",
            "https://github.com/TomasGlgg/CTF-Writeups/blob/master/angstromCTF%202022/dreams/Writeup.md",
            "https://ret2school.github.io/post/cshell2/",
        ],
    },
    "pwn-ret2libc-rop-chain": {
        "description": "Use when solving CTF pwn challenges with stack overflow, NX enabled, libc leak, ROP gadgets, ret2libc, ret2plt, ret2csu, one_gadget, SROP-like stack control, or staged return chains. Do not use for heap-only bugs or shellcode-only challenges.",
        "title": "Pwn Ret2libc ROP Chain",
        "use": ["buffer overflow with NX enabled", "PIE/ASLR requiring an address leak", "PLT/GOT calls available for leak and re-entry", "need to call `system('/bin/sh')`, ORW, or a syscall chain"],
        "dont": ["no control of return address", "the primary primitive is heap metadata corruption", "shellcode execution is available and simpler"],
        "core": "Build a two-stage exploit: leak a runtime address, compute libc/base addresses, then return through a minimal aligned ROP chain to the desired libc function or syscall sequence.",
        "signals": ["`gets`, `read`, `scanf('%s')`, `strcpy`, unchecked `fgets` length", "`puts@plt`/`write@plt` and GOT entries", "crash RIP control in cyclic pattern", "stack alignment crashes inside `system` or `movaps`"],
        "workflow": ["Find exact offset with cyclic pattern.", "Check PIE, RELRO, canary, NX.", "If canary exists, leak it before returning.", "Leak libc with `puts(got)` or `write(1, got, 8)` and return to main.", "Resolve libc version locally or remotely.", "Build aligned second-stage chain with `ret` padding if needed.", "Prefer ORW chain when shell is blocked by seccomp."],
        "commands": "checksec --file ./chall\nROPgadget --binary ./chall | rg 'pop rdi|ret'\npython3 - <<'PY'\nfrom pwn import *\nprint(cyclic(200))\nprint(cyclic_find(0x6161616c))\nPY",
        "pitfalls": ["Skipping stack alignment on amd64.", "Using local libc offsets against a remote libc.", "Forgetting PIE base when using binary gadgets.", "Leaking with buffered output but not draining prompts."],
        "verify": ["RIP offset is proven by crash pattern", "leaked address resolves to expected libc symbol range", "second stage returns shell, ORW output, or verifier response"],
        "examples": [
            ("DCTF 2021", "Baby bof", "pwn", "Basic overflow into leak-then-ret2libc chain."),
            ("DiceCTF 2022", "babyrop", "pwn", "ROP chain construction after stack control."),
            ("SECCON CTF 2021", "gosu bof", "pwn", "Ret2libc workflow adapted to challenge-specific calling constraints."),
        ],
        "sources": [
            "https://github.com/datajerk/ctf-write-ups/tree/master/dctf2021/baby_bof",
            "https://0xten.gitbook.io/public/dice-ctf/2022/babyrop",
            "https://github.com/datajerk/ctf-write-ups/tree/master/seccon2021/gosu",
        ],
    },
    "pwn-format-string-leak-write": {
        "description": "Use when solving CTF pwn challenges where user input reaches printf-family format strings, enabling stack/libc/PIE leaks, arbitrary writes with %n, GOT/return-address overwrites, or partial-byte/halfword writes. Do not use for logging bugs with constant format strings.",
        "title": "Pwn Format String Leak Write",
        "use": ["`printf(buf)`, `fprintf(stream, user)`, `syslog(user)`, `dprintf(fd, user)`", "need to leak canary, PIE, stack, or libc", "need `%n`, `%hn`, or `%hhn` writes"],
        "dont": ["format string is constant and user input is only an argument", "target binary has no reachable printf-style sink"],
        "core": "Treat the bug as two primitives: indexed reads for leaks and byte/halfword writes for control. First discover argument offset, then perform deterministic writes with sorted padding and architecture-aware widths.",
        "signals": ["output echoes `%p` values", "`%n` is not blocked", "GOT entries writable when RELRO is partial/no", "stack return address or saved function pointer visible near format arguments"],
        "workflow": ["Find the first controlled argument index.", "Leak stack/libc/PIE/canary values with positional specifiers.", "Choose target: GOT, return address, fini array, global flag, or hook.", "Use `fmtstr_payload` or manual sorted halfword writes.", "Account for already-printed byte count and newline/prompt bytes.", "Verify each write in a local process/GDB before remote."],
        "commands": "python3 - <<'PY'\nfrom pwn import *\nprint(FmtStr)\nprint(fmtstr_payload(6, {0x404040: 0xdeadbeef}, write_size='short'))\nPY",
        "pitfalls": ["Using non-positional writes when stack layout changes.", "Forgetting `%n` writes the printed character count.", "Writing full 8-byte values when halfword writes are more reliable.", "Ignoring RELRO when choosing GOT targets."],
        "verify": ["argument offset is stable", "leaks decode into valid mapped ranges", "write target changes to exact expected bytes", "final target call is reached"],
        "examples": [
            ("corCTF 2024", "format-string", "pwn", "Direct format-string exploitation with controlled writes."),
            ("DCTF 2021", "formats_last_theorem", "pwn", "Format string leak/write scripting against a remote service."),
            ("ImaginaryCTF 2021", "Formatting", "pwn", "CTF-style format offset discovery and payload construction."),
        ],
        "sources": [
            "https://sashactf.gitbook.io/pwn-notes/ctf-writeups/cor-ctf-2024/format-string",
            "https://github.com/datajerk/ctf-write-ups/tree/master/dctf2021/formats_last_theorem",
            "https://github.com/Pynard/writeups/blob/main/2021/IMAGINARYCTF/challenges/formatting.md",
        ],
    },
    "web-xss-bot-csp-exfiltration": {
        "description": "Use when solving CTF web challenges with XSS, CSP, browser/admin bots, cookie exfiltration, postMessage, DOMPurify/filter bypasses, service workers, or scriptless data leaks. Do not use for server-side injection without browser execution.",
        "title": "Web XSS Bot CSP Exfiltration",
        "use": ["admin/report bot visits a URL", "CSP blocks normal `<script>` execution", "HTML sanitizer or markdown renderer accepts user content", "goal is cookie, localStorage, DOM secret, or internal page exfiltration"],
        "dont": ["no browser context or bot exists", "the bug is pure SSRF or server-side template execution"],
        "core": "Model the browser as the victim runtime. Find an execution or scriptless leak gadget that works under the exact CSP/sanitizer, then exfiltrate through an allowed channel such as image, form, DNS, window name, postMessage, or same-origin endpoint.",
        "signals": ["`/report`, admin bot, Puppeteer/Playwright", "CSP headers with nonce/hash/connect-src/img-src restrictions", "DOMPurify, marked, sanitize-html, custom regex filters", "iframes, `srcdoc`, `postMessage`, service worker scope"],
        "workflow": ["Reproduce bot origin, cookies, and CSP locally.", "Identify sink: innerHTML, markdown, template, URL navigation, postMessage.", "Test minimal payloads in a real browser, not only curl.", "Enumerate allowed exfil channels from CSP.", "If scripts are blocked, test SVG/event, meta refresh, CSS import, form post, window.name, and dangling markup.", "Log callbacks and include a nonce/timestamp to prove bot execution."],
        "commands": "curl -i http://target/ | rg -i 'content-security-policy|set-cookie'\nnode - <<'JS'\nconsole.log(new URL('/report','http://target').href)\nJS",
        "pitfalls": ["Testing in a browser without the challenge CSP.", "Assuming HttpOnly cookies can be read by JS.", "Missing same-site restrictions and bot navigation path.", "Using an exfil domain not allowed by CSP."],
        "verify": ["callback from bot IP/session", "exfiltrated value matches expected secret format", "payload works in automated browser with challenge headers"],
        "examples": [
            ("Hack.lu CTF 2019", "Do You Even XSS?", "web", "Complex XSS required browser/CSP-aware payload design."),
            ("DiceCTF 2023", "recursive-csp", "web", "CSP behavior was central to exploit construction."),
            ("CSAW Quals 2019", "babycsp", "web", "CSP restrictions forced alternate exfiltration paths."),
        ],
        "sources": [
            "https://gist.github.com/terjanq/fdb23ae109446b826a4b37df88efae07#file-xss_hard-js",
            "https://siunam321.github.io/ctf/DiceCTF-2023/Web/recursive-csp/",
            "https://github.com/ajdumanhug/ctf/blob/master/web/xss/csaw-babycsp-web-50.md",
        ],
    },
    "web-ssti-detection-exploitation": {
        "description": "Use when solving CTF web challenges with server-side template injection in Jinja2, Twig, Flask, Django templates, ERB, Handlebars, EJS, or custom renderers. Do not use for client-side template rendering or plain XSS.",
        "title": "Web SSTI Detection Exploitation",
        "use": ["user input rendered by a server template", "payloads like `{{7*7}}` or `${7*7}` evaluate", "Flask/Jinja2, Twig, EJS, ERB, Freemarker, Handlebars, or template error messages"],
        "dont": ["the expression is only evaluated in client JavaScript", "input is reflected as static text with no template evaluation"],
        "core": "Fingerprint the template engine from expression syntax and errors, then escalate from arithmetic to object traversal, file read, environment disclosure, or command execution using engine-specific globals.",
        "signals": ["`{{ }}`, `{% %}`, `<%= %>`, `${}` in templates", "Flask debug pages, Jinja traceback, Twig exceptions", "filters like `safe`, `escape`, `render_template_string`", "blacklists for `_`, `.`, `class`, `mro`, or `subclasses`"],
        "workflow": ["Probe arithmetic syntax safely.", "Fingerprint engine by syntax matrix and error text.", "List available globals/filters if possible.", "Bypass blacklist with attribute access variants, hex escapes, joins, or request args.", "For Jinja2, traverse config/request/app globals before using subclass RCE.", "Prefer file read/env leak before blind command execution.", "Minimize final payload and URL-encode correctly."],
        "commands": "curl 'http://target/?q={{7*7}}'\ncurl 'http://target/?q=${7*7}'\ncurl 'http://target/?q=<%= 7*7 %>'",
        "pitfalls": ["Using a Jinja payload against Twig/EJS without fingerprinting.", "Assuming RCE is needed when config/env leak contains the flag.", "Breaking payloads through shell/URL quoting.", "Ignoring sandboxed template environments."],
        "verify": ["engine fingerprint is documented", "payload returns controlled arithmetic or file content", "final output matches flag format or command verifier"],
        "examples": [
            ("HacktivityCon CTF", "Template Shack", "web", "Template expression probing led to engine-specific exploitation."),
            ("PwnMe 2023", "Anozer Blog", "web", "Blog/template rendering exposed SSTI workflow."),
            ("TokyoWesterns CTF 2018", "Shrine", "web", "Jinja/Flask object traversal under restrictions."),
        ],
        "sources": [
            "https://noxtal.com/writeups/2020/08/02/hacktivitycon-template-shack/",
            "https://siunam321.github.io/ctf/PwnMe-2023-8-bits/Web/Anozer-Blog/",
            "https://medium.com/@Abdelkad3r/tokyowesterns-ctf-4th-2018-writeup-part-3-1c8510dfad3f",
        ],
    },
    "web-jwt-auth-bypass": {
        "description": "Use when solving CTF web challenges with JWT/JWS/JWE authentication, HS256/RS256 confusion, none alg, weak secrets, kid/jku/jwks abuse, claim tampering, or token replay. Do not use for unrelated cookie sessions or opaque server-side session IDs.",
        "title": "Web JWT Auth Bypass",
        "use": ["Bearer token or cookie has three base64url JWT parts", "`alg`, `kid`, `jku`, `x5u`, `jwks`, or role claims are trusted", "server mixes HMAC and RSA/ECDSA keys", "weak shared secret is crackable"],
        "dont": ["token is opaque and only server-side state", "bug is unrelated to token verification"],
        "core": "JWT attacks target verification decisions, not just decoding. Identify accepted algorithms, key lookup behavior, and claims used for authorization; then forge a token that passes verification and changes only the necessary claims.",
        "signals": ["`jsonwebtoken`, `pyjwt`, `jose`, `jwt.verify`", "`alg: none`, `HS256`, `RS256`, `kid` path strings", "JWKS endpoints or remote key URLs", "claims like `admin`, `role`, `isAdmin`, `aud`, `iss`, `exp`"],
        "workflow": ["Decode header/payload without trusting them.", "Fingerprint library and allowed algorithms from source/errors.", "Test `none` only if library/version suggests it.", "Test HS/RS confusion by using public key as HMAC secret.", "Audit `kid` for path traversal, SQLi, command injection, or cache confusion.", "Check `jku`/`x5u` remote key allowlists and SSRF potential.", "Crack weak HS secrets only after algorithm/key paths are understood."],
        "commands": "python3 - <<'PY'\nimport jwt\nprint(jwt.get_unverified_header('TOKEN'))\nprint(jwt.decode('TOKEN', options={'verify_signature': False}))\nPY\nhashcat -m 16500 token.txt wordlist.txt",
        "pitfalls": ["Changing claims but not resigning correctly.", "Assuming `alg:none` works in modern libraries.", "Forgetting `aud`, `iss`, or `exp` validation.", "Using a PEM public key with wrong line endings for HS/RS confusion tests."],
        "verify": ["server accepts forged token", "only required claim changed", "privileged endpoint response or flag-format check"],
        "examples": [
            ("UIUCTF 2024", "Fare Evasion", "web", "JWT claim/verification behavior controlled authorization."),
            ("LINE CTF 2024", "jalyboy-baby", "web", "JWT handling was central to auth bypass."),
            ("SekaiCTF 2023", "Chunky", "web", "Token and web-stack behavior combined into auth bypass."),
        ],
        "sources": [
            "https://cryptocat.me/blog/ctf/2024/uiu/web/fare_evasion/",
            "https://adragos.ro/line-ctf-2024/#jalyboy-baby",
            "https://fireshellsecurity.team/sekaictf-frog-waf-and-chunky/#challenge-chunky-16-solves",
        ],
    },
    "forensics-memory-volatility-workflow": {
        "description": "Use when solving CTF forensics challenges with Windows/Linux memory dumps, Volatility 2/3, process trees, command history, injected code, registry hives, browser secrets, filescan/dumpfiles, or credential extraction. Do not use for disk-only images or simple PCAPs.",
        "title": "Forensics Memory Volatility Workflow",
        "use": ["`.raw`, `.mem`, `.vmem`, hibernation, LiME, or crash dump artifacts", "need process, network, registry, clipboard, command history, injected memory, or dumped files", "challenge tags include volatility or memory"],
        "dont": ["artifact is only a filesystem image", "network capture has no memory dump component"],
        "core": "Start with image/profile identification, then build a timeline of processes, commands, network connections, files, and injected regions. Dump only candidate objects after narrowing by process and artifact type.",
        "signals": ["Volatility profile/kernel symbols needed", "suspicious `cmd.exe`, PowerShell, browser, archive, or malware process", "deleted files recoverable through memory", "registry/user hive artifacts"],
        "workflow": ["Identify OS/profile with `imageinfo` or Volatility 3 automagic.", "List processes, parent/child relationships, and command lines.", "Check network sockets, handles, filescan, consoles, clipboard, and environment.", "Search strings/YARA for flag format, paths, keys, and URLs.", "Dump suspicious process memory or file objects.", "Use registry/browser plugins only after identifying user context.", "Record exact plugin output and dumped file hashes."],
        "commands": "vol -f dump.raw windows.info\nvol -f dump.raw windows.pslist\nvol -f dump.raw windows.cmdline\nvol -f dump.raw windows.filescan | rg -i 'flag|zip|txt|key'\nstrings dump.raw | rg -i 'flag\\{|ctf\\{'",
        "pitfalls": ["Using Volatility 2 profiles blindly on Volatility 3 dumps.", "Dumping everything before narrowing candidates.", "Ignoring command-line and console history.", "Missing UTF-16 strings in Windows memory."],
        "verify": ["profile/OS identified", "artifact source process/path recorded", "dumped file or plaintext contains expected verifier/flag format"],
        "examples": [
            ("FwordCTF 2020", "Memory series", "forensics", "Multiple memory tasks followed process/file/Volatility plugin triage."),
            ("InCTF 2019", "Just Do It", "forensics", "Memory artifacts required focused plugin use and extraction."),
            ("InCTF 2019", "Notch It Up", "forensics", "Memory dump workflow recovered challenge data from process artifacts."),
        ],
        "sources": [
            "https://hec-ker.tistory.com/191",
            "https://blog.bi0s.in/2019/09/24/Forensics/InCTFi19-JustDoIt/",
            "https://blog.bi0s.in/2019/09/24/Forensics/InCTFi19-NotchItUp/",
        ],
    },
    "mobile-android-apk-reversing": {
        "description": "Use when solving CTF mobile or reverse challenges with Android APKs, DEX/Smali, JADX, apktool, native JNI libraries, Frida, emulator instrumentation, obfuscated Java/Kotlin, or APK signing/repacking. Do not use for iOS-only or ordinary ELF reverse tasks.",
        "title": "Mobile Android APK Reversing",
        "use": ["APK/AAB files, DEX, Smali, AndroidManifest", "JADX shows flag checks, crypto, or network endpoints", "native `.so` libraries loaded through JNI", "need Frida/emulator hooks or patched APK"],
        "dont": ["artifact is iOS IPA/Mach-O only", "binary is a normal Linux ELF without Android runtime"],
        "core": "Split the APK into manifest, Java/Kotlin bytecode, resources, and native libraries. Recover the validation path statically first; use Frida or Smali patching only when runtime state, anti-debugging, or native code blocks static recovery.",
        "signals": ["`classes.dex`, `AndroidManifest.xml`, `lib/*/*.so`", "`System.loadLibrary`, `native` methods, JNI names", "Base64/AES/XOR constants in resources or code", "root/debug/emulator checks"],
        "workflow": ["Inspect manifest activities, permissions, and entry points.", "Open with JADX for high-level flow and strings.", "Use apktool for resources and Smali patches.", "Trace native methods to `.so` exports with `nm`/Ghidra.", "Hook Java and JNI methods with Frida when inputs/outputs are easier at runtime.", "Repack/sign only after proving the patch locally.", "Search assets/resources for hidden files before reversing deep code."],
        "commands": "file app.apk\njadx -d jadx-out app.apk\napktool d app.apk -o apk-out\nrg -n 'flag|ctf|loadLibrary|native|Base64|AES|XOR|check' jadx-out apk-out\nfrida-ps -Uai",
        "pitfalls": ["Ignoring resources/assets while focusing only on code.", "Missing native JNI checks behind harmless Java wrappers.", "Patching Smali without reinstalling a signed APK.", "Forgetting Android string encodings and resource indirection."],
        "verify": ["recovered input passes app check", "hook logs prove transformed values", "patched APK or local solver reproduces flag check"],
        "examples": [
            ("Hack.lu CTF 2020", "flagdroid", "mobile", "Android static reversing of app logic and resources."),
            ("Google CTF 2020", "Android", "mobile", "APK reversing combined Java and native analysis."),
            ("NahamCon CTF 2022", "Click Me!", "mobile", "Android app workflow around UI/reverse instrumentation."),
        ],
        "sources": [
            "https://github.com/klassiker/ctf-writeups/blob/master/2020/hacklu/flagdroid.md",
            "https://github.com/NicolaiSoeborg/ctf-writeups/tree/master/2020/Google%20CTF%202020/Android",
            "https://nburns.tech/docs/CTFs/NahamCon_2022/Mobile/Click_me",
        ],
    },
    "crypto-aes-mode-oracle-attacks": {
        "description": "Use when solving CTF crypto challenges involving AES modes, CBC padding oracles, ECB block cut-and-paste, CTR/GCM nonce reuse, tag forgery, bit flipping, or custom block-mode wrappers. Do not use for RSA/ECC or non-oracle symmetric puzzles.",
        "title": "Crypto AES Mode Oracle Attacks",
        "use": ["AES-CBC/ECB/CTR/GCM appears in source or traffic", "encrypt/decrypt/check oracle available", "nonce/IV reuse or user-controlled plaintext/ciphertext", "authentication tag or padding error leaks behavior"],
        "dont": ["no block cipher mode is involved", "problem is only a password/KDF brute force"],
        "core": "Identify the exact mode and attacker controls. ECB leaks block equality, CBC permits padding-oracle and bit-flip attacks, CTR/GCM fail under nonce reuse, and unauthenticated encryption allows malleability even when decryption is unavailable.",
        "signals": ["fixed IV or nonce", "different error for padding vs MAC", "base64 ciphertext with block-size multiples", "`AES.MODE_ECB/CBC/CTR/GCM`", "same nonce with multiple ciphertexts"],
        "workflow": ["Determine block size and encoding.", "Classify mode from code or chosen-plaintext tests.", "For ECB, align blocks and splice/cut-and-paste.", "For CBC, test padding oracle and IV/previous-block bit flips.", "For CTR, XOR known plaintexts under nonce reuse.", "For GCM, check nonce reuse and tag-verification misuse.", "Keep oracle requests logged and replayable."],
        "commands": "python3 - <<'PY'\nfrom Crypto.Cipher import AES\nprint(AES.block_size)\nPY\npython3 - <<'PY'\nimport base64, sys\nct=base64.b64decode(sys.argv[1]) if len(sys.argv)>1 else b''\nprint(len(ct), len(ct)%16)\nPY",
        "pitfalls": ["Assuming AES is broken instead of the mode/nonce/oracle.", "Confusing IV control with key control.", "Treating padding and MAC errors as equivalent without testing timing/messages.", "Forgetting URL/base64 encoding when flipping bytes."],
        "verify": ["mode classification proof", "oracle transcript or local reproduction", "forged plaintext/ciphertext accepted by challenge verifier"],
        "examples": [
            ("SEC-T CTF", "Bad AES", "crypto", "Mode misuse made AES challenge solvable through structural analysis."),
            ("Insomni'hack teaser 2023", "GCM", "crypto", "GCM misuse required nonce/tag reasoning."),
            ("WolvCTF 2024", "Blocked1", "crypto", "Block-mode behavior drove the solve workflow."),
        ],
        "sources": [
            "https://pequalsnp-team.github.io/writeups/Bad-Aes",
            "https://sylvainpelissier.gitlab.io/posts/2023-01-12-insomnihackteaser23-gcm/",
            "https://nightxade.github.io/ctf-writeups/writeups/2024/Wolv-CTF-2024/crypto/blocked-1.html",
        ],
    },
}


TEMPLATE = """---
name: {name}
description: {description}
---

# {title}

## When to use

Use this skill when you see:
{use}

Do not use this skill when:
{dont}

## Core idea

{core}

## Recognition signals

Look for:
{signals}

## Standard workflow

{workflow}

## Commands and tools

```bash
{commands}
```

## Pitfalls

Common ways agents get this wrong:
{pitfalls}

## Verification

Prove the solve path is real with:
{verify}

## Examples from writeups

| CTF | Challenge | Category | Lesson |
| --- | --------- | -------- | ------ |
{examples}

## Sources

{sources}
"""


def bullets(items):
    return "\n".join(f"- {item}" for item in items)


def numbered(items):
    return "\n".join(f"{idx}. {item}" for idx, item in enumerate(items, 1))


def examples(items):
    return "\n".join(f"| {ctf} | {chal} | {cat} | {lesson} |" for ctf, chal, cat, lesson in items)


def sources(items):
    return "\n".join(f"* {url} - source used for reusable technique extraction." for url in items)


def main():
    for name, data in SKILLS.items():
        directory = STAGING / name
        directory.mkdir(parents=True, exist_ok=True)
        content = TEMPLATE.format(
            name=name,
            description=data["description"],
            title=data["title"],
            use=bullets(data["use"]),
            dont=bullets(data["dont"]),
            core=data["core"],
            signals=bullets(data["signals"]),
            workflow=numbered(data["workflow"]),
            commands=data["commands"],
            pitfalls=bullets(data["pitfalls"]),
            verify=bullets(data["verify"]),
            examples=examples(data["examples"]),
            sources=sources(data["sources"]),
        )
        (directory / "SKILL.md").write_text(content)
        print(f"wrote {directory / 'SKILL.md'}")


if __name__ == "__main__":
    main()
