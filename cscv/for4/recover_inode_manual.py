from recover_pages import read
import struct,sys
from pathlib import Path
DIRECT=0xffff978e40000000
VMEM=0xffffe18300000000
def kv(va,n):return read((va|0xffff000000000000)-DIRECT,n)
def q(va):return struct.unpack('<Q',kv(va,8))[0]
def walk(entry):
 if not entry:return
 if entry&3==2:
  node=entry-2
  for e in struct.unpack('<64Q',kv(node+40,512)):
   if e>0xffff000000000000:yield from walk(e)
 elif entry&3==0:yield entry
def recover(inode):
 inode|=0xffff000000000000
 size=q(inode+80);mapping=q(inode+48);root=q(mapping+16)
 print('inode',hex(inode),'size',size,'mapping',hex(mapping),'root',hex(root))
 data=bytearray(size)
 # Xarray indices establish ordering independently of struct page contents.
 for i,ptr in enumerate(walk(root)):
  pa=((ptr-VMEM)//64)*4096
  chunk=read(pa,4096)
  print(i,hex(ptr),hex(pa),chunk[:16].hex())
  data[i*4096:min(size,(i+1)*4096)]=chunk[:min(4096,size-i*4096)]
 return data
if __name__=='__main__':Path(sys.argv[2]).write_bytes(recover(int(sys.argv[1],0)))
