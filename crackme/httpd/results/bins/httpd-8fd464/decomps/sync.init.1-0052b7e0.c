
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void sync_init_1(void)

{
  uintptr in_RAX;
  uintptr extraout_RAX;
  long in_FS_OFFSET;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    in_RAX = extraout_RAX;
  }
  sync_runtime_notifyListCheck(in_RAX);
  return;
}

