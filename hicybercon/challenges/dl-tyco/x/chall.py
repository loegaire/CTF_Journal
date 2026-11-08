from Crypto.Util.number import getPrime, bytes_to_long
import random

flag = 'hiCTF{***}'

N = getPrime(256) * getPrime(256) 
e = getPrime(16)
r = bytes_to_long(flag.encode())
d = random.randrange(1, N)

t1 = pow(r, e, N)
t2 = pow(r + d, e, N)

print(N, e, d, t1, t2)
