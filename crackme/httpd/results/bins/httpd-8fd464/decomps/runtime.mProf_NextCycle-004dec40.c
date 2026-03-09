
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_mProf_NextCycle(void)

{
  long in_FS_OFFSET;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_lock2(&runtime_proflock);
  runtime_mProf.cycle =
       runtime_mProf.cycle + ((runtime_mProf.cycle + 1) / 0x6000000) * -0x6000000 + 1;
  runtime_mProf.flushed = false;
  runtime_unlock2(&runtime_proflock);
  return;
}

