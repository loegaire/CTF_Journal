
/* WARNING: Removing unreachable block (ram,0x004e7bb3) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.shouldPushSigpanic(runtime.g * gp, uintptr pc, uintptr lr,
   bool ~r3) */

bool runtime_shouldPushSigpanic(runtime_g *gp,uintptr pc,uintptr lr)

{
  long in_FS_OFFSET;
  runtime_funcInfo rVar1;
  runtime_g *gp_spill;
  uintptr pc_spill;
  uintptr lr_spill;
  long local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (pc_spill == 0) {
    return false;
  }
  if (gp_spill->m->incgo == false) {
    rVar1 = runtime_findfunc(pc_spill);
    pc_spill = (uintptr)rVar1._func;
    if (local_18 == 0) {
      rVar1 = runtime_findfunc(lr_spill);
      return rVar1._func._0_1_;
    }
  }
  return SUB81(pc_spill,0);
}

