
/* WARNING: Unknown calling convention */

void runtime_dodeltimer(runtime_p *pp,int i)

{
  runtime_timer *prVar1;
  runtime_timer **pprVar2;
  ulong extraout_RAX;
  ulong extraout_RAX_00;
  ulong uVar3;
  ulong uVar4;
  runtime_timer **i_00;
  ulong uVar5;
  long in_FS_OFFSET;
  string s;
  ___runtime_timer t;
  ___runtime_timer t_00;
  runtime_p *pp_spill;
  int i_spill;
  
                    /* Unresolved local var: int last@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: runtime.timer * t@[???] */
  if ((ulong)(pp_spill->timers).len <= (ulong)i_spill) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  prVar1 = (pp_spill->timers).array[i_spill];
  if (pp_spill != (runtime_p *)prVar1->pp) {
    s.len = (int)pp_spill;
    s.str = &DAT_0029b505;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
  prVar1->pp = 0;
  uVar4 = (pp_spill->timers).len;
  pprVar2 = (pp_spill->timers).array;
  uVar5 = uVar4 - 1;
  uVar3 = i_spill;
  if (i_spill != uVar5) {
    if (uVar4 <= uVar5) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if (uVar4 <= (ulong)i_spill) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if (runtime_writeBarrier._0_4_ == 0) {
      pprVar2[i_spill] = pprVar2[uVar4 - 1];
    }
    else {
      runtime_gcWriteBarrierR9();
      uVar3 = extraout_RAX;
    }
  }
  pprVar2 = (pp_spill->timers).array;
  if ((ulong)(pp_spill->timers).len <= uVar5) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  i_00 = pprVar2 + (uVar4 - 1);
  if (runtime_writeBarrier._0_4_ == 0) {
    pprVar2[uVar4 - 1] = (runtime_timer *)0x0;
  }
  else {
    runtime_gcWriteBarrierSI();
    uVar3 = extraout_RAX_00;
  }
  if (uVar5 <= (ulong)(pp_spill->timers).cap) {
    (pp_spill->timers).len = uVar5;
    if (uVar3 != uVar5) {
      t.len = (int)pp_spill;
      t.array = (runtime_timer **)uVar3;
      t.cap = (int)(pp_spill->timers).array;
      runtime_siftupTimer(t,(int)i_00);
      t_00.len = (pp_spill->timers).cap;
      t_00.array = (runtime_timer **)pp_spill;
      t_00.cap = i_spill;
      runtime_siftdownTimer(t_00,(int)i_00);
      uVar3 = i_spill;
    }
    if (uVar3 == 0) {
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
    LOCK();
    pp_spill->numTimers = pp_spill->numTimers - 1;
    UNLOCK();
    return;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceAcap();
}

