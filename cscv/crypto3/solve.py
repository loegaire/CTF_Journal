#!/usr/bin/env python3
"""Solve the supplied ResidueGate local dataset via its cached embeddings."""
import argparse, hashlib, io, json, struct, subprocess
from pathlib import Path
import requests
from PIL import Image

BASE=Path(__file__).resolve().parent
ROUTES={
 'session':'/feature_fa8688cbfa3fc935ae60de224a972126',
 'image':'/feature_c426f4d0ed166214ae89992cbd592932',
 'submit':'/feature_c26f994e7f7d755a4602972a35430050',
}
def main():
 ap=argparse.ArgumentParser();ap.add_argument('--url',default='http://127.0.0.1:15000');args=ap.parse_args()
 out=BASE/'artifacts';out.mkdir(exist_ok=True)
 meta=json.loads((BASE/'give_to_player/local-data/qwen_cache.json').read_text())
 cache=(BASE/'give_to_player/local-data/qwen_cache.bin').read_bytes()
 assert hashlib.sha256(cache).hexdigest()==meta['binary_sha256']
 assert cache[:8]==b'RGQWEN1\0' and len(cache)==744
 vectors=[struct.unpack_from('12b',cache,72+44*v) for v in range(16)]
 logits=[[sum(a*b for a,b in zip(row,z))+bias for row,bias in zip(meta['head_weight'],meta['head_bias'])] for z in vectors]
 session=requests.Session();r=session.post(args.url+ROUTES['session'],json={});r.raise_for_status();s=r.json()
 (out/'session.json').write_text(json.dumps(s,indent=2))
 images=[]
 for slot in range(6):
  r=session.get(args.url+ROUTES['image'],params={'session_id':s['session_id'],'slot':slot});r.raise_for_status()
  img=Image.open(io.BytesIO(r.content)).convert('RGB');assert img.size==(32,32)
  local=Image.open(BASE/'give_to_player/local-data/base_badge.png').convert('RGB')
  assert img.tobytes()==local.tobytes(), 'Server image differs from the supplied cache; compute its embeddings first.'
  images.append(img)
 data=bytes.fromhex(s['combination']['seed']+s['combination']['commitment'])
 data+=b''.join(struct.pack('<BB4q',slot,v,*logits[v]) for slot in range(6) for v in range(16))
 searchfile=out/'search.bin';searchfile.write_bytes(data)
 binary=BASE/'analysis/search_commitment'
 if not binary.exists():
  subprocess.run(['gcc','-O3','-Wno-deprecated-declarations',str(BASE/'analysis/search_commitment.c'),'-lcrypto','-o',str(binary)],check=True)
 variants=list(map(int,subprocess.check_output([str(binary),str(searchfile)],text=True).split()))
 assert len(variants)==6
 preimage=b'residuegate-six-way-logit-commitment-v1\0'+bytes.fromhex(s['combination']['seed'])
 preimage+=b''.join(struct.pack('<BB4q',slot,v,*logits[v]) for slot,v in enumerate(variants))
 assert hashlib.sha256(preimage).hexdigest()==s['combination']['commitment']
 print('Verified commitment tuple:',variants,flush=True)
 files={}
 for slot,(img,v) in enumerate(zip(images,variants)):
  pixels=[img.getpixel((x,y)) for y in range(32) for x in range(32)];new=[]
  for i,pixel in enumerate(pixels):
   y,x=divmod(i,32);quadrant=2*(y>=16)+(x>=16)
   changed=tuple(val+8*(1 if (v&(quadrant*3+c+1)).bit_count()%2==0 else -1) for c,val in enumerate(pixel))
   assert all(0<=val<=255 for val in changed)
   new.append(changed)
  img.putdata(new);buf=io.BytesIO();img.save(buf,format='PNG');raw=buf.getvalue()
  (out/f'image_{slot}.png').write_bytes(raw);files[f'image_{slot}']=(f'image_{slot}.png',raw,'image/png')
 r=session.post(args.url+ROUTES['submit'],data={'session_id':s['session_id']},files=files)
 (out/'submission.json').write_text(r.text)
 print('Submission:',r.status_code,r.text,flush=True)
 r.raise_for_status()
 if r.json().get('status')!='accepted' and not r.json().get('accepted'):
  raise SystemExit('Submission not accepted; inspect artifacts/submission.json')
 (out/'solution.json').write_text(json.dumps({'variants':variants,'logits':[logits[v] for v in variants],'commitment':s['combination']['commitment'],'response':r.json()},indent=2))
if __name__=='__main__':main()
