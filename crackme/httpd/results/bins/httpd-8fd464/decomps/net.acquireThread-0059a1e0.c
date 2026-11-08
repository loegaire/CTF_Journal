
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void net_acquireThread(void)

{
  func__ **unaff_RBX;
  long in_FS_OFFSET;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (net_threadOnce.done == 0) {
    sync___Once__doSlow((sync_Once *)&PTR_net_acquireThread_func1_002b34a0,unaff_RBX);
  }
  runtime_chansend1((runtime_hchan *)&stack0xfffffffffffffff8,unaff_RBX);
  return;
}

