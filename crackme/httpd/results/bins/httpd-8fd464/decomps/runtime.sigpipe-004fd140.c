
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_sigpipe(void)

{
  bool bVar1;
  undefined7 extraout_var;
  long in_FS_OFFSET;
  undefined1 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: uint32 i@[???] */
  if ((runtime_sig.ignored[0] >> 0xd & 1) == 0) {
    bVar1 = runtime_sigsend(runtime_sig.ignored[0]);
    if (local_10 == '\0') {
      runtime_dieFromSignal((uint32)CONCAT71(extraout_var,bVar1));
      return;
    }
  }
  return;
}

