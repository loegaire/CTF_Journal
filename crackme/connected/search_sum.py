allowed = list(range(0x22, 0x7f, 2))
target = 0x6022e46

# Meet-in-the-middle: sum(b_i << i)
left = {}
for b0 in allowed:
    for b1 in allowed:
        for b2 in allowed:
            for b3 in allowed:
                s = (b0 << 0) + (b1 << 1) + (b2 << 2) + (b3 << 3)
                left.setdefault(s, (b0, b1, b2, b3))

found = None
for b4 in allowed:
    for b5 in allowed:
        for b6 in allowed:
            for b7 in allowed:
                s = (b4 << 4) + (b5 << 5) + (b6 << 6) + (b7 << 7)
                want = target - s
                if want in left:
                    b0, b1, b2, b3 = left[want]
                    msg = bytes([b0, b1, b2, b3, b4, b5, b6, b7])
                    found = msg
                    break
            if found:
                break
        if found:
            break
    if found:
        break

if found:
    print("FOUND", found)
    print(found.decode("ascii"))
else:
    print("no match")
