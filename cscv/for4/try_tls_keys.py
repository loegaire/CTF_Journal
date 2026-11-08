from pathlib import Path
from Crypto.Cipher import AES,_mode_gcm
import re,struct
server=b''.join(bytes.fromhex(l.strip()) for l in Path('stream75.txt').read_text().splitlines() if l.startswith('\t'))
records=[];p=0
while p+5<len(server):
 n=int.from_bytes(server[p+3:p+5],'big');r=server[p:p+5+n];p+=5+n
 if r[0]==23:records.append(r)
print('records',list(map(len,records)))
keys={l.split()[1] for l in Path('aes_keys_all.txt').read_text().splitlines()}
for key in keys:
 a=AES.new(bytes.fromhex(key),AES.MODE_ECB);h=a.encrypt(bytes(16))
 for i,r in enumerate(records):
  aad=r[:5];ct=r[5:-16];tag=r[-16:]
  inp=aad+bytes((-len(aad))%16)+ct+bytes((-len(ct))%16)+struct.pack('>QQ',40,len(ct)*8)
  gh=_mode_gcm._GHASH(h,_mode_gcm._ghash_clmul).update(inp).digest()
  j=a.decrypt(bytes(x^y for x,y in zip(tag,gh)))
  if j[-4:]==b'\0\0\0\1':
   d=AES.new(bytes.fromhex(key),AES.MODE_GCM,nonce=j[:12]);d.update(aad);plain=d.decrypt_and_verify(ct,tag)
   print('FOUND',key,i,j.hex(),repr(plain[:150]));Path(f'artifacts/tls75_{i}.bin').write_bytes(plain)
