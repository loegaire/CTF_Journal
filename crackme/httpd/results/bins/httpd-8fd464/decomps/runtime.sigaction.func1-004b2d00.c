
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_sigaction_func1(void)

{
  undefined4 *puVar1;
  long in_RDX;
  long extraout_RDX;
  long in_FS_OFFSET;
  undefined4 local_18;
  
                    /* Unresolved local var: uint32 * &sig@[???]
                       Unresolved local var: runtime.sigactiont * new@[???]
                       Unresolved local var: runtime.sigactiont * old@[???]
                       Unresolved local var: int32 * &ret@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  puVar1 = *(undefined4 **)(in_RDX + 0x20);
  runtime_callCgoSigaction();
  *puVar1 = local_18;
  return;
}

