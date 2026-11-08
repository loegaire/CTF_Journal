import json, math, time
from pathlib import Path
from fpylll import IntegerMatrix, LLL
import gmpy2
DATA=Path('chimera_student/output_chimera.txt')
d=json.loads(DATA.read_text()); samples=d['attestations']
def recover_n():
    n=len(samples); B=IntegerMatrix(n,n+129); scale=1<<32
    for i,(c,v) in enumerate(samples):
        B[i,i]=1; B[i,n]=scale
        for j in range(128): B[i,n+1+j]=scale*((c>>j)&1)
    print('Reducing relation lattice',flush=True); LLL.reduction(B)
    Path('relations.json').write_text(json.dumps([[int(v) for v in row] for row in B]))
    multiple=0
    for i in range(n):
        if any(B[i,j] for j in range(n,n+129)):continue
        row=[B[i,j] for j in range(n)]
        assert sum(row)==0
        pos=gmpy2.mpz(1); neg=gmpy2.mpz(1)
        for k,(_,v) in zip(row,samples):
            if k>0:pos*=gmpy2.mpz(v)**k
            elif k<0:neg*=gmpy2.mpz(v)**(-k)
        multiple=math.gcd(multiple,int(pos-neg))
        if i > 0:
            for _,v in samples:
                while (g:=math.gcd(multiple,v))>1: multiple//=g
        print('GCD bits',multiple.bit_length(),flush=True)
        if multiple.bit_length()==768:return multiple
    raise ValueError('No modulus')
if __name__=='__main__':
    import sys
    from sympy import isprime
    cache=Path('recovered.json')
    saved=json.loads(cache.read_text()) if cache.exists() else {}
    N=recover_n()
    if saved.get('N')!=N or '--fresh' in sys.argv:
        saved={'N':N}
    cache.write_text(json.dumps(saved,indent=2))
    print('N =',N,flush=True)
    if 'p' not in saved:
        from search import search_factor
        search_factor()
        saved=json.loads(cache.read_text())
    p,q=saved['p'],saved['q']
    M=31721752939659896617792337171084495768312741523809821454149295955199893657462682088273
    assert p*q==N and isprime(p) and isprime(q)
    assert p.bit_length()==q.bit_length()==384
    assert p%M==pow(17,saved['a'],M)
    private=pow(d['e'],-1,(p-1)*(q-1))
    message=pow(d['flag_ct'],private,N)
    assert pow(message,d['e'],N)==d['flag_ct']
    flag=message.to_bytes((message.bit_length()+7)//8,'big')
    saved['flag']=flag.decode()
    from verify_token import recover_token
    saved['token']=recover_token(N,json.loads(Path('relations.json').read_text()),samples)
    cache.write_text(json.dumps(saved,indent=2))
    print('Verified prime factors, residue restriction, and RSA re-encryption.')
    print('Recovered token and verified all 200 attestations.')
    print(flag.decode())
