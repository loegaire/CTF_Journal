
/* WARNING: Unknown calling convention */

void runtime_main_func2(bool *_needUnlock)

{
  long in_FS_OFFSET;
  bool *_needUnlock_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (*_needUnlock_spill != false) {
    runtime_unlockOSThread();
  }
  return;
}

