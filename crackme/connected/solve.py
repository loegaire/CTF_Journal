from itertools import product

def adler32(data):
    s1 = 1
    s2 = 0
    for b in data:
        s1 = (s1 + b) % 0xfff1
        s2 = (s2 + s1) % 0xfff1
    return s1 + (s2 << 16)


def fletcher16(data):
    s1 = 0
    s2 = 0
    for b in data:
        s2 = (s2 + b) % 0xff
        s1 = (s1 + s2) % 0xff
    return (s1 << 8) | s2


def sum_shift(data):
    total = 0
    for i, b in enumerate(data):
        total += int(b) << (i & 0x1f)
    return total & 0xffffffff


allowed = list(range(0x22, 0x7f, 2))
target = 0x6022e46

for a in allowed:
    for b in range(0x22, 0x7f, 2):
        for c in allowed:
            for d in allowed:
                m = [a, b, c, d, d, c, b, a]
                s_val = sum_shift(m)
                h_val = adler32(m) ^ fletcher16(m)
                if (h_val ^ s_val) == target:
                    print("FOUND", [a, b, c, d, d, c, b, a])
                    raise SystemExit

print("no match")
