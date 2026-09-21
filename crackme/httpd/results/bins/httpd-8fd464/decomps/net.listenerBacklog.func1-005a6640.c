
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void net_listenerBacklog_func1(void)

{
  long in_FS_OFFSET;
  undefined8 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  net_maxListenerBacklog();
  net_listenerBacklogCache.val = local_10;
  return;
}

