
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_allocm_func1(void)

{
  long in_RDX;
  long extraout_RDX;
  uintptr unaff_RBX;
  long in_FS_OFFSET;
  runtime_stack stk;
  
                    /* Unresolved local var: runtime.m * * &freem@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  stk.hi = unaff_RBX;
  stk.lo = *(uintptr *)(*(long *)**(undefined8 **)(in_RDX + 8) + 8);
  runtime_stackfree(stk);
  return;
}

