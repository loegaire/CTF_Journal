
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.listenerBacklog(int ~r0) */

int net_listenerBacklog(void)

{
  func__ **unaff_RBX;
  long in_FS_OFFSET;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (net_listenerBacklogCache.Once.done == 0) {
    sync___Once__doSlow((sync_Once *)&PTR_net_listenerBacklog_func1_002b34f8,unaff_RBX);
  }
  return net_listenerBacklogCache.val;
}

