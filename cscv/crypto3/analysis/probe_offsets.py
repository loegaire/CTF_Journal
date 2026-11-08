import requests,json
u='http://113.20.103.55:5000';q=167772161
for off in [1,2,3,16,32,128,256,512,1024,1280,2048,2560,4096,65537,q//3,q//2, q-1]:
 s=requests.post(u+'/feature_fa8688cbfa3fc935ae60de224a972126',json={},timeout=20).json();k=s['crypto']['public_key']; c0=k['b'][:];c0[0]=(c0[0]+off)%q;e=[{'c0':c0,'c1':k['neg_a'][:]} for _ in range(12)]
 r=requests.post(u+'/feature_11edaf0d1c4e447615614810348a3030',json={'session_id':s['session_id'],'sequence':1,'embedding':e},timeout=30)
 print(off,r.status_code,r.text[:100])
