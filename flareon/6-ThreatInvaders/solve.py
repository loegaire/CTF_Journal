#!/usr/bin/env python3
"""Recover ThreatInvaders C2 traffic; optionally verify with original x64 code.
Requires tshark. --verify-native additionally requires pefile and unicorn.
"""
import argparse
import base64
import json
from pathlib import Path
import struct
import subprocess
import uuid

ROOT = Path(__file__).resolve().parent
MASK = (1 << 64) - 1

class Cipher:
    def __init__(self, key):
        a, b = struct.unpack('<QQ', key)
        a ^= ((a >> 2) + 0x9e3779b97f4a7c15 + (a << 6) + b) & MASK
        a = ((a >> 33) ^ a) * 0xff51afd7ed558ccd & MASK
        a = ((a >> 29) ^ a) * 0xc4ceb9fe1a85ec53 & MASK
        self.state = a ^ (a >> 32)

    def crypt(self, data):
        out = bytearray()
        for byte in data:
            self.state = (self.state * 0x5851f42d4c957f2d + 0x14057b7ef767814f) & MASK
            out.append(byte ^ (self.state >> 56))
        return bytes(out)

class NativeCipher:
    """Run the unmodified cipher from the supplied PE; emulate only memcpy."""
    def __init__(self, key):
        import pefile
        from unicorn import Uc, UC_ARCH_X86, UC_MODE_64, UC_HOOK_CODE
        from unicorn.x86_const import UC_X86_REG_RCX, UC_X86_REG_RDX, UC_X86_REG_R8, UC_X86_REG_RSP, UC_X86_REG_RIP
        self.regs = (UC_X86_REG_RCX, UC_X86_REG_RDX, UC_X86_REG_R8, UC_X86_REG_RSP, UC_X86_REG_RIP)
        pe = pefile.PE(str(ROOT / 'artifacts/ThreatInvaders/ThreatInvaders.exe'))
        self.uc = u = Uc(UC_ARCH_X86, UC_MODE_64)
        base = pe.OPTIONAL_HEADER.ImageBase
        u.mem_map(base, (pe.OPTIONAL_HEADER.SizeOfImage + 4095) & ~4095)
        u.mem_write(base, pe.get_memory_mapped_image())
        u.mem_map(0x1000000, 0x20000)
        u.mem_write(0x1407ffa30, key)
        u.mem_write(0x1407ffa20, bytes(8))
        def memcpy(uc, address, size, _):
            if address == 0x140633d70:
                rcx, rdx, r8, rsp, rip = self.regs
                uc.mem_write(uc.reg_read(rcx), bytes(uc.mem_read(uc.reg_read(rdx), uc.reg_read(r8))))
                sp = uc.reg_read(rsp)
                uc.reg_write(rip, struct.unpack('<Q', uc.mem_read(sp, 8))[0])
                uc.reg_write(rsp, sp + 8)
        u.hook_add(UC_HOOK_CODE, memcpy)

    def crypt(self, data):
        rcx, rdx, _, rsp, _ = self.regs
        u = self.uc
        u.mem_write(0x1000000, data)
        u.mem_write(0x101f008, struct.pack('<Q', 0x1010000))
        u.reg_write(rcx, 0x1000000)
        u.reg_write(rdx, len(data))
        u.reg_write(rsp, 0x101f008)
        u.emu_start(0x1400c65e0, 0x1010000, count=1000000)
        return bytes(u.mem_read(0x1000000, len(data)))

def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--verify-native', action='store_true')
    args = parser.parse_args()
    raw = subprocess.check_output(['tshark', '-r', str(ROOT / 'artifacts/ThreatInvaders/challenge.pcapng'),
                                   '-Y', 'http', '-T', 'fields', '-e', 'http.file_data'], text=True)
    docs = []
    for line in raw.splitlines():
        if not line:
            continue
        try:
            docs.append(json.loads(bytes.fromhex(line)))
        except (ValueError, UnicodeDecodeError):
            continue
    hello = next(d for d in docs if d.get('feedback_length') == 0x2010)
    session = uuid.UUID(hello['session_id']).bytes_le
    key = bytes(a ^ b for a, b in zip(session[::-1], base64.b64decode(hello['feedback_b64'])))
    print('Key:', key.hex())
    cipher = Cipher(key)
    native = NativeCipher(key) if args.verify_native else None
    seen = set()
    messages = []
    for doc in docs:
        entries = doc.get('entries', [])
        for entry in entries if isinstance(entries, list) else []:
            if entry['player_name'] in ('BANANA', 'BENIGN') and entry['id'] not in seen:
                seen.add(entry['id'])
                messages.append(('command', base64.b64decode(entry['comment_b64'])))
        length = doc.get('feedback_length', 0)
        if length & 0x4000:
            messages.append(('response', base64.b64decode(doc['feedback_b64'])[:length & 0xfff]))
    for kind, data in messages:
        plain = cipher.crypt(data)
        if native:
            assert native.crypt(data) == plain, 'Native cipher mismatch'
        print(f'{kind} ({len(data)} bytes):\n{plain.decode()}')
    assert len(messages) == 4
    if native:
        print('Verified all four messages against original native cipher instructions.')

if __name__ == '__main__':
    main()
