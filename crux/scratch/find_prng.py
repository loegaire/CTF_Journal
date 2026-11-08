import pickle,itertools,time,sys
P=pickle.load(open('scratch/sample_P.pkl','rb'))
obs={k:v[0] for k,v in P.items()}
N=256
MASK=0xFFFFFFFF
seed=0x0745B6

def try_prng(shifts,pattern,mask,prime,shuffle_variant,initial):
    a=list(range(N)) if initial=='asc' else list(range(N-1,-1,-1))
    s=seed & mask
    def nxt():
        nonlocal s
        if pattern==1:
            s^=(s<<shifts[0])&mask; s^=s>>shifts[1]; s^=(s<<shifts[2])&mask
        elif pattern==2:
            s^=s>>shifts[0]; s^=(s<<shifts[1])&mask; s^=s>>shifts[2]
        elif pattern==3:
            s^=(s<<shifts[0])&mask; s^=s>>shifts[1]
        elif pattern==4:
            s^=s>>shifts[0]; s^=(s<<shifts[1])&mask
        elif pattern==5:
            s^=(s<<shifts[0])&mask; s^=(s<<shifts[1])&mask; s^=s>>shifts[2]
        return s & mask
    for _ in range(prime): nxt()
    if shuffle_variant=='down1':
        for i in range(N-1,0,-1):
            j=nxt()%(i+1); a[i],a[j]=a[j],a[i]
            if i in obs and a[i]!=obs[i]: return None
    elif shuffle_variant=='down0':
        for i in range(N-1,0,-1):
            j=nxt()%i; a[i],a[j]=a[j],a[i]
            if i in obs and a[i]!=obs[i]: return None
    elif shuffle_variant=='up':
        # upward: positions < i not final; check at end only
        for i in range(N):
            j=nxt()%(i+1); a[i],a[j]=a[j],a[i]
    if all(a[k]==v for k,v in obs.items()): return a
    return None

t0=time.time(); tested=0
triples=[(a,b,c) for a in range(1,32) for b in range(1,32) for c in range(1,32)]
for pattern,ns in [(1,3),(2,3),(5,3),(3,2),(4,2)]:
    for shifts in triples:
        if ns==2 and shifts[2]!=0: continue
        for variant in ['down1','down0','up']:
            for prime in [0,1,2]:
                for initial in ['asc','desc']:
                    tested+=1
                    r=try_prng(shifts,pattern,MASK,prime,variant,initial)
                    if r is not None:
                        print('MATCH pattern',pattern,'shifts',shifts,'variant',variant,'prime',prime,'init',initial)
                        pickle.dump(r,open('scratch/fullP.pkl','wb')); sys.exit()
    print('pattern',pattern,'done',tested,'elapsed',time.time()-t0)
print('no match',tested,time.time()-t0)
