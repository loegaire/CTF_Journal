#!/usr/bin/env python3
"""Invert re4's printed hash. Requires pefile; reads the untouched executable."""
import hashlib
import itertools
import struct
import sys
from pathlib import Path
import pefile

PE = pefile.PE(str(Path(__file__).with_name('crackme.exe')))
def read(rva, n):
    return PE.get_data(rva, n)

key = bytearray(hashlib.md5(read(0x1b068, 16)).digest() + bytes(16))
mix = bytes(x ^ 0x89 for x in read(0x1b048, 30))
for i in range(16):
    key[i] ^= read(0x28000, 1)[0] ^ ((31*i) & 255)
for i, x in enumerate(mix):
    key[i % 16] ^= x
rounds = read(0x1a750, 384)

def rol(x, n):
    return ((x << n) | (x >> (8-n))) & 255

def scramble(data, inverse=False):
    a = list(data)
    if len(a) < 2:
        return bytes(a)
    for r in (range(47, -1, -1) if inverse else range(48)):
        if inverse:
            a = a[-1:] + a[:-1]
        for i in (range(len(a)-1, -1, -1) if inverse else range(len(a))):
            j = r*8 + i%8
            k = key[j%32] ^ rounds[j]
            nxt = a[(i+1)%len(a)]
            a[i] = rol(((a[i]^k)-nxt)&255, 3) if inverse else ((rol(a[i],5)+nxt)&255)^k
        if not inverse:
            a = a[1:] + a[:1]
    return bytes(a)

def djb(data):
    h = 5381
    for x in data:
        h = (33*h+x)&0xffffffff
    return h

def fnv(data):
    h = 0x811c9dc5
    for x in data:
        h = ((h^x)*0x1000193)&0xffffff
    return h

def variant(v):
    addr = 0x1000 + 0x140*v
    salt = struct.unpack('<I', read(0x2b70+0x40*v+0x2a,4))[0]
    seedxor = read(addr+0xf2, 1)[0]
    disp = struct.unpack('<i', read(addr+0x105,4))[0]
    table = read(addr+0x109+disp,256)
    assert len(set(table)) == 256
    return salt, seedxor, table

def transform(data, v):
    salt, seedxor, table = variant(v)
    a = bytearray()
    n = len(data)//3*3
    for i in range(0,n,3):
        a += ((fnv(data[i:i+3])^salt^key[0])&0xffffff).to_bytes(3,'little')
    a += bytes(x^key[0] for x in data[n:])
    seed = (djb(data[:2])^key[0]^seedxor)&255
    out = bytearray()
    for x in a:
        seed = table[seed^x]
        out.append(seed)
    return bytes(out)

def hash_secret(data):
    return scramble(transform(data,djb(data)%7))

def solve(target):
    a = scramble(target,True)
    alphabet = range(32,127)
    invmul = pow(0x1000193,-1,1<<24)
    for v in range(7):
        salt, seedxor, table = variant(v)
        inv = bytes(table.index(i) for i in range(256))
        raw = bytes(inv[a[i]]^a[i-1] for i in range(1,len(a)))
        chunks = []
        # First block's first byte depends on the first two plaintext bytes.
        for pos in range(0,len(a)//3*3,3):
            options = []
            for x,y in itertools.product(alphabet,repeat=2):
                first = inv[a[0]] ^ ((djb(bytes([x,y]))^key[0]^seedxor)&255)
                block = bytes([first])+raw[:2] if pos == 0 else raw[pos-1:pos+2]
                wanted = (int.from_bytes(block,'little')^salt^key[0])&0xffffff
                z = ((wanted*invmul)&0xffffff)^fnv(bytes([x,y]))
                if z in alphabet:
                    options.append(bytes([x,y,z]))
            chunks.append(options)
        tailpos = len(a)//3*3
        tail = bytes(x^key[0] for x in raw[tailpos-1:]) if tailpos<len(a) else b''
        print('variant',v,'block candidates',[len(c) for c in chunks], 'tail',repr(tail))
        for parts in itertools.product(*chunks):
            candidate = b''.join(parts)+tail
            if djb(candidate)%7 == v and hash_secret(candidate)==target:
                yield candidate

if __name__ == '__main__':
    assert hash_secret(b'test').hex() == '43dcaadb'
    assert hash_secret(b'hello').hex() == 'e0c9c9bf63'
    target = bytes.fromhex(sys.argv[1] if len(sys.argv)>1 else '1cadaa43c24a8fa54b4bd6470e1affe50267babfe691275c')
    for secret in solve(target):
        print('Secret:',secret.decode())
        print('Flag: CSCV2026{'+secret.decode()+'}')
        print('Verified model hash:',hash_secret(secret).hex())
