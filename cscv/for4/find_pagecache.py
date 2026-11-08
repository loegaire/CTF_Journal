from recover_pages import m,phys,read
import struct,sys
pa=phys(int(sys.argv[1]));ptr=0xffffea0000000000+(pa//4096)*64
print(hex(pa),hex(ptr),flush=True)
sig=struct.pack('<Q',ptr);p=0
while (p:=m.find(sig,p))>=0:
 print('ref',p,hex(phys(p)),flush=True)
 print([(i,hex(struct.unpack_from('<Q',m,p+i)[0])) for i in range(-32,64,8)],flush=True)
 p+=8
