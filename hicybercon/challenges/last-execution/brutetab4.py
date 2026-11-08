import emu,time,sys
M=1<<64
d=open('last_execution.img','rb').read()
TABLE_SEED=0xbadc0ffee0ddf00d
DSEED_OFF=0x42300
target=[0x31,0x2D,0x30,0x16]
log=open('brutelog.txt','w',buffering=1)
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
cands=list(dict.fromkeys(cands))
log.write("cands %d\n"%len(cands))
def mkv(p):
    Bmode,A,C,D,Boff,dirn=p
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
t=time.time(); surv=[]
for p in cands:
    try:
        vm=mkv(p); vm.maxsteps=300000
        n1=vm.run(1)
        if n1==2:
            surv.append(p); log.write("MAINOK %s %x\n"%(p,vm.R[1]&0xffffffff))
    except Exception as e:
        pass
log.write("main survivors %d time %.1f\n"%(len(surv),time.time()-t))
for p in surv:
    try:
        vm=mkv(p); vm.maxsteps=3000000
        vm.run(1); n2=vm.run(2)
        if n2==3:
            n3=vm.run(3)
            log.write("LINKS %s -> %s %x\n"%(p,n3,vm.R[1]&0xffffffff))
    except Exception as e:
        log.write("EXC %s %s\n"%(p,e))
log.write("DONE %.1f\n"%(time.time()-t))
