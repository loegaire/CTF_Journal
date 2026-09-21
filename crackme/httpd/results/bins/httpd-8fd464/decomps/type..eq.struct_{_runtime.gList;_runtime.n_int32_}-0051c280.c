
/* WARNING: Unknown calling convention */
/* DWARF original name: type..eq.struct { runtime.gList; runtime.n int32 }
   DWARF original prototype: void
   type..eq.struct_{_runtime.gList;_runtime.n_int32_}(struct_{_runtime.gList;_runtime.n_int32_} * p,
   struct_{_runtime.gList;_runtime.n_int32_} * q, bool r) */

bool type__eq_struct___runtime_gList__runtime_n_int32__
               (struct___runtime_gList__runtime_n_int32__ *p,
               struct___runtime_gList__runtime_n_int32__ *q)

{
  struct___runtime_gList__runtime_n_int32__ *p_spill;
  struct___runtime_gList__runtime_n_int32__ *q_spill;
  
  if ((q_spill->gList).head == (p_spill->gList).head) {
    return SUB41(p_spill->n,0);
  }
  return SUB81(p_spill,0);
}

