# Skill: Trojaned open-source binary with a tweaked crypto primitive (Flare-On 13 #4 ToxicMiner)
Category: Windows RE / "diff against upstream"
## Root cause
Stock cpuminer-multi with (1) a base64 decoy flag as a default string, and (2) a modified scanhash that derives an RC4 key
from the volume serial via a *modified* SHA-256 transform (altered Ch/Maj + an s-box tail step). The 32-bit serial is brute-forceable.
## Method
1. Identify the upstream project + version from strings; distrust any obvious flag string (decoy).
2. Find the diff cheaply: imports that the upstream never uses (GetVolumeInformationA here) -> xrefs -> added function.
3. Verify every "standard" primitive against a reference (emulate with unicorn, compare with hashlib). Here SHA-256 differed.
4. Don't re-implement a tweaked primitive: map the PE image at its preferred base on Linux (MAP_FIXED), stub
   __security_check_cookie, call the function via `__attribute__((ms_abi))` function pointer. Native speed, exact semantics.
5. Brute-force small environment keys (32-bit volser) with a printable-plaintext filter; 2^32 in minutes on 16 cores.
## Tells
- Compiler magic constants (0x24924925 = /7 → %28) inside a hash function = tampering.
- Stock miner imports + extra "environment" APIs (volume serial, computer name) = environmental keying.
