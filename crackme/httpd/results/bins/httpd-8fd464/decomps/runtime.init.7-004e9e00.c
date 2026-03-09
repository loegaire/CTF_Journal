
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_init_7(void)

{
  runtime_funcval *unaff_RBX;
  long in_FS_OFFSET;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_newproc(0x2b3828,unaff_RBX);
  return;
}

