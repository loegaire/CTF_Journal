
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_templateThread(void)

{
  runtime_m *prVar1;
  runtime_muintptr l;
  long in_FS_OFFSET;
  runtime_m *local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_lock2(&runtime_sched.lock);
  runtime_sched.nmsys = runtime_sched.nmsys + 1;
  runtime_checkdead();
  runtime_unlock2(&runtime_sched.lock);
  do {
    runtime_lock2(&runtime_newmHandoff.lock);
    while (l = runtime_newmHandoff.newm, runtime_newmHandoff.newm != 0) {
      local_10 = (runtime_m *)runtime_newmHandoff.newm;
      runtime_newmHandoff.newm = 0;
      runtime_unlock2((runtime_mutex *)l);
      while (local_10 != (runtime_m *)0x0) {
                    /* Unresolved local var: runtime.m * next@[???] */
        prVar1 = (runtime_m *)local_10->schedlink;
        local_10->schedlink = 0;
        runtime_newm1(local_10);
        local_10 = prVar1;
      }
      runtime_lock2(&runtime_newmHandoff.lock);
    }
    runtime_newmHandoff.waiting = true;
    runtime_newmHandoff.wake.key = 0;
    runtime_unlock2(&runtime_newmHandoff.lock);
    runtime_notesleep(&runtime_newmHandoff.wake);
    runtime_mDoFixup();
  } while( true );
}

