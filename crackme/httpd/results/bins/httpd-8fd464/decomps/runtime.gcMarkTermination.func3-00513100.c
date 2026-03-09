
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_gcMarkTermination_func3(void)

{
  undefined8 in_RAX;
  undefined8 extraout_RAX;
  long in_FS_OFFSET;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    in_RAX = extraout_RAX;
  }
  runtime_startTheWorldWithSema(SUB81(in_RAX,0));
  return;
}

