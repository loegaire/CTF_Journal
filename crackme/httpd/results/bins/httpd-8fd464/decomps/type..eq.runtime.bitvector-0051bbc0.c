
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.runtime.bitvector(runtime.bitvector * p,
   runtime.bitvector * q, bool r) */

bool type__eq_runtime_bitvector(runtime_bitvector *p,runtime_bitvector *q)

{
  runtime_bitvector *p_spill;
  runtime_bitvector *q_spill;
  
  if (q_spill->n == p_spill->n) {
    return SUB81(p_spill->bytedata,0);
  }
  return SUB81(p_spill,0);
}

