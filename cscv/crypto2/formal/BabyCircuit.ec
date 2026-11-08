(* Algebraic obligations for the handoff review. No claim about binary refinement
   or completeness of secret recovery is made by this model. *)
require import AllCore IntDiv.
require Ring.

(* These identities hold over any field, including the challenge field.
   Only the standard library field axioms are assumed. *)
clone import Ring.Field as F.

op linear (m0 m1 a b rc : t) = m0*a + m1*b + rc.
op lin_res (m0 m1 a b c rc : t) = m0*a + m1*b - c + rc.

lemma recomputed_linear_has_no_residual (m0 m1 a b rc : t) :
  lin_res m0 m1 a b (linear m0 m1 a b rc) rc = zeror.
proof. rewrite /lin_res /linear; ring. qed.

lemma zeroed_input_recomputed_output (m0 m1 b rc : t) :
  lin_res m0 m1 zeror b (linear m0 m1 zeror b rc) rc = zeror.
proof. exact (recomputed_linear_has_no_residual m0 m1 zeror b rc). qed.

lemma zeroed_linear_output (m0 m1 a b rc : t) :
  lin_res m0 m1 a b zeror rc = linear m0 m1 a b rc.
proof. rewrite /lin_res /linear; ring. qed.

lemma zeroed_mul_output (a b : t) : a*b - zeror = a*b.
proof. ring. qed.

lemma zeroed_shear_output (alpha1 alpha2 a b : t) :
  alpha1*a + alpha2*b - zeror = alpha1*a + alpha2*b.
proof. ring. qed.

lemma recomputed_accumulator (z a : t) : (z+a)-z-a = zeror.
proof. ring. qed.

(* At the evaluation point, once G = T*ZH + R, the public evaluations
   expose R. The polynomial division/interpolation implementation is
   separately checked against native witnesses by verify_handoff.py. *)
lemma quotient_remainder_exposed (g tq zh r : t) :
  g = tq*zh + r => g - tq*zh = r.
proof. move=> ->; ring. qed.

lemma single_residual_same_value (l1 l2 r : t) :
  l2*(l1*r) - l1*(l2*r) = zeror.
proof. ring. qed.

(* Correct integer encoding of a modular root includes the modulus multiple. *)
lemma modular_lift_is_root (value load k p : int) :
  value - load = k*p => (value-load) %% p = 0.
proof. move=> ->; exact (modzMl k p). qed.

lemma quotient_witness (value load p : int) :
  (value-load) %% p = 0 =>
  value-load = ((value-load) %/ p)*p.
proof.
move=> hz.
have he := divz_eq (value-load) p.
rewrite hz /= in he.
exact he.
qed.
