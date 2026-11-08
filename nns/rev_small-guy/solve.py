#!/usr/bin/env python3
"""Recover small-guy's input by inverting its DWARF unwind operations."""
import re
import struct
import subprocess
from pathlib import Path

ROOT = Path(__file__).resolve().parent
BIN = ROOT / 'small-guy'
data = BIN.read_bytes()
frames = subprocess.check_output(['readelf', '-wf', str(BIN)], text=True)
M = (1 << 64) - 1
MOD = 1 << 64
regs = {3: 0, 12: 1, 13: 2, 14: 3}
rows = {}
pc = None
for line in frames.splitlines():
    match = re.search(r'DW_CFA_advance_loc\w*:.* to ([0-9a-f]+)', line)
    if match:
        pc = int(match[1], 16)
    match = re.search(r'DW_CFA_val_expression: r(\d+) \([^)]*\) \((.*)\)', line)
    if match and pc is not None:
        rows.setdefault(pc, []).append((int(match[1]), match[2]))

def inverse_code(expressions):
    if len(expressions) == 2:
        a, b = (regs[e[0]] for e in expressions)
        return f's[{a}], s[{b}] = s[{b}], s[{a}]'
    reg, expr = expressions[0]
    a = regs[reg]
    br = [int(x) for x in re.findall(r'DW_OP_breg(\d+)', expr)]
    constants = [int(x) for x in re.findall(r'DW_OP_constu: (\d+)', expr)]
    if 'DW_OP_bra' in expr:
        mul, add = constants
        return f'\n for _ in range((c & 3) + 1): s[{a}] = ((s[{a}] - {add}) * {pow(mul,-1,MOD)}) & M'
    if 'DW_OP_shl' in expr:
        b = regs[br[1]]
        l, r = constants
        return f's[{a}] ^= ((s[{b}] << {l}) | (s[{b}] >> {r})) & M'
    if len(br) == 2:
        assert br[1] == 2
        if 'DW_OP_xor' in expr:
            return f's[{a}] ^= c'
        return f's[{a}] = (s[{a}] - c * {constants[0]}) & M'
    if 'DW_OP_mul' in expr:
        return f's[{a}] = (s[{a}] * {pow(constants[0],-1,MOD)}) & M'
    return f's[{a}] = (s[{a}] - {constants[0]}) & M'

jumps = struct.unpack_from('<32Q', data, 0x1df0)
ops = []
for j in jumps:
    namespace = {'M': M}
    exec('def inv(s, c):\n ' + inverse_code(rows[j]), namespace)
    ops.append(namespace['inv'])
schedule = data[0x14d0:0x15d0]
keys = struct.unpack_from('<256Q', data, 0x15d0)
target = struct.unpack_from('<4Q', data, 0x1dd0)

def recover(seed):
    salt = seed * 0x9e3779b97f4a7c15 & M
    s = list(target)
    for i in range(256):
        opcode = (schedule[i] + (seed >> (i & 7))) & 31
        # Expressions read the incoming rcx, restored by the deeper frame.
        c = (keys[i+1] ^ salt) if i < 255 else 0
        ops[opcode](s, c)
    return struct.pack('<4Q', *s)

if __name__ == '__main__':
    for seed in range(65536):
        result = recover(seed)
        if int.from_bytes(result[:2], 'little') == seed:
            print('Candidate:', repr(result), flush=True)
            if all(32 <= c < 127 for c in result):
                flag = 'NNS{' + result.decode() + '}'
                print(flag, flush=True)
                check = subprocess.check_output([str(BIN), flag], text=True)
                print(check, end='')
                if 'Correct!' in check:
                    break
