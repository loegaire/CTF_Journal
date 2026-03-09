
/* WARNING: Unknown calling convention */

void runtime_addOneOpenDeferFrame(runtime_g *gp,uintptr pc,void *sp)

{
  long in_FS_OFFSET;
  runtime_g *gp_spill;
  uintptr pc_spill;
  void *sp_spill;
  
                    /* Unresolved local var: runtime._defer * prevDefer@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_systemstack();
  return;
}

