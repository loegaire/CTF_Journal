
/* WARNING: Unknown calling convention */

void runtime_dodeltimer0(runtime_p *pp)

{
  runtime_timer *prVar1;
  runtime_timer **pprVar2;
  ulong extraout_RAX;
  ulong extraout_RAX_00;
  ulong uVar3;
  long lVar4;
  runtime_timer **i;
  long in_FS_OFFSET;
  ___runtime_timer t;
  string s;
  runtime_p *pp_spill;
  
                    /* Unresolved local var: int last@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: runtime.timer * t@[???] */
  if ((pp_spill->timers).len == 0) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  prVar1 = *(pp_spill->timers).array;
  if (pp_spill != (runtime_p *)prVar1->pp) {
    s.len = (int)pp_spill;
    s.str = &DAT_0029bf32;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
  prVar1->pp = 0;
  lVar4 = (pp_spill->timers).len;
  pprVar2 = (pp_spill->timers).array;
  uVar3 = lVar4 - 1;
  if (0 < (long)uVar3) {
    if (runtime_writeBarrier._0_4_ == 0) {
      *pprVar2 = pprVar2[lVar4 + -1];
    }
    else {
      runtime_gcWriteBarrierR8();
      uVar3 = extraout_RAX;
    }
  }
  pprVar2 = (pp_spill->timers).array;
  if (uVar3 < (ulong)(pp_spill->timers).len) {
    i = pprVar2 + lVar4 + -1;
    if (runtime_writeBarrier._0_4_ == 0) {
      pprVar2[lVar4 + -1] = (runtime_timer *)0x0;
    }
    else {
      runtime_gcWriteBarrierSI();
      uVar3 = extraout_RAX_00;
    }
    if (uVar3 <= (ulong)(pp_spill->timers).cap) {
      (pp_spill->timers).len = uVar3;
      if (0 < (long)uVar3) {
        t.len = (int)pp_spill;
        t.array = (runtime_timer **)uVar3;
        t.cap = (int)(pp_spill->timers).array;
        runtime_siftdownTimer(t,(int)i);
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
      LOCK();
      pp_spill->numTimers = pp_spill->numTimers - 1;
      UNLOCK();
      return;
    }
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceAcap();
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

