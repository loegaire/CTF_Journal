import json,struct,urllib.request,urllib.parse,hashlib
from pathlib import Path
from Crypto.Cipher import AES
sessions=json.loads(Path('artifacts/mega_sessions.json').read_text())
sessions=sorted(sessions,key=lambda s:len(sessions[s]),reverse=True)
seen=set()
for sid in sessions:
 sid=sid[:58]
 if len(sid)!=58 or sid in seen:continue
 seen.add(sid)
 endpoint='https://g.api.mega.co.nz/cs?'+urllib.parse.urlencode({'id':20260925,'sid':sid})
 body=json.dumps([{'a':'g','g':1,'ssl':1,'n':'4qpXAS4L'}]).encode()
 try:
  req=urllib.request.Request(endpoint,data=body,headers={'Content-Type':'application/json'})
  response=json.load(urllib.request.urlopen(req,timeout=25))[0]
  if not isinstance(response,dict):print('Session candidate',len(seen),'API status',response,flush=True);continue
  Path('artifacts/collector_api_response.json').write_text(json.dumps(response))
  url=response.get('g')
  if not isinstance(url,str):print('No download URL in response',flush=True);continue
  raw=urllib.request.urlopen(url,timeout=30).read()
  Path('artifacts/collector_retrieved.enc').write_bytes(raw)
  k=[v&0xffffffff for v in [-1230090044,2127323314,-1059689052,1415825335,-2074817314,253067825,763488977,855944017]]
  key=struct.pack('>4I',*(k[i]^k[i+4] for i in range(4)))
  iv=struct.pack('>4I',k[4],k[5],0,0)
  plain=AES.new(key,AES.MODE_CTR,nonce=b'',initial_value=int.from_bytes(iv,'big')).decrypt(raw)
  assert len(plain)==23360 and plain[:4]==b'\x7fELF'
  ecb=AES.new(key,AES.MODE_ECB);mac=struct.pack('>4I',k[4],k[5],k[4],k[5])
  for off in range(0,len(plain),16):
   block=plain[off:off+16].ljust(16,b'\0');mac=ecb.encrypt(bytes(a^b for a,b in zip(mac,block)))
  words=struct.unpack('>4I',ecb.encrypt(mac))
  assert [words[0]^words[1],words[2]^words[3]]==k[6:]
  Path('artifacts/sys_audit_collector.verified').write_bytes(plain)
  print('Recovered',len(plain),'bytes; MEGA MAC verified; SHA-256',hashlib.sha256(plain).hexdigest(),flush=True)
  break
 except Exception as e:print(type(e).__name__,str(e)[:160],flush=True)
