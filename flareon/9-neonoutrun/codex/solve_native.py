#!/usr/bin/env python3
"""Recover NeonOutRun's hidden timing bytes directly from the original ELF.
Dependencies: unicorn, pyelftools. No process instrumentation required.
"""
from emulate import run

key = run(0x67ed5b, 0x67eec7)['rax'] & 255
assert key == 90
constants = run(0x67ef9f, 0x67f8b8)
degrees = ((constants['rax'] << 7) | (constants['rdi'] << 5)
           | (constants['r14'] << 4) | (constants['r9'] << 2))
assert degrees == 180
assert constants['r13'] << 4 == 16

out = bytearray()
for i in range(28):
    index = run(0x67f9d8, 0x70000000, rdi=i, rsi=key)['rax'] & 255
    result = run(0x68003e, 0x70000000, rdi=index)
    offset = result['rax']
    if offset >= 1 << 63:
        offset -= 1 << 64
    negative = result['rdx'] & 1
    # sin((offset +/- byte) * pi/180) must attain its maximum.
    value = (offset - 90 if negative else 90 - offset) % 360
    assert 0 <= value <= 255
    assert (offset + (-value if negative else value)) % 360 == 90
    out.append(value)

print(out.decode('ascii') + '@flare-on.com')
