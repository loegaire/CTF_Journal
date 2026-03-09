
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_freezetheworld(void)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined1 local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  LOCK();
  runtime_freezing = 1;
  UNLOCK();
                    /* Unresolved local var: int i@[???] */
  for (lVar1 = 0; lVar1 < 5; lVar1 = lVar1 + 1) {
    runtime_sched.stopwait = 0x7fffffff;
    LOCK();
    runtime_sched.gcwaiting = 1;
    UNLOCK();
    runtime_preemptall();
    if (local_18 == '\0') break;
    local_18 = -0x18;
    runtime_usleep();
  }
  runtime_usleep();
  runtime_preemptall();
  runtime_usleep();
  return;
}

