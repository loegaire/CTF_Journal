import requests,json
from pathlib import Path
root='http://127.0.0.1:15002/'
s=requests.Session()
sess=s.post(root+'feature_fa8688cbfa3fc935ae60de224a972126',json={}).json()
Path('analysis/probe_session.json').write_text(json.dumps(sess))
u=root+'feature_11edaf0d1c4e447615614810348a3030'
for e in [[],[{}]*12,[{'aaaaaaaaaaaaaaaaaaaaaaaaaa':0}]*12,[[0]*64]*12]:
 print(s.post(u,json={'embedding':e,'sequence':0,'session_id':sess['session_id'],'aaaaaaaaaaaaaaaaaaaaaaaaaa':0}).text)
