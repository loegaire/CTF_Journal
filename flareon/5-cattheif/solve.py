#!/usr/bin/env python3
"""catthief solver: RC4-decrypt /exfil bodies, then canonical-Huffman decompress.
Usage: python3 solve.py [capture.pcapng]  (needs tshark)"""
import sys, os, glob, subprocess, tempfile
KEY = bytes(c ^ 0x33 for c in b'Z\x02\x02lQ\x00lC\x02F]W\x00A\x02]lJ\x00AlW\x07\x04\x07')  # i11_b3_p1und3r1n_y3r_d474

def rc4(d):
    S = list(range(256)); j = 0
    for i in range(256):
        j = (j + S[i] + KEY[i % len(KEY)]) & 255; S[i], S[j] = S[j], S[i]
    i = j = 0; o = bytearray()
    for c in d:
        i = (i + 1) & 255; j = (j + S[i]) & 255; S[i], S[j] = S[j], S[i]
        o.append(c ^ S[(S[i] + S[j]) & 255])
    return bytes(o)

def bits(d):
    for byte in d:
        for k in range(7, -1, -1): yield (byte >> k) & 1

def decompress(d):
    it = bits(d)
    rd = lambda n: sum(next(it) << (n - 1 - k) for k in range(n))
    n = rd(11); rd(32)                      # symbol count, unused 32-bit field
    lens = [rd(8) for _ in range(n)]        # per-symbol code lengths
    tab = {}; code = 0; prev = 0
    for l, s in sorted((l, s) for s, l in enumerate(lens) if l):
        code <<= l - prev; prev = l; tab[(l, code)] = s; code += 1
    out = bytearray(); c = l = 0
    for b in it:
        c = (c << 1) | b; l += 1
        if (l, c) in tab: out.append(tab[(l, c)]); c = l = 0
    return bytes(out)

pcap = sys.argv[1] if len(sys.argv) > 1 else 'artifacts/catthief/capture.pcapng'
tmp = tempfile.mkdtemp()
subprocess.run(['tshark', '-r', pcap, '--export-objects', f'http,{tmp}'], check=True, capture_output=True)
files = sorted(glob.glob(tmp + '/*'), key=lambda x: (len(x), x))
name = None
for f in files:
    p = rc4(open(f, 'rb').read())
    if p.startswith(b'C:\\'):
        name = p.decode().split('\\')[-1]; print('server requested:', name)
    elif name:
        data = decompress(p); data = data[:data.rfind(b'\xff\xd9') + 2]
        os.makedirs('artifacts', exist_ok=True)
        open('artifacts/' + name, 'wb').write(data); print('  wrote', name, len(data))
print('Flag is written on the scroll in catcatcat.jpg: th3r3_b3_tr34sure_1n_th4t_pc4p@flare-on.com')
