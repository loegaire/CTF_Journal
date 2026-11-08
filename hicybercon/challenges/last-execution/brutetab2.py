import emu,time
M=1<<64
d=open('last_execution.img','rb').read()
TABLE_SEED=0xbadc0ffee0ddf00d
DSEED_OFF=0x42300
target=[0x31,0x2D,0x30,0x16]
cands=[]
for A in range(1,64):
 for C in range(1,64):
  for D in range(64):
   for Boff in range(64):
    def rf(prev,k,off,A=A,C=C,D=D,Boff=Boff):
        return (prev*A+d[off+(k-1)*64+Boff]+k*C+D)%64
    rr=[target[0],rf(target[0],1,DSEED_OFF)]
    rr.append(rf(rr[1],2,DSEED_OFF)); rr.append(rf(rr[2],3,DSEED_OFF))
    if rr==target: cands.append((A,C,D,Boff))
print("cands",len(cands),flush=True)
def mkv(A,C,D,Boff,dirn):
    img=emu.Image('last_execution.img'); vm=emu.VM(img)
    def rrc(seg,n):
        cache=[(TABLE_SEED ^ ((seg['id']*0x1BF5)%M))%64]
        for k in range(1,n):
            B=img.mem[seg['off']+(k-1)*64+Boff]
            cache.append((cache[k-1]*A+B+k*C+D)%64)
        return cache
    def lr(seg,i,rr):
        st=bytes(img.mem[seg['off']+i*64:seg['off']+i*64+64])
        return bytes(st[(j+(rr if dirn==1 else -rr))%64] for j in range(64))
    img.rrchain=rrc; img.logicalrow=lr
    return vm
t=time.time()
for p in cands:
    for dirn in (-1,1):
        try:
            vm=mkv(*p,dirn); vm.maxsteps=2000000
            n1=vm.run(1)
            if n1!=2: break
            n2=vm.run(2)
            if n2!=3: break
            n3=vm.run(3)
            print("LINKS",p,dirn,n1,n2,n3,hex(vm.R[1]&0xffffffff),flush=True)
            break
        except Exception as e:
            break
print("done",time.time()-t,flush=True)
