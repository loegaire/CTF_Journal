import re,json
from pathlib import Path
from recover_pages import m
out={}
p=0
while (p:=m.find(b'sid=',p))>=0:
 match=re.match(rb'sid=([A-Za-z0-9_-]{40,100})',m[p:p+104])
 if match:
  sid=match[1].decode();out.setdefault(sid,[]).append(p)
 p+=4
Path('artifacts/mega_sessions.json').write_text(json.dumps(out))
print('Session candidates:',len(out))
for i,(sid,offs) in enumerate(out.items()):print(i,'length',len(sid),'offsets',offs[:5])
