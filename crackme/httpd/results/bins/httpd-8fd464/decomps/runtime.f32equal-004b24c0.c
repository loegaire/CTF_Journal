
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.f32equal(void * p, void * q, bool ~r2) */

bool runtime_f32equal(void *p,void *q)

{
  void *p_spill;
  void *q_spill;
  
  return !NAN(*(float *)p_spill) && !NAN(*(float *)q_spill);
}

