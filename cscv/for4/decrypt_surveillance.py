from pathlib import Path
from Crypto.Cipher import AES
from Crypto.Util.Padding import unpad
import struct,zlib
key=bytes.fromhex('3e91fa1288cd04b2715a90ef234761d8')
for p in Path('artifacts').glob('virtual_*.bin'):
 b=p.read_bytes()
 if not b.startswith(b'IMGV'):continue
 n=int.from_bytes(b[4:8],'big')
 try:
  d=unpad(AES.new(key,AES.MODE_CBC,b[8:24]).decrypt(b[24:8+n]),16)
  if d.startswith(b'\x89PNG'):
   pos=8
   while pos<len(d):
    size=struct.unpack_from('>I',d,pos)[0]
    chunk=d[pos+4:pos+8+size]
    assert zlib.crc32(chunk)==struct.unpack_from('>I',d,pos+8+size)[0]
    pos+=12+size
   assert pos==len(d)
   out=p.with_suffix('.png');out.write_bytes(d);print(out,len(d))
 except ValueError:pass
