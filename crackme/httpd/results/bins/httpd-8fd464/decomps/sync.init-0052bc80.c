
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void sync_init(void)

{
  long in_FS_OFFSET;
  void *local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_newobject((runtime__type *)&DAT_0022dfe0);
  if (runtime_writeBarrier._0_4_ == 0) {
    sync_expunged = local_10;
  }
  else {
    runtime_gcWriteBarrier();
  }
  return;
}

