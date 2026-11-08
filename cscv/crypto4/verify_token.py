"""Recover the token by isolating challenge-bit coefficients over the integers."""
import json
import gmpy2
from pathlib import Path
from sympy import Matrix

def recover_token(N, basis, samples):
    n=len(samples);S=1<<32
    rows=[row for row in basis if any(row[n:])]
    A=Matrix([[int(v)//S for v in row[n:]] for row in rows])
    inverse=A.inv(method='DM')
    assert all(v.q==1 for v in inverse)
    values=[]
    for row in rows:
        v=gmpy2.mpz(1)
        for k,(_,y) in zip(row[:n],samples):
            v=v*gmpy2.powmod(y,int(k),N)%N
        values.append(v)
    token=0
    for j in range(128):
        v=gmpy2.mpz(1)
        for k,y in zip(inverse.row(j+1),values):
            v=v*gmpy2.powmod(y,int(k),N)%N
        positive=pow(3,1<<j,N)
        if v==positive:pass
        elif v==pow(positive,-1,N):token|=1<<j
        else:raise ValueError('Isolated bit does not match either sign')
    assert all(pow(3,token^c,N)==y for c,y in samples)
    return token

if __name__=='__main__':
    saved=json.loads(Path('recovered.json').read_text())
    data=json.loads(Path('chimera_student/output_chimera.txt').read_text())
    token=recover_token(saved['N'],json.loads(Path('relations.json').read_text()),data['attestations'])
    Path('token.json').write_text(json.dumps({'token':token}))
    print('Recovered token:',token)
    print('All 200 attestations verified.')
