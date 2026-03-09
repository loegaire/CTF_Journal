
/* WARNING: Removing unreachable block (ram,0x004eeabf) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_wakep(void)

{
  bool unaff_BL;
  long in_FS_OFFSET;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (runtime_sched.npidle == 0) {
    return;
  }
  if (runtime_sched.nmspinning != 0) {
    return;
  }
  LOCK();
  runtime_sched.nmspinning = 1;
  UNLOCK();
  runtime_startm((runtime_p *)0x0,unaff_BL);
  return;
}

