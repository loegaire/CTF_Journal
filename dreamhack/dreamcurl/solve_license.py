import base64
import hashlib
import math
import struct
from pathlib import Path

NAME = b"my_username"
EXP = b"2026-12-31"
MAGIC = 0x4C52550C4DEA520D

BINARY_PATH = Path("/home/thinh/ctf/dreamhack/dreamcurl/curl")
LICENSE_PATH = Path("/home/thinh/.dreamcurlicense")

# Mapping used by sub_16820: bytes are processed MSB->LSB, but the exponent
# matches little-endian with per-byte bit reversal.
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


def perm_pow(p: list[int], k: int) -> list[int]:
    n = len(p)
    out = list(range(n))
    seen = [False] * n
    for i in range(n):
        if seen[i]:
            continue
        cycle = []
        j = i
        while not seen[j]:
            seen[j] = True
            cycle.append(j)
            j = p[j]
        length = len(cycle)
        if length == 1:
            continue
        shift = k % length
        for idx, v in enumerate(cycle):
            out[v] = cycle[(idx + shift) % length]
    return out


def sub_16780(a1: list[int], a2: list[int]) -> list[int]:
    return [a1[a2[i]] for i in range(1024)]


def sub_16820(a1_init: list[int], data: bytes) -> list[int]:
    vars0 = list(range(1024))
    a1 = a1_init[:]
    for b in data:
        for i in range(7, -1, -1):
            if (b >> i) & 1:
                vars0 = sub_16780(vars0, a1)
            a1 = sub_16780(a1, a1)
    return vars0


def perm_k_from_output(p: list[int], out: list[int]) -> tuple[int, int]:
    congruences: list[tuple[int, int]] = []
    visited = [False] * len(p)
    for i in range(len(p)):
        if visited[i]:
            continue
        cycle = []
        j = i
        while not visited[j]:
            visited[j] = True
            cycle.append(j)
            j = p[j]
        length = len(cycle)
        if length == 1:
            continue
        shift = cycle.index(out[cycle[0]])
        for idx, v in enumerate(cycle):
            if out[v] != cycle[(idx + shift) % length]:
                raise RuntimeError("Inconsistent shift in cycle")
        congruences.append((shift, length))

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


def main() -> None:
    # MD5 path uses unk_29E820 (offset 0x820), signature uses unk_29E020 (0x20).
    t1 = load_table(0x820)
    t2 = load_table(0x20)

    md5 = hashlib.md5(NAME + b"|" + EXP).digest()
    k1 = k_from_bytes_little_lsb(md5)
    target = perm_pow(t1, k1)
    k2, order = perm_k_from_output(t2, target)
    # Find a representative within 128-bit range.
    max_k = (1 << 128) - 1
    if k2 > max_k:
        # Reduce by the permutation order while staying non-negative.
        if order == 0:
            raise RuntimeError("Invalid permutation order")
        t = (max_k - k2) // order
        k2 = k2 + order * t
        if k2 > max_k:
            raise RuntimeError("No 128-bit representative for k2")
    sig = bytes_from_k_little_lsb(k2)

    # Sanity check: ensure the transform outputs match.
    out1 = sub_16820(t1, md5)
    out2 = sub_16820(t2, sig)
    if out1 != out2:
        raise RuntimeError("Computed signature does not satisfy transform")

    name_field = NAME.ljust(0x20, b"\x00")
    exp_field = EXP.ljust(0x10, b"\x00")
    license_blob = struct.pack("<Q", MAGIC) + name_field + exp_field + sig
    b64 = base64.b64encode(license_blob).decode()
    LICENSE_PATH.write_text(b64 + "\n", encoding="ascii")
    print(b64)


if __name__ == "__main__":
    main()
