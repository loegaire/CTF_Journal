import json,sympy as S
x=S.symbols('x');q=167772161;D=json.load(open('artifacts/remote_basis.json'));a=D['s']['crypto']['public_key']['neg_a'];g=S.gcd(S.Poly.from_list(list(reversed(a)),x,modulus=q),S.Poly(x**64+1,x,modulus=q));
def rem(o): return S.Poly.from_list(list(reversed(o['packed_logits']['c0'])),x,modulus=q).rem(g)
z=rem(D['o'][0]);print('zero',z.all_coeffs());
for i,o in enumerate(D['o'][1:],1):
 d=rem(o)-z; print(i, d.all_coeffs())
