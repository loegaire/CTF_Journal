
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.checkTimers(runtime.p * pp, int64 now, int64 rnow, int64
   pollUntil, bool ran) */

multireturn_int64_int64_bool_ runtime_checkTimers(runtime_p *pp,int64 now)

{
  uint64 uVar1;
  byte bVar2;
  byte bVar3;
  uint64 uVar4;
  runtime_p *prVar5;
  long in_FS_OFFSET;
  multireturn_int64_int64_bool_ mVar6;
  multireturn_int64_int64_bool_ mVar7;
  multireturn_int64_int64_bool_ mVar8;
  runtime_p *pp_spill;
  int64 now_spill;
  runtime_p *local_48;
  long local_38;
  
                    /* Unresolved local var: int64 next@[???]
                       Unresolved local var: int64 nextAdj@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uVar1 = pp_spill->timer0When;
  uVar4 = pp_spill->timerModifiedEarliest;
  if ((uVar1 != 0) && ((uVar4 == 0 || ((long)uVar1 <= (long)uVar4)))) {
    uVar4 = uVar1;
  }
  if (uVar4 != 0) {
    if (now_spill == 0) {
      runtime_nanotime1();
      now_spill = (int64)local_48;
    }
    if ((now_spill < (long)uVar4) &&
       ((now = *(ulong *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xd8),
        pp_spill != (runtime_p *)now ||
        (now = (int64)pp_spill->deletedTimers,
        (ulong)now <= (runtime_p *)(ulong)(pp_spill->numTimers >> 2))))) {
      mVar6.pollUntil = now;
      mVar6.rnow = (int64)pp_spill;
      mVar6.ran = SUB81(now_spill,0);
      return mVar6;
    }
    runtime_lock2((runtime_mutex *)pp_spill);
    if ((pp_spill->timers).len < 1) {
      bVar2 = 0;
    }
    else {
      runtime_adjusttimers(pp_spill,now);
      bVar2 = 0;
                    /* Unresolved local var: int64 tw@[???] */
      while ((0 < (pp_spill->timers).len &&
             (runtime_runtimer((runtime_p *)now_spill,now), local_38 == 0))) {
        bVar2 = 1;
      }
    }
    prVar5 = *(runtime_p **)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xd8);
    bVar3 = bVar2;
    if ((pp_spill == prVar5) &&
       (prVar5 = (runtime_p *)(ulong)pp_spill->deletedTimers,
       (runtime_p *)((ulong)(pp_spill->timers).len >> 2) < prVar5)) {
      runtime_clearDeletedTimers(pp_spill);
    }
    runtime_unlock2(&pp_spill->timersLock);
    mVar8.rnow = (ulong)bVar2;
    mVar8.pollUntil = (int64)prVar5;
    mVar8.ran = (bool)bVar3;
    return mVar8;
  }
  mVar7.pollUntil = now;
  mVar7.rnow = now_spill;
  mVar7.ran = SUB81(uVar1,0);
  return mVar7;
}

