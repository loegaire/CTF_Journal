
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.c128equal(void * p, void * q, bool ~r2) */

bool runtime_c128equal(void *p,void *q)

{
  void *p_spill;
  void *q_spill;
  
  return !NAN(*(double *)((long)p_spill + 8)) && !NAN(*(double *)((long)q_spill + 8));
}

