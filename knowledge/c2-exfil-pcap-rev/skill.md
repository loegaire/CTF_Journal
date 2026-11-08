# Skill: Malware + PCAP exfil reconstruction (custom crypto + compression)

**Category:** Rev / network forensics (e.g. Flare-On catthief)

## Root cause
Custom C2 protocol: a stream cipher (RC4) with a hardcoded, lightly obfuscated key, re-keyed for every message, wrapped around a homemade compressor (canonical Huffman). Anyone who has the binary can decrypt all of the traffic.

## Diagnostic method
1. Pull the HTTP objects out: `tshark --export-objects http,dir`.
2. **Keystream-reuse tell:** different messages that share long identical ciphertext prefixes mean a static key/nonce stream cipher. XOR two ciphertexts to confirm.
3. In a Rust binary, find the app code through xrefs to unique strings (URL, `src\\*.rs`). Scan for RIP-relative `lea` with capstone if r2 is slow. Get the true function bounds from `.pdata`.
4. Look for 16-byte `movaps` constants plus a small `xor byte [..], imm` loop. Brute-force single-byte XOR and look for printable output.
5. Recognize RC4: a 256-byte identity init, `i % keylen` (compiled as div/imul), and a swap loop.
6. Compression: a hashmap of byte frequencies, a BinaryHeap, then a recursive tree walk that writes depth into `table[sym]`. That is canonical Huffman driven by a code-length table. Test header layouts against a known plaintext (the tiny "READY" beacon).
7. Server responses are often commands (file paths). Use them to name the recovered files, then look at the images: the flag may be rendered as text inside one of them.
