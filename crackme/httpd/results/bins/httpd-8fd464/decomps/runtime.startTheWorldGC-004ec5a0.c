
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_startTheWorldGC(void)

{
  int in_RCX;
  bool unaff_BL;
  long in_FS_OFFSET;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_startTheWorld();
  runtime_semrelease1(&runtime_gcsema,unaff_BL,in_RCX);
  return;
}

