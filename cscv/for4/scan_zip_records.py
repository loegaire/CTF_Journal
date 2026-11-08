from recover_pages import m
import struct
p=0
while (p:=m.find(b'PK\x05\x06',p))>=0:
 try:
  _,a,b,n1,n2,size,off,c=struct.unpack_from('<4s4H2IH',m,p)
  if a==b==0 and n1==n2 and 10<=n1<=100:
   print(p,n1,size,off,c,flush=True)
 except:pass
 p+=4
