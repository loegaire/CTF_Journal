
/* WARNING: Unknown calling convention */

void sync_runtime_notifyListNotifyAll(runtime_notifyList *l)

{
  runtime_mutex *l_00;
  runtime_sudog *prVar1;
  runtime_notifyList *extraout_RAX;
  runtime_sudog *s;
  runtime_sudog *extraout_RAX_00;
  int unaff_RBX;
  long in_FS_OFFSET;
  runtime_notifyList *l_spill;
  
                    /* Unresolved local var: runtime.sudog * s@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (l_spill->notify != l_spill->wait) {
    l_00 = &l_spill->lock;
    runtime_lock2((runtime_mutex *)l_spill);
    s = l_spill->head;
    if (runtime_writeBarrier._0_4_ == 0) {
      l_spill->head = (runtime_sudog *)0x0;
      l_spill->tail = (runtime_sudog *)0x0;
    }
    else {
      runtime_gcWriteBarrierDX();
      runtime_gcWriteBarrierDX();
      l_spill = extraout_RAX;
    }
    LOCK();
    l_spill->notify = l_spill->wait;
    UNLOCK();
    runtime_unlock2(l_00);
    while (s != (runtime_sudog *)0x0) {
      prVar1 = s->next;
      if (runtime_writeBarrier._0_4_ == 0) {
        s->next = (runtime_sudog *)0x0;
      }
      else {
        runtime_gcWriteBarrierDX();
        s = extraout_RAX_00;
      }
                    /* Unresolved local var: runtime.sudog * next@[???] */
      runtime_readyWithTime(s,unaff_RBX);
      s = prVar1;
    }
    return;
  }
  return;
}

