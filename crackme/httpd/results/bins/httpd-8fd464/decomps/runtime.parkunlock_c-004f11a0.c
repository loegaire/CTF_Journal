
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.parkunlock_c(runtime.g * gp, void * lock, bool ~r2) */

bool runtime_parkunlock_c(runtime_g *gp,void *lock)

{
  undefined1 extraout_AL;
  long in_FS_OFFSET;
  runtime_g *gp_spill;
  void *lock_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_unlock2(lock_spill);
  return (bool)extraout_AL;
}

