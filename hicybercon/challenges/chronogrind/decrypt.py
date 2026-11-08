import sys, hashlib
from Crypto.Cipher import ChaCha20_Poly1305
vhex = sys.argv[1].strip()
v = int(vhex, 16)
vb = v.to_bytes(256, 'big')
k = hashlib.sha256(vb).digest()
data = open('chronogrind/flag.enc','rb').read()
assert data[:4] == b'CGFX'
ver = data[4]
nonce = data[5:17]
tag = data[17:33]
ct = data[33:]
c = ChaCha20_Poly1305.new(key=k, nonce=nonce)
pt = c.decrypt_and_verify(ct, tag)
print(pt.decode())
