
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_netpollGenericInit(void)

{
  long in_FS_OFFSET;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (runtime_netpollInited == 0) {
    runtime_lock2(&runtime_netpollInitLock);
    if (runtime_netpollInited == 0) {
      runtime_netpollinit();
      LOCK();
      runtime_netpollInited = 1;
      UNLOCK();
    }
    runtime_unlock2(&runtime_netpollInitLock);
  }
  return;
}

