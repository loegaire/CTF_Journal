# Independent Baby Circuit handoff review

## Verdict

The core diagnosis is supported by the supplied archive and independent native
experiments. The old solver itself, lab3.py, and review.md are absent, so their
implementation/history and the claimed 253-bit erroneous results were not
independently checked. The 55–60% estimate is not objectively established.

## Reproduced evidence

Ran `python3.11 verify_handoff.py` against the original extension. Across three
fresh sessions, three nonce pairs, and four timing settings (36 cases):

| V/F | Newly zeroed cells | Nonzero gate-residual rows |
|---|---|---|
| 1200/80 | none | none |
| 1200/95 | c60 | 60 |
| 1200/100 | c22,c35,c49,c57,c60 | 22,35,49,57,60 |
| 1200/112 | c3,a7,a17,c22,a31,c35,a44,c49,c57,c60 | 3,22,35,49,57,60 |

Also swept frequencies 1–133 at voltages 1000,1100,1200,1500,2000 in one
session: only those four zeroing signatures appeared. This finite sweep does
not prove the claim for every allowed voltage/frequency or every session.

Generated four full proofs and independently computed the public remainder:

R(z) = qM(z)a(z)b(z) + qL(z)a(z) + qR(z)b(z) + qO(z)c(z) + qC(z)
       + qacc(z)(Z(omega*z)-Z(z)-a(z)) - (z^64-1)T(z).

All four matched sum_i residual_i*L_i(z). The nominal remainder was zero;
the other three were nonzero. Independently simulated the nominal sponge
from native load/w witness cells and matched the native hash for all nine
session/nonce combinations. Recorded load coefficients had 253–254 bits.

Source confirms two successful proof requests per TCP session, the envelope,
AES-CBC with PKCS#7, and the documented 32-byte big-endian SHA256 key format.
The native SHA256 key derivation was not independently reconstructed from
r1/r2. Local witness introspection is an offline test, not an online attack.

## Qualifications to the proposed next steps

- Recomputed linear outputs give zero gate residual, so the proposed four-row
  linear-residual attack is invalid under the observed fault behavior.
- Two different fault classes are a research choice, not a demonstrated
  sufficient or necessary condition for recovery. Different nonces may also
  change the information obtainable from the same class.
- The residuals must reflect actual faulted witnesses. These tests do not
  prove that no alternative shortcut or full-state-free attack exists.
- The load equation is a congruence. An integer encoding needs
  Q(r1,r2)-load = k*p with an integer k, or an equivalent modular constraint.
- Classic Coppersmith covers univariate modular roots and bivariate integer
  roots; bivariate modular recovery needs additional analysis. Jochemsz–May
  provides a relevant heuristic framework, not automatic success here.
- The correct bound is w < 2^96, not necessarily bit_length(w) == 96.
- Valid padding alone does not establish the correct key; verify the register
  bounds, load equation, proof/hash consistency and known local plaintext.

## Primary papers

1. Coppersmith (1997), Small Solutions to Polynomial Equations, and Low
   Exponent RSA Vulnerabilities.
   https://research.ibm.com/publications/small-solutions-to-polynomial-equations-and-low-exponent-rsa-vulnerabilities
2. Jochemsz–May (2006), A Strategy for Finding Roots of Multivariate
   Polynomials with New Applications in Attacking RSA Variants.
   https://www.iacr.org/archive/asiacrypt2006/42840270/42840270.pdf
   Section 2.1 addresses modular roots; Assumption 1 explains the heuristic.
3. Howgrave-Graham (1997), Finding Small Roots of Univariate Modular
   Equations Revisited.
   https://link.springer.com/chapter/10.1007/BFb0024458
4. Gabizon–Williamson–Ciobotaru (2019), PLONK.
   https://eprint.iacr.org/2019/953
   Background for selectors, Lagrange bases and quotient constraints; the
   challenge is a custom simplified construction, not full standard PLONK.
5. Grassi et al. (2021), Poseidon: A New Hash Function for Zero-Knowledge
   Proof Systems.
   https://www.usenix.org/conference/usenixsecurity21/presentation/grassi
   Background for partial/full S-box rounds and mixing. Analyze the challenge's
   exact custom round order and constants rather than assuming standard security.
6. Boneh–DeMillo–Lipton (1997), On the Importance of Checking Cryptographic
   Protocols for Faults.
   https://crypto.stanford.edu/~dabo/abstracts/faults.html
   Foundational fault-analysis background; not a direct solution to this instance.

EasyCrypt accepted all ten algebraic lemmas (exit status 0). This verifies the
modeled identities, not the native binary or key recovery. Formal proof scope
and reproduction instructions: see formal/README.md.
