#!/usr/bin/env python3
"""Ghost Dependency (REV-01) — builds proof.json from the handout."""
import hashlib, hmac, io, json, struct, subprocess, tarfile

H = "artifacts/player/handout/"
reg = tarfile.open(fileobj=io.BytesIO(subprocess.check_output(["zstd", "-dc", H + "registry.tar.zst"])))
crates = {m.name: reg.extractfile(m).read() for m in reg.getmembers()}

# Subverted crate: the only one that actually ships build.rs (SBOM digest matches none).
name = "telemetry-core-0.8.1"
blob = crates[name]
crate_sha256 = hashlib.sha256(blob).hexdigest()
inner = tarfile.open(fileobj=io.BytesIO(blob), mode="r:gz")
build_rs = inner.extractfile(f"{name}/build.rs").read()

# warehouse-agent: async state 1 stores nonce[0:8], state 2 nonce[8:16];
# host_id = "host-" + hex(HMAC-SHA256(nonce, "host-id"))[:12]
nonce = struct.pack("<QQ", 0x8a8524691d599009, 0xc07e6756fddb90eb)
host_id = "host-" + hmac.new(nonce, b"host-id", hashlib.sha256).hexdigest()[:12]

proof = {
    "crate_sha256": crate_sha256,
    "host_id": host_id,
    "activation_hex": hashlib.sha256(f"{crate_sha256}:{host_id}".encode()).hexdigest(),
    "malicious_snippet_sha256": hashlib.sha256(build_rs).hexdigest(),
}
sub = {"challenge": "REV-01", "proof": proof}
out = json.dumps(sub, ensure_ascii=False, sort_keys=True, separators=(",", ":"))
open("proof.json", "w").write(out)
print(out)
