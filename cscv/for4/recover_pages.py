import mmap,struct,numpy as np,sys
from pathlib import Path
f=open('mem.dmp','rb');m=mmap.mmap(f.fileno(),0,access=mmap.ACCESS_READ)
segments=[];p=0
while p<len(m):
 _,_,a,b,_=struct.unpack_from('<IIQQQ',m,p);segments.append((a,b,p+32));p+=32+b-a+1
def offset(pa):
 for a,b,o in segments:
  if a<=pa<=b:return o+pa-a
 raise ValueError(pa)
def phys(off):
 for a,b,o in segments:
  if o<=off<=o+b-a:return a+off-o
 raise ValueError(off)
def read(pa,n):return m[offset(pa):offset(pa)+n]
if __name__=='__main__':
 target=phys(int(sys.argv[1]) if len(sys.argv)>1 else 133917632);page=target&~4095;print('target',hex(target),flush=True)
 for a,b,o in segments:
  for step in range(0,b-a+1,64*1024*1024):
   n=min(64*1024*1024,b-a+1-step)//8
   ar=np.frombuffer(m,dtype='<u8',count=n,offset=o+step)
   ix=np.where((ar&0x000ffffffffff001)==(page|1))[0]
   for i in ix:
    pa=a+step+int(i)*8; val=int(ar[i]); print('pte',hex(pa),hex(val),flush=True)
    if val&4:
     pt=pa&~4095;idx=(pa&4095)//8
     entries=struct.unpack('<512Q',read(pt,4096))
     try:
      data=b''.join(read(e&0x000ffffffffff000,4096) for e in entries[idx:idx+34] if e&1)[target&4095:]
      out=Path('artifacts')/f'virtual_{pa:x}.bin';out.write_bytes(data)
     except ValueError:pass
