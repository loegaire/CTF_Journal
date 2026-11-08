from recover_pages import m
from Crypto.Cipher import AES
import struct
k=[-1230090044,2127323314,-1059689052,1415825335,-2074817314,253067825,763488977,855944017]
k=[v&0xffffffff for v in k]
key=struct.pack('>4I',*(k[i]^k[i+4] for i in range(4)))
iv=struct.pack('>4I',k[4],k[5],0,0)
plain=m[872538176:872538176+16]
sig=bytes(a^b for a,b in zip(AES.new(key,AES.MODE_ECB).encrypt(iv),plain))
print('key',key.hex(),'iv',iv.hex(),'ciphertext',sig.hex(),flush=True)
p=0
while (p:=m.find(sig,p))>=0:
 print('match',p,flush=True);p+=16
