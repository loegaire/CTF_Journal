# Remote solve progress

- `artifacts/kaggle-output/remote_embeddings.json` contains exact Qwen embeddings
  for the active session `82aca6b642a70cab321063af3373cce8`; its local-cache
  validation is true. The session expires at `1790327318` and its evaluator
  quota is exhausted.
- The image dataset and classifier head rotate by server session. The supplied
  local `head_weight`/`head_bias` do not reproduce this session commitment.
- `artifacts/current_basis.json` has evaluator outputs for zero plus twelve
  coordinate basis embeddings, and `artifacts/current_repeat.json` proves
  outputs are randomized.
- The public RLWE key is exactly breakable. With `a = -neg_a`, the lattice CVP
  in `/tmp/ntru.py` recovers a short secret `s` (coefficients in `{0,-3}`)
  satisfying `a*s == b` modulo `x^64+1, q` with zero error.
- The evaluator uses rotation/key-switch packing after its classifier. Direct
  `c0 + c1*s` has noise in the `p1=65537` packing layer; neither raw
  coefficients nor their reduction modulo `p1` expose the four logits.
- Exhaustive 2^24 commitment searches also ruled out the local cache head,
  `mixing_matrix * local_logits`, its transpose, and its negation. The
  remaining task is recovering the binary's rotation/key-switch unpacking
  transform. Do not submit a candidate produced with the local cache head.
