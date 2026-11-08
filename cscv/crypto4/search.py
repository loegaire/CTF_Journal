import multiprocessing as mp
import time,json
import factor
from pathlib import Path

def chunk(bounds):
    start,stop=bounds
    r=pow(17,start,factor.M)
    for a in range(start,stop):
        p=factor.attempt(r)
        if p:return a,p
        r=r*17%factor.M
    return None

def search_factor():
    total=21621600; step=20000; t=time.time();done=0
    with mp.get_context('fork').Pool(12) as pool:
        for result in pool.imap_unordered(chunk,[(a,min(a+step,total)) for a in range(0,total,step)]):
            done+=step
            if result:
                a,p=result
                data=json.loads(Path('recovered.json').read_text());data.update(a=a,p=p,q=factor.N//p)
                Path('recovered.json').write_text(json.dumps(data,indent=2))
                print('FOUND',a,p,flush=True); pool.terminate();break
            if done%200000==0:print(f'{done}/{total}, {done/(time.time()-t):.0f} cases/s, elapsed {time.time()-t:.1f}s',flush=True)

if __name__=='__main__':
    search_factor()
