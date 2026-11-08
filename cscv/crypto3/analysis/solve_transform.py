import json
q=167772161; D=json.load(open('artifacts/remote_basis.json')); W=json.load(open('give_to_player/local-data/qwen_cache.json'))['head_weight']; b=json.load(open('give_to_player/local-data/qwen_cache.json'))['head_bias']
# vectors P diff coefficients ascending, centered -> mod q
# polynomial rem all_coeffs descending
import sympy as S
x=S.symbols('x');a=D['s']['crypto']['public_key']['neg_a'];g=S.gcd(S.Poly.from_list(list(reversed(a)),x,modulus=q),S.Poly(x**64+1,x,modulus=q))
def vec(o):
 c=S.Poly.from_list(list(reversed(o['packed_logits']['c0'])),x,modulus=q).rem(g).all_coeffs(); c=[int(v)%q for v in c]; return [0]*(32-len(c))+c
z=vec(D['o'][0]); V=[]
for o in D['o'][1:]: V.append([(a-b)%q for a,b in zip(vec(o),z)])
# solve each row t*W = V[:,j] mod q using first 4 independent columns, brute gaussian
def solve(A,y):
 A=[[(v%q) for v in row]+[yy%q] for row,yy in zip(A,y)];n=len(A);m=4;r=0;piv=[]
 for c in range(m):
  k=next((i for i in range(r,n) if A[i][c]),None)
  if k is None:continue
  A[r],A[k]=A[k],A[r]; inv=pow(A[r][c],q-2,q);A[r]=[(v*inv)%q for v in A[r]]
  for i in range(n):
   if i!=r and A[i][c]:
    z=A[i][c];A[i]=[(u-z*v)%q for u,v in zip(A[i],A[r])]
  piv.append(c);r+=1
 if r<4:return None
 return [next(A[i][4] for i,c0 in enumerate(piv) if c0==c) for c in range(4)]
T=[]
for k in range(32):
 # equations j, coeff W[l][j]
 A=[[W[l][j] for l in range(4)] for j in range(12)]; y=[V[j][k] for j in range(12)]
 t=solve(A,y);T.append(t)
 print(k,t, 'ok',t is not None and all(sum(t[l]*W[l][j] for l in range(4))%q==y[j] for j in range(12)))
