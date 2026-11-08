# Go→WASM reversing (garbled) — lesson from Flare-On crux
Category: rev / Go wasm / crypto-structure (Pratt primality certificate)
Root cause: input = base64(AES-CBC(serialized Pratt cert)); a hardcoded prime N must be the certificate root; sha256(canonical cert) is the flag key. Canonical encoding (sorted factors, minimal generator, minimal bignum bytes) makes the plaintext unique.
Method:
1. Run under node with Go's wasm_exec.js (`globalThis.window=globalThis`), call exported fn directly.
2. Rebuild linear memory from data segments; find pclntab by header shape (ptrsize=8, nfunc≈#funcs) even if magic garbled; functab order == wasm func order (idx = k + #imports).
3. Coverage diff (binaryen --log-execution, import under `gojs`) with varying inputs → find length gates (multiples of 16 ⇒ block cipher).
4. Hook function entries (binaryen JS: addFunctionImport + Function.setBody, features MVP+SignExt+NontrappingFPToInt+BulkMemory+MutableGlobals) passing global0 (Go SP); args at SP+8.
5. Hook comparison helpers (big.Int Cmp) to leak targets instead of deobfuscating strings.
Tools: wabt 1.0.37 native (npm wabt OOMs on big modules), binaryen npm, sympy.
