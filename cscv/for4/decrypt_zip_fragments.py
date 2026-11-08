from recover_pages import m
from pathlib import Path
import struct,zlib
table=[]
for i in range(256):
 c=i
 for _ in range(8):c=(c>>1)^(0xedb88320 if c&1 else 0)
 table.append(c)
def decrypt(b):
 x,y,z=0x670e8462,0x306591b4,0x8372919d;out=bytearray()
 for c in b:
  t=z|2;c^=((t*(t^1))>>8)&255
  x=(x>>8)^table[(x^c)&255]
  y=((y+(x&255))*134775813+1)&0xffffffff
  z=(z>>8)^table[(z^(y>>24))&255]
  out.append(c)
 return bytes(out[12:])
p=0;root=Path('artifacts/decrypted_entries');root.mkdir(exist_ok=True)
while (p:=m.find(b'PK\x03\x04',p))>=0:
 off=p;p+=4
 try:
  _,ver,flags,method,tm,dt,crc,cs,us,nl,el=struct.unpack_from('<4s5H3I2H',m,off)
  name=m[off+30:off+30+nl]
  if not name.startswith(b'staged/') or flags!=1 or method!=0 or not 12<=cs<1000000:continue
  start=off+30+nl+el;b=decrypt(m[start:start+cs]);ok=zlib.crc32(b)==crc
  print(off,name.decode(errors='replace'),cs,ok,flush=True)
  if ok:(root/Path(name.decode()).name).write_bytes(b)
 except Exception as e:print(e)
