
/* WARNING: Unknown calling convention */

void sync_runtime_notifyListNotifyOne(runtime_notifyList *l)

{
  runtime_mutex *l_00;
  uint32 uVar1;
  runtime_notifyList *extraout_RAX;
  runtime_notifyList *extraout_RAX_00;
  runtime_sudog *extraout_RAX_01;
  runtime_sudog *s;
  runtime_sudog *prVar2;
  runtime_sudog *extraout_RDX;
  runtime_sudog *extraout_RDX_00;
  runtime_sudog *traceskip;
  long in_FS_OFFSET;
  runtime_notifyList *l_spill;
  
                    /* Unresolved local var: uint32 t@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (l_spill->notify != l_spill->wait) {
    l_00 = &l_spill->lock;
    runtime_lock2((runtime_mutex *)l_spill);
    uVar1 = l_spill->notify;
    if (l_spill->wait == uVar1) {
      runtime_unlock2(l_00);
      return;
    }
    LOCK();
    l_spill->notify = uVar1 + 1;
    UNLOCK();
                    /* Unresolved local var: runtime.sudog * p@[???]
                       Unresolved local var: runtime.sudog * s@[???] */
    prVar2 = l_spill->head;
    traceskip = (runtime_sudog *)0x0;
    while( true ) {
      s = prVar2;
      if (s == (runtime_sudog *)0x0) {
        runtime_unlock2(l_00);
        return;
      }
      if (s->ticket == uVar1) break;
                    /* Unresolved local var: runtime.sudog * n@[???] */
      prVar2 = s->next;
      traceskip = s;
    }
    prVar2 = s->next;
    if (traceskip == (runtime_sudog *)0x0) {
      if (runtime_writeBarrier._0_4_ == 0) {
        l_spill->head = prVar2;
      }
      else {
        runtime_gcWriteBarrierCX();
        l_spill = extraout_RAX_00;
        s = extraout_RDX_00;
      }
    }
    else if (runtime_writeBarrier._0_4_ == 0) {
      traceskip->next = prVar2;
    }
    else {
      runtime_gcWriteBarrierCX();
      l_spill = extraout_RAX;
      s = extraout_RDX;
    }
    if (prVar2 == (runtime_sudog *)0x0) {
      if (runtime_writeBarrier._0_4_ == 0) {
        l_spill->tail = traceskip;
      }
      else {
        runtime_gcWriteBarrierBX();
      }
    }
    runtime_unlock2(l_00);
    if (runtime_writeBarrier._0_4_ == 0) {
      s->next = (runtime_sudog *)0x0;
    }
    else {
      runtime_gcWriteBarrierCX();
      s = extraout_RAX_01;
    }
    runtime_readyWithTime(s,(int)traceskip);
    return;
  }
  return;
}

