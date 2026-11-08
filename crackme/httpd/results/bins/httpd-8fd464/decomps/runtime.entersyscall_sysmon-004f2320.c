
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_entersyscall_sysmon(void)

{
  long in_FS_OFFSET;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_lock2(&runtime_sched.lock);
  if (runtime_sched.sysmonwait != 0) {
    LOCK();
    runtime_sched.sysmonwait = 0;
    UNLOCK();
    runtime_notewakeup(&runtime_sched.sysmonnote);
  }
  runtime_unlock2(&runtime_sched.lock);
  return;
}

