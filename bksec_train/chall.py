from Crypto.Util.number import getPrime , bytes_to_long , GCD,long_to_bytes
import random
import time

random.seed(time.time())
with open("flag.txt") as f:
    flag=f.read().encode()

KEY_SIZE = 512
RSA_E = 65537

def fast_exp(a, b, n):
    output = 1
    while b > 0:
        if b & 1:
            output = output * a % n
        a = a * a % n
        b >>= 1 
    return output    

def check(p, q, n):
    a_ = random.randint(1, 100)
    b_ = random.randint(1, 100)
    s = fast_exp(p, fast_exp(q, a_, (p - 1) * (q - 1)), n)
    t = fast_exp(q, fast_exp(p, b_, (p - 1) * (q - 1)), n)
    result = s + t
    return result

def gen_RSA_params(N, e):
    p = getPrime(N)
    q = getPrime(N)

    while GCD(e, (p - 1) * (q - 1)) > 1:
        p = getPrime(N)
        q = getPrime(N)

    n = p * q
    
    return (p, q, n)

p, q, n = gen_RSA_params(KEY_SIZE, RSA_E) 

m = bytes_to_long(flag)
c = pow(m, RSA_E, n)

print(f"s={check(p,q,n)}")
print(f"c={c}")
print(f"n={n}")