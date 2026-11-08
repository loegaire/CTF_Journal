
/* WARNING: Unknown calling convention */

void runtime_doaddtimer(runtime_p *pp,runtime_timer *t)

{
  ___runtime_timer *p_Var1;
  ulong cap;
  undefined8 uVar2;
  undefined8 uVar3;
  runtime_timer **extraout_RAX;
  long lVar4;
  runtime_p *extraout_RDX;
  runtime_p *prVar5;
  runtime_timer **pprVar6;
  int in_RDI;
  runtime_timer **i;
  long in_FS_OFFSET;
  string s;
  runtime_slice old;
  ___runtime_timer t_00;
  runtime_p *pp_spill;
  runtime_timer *t_spill;
  runtime_timer **local_28;
  long local_20;
  int local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (runtime_netpollInited == 0) {
    runtime_netpollGenericInit();
  }
  if (t_spill->pp == 0) {
    t_spill->pp = (runtime_puintptr)pp_spill;
    lVar4 = (pp_spill->timers).len;
    p_Var1 = &pp_spill->timers;
    pprVar6 = p_Var1->array;
    uVar2 = p_Var1->array;
    uVar3 = p_Var1->len;
    old.len = uVar3;
    old.array = (void *)uVar2;
    cap = (pp_spill->timers).cap;
    if (cap < lVar4 + 1U) {
      old.cap = in_RDI;
      runtime_growslice((runtime__type *)&DAT_0021ea20,old,cap);
      (pp_spill->timers).cap = local_18;
      if (runtime_writeBarrier._0_4_ == 0) {
        (pp_spill->timers).array = local_28;
        lVar4 = local_20;
        pprVar6 = local_28;
      }
      else {
        runtime_gcWriteBarrier();
        lVar4 = local_20;
        pprVar6 = extraout_RAX;
      }
    }
    (pp_spill->timers).len = lVar4 + 1;
    i = pprVar6 + lVar4;
    if (runtime_writeBarrier._0_4_ == 0) {
      pprVar6[lVar4] = t_spill;
      prVar5 = pp_spill;
    }
    else {
      runtime_gcWriteBarrier();
      prVar5 = extraout_RDX;
    }
    t_00.len = (prVar5->timers).cap;
    t_00.array = (prVar5->timers).array;
    t_00.cap = (prVar5->timers).len;
    runtime_siftupTimer(t_00,(int)i);
    if ((pp_spill->timers).len == 0) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if (*(pp_spill->timers).array == t_spill) {
      LOCK();
      pp_spill->timer0When = t_spill->when;
      UNLOCK();
    }
    LOCK();
    pp_spill->numTimers = pp_spill->numTimers + 1;
    UNLOCK();
    return;
  }
  s.len = (int)t;
  s.str = &DAT_002a3bac;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}

