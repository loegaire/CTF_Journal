from recover_pages import m,segments,phys
import numpy as np,struct
low=(phys(872538176)//4096*64)&0x3fffffff
for a,b,o in segments:
 for step in range(0,b-a+1,64*1024*1024):
  ar=np.frombuffer(m,dtype='<u8',count=min(64*1024*1024,b-a+1-step)//8,offset=o+step)
  for i in np.where(((ar&0x3fffffff)==low)&((ar>>48)==65535))[0]:
   off=o+step+int(i)*8;print(off,hex(int(ar[i])),[hex(v) for v in struct.unpack_from('<12Q',m,off-32)],flush=True)
