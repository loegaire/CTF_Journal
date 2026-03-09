from __future__ import annotations

import binascii

import sol


def main() -> None:
    hex_payload = sol.generate_payload().strip()
    blob = binascii.unhexlify(hex_payload)

    nr = blob[0]
    cc = blob[1]
    i = 2
    for _ in range(cc):
        typ = blob[i]
        i += 1
        if typ != 0x02:
            raise SystemExit(f"unexpected const type {typ} at index {_}")
        ln = blob[i] | (blob[i + 1] << 8)
        i += 2 + ln

    code = blob[i:]
    print(f"nr={nr} cc={cc} code_len={len(code)}")

    jmp_pos = 10  # b(3) + c(4) + a(3)
    print("jmp bytes:", code[jmp_pos : jmp_pos + 3].hex(), list(code[jmp_pos : jmp_pos + 3]))
    off = code[jmp_pos + 1] | (code[jmp_pos + 2] << 8)
    print("decoded off:", off)
    print("decoded target:", jmp_pos + 3 + off)

    p = 200
    print("payload @200:", code[p : p + 16].hex(), list(code[p : p + 16]))


if __name__ == "__main__":
    main()
