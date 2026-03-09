
/* WARNING: Unknown calling convention */

void sync_runtime_registerPoolCleanup(func__ **f)

{
  long in_FS_OFFSET;
  func__ **f_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (runtime_writeBarrier._0_4_ == 0) {
    runtime_poolcleanup = f_spill;
  }
  else {
    runtime_gcWriteBarrier();
  }
  return;
}

