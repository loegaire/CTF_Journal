
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void context_init_0(void)

{
  long in_FS_OFFSET;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_closechan((runtime_hchan *)context_closedchan);
  return;
}

