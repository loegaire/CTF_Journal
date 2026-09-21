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


def uvar14(data):
    uvar5 = adler32(data)
    uvar4 = fletcher16(data)
    if not data:
        uvar14_val = 0
        bvar8 = True
    else:
        uvar14_val = 0
        uvar14_val = sum_shift(data)
        if len(data) < 2:
            bvar8 = True
        else:
            bvar8 = all(data[i] == data[-1 - i] for i in range(len(data) // 2))
    if bvar8:
        uvar14_val = (uvar5 ^ uvar4) ^ (uvar14_val & 0xffffffff)
    return uvar14_val & 0xffffffff


s = b"msg_test"
x = bytes([b ^ 0x42 for b in s])
print("msg_test sum", sum_shift(s))
print("msg_test adler", adler32(s))
print("msg_test fletcher", fletcher16(s))
print("msg_test adler^fletcher", adler32(s) ^ fletcher16(s))
print("msg_test uvar14", uvar14(s))
print("msg_test_xor uvar14", uvar14(x))
print("msg_test_xor sum", sum_shift(x))
print("msg_test_xor adler^fletcher", adler32(x) ^ fletcher16(x))

m = b"X8LJJL8X"
print(uvar14(bytes([b ^ 0x42 for b in m])))

x = b':"*$$*":'
print("X uvar14", uvar14(x))
print("X bytes", list(x))
print("X adler", adler32(x))
print("X fletcher", fletcher16(x))
print("X sum", sum_shift(x))

y = b"x`hffh`x"
print("y uvar14", uvar14(bytes([b ^ 0x42 for b in y])))
print("y direct uvar14", uvar14(y))

tbl = "abcdefghijklmnopqrstuvwxyz012_9876543"
suffix = "".join(tbl[(b + i) % len(tbl)] for i, b in enumerate(y))
print("suffix", suffix)
