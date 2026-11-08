import emu
M=1<<64
d=open('last_execution.img','rb').read()
TS=0xbadc0ffee0ddf00d; DSEED_OFF=0x42300
target=[0x31,0x2D,0x30,0x16]
cands=[]
for A in range(1,64):
 for C in range(1,64):
  for D in range(64):
   for Boff in range(64):
    def rf(prev,k):
        return (prev*A+d[DSEED_OFF+(k-1)*64+Boff]+k*C+D)%64
    rr=[target[0],rf(target[0],1)]; rr.append(rf(rr[1],2)); rr.append(rf(rr[2],3))
    if rr==target: cands.append((A,C,D,Boff))
print("cands",len(cands),flush=True)
def mkv(A,C,D,Boff,dirn=-1):
    img=emu.Image('last_execution.img'); vm=emu.VM(img)
    def rrc(seg,n):
        cache=[(TS ^ ((seg['id']*0x1BF5)%M))%64]
        while len(cache)<=n:
            k=len(cache)
            B=img.mem[seg['off']+(k-1)*64+Boff]
            cache.append((cache[k-1]*A+B+k*C+D)%64)
        return cache
    def lr(seg,i,rr):
        st=bytes(img.mem[seg['off']+i*64:seg['off']+i*64+64])
        return bytes(st[(j-rr)%64] for j in range(64))
    img.rrchain=rrc; img.logicalrow=lr
    return vm
import sys
for p in cands:
    try:
        vm=mkv(*p); vm.maxsteps=2000000
        n1=vm.run(1)
        if n1!=2: continue
        n2=vm.run(2)
        if n2!=3: continue
        n3=vm.run(3)
        print("LINKS",p,"n3=",n3,"R1low",hex(vm.R[1]&0xffffffff),flush=True)
    except Exception as e:
        pass
print("DONE",flush=True)
