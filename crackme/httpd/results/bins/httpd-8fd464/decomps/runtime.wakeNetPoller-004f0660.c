
/* WARNING: Unknown calling convention */

void runtime_wakeNetPoller(int64 when)

{
  long in_FS_OFFSET;
  int64 when_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (runtime_sched.lastpoll == 0) {
                    /* Unresolved local var: int64 pollerPollUntil@[???] */
    if ((runtime_sched.pollUntil == 0) || (when_spill < (long)runtime_sched.pollUntil)) {
      runtime_netpollBreak();
    }
  }
  else {
    runtime_wakep();
  }
  return;
}

