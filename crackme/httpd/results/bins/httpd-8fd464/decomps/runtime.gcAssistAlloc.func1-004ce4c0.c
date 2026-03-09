
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_gcAssistAlloc_func1(void)

{
  long in_RDX;
  long extraout_RDX;
  int64 unaff_RBX;
  long in_FS_OFFSET;
  
                    /* Unresolved local var: runtime.g * gp@[???]
                       Unresolved local var: int64 scanWork@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  runtime_gcAssistAlloc1(*(runtime_g **)(in_RDX + 0x10),unaff_RBX);
  return;
}

