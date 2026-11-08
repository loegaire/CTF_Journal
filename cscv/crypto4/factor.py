import json,time,math
from fpylll import IntegerMatrix,LLL
import gmpy2
N=int(json.load(open('recovered.json'))['N'])
M=31721752939659896617792337171084495768312741523809821454149295955199893657462682088273
X=(1<<384)//M+1
invM=pow(M,-1,N)
def attempt(r):
    c=r*invM%N
    B=IntegerMatrix.from_matrix([[N,0,0],[c,X,0],[0,c*X,X*X]])
    LLL.reduction(B)
    for i in range(1):
        b0,b1,b2=int(B[i,0]),int(B[i,1])//X,int(B[i,2])//(X*X)
        if b2:
            discr=b1*b1-4*b2*b0
            if discr<0 or not gmpy2.is_square(discr):continue
            z=int(gmpy2.isqrt(discr))
            for num in [-b1+z,-b1-z]:
                if num%(2*b2)==0:
                    p=M*(num//(2*b2))+r
                    if 1<p<N and N%p==0:return p
        elif b1 and b0%b1==0:
            p=M*(-b0//b1)+r
            if 1<p<N and N%p==0:return p
if __name__=='__main__':
    import sys
    start=int(sys.argv[1]) if len(sys.argv)>1 else 0
    stop=int(sys.argv[2]) if len(sys.argv)>2 else 21621600
    r=pow(17,start,M); t=time.time()
    for a in range(start,stop):
        p=attempt(r)
        if p:
            print('FOUND',a,p,flush=True)
            data=json.load(open('recovered.json'));data.update(p=p,q=N//p,a=a)
            open('recovered.json','w').write(json.dumps(data,indent=2));break
        r=r*17%M
        if (a-start+1)%10000==0:print(a+1, 'rate',(a-start+1)/(time.time()-t),flush=True)
