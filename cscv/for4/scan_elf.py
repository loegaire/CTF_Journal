from recover_pages import m
import struct,pathlib
pos=0
while (pos:=m.find(b'\x7fELF\x02\x01\x01',pos))>=0:
 off=pos;pos+=7
 try:
  typ,mach=struct.unpack_from('<HH',m,off+16);sh=struct.unpack_from('<Q',m,off+40)[0];ents,n,idx=struct.unpack_from('<HHH',m,off+58)
  size=sh+ents*n
  if mach==62 and typ in (2,3) and 10000<size<100000:
   data=m[off:off+size]
   print(off,typ,size,b'collect' in data,b'documents' in data,flush=True)
   if size==23360 or b'Collection completed' in data or b'documents_staging' in data:
    pathlib.Path(f'artifacts/elf_{off}.bin').write_bytes(data)
 except:pass
