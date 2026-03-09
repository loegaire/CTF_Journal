
/* WARNING: Unknown calling convention */

void runtime_adjusttimers(runtime_p *pp,int64 now)

{
  uint uVar1;
  uint uVar2;
  runtime_p *prVar3;
  runtime_timer *prVar4;
  runtime_p *pp_00;
  runtime__type *et;
  runtime__type *prVar5;
  runtime__type *extraout_RDX;
  runtime__type *i;
  long cap;
  runtime_timer *prVar6;
  long in_FS_OFFSET;
  bool bVar7;
  string s;
  runtime_slice old;
  ___runtime_timer moved;
  runtime_p *pp_spill;
  int64 now_spill;
  long local_48;
  long local_40;
  runtime__type *local_38;
  
                    /* Unresolved local var: uint64 first@[???]
                       Unresolved local var: []*runtime.timer moved@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((pp_spill->timerModifiedEarliest == 0) || (now_spill < (long)pp_spill->timerModifiedEarliest))
  {
    return;
  }
  LOCK();
  pp_spill->timerModifiedEarliest = 0;
  UNLOCK();
  pp_00 = (runtime_p *)0x0;
  et = (runtime__type *)0x0;
  i = (runtime__type *)0x0;
  cap = 0;
                    /* Unresolved local var: int i@[???] */
  do {
    prVar3 = (runtime_p *)(pp_spill->timers).len;
    if ((long)prVar3 <= (long)pp_00) {
      if (0 < (long)et) {
        moved.len = (int)et;
        moved.array = (runtime_timer **)i;
        moved.cap = (int)prVar3;
        runtime_addAdjustedTimers(pp_00,moved);
      }
      return;
    }
                    /* Unresolved local var: runtime.timer * t@[???] */
    if (prVar3 <= pp_00) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    prVar4 = (pp_spill->timers).array[(long)pp_00];
    if (pp_spill != (runtime_p *)prVar4->pp) {
      s.len = (int)i;
      s.str = &DAT_0029b39c;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s);
    }
                    /* Unresolved local var: uint32 s@[???] */
    uVar2 = prVar4->status;
    if (uVar2 < 4) {
      if (uVar2 < 2) {
        if (uVar2 == 0) {
LAB_00508835:
          runtime_badTimer();
        }
      }
      else {
        if (uVar2 == 2) goto LAB_00508835;
        LOCK();
        uVar1 = prVar4->status;
        bVar7 = uVar2 == uVar1;
        if (bVar7) {
          prVar4->status = 4;
          uVar1 = uVar2;
        }
        UNLOCK();
        if (bVar7) {
          runtime_dodeltimer((runtime_p *)(ulong)uVar1,(int)i);
          LOCK();
          bVar7 = prVar4->status == 4;
          if (bVar7) {
            prVar4->status = 5;
          }
          UNLOCK();
          if (!bVar7) {
            runtime_badTimer();
          }
          LOCK();
          pp_spill->deletedTimers = pp_spill->deletedTimers - 1;
          UNLOCK();
          pp_00 = (runtime_p *)&pp_00[-1].field_0x270f;
        }
      }
    }
    else if (uVar2 < 7) {
      if (uVar2 < 6) goto LAB_00508835;
      if (uVar2 != 6) goto LAB_00508860;
      runtime_osyield();
      pp_00 = (runtime_p *)&pp_00[-1].field_0x270f;
    }
    else if (uVar2 < 9) {
      LOCK();
      bVar7 = uVar2 == prVar4->status;
      if (bVar7) {
        prVar4->status = 9;
      }
      UNLOCK();
      if (bVar7) {
        prVar4->when = prVar4->nextwhen;
        prVar6 = prVar4;
        runtime_dodeltimer((runtime_p *)prVar4->nextwhen,(int)i);
        prVar5 = (runtime__type *)((long)&et->size + 1);
        if (i < prVar5) {
          old.len = (int)prVar5;
          old.array = &DAT_0021ea20;
          old.cap = (int)prVar6;
          runtime_growslice(et,old,cap);
          prVar5 = (runtime__type *)(local_40 + 1);
          i = local_38;
          cap = local_48;
        }
        if (runtime_writeBarrier._0_4_ == 0) {
          *(runtime_timer **)(cap + (long)et * 8) = prVar4;
        }
        else {
          runtime_gcWriteBarrierBX();
          i = extraout_RDX;
        }
        pp_00 = (runtime_p *)&pp_00[-1].field_0x270f;
        et = prVar5;
      }
    }
    else {
      if (uVar2 == 9) goto LAB_00508835;
LAB_00508860:
      runtime_badTimer();
    }
    pp_00 = (runtime_p *)((long)&pp_00->id + 1);
  } while( true );
}

