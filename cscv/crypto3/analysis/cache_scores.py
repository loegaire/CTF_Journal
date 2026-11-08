import json, struct
from pathlib import Path
base = Path(__file__).resolve().parents[1] / "give_to_player/local-data"
meta = json.loads((base / "qwen_cache.json").read_text())
data = (base / "qwen_cache.bin").read_bytes()
assert data[:8] == b"RGQWEN1\0" and len(data) == 744
print("variant, logits [VISITOR, STAFF, SERVICE, ADMIN], ADMIN margin")
for variant in range(16):
    embedding = struct.unpack_from("12b", data, 72 + 44 * variant)
    logits = [sum(w*x for w,x in zip(row, embedding)) + bias
              for row,bias in zip(meta["head_weight"], meta["head_bias"])]
    print(variant, logits, logits[3] - max(logits[:3]))
