
/* WARNING: Unknown calling convention */

void runtime_tracebacktrap(uintptr pc,uintptr sp,uintptr lr,runtime_g *gp)

{
  runtime_m *prVar1;
  uint in_RSI;
  long in_FS_OFFSET;
  uintptr pc_spill;
  uintptr sp_spill;
  uintptr lr_spill;
  runtime_g *gp_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  prVar1 = gp_spill->m;
  if (prVar1->libcallsp != 0) {
    runtime_traceback1(prVar1->libcallpc,sp,prVar1->libcallg,gp,in_RSI);
    return;
  }
  runtime_traceback1((uintptr)gp_spill,sp,lr_spill,gp,in_RSI);
  return;
}

