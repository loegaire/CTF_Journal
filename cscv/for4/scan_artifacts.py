import mmap, re, struct, pathlib, zipfile, io
p=pathlib.Path('artifacts'); p.mkdir(exist_ok=True)
with open('mem.dmp','rb') as f:
 m=mmap.mmap(f.fileno(),0,access=mmap.ACCESS_READ)
 for sig,label in [(b'IMGV','imgv'),(b'MEI\x0c\x0b\x0a\x0b\x0e','pyinstaller'),(b'PK\x05\x06','zip')]:
  pos=0; count=0
  while (pos:=m.find(sig,pos))>=0:
   off=pos; pos+=len(sig)
   if label=='imgv':
    n=struct.unpack_from('>I',m,off+4)[0]
    if 32<n<20000000 and n%16==0:
     print(label,off,n); (p/f'imgv_{off}.bin').write_bytes(m[off:off+8+n])
   elif label=='pyinstaller':
    n,toc,ts,ver=struct.unpack_from('>4I',m,off+8)
    print(label,off,n,toc,ts,ver)
   else:
    try:
     _,disk,cdisk,n1,n2,size,start,comment=struct.unpack_from('<4s4H2IH',m,off)
     begin=off-size-start
     if disk or cdisk or not n1 or n1!=n2 or begin<0 or m[begin:begin+4]!=b'PK\x03\x04':continue
     data=m[begin:off+22+comment]; z=zipfile.ZipFile(io.BytesIO(data)); names=z.namelist()
     if 'base_library' in str(names[:2]):continue
     print('zip',begin,len(data),names[:6]); (p/f'zip_{begin}.zip').write_bytes(data)
    except Exception:pass
