# Skill: Payload hidden in Authenticode cert + encrypted-chunk FSM (Flare-On "FlareCalc")

**Category:** Windows RE, x64 native, anti-analysis, staged shellcode

## Root cause / mechanism
- Visible logic is decoys (magic expressions print FLAG{NICE_TRY}, a Rickroll…).
- Real trigger is a **vectored exception handler** (float div-by-zero, 0xC000008E), which checks the last N calculator results.
- Stage 2 is shellcode stored inside the **PE security directory (Authenticode WIN_CERTIFICATE)**. That area isn't covered by the signature hash, so it's a free place to hide data. The loader reopens its own file, seeks there, VirtualAllocs RWX and jumps to it.
- Stage 2 stores many small encrypted x64 functions as ASN.1 `SEQ{INT id, OCTET data}` under a custom OID (…1337.1). Each is decrypted with a key derived from the trigger values (MD5 → LCG xor → PRNG junk-byte strip).
- The flag is behind a **byte-driven state machine**: `state = chunk[state](byte, buf32)`. The final state XTEA-decrypts the flag using a key built from buf32.

## Methodology
1. Strings are obfuscated, so find the WndProc from RegisterClassExW. Decompile with r2ghidra (`pdg`) and filter out the xor-loop junk with grep.
2. Look for `AddVectoredExceptionHandler`-style code and exception-code constants (0xC000008E, 0xC0000094). Constants are hidden as `(g + A) ^ B` with g = 0, so evaluate `A ^ B`.
3. If the overlay size equals the security-dir size, dump the cert and disassemble it at the offset the loader calls.
4. To validate the trigger, drive the GUI under Wine with a mingw helper that uses FindWindow + `BM_CLICK` on the buttons. Use `WINEDEBUG=+winsock` to watch the shellcode run.
5. Reimplement the chunk decryptor in Python and emulate the FSM chunks in Unicorn, running a BFS over bytes 0..255.
   - Map **each chunk at a distinct address**. Rewriting code at the same address reuses stale translated blocks, which silently gives wrong results.
   - Fast-forward anti-emulation busy loops by hooking the loop head and writing the final counter/accumulator values.

## Tools
r2 + r2ghidra, pefile, unicorn, wine + mingw-w64 (GUI driving).
