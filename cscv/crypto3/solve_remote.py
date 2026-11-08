#!/usr/bin/env python3
"""Submit a verified ResidueGate solution using externally computed embeddings."""
import argparse
import base64
import hashlib
import io
import json
import struct
import subprocess
from pathlib import Path

import requests
from PIL import Image


ROOT = Path(__file__).resolve().parent
ROUTES = {
    "session": "/feature_fa8688cbfa3fc935ae60de224a972126",
    "image": "/feature_c426f4d0ed166214ae89992cbd592932",
    "submit": "/feature_c26f994e7f7d755a4602972a35430050",
}
DOMAIN = b"residuegate-six-way-logit-commitment-v1\0"


def make_variant(image, value):
    changed = []
    for y in range(32):
        for x in range(32):
            quadrant = 2 * (y >= 16) + (x >= 16)
            pixel = image.getpixel((x, y))
            adjusted = tuple(
                channel + 8 * (1 if (value & (3 * quadrant + rgb + 1)).bit_count() % 2 == 0 else -1)
                for rgb, channel in enumerate(pixel)
            )
            assert all(0 <= channel <= 255 for channel in adjusted)
            changed.append(adjusted)
    result = Image.new("RGB", (32, 32))
    result.putdata(changed)
    return result


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--url", default="http://113.20.103.55:5000")
    parser.add_argument("--embeddings", type=Path, required=True)
    parser.add_argument(
        "--head",
        type=Path,
        help="JSON file with recovered per-session 'weights' and 'bias' values",
    )
    args = parser.parse_args()

    generated = json.loads(args.embeddings.read_text())
    assert generated.get("local_validation_matches"), "Refusing embeddings that did not reproduce the local cache"
    embeddings = generated["embeddings"]
    assert len(embeddings) == 6 and all(len(row) == 16 and all(len(v) == 12 for v in row) for row in embeddings)
    if args.head:
        recovered_head = json.loads(args.head.read_text())
        weights, bias = recovered_head["weights"], recovered_head["bias"]
    else:
        metadata = json.loads((ROOT / "give_to_player/local-data/qwen_cache.json").read_text())
        weights, bias = metadata["head_weight"], metadata["head_bias"]
    logits = [
        [[sum(w * x for w, x in zip(class_weights, embedding)) + offset for class_weights, offset in zip(weights, bias)]
         for embedding in candidates]
        for candidates in embeddings
    ]

    session = requests.Session()
    supplied_images = generated.get("teacher_base_images_png_b64")
    if supplied_images:
        challenge = generated["teacher_session"]
        assert len(supplied_images) == 6
        images = [Image.open(io.BytesIO(base64.b64decode(raw))).convert("RGB") for raw in supplied_images]
    else:
        response = session.post(args.url + ROUTES["session"], json={}, timeout=30)
        response.raise_for_status()
        challenge = response.json()
        images = []
    seed = bytes.fromhex(challenge["combination"]["seed"])
    commitment = challenge["combination"]["commitment"]

    search_data = seed + bytes.fromhex(commitment)
    search_data += b"".join(
        struct.pack("<BB4q", slot, variant, *logits[slot][variant])
        for slot in range(6) for variant in range(16)
    )
    work = ROOT / "artifacts"
    work.mkdir(exist_ok=True)
    search_input = work / "remote-search.bin"
    search_input.write_bytes(search_data)
    binary = ROOT / "analysis/search_commitment"
    if not binary.exists():
        subprocess.run(["gcc", "-O3", str(ROOT / "analysis/search_commitment.c"), "-lcrypto", "-o", str(binary)], check=True)
    variants = [int(value) for value in subprocess.check_output([str(binary), str(search_input)], text=True).split()]
    assert len(variants) == 6
    preimage = DOMAIN + seed + b"".join(
        struct.pack("<BB4q", slot, variant, *logits[slot][variant])
        for slot, variant in enumerate(variants)
    )
    assert hashlib.sha256(preimage).hexdigest() == commitment

    files = {}
    for slot, value in enumerate(variants):
        if supplied_images:
            image = images[slot]
        else:
            response = session.get(args.url + ROUTES["image"], params={"session_id": challenge["session_id"], "slot": slot}, timeout=30)
            response.raise_for_status()
            image = Image.open(io.BytesIO(response.content)).convert("RGB")
        assert image.size == (32, 32)
        output = io.BytesIO()
        make_variant(image, value).save(output, format="PNG")
        files[f"image_{slot}"] = (f"image_{slot}.png", output.getvalue(), "image/png")

    response = session.post(args.url + ROUTES["submit"], data={"session_id": challenge["session_id"]}, files=files, timeout=60)
    (work / "remote-submission.json").write_text(response.text)
    response.raise_for_status()
    result = response.json()
    print(json.dumps({"variants": variants, "commitment": commitment, "response": result}, indent=2))
    if result.get("status") != "accepted" and not result.get("accepted"):
        raise SystemExit("server rejected the independently verified commitment tuple")


if __name__ == "__main__":
    main()
