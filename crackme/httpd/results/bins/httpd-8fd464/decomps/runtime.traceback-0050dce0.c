
/* WARNING: Unknown calling convention */

void runtime_traceback(uintptr pc,uintptr sp,uintptr lr,runtime_g *gp)

{
  uint in_RSI;
  long in_FS_OFFSET;
  uintptr pc_spill;
  uintptr sp_spill;
  uintptr lr_spill;
  runtime_g *gp_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_traceback1((uintptr)gp_spill,sp,lr,gp,in_RSI);
  return;
}

