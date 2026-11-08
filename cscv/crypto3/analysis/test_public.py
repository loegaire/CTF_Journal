import requests,json
root='http://127.0.0.1:15002/'
s=requests.post(root+'feature_fa8688cbfa3fc935ae60de224a972126',json={}).json(); json.dump(s,open('analysis/probe_session.json','w'))
k=s['crypto']['public_key']; e=[{'c0':k['b'],'c1':k['neg_a']} for _ in range(12)]
r=requests.post(root+'feature_11edaf0d1c4e447615614810348a3030',json={'session_id':s['session_id'],'sequence':1,'embedding':e});print(r.text[:2000]);open('analysis/public_eval.json','w').write(r.text)
