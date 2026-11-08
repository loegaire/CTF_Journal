# Baby Circuit verification scope

`BabyCircuit.ec` checks algebraic implications of the measured fault behavior.
It does not formally verify the native extension, establish all possible fault
classes, or prove that two oracle queries suffice to recover the key.

Claims modeled:

- A linear gate whose output is recomputed from its current inputs has zero
  residual, even if one input has been zeroed.
- Zeroing a multiplication or shear output exposes the expected gate value as
  its residual.
- A running-sum accumulator recomputed from the current witness has zero
  recurrence residual.
- Given G = T*ZH + R, evaluating G - T*ZH exposes R.
- Two evaluations of the same single-residual polynomial are proportional.
  This lemma assumes the same residual value, not merely the same fault class.
- A modular root has an integer lift with a multiple of the modulus; setting
  that multiple to zero is not justified.

Field identities use the standard EasyCrypt abstract field theory, and integer
congruence identities use IntDiv. No challenge-specific axioms or admitted
proofs are intended. Native tests are in ../verify_handoff.py and their recorded
results are in ../verification_results.json.

## Result

All ten lemmas were accepted by EasyCrypt with exit status 0 on 2026-09-25.
Proofs use rewriting, existing library lemmas and the ring tactic; no `admit`,
challenge-specific axioms or external SMT calls appear in this file.
This is a proof of the listed algebraic facts, not verification of the entire
service or an attack. The quotient extraction lemma assumes the division
identity; the native tests separately check the interpolation equality.

Reproduce with `./formal/check.sh` from the repository root. It passes the proof
through standard input into an isolated container, with no host mounts or
network. The image is pinned to digest
`sha256:2ea3ceab00442f915e662f66bf10ece4ae707121973a7056cebd38c7f2d77aa6`.
Raw checker output: `easycrypt.log`.
