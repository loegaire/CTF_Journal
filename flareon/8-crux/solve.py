import struct,base64,sys
from Crypto.Cipher import AES
from Crypto.Util.Padding import pad
from sympy import factorint, isprime
K=bytes.fromhex('cabeba7ad156801d1c82381c7cb8a3c406ae2c3cd168a96cd8373684cdbf8723');IV=bytes.fromhex('5ff26040c4c20b9f2ffdefa7ecf65d91')
def num(n): return n.to_bytes((n.bit_length()+7)//8,'little')
def lp(b): return struct.pack('<I',len(b))+b
def cert(p):
    if p==2: return b'\x00'
    fs=[]
    for q,e in sorted(factorint(p-1).items()): fs+= [int(q)]*e
    g=2
    while not all(pow(g,(p-1)//q,p)!=1 for q in set(fs)): g+=1
    kids=[cert(q) for q in fs]
    return b'\x01'+struct.pack('<I',len(kids))+b''.join(lp(k) for k in kids)+lp(num(p))+lp(num(g))
def enc(pt): return base64.b64encode(AES.new(K,AES.MODE_CBC,IV).encrypt(pad(pt,16))).decode()
if __name__=="__main__":
    N=95681613235744740119807961018865688051340183696570761153419351987106658443873  # target root recovered via Cmp hook (func 3254)
    print(enc(cert(N)))
