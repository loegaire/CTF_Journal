import emu,time
M=1<<64
d=open('last_execution.img','rb').read()
TABLE_SEED=0xbadc0ffee0ddf00d
DSEED_OFF=0x42300
target=[0x31,0x2D,0x30,0x16]
def rr0(sid): return (TABLE_SEED ^ ((sid*0x1BF5)%M))%64
cands=[]
for Bmode in ('stored0','logical0'):
 for A in range(1,64):
  for C in range(1,64):
   for D in range(64):
    for Boff in range(64):
     for dirn in (-1,1):
      def rf(prev,k,off):
          if Bmode=='stored0': B=d[off+(k-1)*64+Boff]
          else: B=d[off+(k-1)*64+((-prev)%64 if dirn==-1 else prev%64)]
          return (prev*A+B+k*C+D)%64
      rr=[target[0],rf(target[0],1,DSEED_OFF)]
      rr.append(rf(rr[1],2,DSEED_OFF)); rr.append(rf(rr[2],3,DSEED_OFF))
      if rr==target: cands.append((Bmode,A,C,D,Boff,dirn))
# dedupe
cands=list(dict.fromkeys(cands))
print("cands",len(cands),flush=True)
def mkv(Bmode,A,C,D,Boff,dirn):
    img=emu.Image('last_execution.img'); vm=emu.VM(img)
    def rrc(seg,n):
        cache=[(TABLE_SEED ^ ((seg['id']*0x1BF5)%M))%64]
        while len(cache)<=n:
            k=len(cache)
            if Bmode=='stored0': B=img.mem[seg['off']+(k-1)*64+Boff]
            else: B=img.mem[seg['off']+(k-1)*64+((-cache[k-1])%64 if dirn==-1 else cache[k-1]%64)]
            cache.append((cache[k-1]*A+B+k*C+D)%64)
        return cache
    def lr(seg,i,rr):
        st=bytes(img.mem[seg['off']+i*64:seg['off']+i*64+64])
        return bytes(st[(j+(rr if dirn==1 else -rr))%64] for j in range(64))
    img.rrchain=rrc; img.logicalrow=lr
    return vm
t=time.time(); best=[]
for p in cands:
    try:
        vm=mkv(*p); vm.maxsteps=2000000
        n1=vm.run(1)
        if n1!=2: continue
        n2=vm.run(2)
        if n2!=3: continue
        n3=vm.run(3)
        print("LINKS",p,n1,n2,n3,hex(vm.R[1]&0xffffffff),flush=True)
        best.append((p,n3))
    except Exception as e:
        continue
print("done",time.time()-t,"best",best,flush=True)
