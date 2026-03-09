
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.sync.Cond(sync.Cond * p, sync.Cond * q, bool r) */

bool type__eq_sync_Cond(sync_Cond *p,sync_Cond *q)

{
  runtime_itab *y;
  long in_FS_OFFSET;
  sync_Cond *p_spill;
  sync_Cond *q_spill;
  char local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  y = (p_spill->L).tab;
  if ((((q_spill->L).tab == y) &&
      (runtime_ifaceeq((runtime_itab *)p_spill,q_spill,y), local_10 != '\0')) &&
     (runtime_memequal(), local_10 != '\0')) {
    return q_spill->checker == p_spill->checker;
  }
  return false;
}

