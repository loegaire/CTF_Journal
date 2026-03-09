
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_init_5(void)

{
  runtime__type *prVar1;
  long in_FS_OFFSET;
  
                    /* Unresolved local var: interface_{} x@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  prVar1 = (runtime__type *)&DAT_002792e0;
  if (runtime_writeBarrier._0_4_ != 0) {
    runtime_gcWriteBarrier();
    prVar1 = runtime_deferType;
  }
  runtime_deferType = prVar1;
  return;
}

