#!/usr/bin/env sage
"""Reduced 64-variable Baby Circuit system for a captured session."""
import json
import sys

data = json.load(open(sys.argv[1] if len(sys.argv) > 1 else "/tmp/baby_session.json"))
spec, d = data["session"], data["derived"]
I = lambda x: Integer(x[2:], 16) if isinstance(x, str) and x.startswith("0x") else Integer(x)
p = I(d["field_prime"]); F = GF(p); pub = spec["session_parameters"]
M = [[F(I(x)) for x in row] for row in spec["poseidon_mds"]]
rc = [[F(I(x)) for x in row] for row in spec["round_constants"]]
A,B,C,D,E = [F(I(pub["load_coeffs"][x])) for x in "ABCDE"]
a1,a2,a3 = [F(I(pub["shear_alpha%d" % x])) for x in (1,2,3)]
r100,r112 = F(I(d["remainder_100"])),F(I(d["remainder_112"]))
l100 = {int(k):F(I(v)) for k,v in d["lagrange_weights_100"].items()}
l112 = {int(k):F(I(v)) for k,v in d["lagrange_weights_112"].items()}
hout = F(I(data["proofs"]["100"]["public_hash"]))

# L is load(r1,r2); q[r] is the r-th partial-round S-box output.
names = ["w","r1","r2","L"] + ["q%d"%r for r in range(24)] + ["u%d_%d"%(r,j) for r in range(9) for j in range(4)]
R = PolynomialRing(F, names, order="degrevlex"); g=R.gens()
w,r1,r2,L = g[:4]; q=g[4:28]; u=[[g[28+4*r+j] for j in range(4)] for r in range(9)]

# Express the partial-round state linearly in L,w,q[0..r-1].
s=[L,w,R.zero(),R.zero()]; eq=[L-(r1^2+A*r1*r2+B*r2^2+C*r1+D*r2+E)]
for r in range(24):
    eq.append(q[r]-s[0]^5)
    s=[sum(M[i][j]*([q[r]]+s[1:])[j] for j in range(4))+rc[r][i] for i in range(4)]

# u[0] is precisely the state at the partial/full boundary (t).
eq += [u[0][j]-s[j] for j in range(4)]
for r in range(8):
    eq += [u[r+1][i]-sum(M[i][j]*u[r][j]^5 for j in range(4))-rc[24+r][i] for i in range(4)]
t=u[0]; ell=a1*(t[1]+a3*t[2])+a2*t[3]
eq += [
 l100[22]*t[0]^5+l100[35]*t[1]^5+l100[49]*t[2]^5+l100[57]*t[3]^5+l100[60]*ell-r100,
 l112[3]*L^5+l112[22]*t[0]^5+l112[35]*t[1]^5+l112[49]*t[2]^5+l112[57]*t[3]^5+l112[60]*ell-r112,
 u[8][0]-hout]

ideal=R.ideal(eq)
print("variables",R.ngens(),"equations",len(eq),flush=True)
gb=ideal.groebner_basis()
print("basis",len(gb),flush=True)
for f in gb:
 if f.variables() and set(f.variables()).issubset({w,r1,r2,L}): print(f,flush=True)
