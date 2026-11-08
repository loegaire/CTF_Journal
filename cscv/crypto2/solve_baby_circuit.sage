#!/usr/bin/env sage
"""Build the low-degree polynomial system for one captured Baby Circuit session."""
import json
import sys

path = sys.argv[1] if len(sys.argv) > 1 else "/tmp/baby_session.json"
data = json.load(open(path))
spec = data["session"]
derived = data["derived"]
to_int = lambda x: Integer(x[2:], 16) if isinstance(x, str) and x.startswith("0x") else Integer(x)
p = to_int(derived["field_prime"])
F = GF(p)
pub = spec["session_parameters"]
mds = [[F(to_int(x)) for x in row] for row in spec["poseidon_mds"]]
rc = [[F(to_int(x)) for x in row] for row in spec["round_constants"]]
A, B, C, D, E = [F(to_int(pub["load_coeffs"][k])) for k in "ABCDE"]
a1, a2, a3 = [F(to_int(pub["shear_alpha%d" % i])) for i in (1, 2, 3)]
r100 = F(to_int(derived["remainder_100"]))
r112 = F(to_int(derived["remainder_112"]))
l100 = {int(k): F(to_int(v)) for k, v in derived["lagrange_weights_100"].items()}
l112 = {int(k): F(to_int(v)) for k, v in derived["lagrange_weights_112"].items()}
hash_out = F(to_int(data["proofs"]["100"]["public_hash"]))

names = ["w", "r1", "r2"] + ["s_%d_%d" % (r, i) for r in range(33) for i in range(4)]
R = PolynomialRing(F, names, order="degrevlex")
v = R.gens()
w, r1, r2 = v[:3]
s = [[v[3 + 4*r + i] for i in range(4)] for r in range(33)]
loadv = r1^2 + A*r1*r2 + B*r2^2 + C*r1 + D*r2 + E
eqs = [s[0][0] - loadv, s[0][1] - w, s[0][2], s[0][3]]

for r in range(32):
    y = [s[r][0]^5] + ([s[r][i]^5 for i in range(1, 4)] if r >= 24 else s[r][1:])
    eqs += [s[r + 1][i] - sum(mds[i][j] * y[j] for j in range(4)) - rc[r][i]
            for i in range(4)]

t = s[24]
ell = a1 * (t[1] + a3*t[2]) + a2*t[3]
eqs += [
    l100[22]*t[0]^5 + l100[35]*t[1]^5 + l100[49]*t[2]^5 + l100[57]*t[3]^5 + l100[60]*ell - r100,
    l112[3]*loadv^5 + l112[22]*t[0]^5 + l112[35]*t[1]^5 + l112[49]*t[2]^5 + l112[57]*t[3]^5 + l112[60]*ell - r112,
    s[32][0] - hash_out,
]
I = R.ideal(eqs)
print("field bits:", p.nbits(), "variables:", R.ngens(), "equations:", len(eqs), "base:", R.base_ring(), flush=True)
# Sage's in-process implementation handles the 254-bit prime field; Singular's
# slimgb interface only supports its machine-prime coefficient representation.
gb = I.groebner_basis()
print("basis size:", len(gb))
for g in gb:
    if g.variables() and set(g.variables()).issubset({w, r1, r2}):
        print("secret-only polynomial:", g)
