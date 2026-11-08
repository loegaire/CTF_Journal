
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.c64equal(void * p, void * q, bool ~r2) */

bool runtime_c64equal(void *p,void *q)

{
  void *p_spill;
  void *q_spill;
  
  return !NAN(*(float *)((long)p_spill + 4)) && !NAN(*(float *)((long)q_spill + 4));
}

