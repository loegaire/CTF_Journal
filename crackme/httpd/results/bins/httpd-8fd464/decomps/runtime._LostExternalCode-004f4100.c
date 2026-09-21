
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime__LostExternalCode(void)

{
  long in_FS_OFFSET;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime__LostExternalCode();
  return;
}

