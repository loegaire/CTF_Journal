
/* WARNING: Unknown calling convention */

void runtime_runOneTimer(runtime_p *pp,runtime_timer *t,int64 now)

{
  func_interface_____uintptr_ **ppfVar1;
  long lVar2;
  void *pvVar3;
  runtime__type *i;
  long in_FS_OFFSET;
  bool bVar4;
  interface___ iVar5;
  ___runtime_timer t_00;
  runtime_p *pp_spill;
  runtime_timer *t_spill;
  int64 now_spill;
  
                    /* Unresolved local var: func(interface_{},_uintptr) * * f@[???]
                       Unresolved local var: uintptr seq@[???]
                       Unresolved local var: interface_{} arg@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x18)) {
    runtime_morestackc();
  }
  ppfVar1 = t_spill->f;
  pvVar3 = (t_spill->arg).data;
  i = (runtime__type *)t_spill->seq;
  lVar2 = t_spill->period;
  if (lVar2 < 1) {
    runtime_dodeltimer0(pp_spill);
    LOCK();
    bVar4 = t_spill->status == 2;
    if (bVar4) {
      t_spill->status = 0;
    }
    UNLOCK();
    if (!bVar4) {
      runtime_badTimer();
    }
  }
  else {
    lVar2 = lVar2 * ((now_spill - t_spill->when) / lVar2 + 1) + t_spill->when;
    t_spill->when = lVar2;
    if (lVar2 < 0) {
      t_spill->when = 0x7fffffffffffffff;
    }
    t_00.len = (pp_spill->timers).cap;
    t_00.array = (runtime_timer **)pp_spill;
    t_00.cap = (int)(pp_spill->timers).array;
    runtime_siftdownTimer(t_00,(int)i);
    LOCK();
    bVar4 = t_spill->status == 2;
    if (bVar4) {
      t_spill->status = 1;
    }
    UNLOCK();
    if (!bVar4) {
      runtime_badTimer();
    }
    if ((pp_spill->timers).len == 0) {
      LOCK();
      pp_spill->timer0When = 0;
      UNLOCK();
    }
    else {
      LOCK();
      pp_spill->timer0When = (*(pp_spill->timers).array)->when;
      UNLOCK();
    }
  }
  runtime_unlock2(&pp_spill->timersLock);
  iVar5.data = pvVar3;
  iVar5._type = i;
  (**ppfVar1)(iVar5,(uintptr)ppfVar1);
  runtime_lock2(&pp_spill->timersLock);
  return;
}

