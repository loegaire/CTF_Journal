
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void net_acquireThread_func1(void)

{
  int unaff_RBX;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  net_concurrentThreadsLimit();
  runtime_makechan(local_20,unaff_RBX);
  if (runtime_writeBarrier._0_4_ == 0) {
    net_threadLimit = local_10;
  }
  else {
    runtime_gcWriteBarrier();
  }
  return;
}

