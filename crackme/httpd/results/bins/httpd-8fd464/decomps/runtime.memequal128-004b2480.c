
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.memequal128(void * p, void * q, bool ~r2) */

bool runtime_memequal128(void *p,void *q)

{
  bool bVar1;
  void *p_spill;
  void *q_spill;
  
  if (*(long *)q_spill == *(long *)p_spill) {
    bVar1 = *(long *)((long)q_spill + 8) == *(long *)((long)p_spill + 8);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

