import requests,json,sys
u='http://113.20.103.55:5000';s=requests.post(u+'/feature_fa8688cbfa3fc935ae60de224a972126',json={},timeout=20).json();k=s['crypto']['public_key'];
def q(vals,seq):
 e=[]
 for z in vals:
  c0=k['b'][:]; c0[0]=(c0[0]+z)%s['crypto']['q']; e.append({'c0':c0,'c1':k['neg_a'][:]})
 r=requests.post(u+'/feature_11edaf0d1c4e447615614810348a3030',json={'session_id':s['session_id'],'sequence':seq,'embedding':e},timeout=30); print(seq,r.status_code,r.text[:100],file=sys.stderr); return r.json()
out=[]
for seq in range(1,6):
 vals=[0]*12
 if seq>1: vals[seq-2]=1
 out.append(q(vals,seq))
json.dump({'s':s,'o':out},open('artifacts/remote_calibration.json','w'))
