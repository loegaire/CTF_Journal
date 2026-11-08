
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_mspinning(void)

{
  long in_FS_OFFSET;
  
  *(undefined1 *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0x11c) = 1;
  return;
}

