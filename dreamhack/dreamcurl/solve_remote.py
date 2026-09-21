import base64
import hashlib
import math
import re
import struct
from pathlib import Path

from pwn import context, remote

context.log_level = "info"

HOST = "host3.dreamhack.games"
PORT = 20405

BINARY_PATH = Path(__file__).with_name("curl")
MAGIC = 0x4C52550C4DEA520D

# sub_16820 uses little-endian byte order with per-byte bit reversal.
def k_from_bytes_little_lsb(data: bytes) -> int:
    bits = "".join(f"{b:08b}"[::-1] for b in data[::-1])
    return int(bits, 2)


def bytes_from_k_little_lsb(k: int, length: int = 16) -> bytes:
    bits = bin(k)[2:].zfill(length * 8)
    bits = "".join(bits[i:i + 8][::-1] for i in range(0, len(bits), 8))
    byte_chunks = [bits[i:i + 8] for i in range(0, len(bits), 8)][::-1]
    return bytes(int(chunk, 2) for chunk in byte_chunks)


def load_table(offset: int) -> list[int]:
    blob = BINARY_PATH.read_bytes()
    base = 0x9E000
    length = 0x800
    fmt = "<" + "H" * 1024
    start = base + offset
    return list(struct.unpack(fmt, blob[start:start + length]))


def build_cycles(p: list[int]) -> tuple[list[list[int]], list[dict[int, int]]]:
    cycles: list[list[int]] = []
    positions: list[dict[int, int]] = []
    seen = [False] * len(p)
    for i in range(len(p)):
        if seen[i]:
            continue
        cycle = []
        j = i
        while not seen[j]:
            seen[j] = True
            cycle.append(j)
            j = p[j]
        cycles.append(cycle)
        positions.append({v: idx for idx, v in enumerate(cycle)})
    return cycles, positions


def perm_pow_from_cycles(cycles: list[list[int]], k: int) -> list[int]:
    out = list(range(1024))
    for cycle in cycles:
        length = len(cycle)
        if length == 1:
            continue
        shift = k % length
        for idx, v in enumerate(cycle):
            out[v] = cycle[(idx + shift) % length]
    return out


def crt(congruences: list[tuple[int, int]]) -> tuple[int, int]:
    x = 0
    m = 1
    for a, mod in congruences:
        g = math.gcd(m, mod)
        if (a - x) % g != 0:
            raise RuntimeError("CRT has no solution")
        lcm = m // g * mod
        m1 = m // g
        mod1 = mod // g
        inv = pow(m1, -1, mod1)
        t = ((a - x) // g * inv) % mod1
        x = (x + m * t) % lcm
        m = lcm
    return x, m


def solve_license(name: str, exp: str) -> str:
    # Table order: MD5 uses 0x820 (unk_29E820), signature uses 0x20 (unk_29E020).
    t1 = load_table(0x820)
    t2 = load_table(0x20)

    t1_cycles, _ = build_cycles(t1)
    t2_cycles, t2_positions = build_cycles(t2)

    md5 = hashlib.md5((name + "|" + exp).encode()).digest()
    k1 = k_from_bytes_little_lsb(md5)
    target = perm_pow_from_cycles(t1_cycles, k1)

    congruences: list[tuple[int, int]] = []
    for cycle, pos in zip(t2_cycles, t2_positions):
        length = len(cycle)
        if length == 1:
            continue
        shift = pos[target[cycle[0]]]
        for idx, v in enumerate(cycle):
            if target[v] != cycle[(idx + shift) % length]:
                raise RuntimeError("Inconsistent shift in cycle")
        congruences.append((shift, length))

    k2, order = crt(congruences)
    k2 %= order
    max_k = (1 << 128) - 1
    if k2 > max_k:
        if order > max_k:
            raise RuntimeError("No 128-bit representative for k2")
        t = (max_k - k2) // order
        k2 = k2 + order * t

    sig = bytes_from_k_little_lsb(k2)

    name_field = name.encode().ljust(0x20, b"\x00")
    exp_field = exp.encode().ljust(0x10, b"\x00")
    license_blob = struct.pack("<Q", MAGIC) + name_field + exp_field + sig
    return base64.b64encode(license_blob).decode()


def parse_prompt(line: str) -> tuple[str, str] | None:
    matches = re.findall(r'"([^"]+)"', line)
    if len(matches) >= 2:
        return matches[0], matches[1]
    return None


def main() -> None:
    io = remote(HOST, PORT)
    last_prompt: tuple[str, str] | None = None
    while True:
        line = io.recvline(timeout=5)
        if not line:
            break
        text = line.decode(errors="ignore").strip()
        if text:
            print(text, flush=True)

        parsed = parse_prompt(text)
        if parsed:
            last_prompt = parsed

        if "Generate please" in text:
            # Prompt and request are on the same or previous line.
            if not last_prompt:
                io.sendline(b"")
                continue
            name, exp = last_prompt
            license_b64 = solve_license(name, exp)
            io.sendline(license_b64.encode())
            last_prompt = None

    io.close()


if __name__ == "__main__":
    main()
