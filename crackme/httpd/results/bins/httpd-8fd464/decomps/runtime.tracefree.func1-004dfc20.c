
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_tracefree_func1(void)

{
  long in_RDX;
  long extraout_RDX;
  uintptr unaff_RBX;
  uint in_RSI;
  runtime_g *in_RDI;
  long in_FS_OFFSET;
  
                    /* Unresolved local var: uintptr pc@[???]
                       Unresolved local var: uintptr sp@[???]
                       Unresolved local var: runtime.g * gp@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  runtime_traceback1(*(uintptr *)(in_RDX + 0x10),unaff_RBX,*(uintptr *)(in_RDX + 0x18),in_RDI,in_RSI
                    );
  return;
}

