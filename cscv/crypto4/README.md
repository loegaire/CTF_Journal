# CHIMERA solution

Run `python solve.py` from this directory. Dependencies: `fpylll`, `cysignals`,
`gmpy2`, and `sympy`. The solver recovers the modulus from the supplied samples,
uses cached factors when available, and verifies the decrypted result. Use
`python solve.py --fresh` to repeat the full factor search (12 CPU workers).

## 1. Recover the hidden modulus

Write the token bits as `t_j` and challenge bits as `c_ij`. Then

```
token XOR challenge_i = token + sum_j (1 - 2*t_j) * 2^j * c_ij.
```

Therefore any integer relation `u` satisfying

```
sum_i u_i = 0
sum_i u_i * c_ij = 0   for every j
```

also cancels the unknown exponents. If response `i` is `y_i`, then

```
product_{u_i > 0} y_i^u_i - product_{u_i < 0} y_i^(-u_i)
```

is divisible by `N`. An LLL reduction of `[I | 2^32 A]`, where row `i` of `A`
is `[1, c_i0, ..., c_i127]`, finds short integer relations. Take the GCD of
several resulting differences. Remove any factors shared with responses:
each response is a power of 3 modulo `N` and hence coprime to `N`. This yields
the exact 768-bit modulus with two relations for this dataset.

## 2. Factor using the prime residue restriction

The multiplicative order of 17 modulo the firmware constant `M` is 21,621,600.
For each possible `a`, compute `r = 17^a mod M`. The prime must have the form

```
p = M*x + r,   0 <= x < X = floor(2^384 / M) + 1.
```

Let `c = r / M mod N`. The correct `x` is a root of `x+c` modulo the unknown
factor `p`. Reduce the following three-dimensional lattice:

```
[ N     0      0   ]
[ c     X      0   ]
[ 0     c*X    X^2 ]
```

Its rows represent the polynomials `N`, `x+c`, and `x*(x+c)`, with coefficient
scaling by powers of `X`. Their evaluations at the correct root are divisible
by `p`. LLL finds a polynomial so small that its evaluation is zero over the
integers. Solve the resulting quadratic and test whether `M*x+r` divides `N`.
The small lattice makes an exhaustive search over `a` practical.

## 3. Decrypt and verify

Compute `d = 65537^(-1) mod ((p-1)*(q-1))`, then decrypt the supplied ciphertext.
The solver verifies primality, factor sizes, `p*q == N`, the required prime
residue, and exact RSA re-encryption of the recovered plaintext.

The recovered parameters and plaintext are saved in `recovered.json`.

## Result

```
CSCV2026{ch1m3r4_h1dd3n_m0dulus_th3n_b1453d_k3yg3n_2026}
```

The successful residue exponent is `a = 13097986`. The full search found it in
about 113 seconds on this machine.

For an additional independent check, the solver recovers the 128-bit token.
The 129 nonzero tails of the reduced relation lattice form a unimodular matrix.
Inverting this matrix gives integer combinations that isolate each coefficient
`(1-2*t_j)*2^j` in the exponent. Multiplying the corresponding powers of the
responses yields either `3^(2^j)` or its modular inverse, revealing `t_j`.
The recovered token is `207501371779773263714741078953073691351`; all 200
original challenge responses are reproduced exactly.
