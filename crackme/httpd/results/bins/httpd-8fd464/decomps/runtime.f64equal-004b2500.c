
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.f64equal(void * p, void * q, bool ~r2) */

bool runtime_f64equal(void *p,void *q)

{
  void *p_spill;
  void *q_spill;
  
  return !NAN(*(double *)p_spill) && !NAN(*(double *)q_spill);
}

