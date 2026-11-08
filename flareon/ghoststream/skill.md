# Skill: Multi-process RE with API hooks, decoy paths & environment-gated keys (Flare-On "GhostStream")
**Category:** Windows reversing — dropper + named-pipe child, ADS-hidden data, self-patching CRT functions.
**Root cause:** Key material hidden in an NTFS Alternate Data Stream inside a WIM; the parent transforms it only under
runtime conditions (process uptime > 7 days, window-message ordering WM_NCCALCSIZE->WM_CREATE). The child hot-patches
ucrtbase!strlen so that "strlen" calls secretly decode a second key; its return value feeds the cipher.
**Methodology:**
1. Unpack containers fully (7z shows ADS as `file:stream`); parse WIM metadata when in doubt.
2. Decode stack strings with a Python port of the decoder (key may depend on the exe's own filename).
3. Separate real path from decoys (globals with no writers, dead threads, TCP "OVERRIDE", env vars).
4. Verify each half dynamically: patch gates (NOP jne/jbe), swap the embedded child for a tiny `-nostdlib` pipe logger, run under wine.
5. When model + emulation agree but the check still fails, question the values coming out of hooked/patched
   functions (here: the hooked strlen's return constant vs the true string length 18) instead of brute-forcing keys.
