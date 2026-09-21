import struct
import hashlib
from pathlib import Path

blob = Path("/home/thinh/ctf/dreamhack/dreamcurl/curl").read_bytes()
base = 0x9E000
fmt = "<" + "H" * 1024
T = list(struct.unpack(fmt, blob[base + 0x20 : base + 0x20 + 0x800]))

name = b"my_username"
exp = b"2026-12-31"
md5 = hashlib.md5(name + b"|" + exp).digest()


def sub_16780(a1, a2):
    return [a1[a2[i]] for i in range(1024)]


def sub_16820(a1_init, data):
    vars0 = list(range(1024))
    a1 = a1_init[:]
    for b in data:
        for i in range(7, -1, -1):
            if (b >> i) & 1:
                vars0 = sub_16780(vars0, a1)
            a1 = sub_16780(a1, a1)
    return vars0


O1 = sub_16820(T, md5)
k = int.from_bytes(md5, "big")


def perm_pow(p, k, forward=True):
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
            if forward:
                out[v] = cycle[(idx + shift) % length]
            else:
                out[v] = cycle[(idx - shift) % length]
    return out


print("forward", O1 == perm_pow(T, k, True))
print("backward", O1 == perm_pow(T, k, False))
