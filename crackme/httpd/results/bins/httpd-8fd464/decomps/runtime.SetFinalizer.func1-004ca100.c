
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_SetFinalizer_func1(void)

{
  long in_RDX;
  long extraout_RDX;
  long in_FS_OFFSET;
  
                    /* Unresolved local var: runtime.eface * e@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  runtime_removefinalizer(*(void **)(*(long *)(in_RDX + 8) + 8));
  return;
}

