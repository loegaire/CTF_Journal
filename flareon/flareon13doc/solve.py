#!/usr/bin/env python3
"""flareon13.doc polyglot solver. Usage: python3 solve.py [path/to/flareon13.doc]
Collects the 6 layer secrets, verifies them against the Crystal checker's MD5 list,
and RC4-decrypts the flag with key = XOR(SHA256(piece_i))."""
import sys, struct, hashlib, zlib
from Crypto.Cipher import ARC4

f = open(sys.argv[1] if len(sys.argv) > 1 else 'artifacts/flareon13.doc', 'rb').read()

# 0) DOS/EICAR stub: self-modifying COM prints an int21/09 string
b = bytearray(f[:0x84])
for i, k in enumerate([0x6023, 0x6025, 0x6022, 0x6033, 0x6037]):
    b[0x60 + i] ^= (0x4020 ^ k) & 0xff
p0 = b[0x60:b.index(b'$', 0x60)].decode()

# 1) PDF invisible text (3 Tr), EBCDIC hex string (RC4-40 PDF, empty user pw)
p1 = bytes.fromhex('9481899586998194856d8582838489836d878896a2a3').decode('cp037')
# 2) PDF off-page JBIG2 image text (read visually via `pdfimages`)
p2 = 'jbig2_fax_geometry'
# 3) UDF Implementation Use Volume Descriptor string
p3 = 'udf_tagged_descriptor'

# 4) ZIP (ZipCrypto + Reduce1): internal keys recovered with bkcrack using 64 zero
#    bytes of known plaintext (Reduce follower-set counts for bytes >=0x80 are zero)
def crc32b(c, x):
    return zlib.crc32(bytes([x]), c ^ 0xffffffff) ^ 0xffffffff

zo = f.rfind(b'PK\x03\x04')
_, _, _, meth, _, _, crc, cs, us, nl, el = struct.unpack('<IHHHHHIIIHH', f[zo:zo + 30])
data = f[zo + 30 + nl + el: zo + 30 + nl + el + cs]
k0, k1, k2 = 0x0917ed61, 0xcfc8f696, 0x5d3e9072
pt = bytearray()
for c in data:
    t = (k2 | 2) & 0xffff
    x = c ^ (((t * (t ^ 1)) >> 8) & 0xff)
    pt.append(x)
    k0 = crc32b(k0, x)
    k1 = ((k1 + (k0 & 0xff)) * 134775813 + 1) & 0xffffffff
    k2 = crc32b(k2, k1 >> 24)
comp = bytes(pt[12:])
pos = 0

def rb(n):
    global pos
    v = 0
    for i in range(n):
        if (pos >> 3) < len(comp):
            v |= ((comp[pos >> 3] >> (pos & 7)) & 1) << i
        pos += 1
    return v

S = [None] * 256
for i in range(255, -1, -1):
    S[i] = [rb(8) for _ in range(rb(6))]
B = lambda n: 0 if n == 0 else max(1, (n - 1).bit_length())
out = bytearray(); last = st = V = L = 0
while len(out) < us:
    if not S[last] or rb(1):
        C = rb(8)
    else:
        C = S[last][rb(B(len(S[last])))]
    last = C
    if st == 0:
        if C != 144: out.append(C)
        else: st = 1
    elif st == 1:
        if C == 0: out.append(144); st = 0
        else: V = C; L = V & 0x7f; st = 2 if L == 0x7f else 3
    elif st == 2:
        L += C; st = 3
    else:
        off = ((V >> 7) & 1) * 256 + C + 1
        for _ in range(L + 3): out.append(out[-off])
        st = 0
assert zlib.crc32(bytes(out[:us])) == crc
p4 = bytes(out[:us]).decode()

# 5) Mach-O arm64 slice (fire animation): SHA-0(LE words) hex ^ const -> text
#    (derived by emulation, see scratch/emu0.py)
p5 = 'Ød1n_373rn4l_fl4r3'

pieces = [p0, p1, p2, p3, p4, p5]

# Crystal checker = 2nd fat slice of UDF file click_me (raw 2352-byte CD sectors)
def udf_file(loc):
    P = 0x9c310
    sec = lambda n: f[P + n * 2352: P + n * 2352 + 2048]
    fe = sec(loc)
    size = struct.unpack('<Q', fe[56:64])[0]
    lea = struct.unpack('<I', fe[168:172])[0]
    start = struct.unpack('<I', fe[176 + lea + 4:176 + lea + 8])[0]
    return b''.join(sec(start + i) for i in range(-(-size // 2048)))[:size]

cm = udf_file(4)
off, sz = struct.unpack('>II', cm[8 + 20 + 8:8 + 20 + 16])
s1 = cm[off:off + sz]
nib = lambda a, n: ''.join('%x' % (c ^ 0x80) for c in s1[a:a + n])
H = [nib(0x35e30 + 32 * i, 32) for i in range(6)]
assert all(hashlib.md5(p.encode()).hexdigest() == H[i] for i, p in enumerate(pieces))
key = bytes(32)
for p in pieces:
    key = bytes(a ^ b for a, b in zip(key, hashlib.sha256(p.encode()).digest()))
print(ARC4.new(key).decrypt(bytes.fromhex(nib(0x35ef0, 0x50))).decode())
