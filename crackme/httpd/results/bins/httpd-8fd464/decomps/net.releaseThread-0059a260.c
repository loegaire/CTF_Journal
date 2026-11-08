
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void net_releaseThread(void)

{
  void *unaff_RBX;
  long in_FS_OFFSET;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_chanrecv1((runtime_hchan *)net_threadLimit,unaff_RBX);
  return;
}

