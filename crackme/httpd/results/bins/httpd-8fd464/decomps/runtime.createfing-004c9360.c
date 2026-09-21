
/* WARNING: Removing unreachable block (ram,0x004c9394) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_createfing(void)

{
  runtime_funcval *unaff_RBX;
  long in_FS_OFFSET;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (runtime_fingCreate == 0) {
    LOCK();
    runtime_fingCreate = 1;
    UNLOCK();
    runtime_newproc(0x2b39e8,unaff_RBX);
  }
  return;
}

