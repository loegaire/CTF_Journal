
/* WARNING: Unknown calling convention */

void runtime_schedEnableUser(bool enable)

{
  bool bVar1;
  uint uVar2;
  runtime_mutex *l;
  runtime_guintptr unaff_RBX;
  long in_FS_OFFSET;
  bool enable_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_lock2(&runtime_sched.lock);
  uVar2 = runtime_sched.disable.n;
  bVar1 = !enable_spill;
  if (runtime_sched.disable.user != bVar1) {
    runtime_sched.disable.user = bVar1;
    if (enable_spill) {
                    /* Unresolved local var: int32 n@[???] */
      l = (runtime_mutex *)(ulong)(uint)runtime_sched.disable.n;
      runtime_sched.disable.n = 0;
      if (runtime_sched.disable.runnable.tail != 0) {
        *(undefined8 *)(runtime_sched.disable.runnable.tail + 0xa0) = 0;
        if (runtime_sched.runq.tail == 0) {
          runtime_sched.runq.head = runtime_sched.disable.runnable.head;
        }
        else {
          *(runtime_guintptr *)(runtime_sched.runq.tail + 0xa0) =
               runtime_sched.disable.runnable.head;
        }
        runtime_sched.runq.tail = runtime_sched.disable.runnable.tail;
        unaff_RBX = runtime_sched.disable.runnable.tail;
      }
      runtime_sched.runqsize = runtime_sched.runqsize + uVar2;
      runtime_sched.disable.runnable = (runtime_gQueue)ZEXT816(0);
      runtime_unlock2(l);
      while ((uVar2 != 0 && (runtime_sched.npidle != 0))) {
        runtime_startm((runtime_p *)(ulong)uVar2,SUB81(unaff_RBX,0));
        uVar2 = uVar2 - 1;
      }
    }
    else {
      runtime_unlock2(&runtime_sched.lock);
    }
    return;
  }
  runtime_unlock2(&runtime_sched.lock);
  return;
}

