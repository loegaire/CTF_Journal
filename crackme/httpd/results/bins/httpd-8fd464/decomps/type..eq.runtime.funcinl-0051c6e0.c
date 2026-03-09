
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.runtime.funcinl(runtime.funcinl * p, runtime.funcinl * q,
   bool r) */

bool type__eq_runtime_funcinl(runtime_funcinl *p,runtime_funcinl *q)

{
  long in_FS_OFFSET;
  runtime_funcinl *p_spill;
  runtime_funcinl *q_spill;
  char local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((((q_spill->zero == p_spill->zero) && (q_spill->entry == p_spill->entry)) &&
      ((q_spill->name).len == (p_spill->name).len)) &&
     ((((q_spill->file).len == (p_spill->file).len && (q_spill->line == p_spill->line)) &&
      (runtime_memequal(), local_10 != '\0')))) {
    runtime_memequal();
    return (bool)local_10;
  }
  return false;
}

