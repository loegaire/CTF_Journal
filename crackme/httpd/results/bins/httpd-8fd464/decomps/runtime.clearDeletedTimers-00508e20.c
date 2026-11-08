
/* WARNING: Unknown calling convention */

void runtime_clearDeletedTimers(runtime_p *pp)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long extraout_RAX;
  long lVar4;
  ulong extraout_RAX_00;
  ulong extraout_RAX_01;
  ulong extraout_RAX_02;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong extraout_RDX;
  runtime_p *prVar9;
  runtime_timer **pprVar10;
  runtime_timer **i;
  runtime_timer **pprVar11;
  ulong uVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  bool bVar14;
  ___runtime_timer t;
  ___runtime_timer t_00;
  runtime_p *pp_spill;
  
                    /* Unresolved local var: int32 cdel@[???]
                       Unresolved local var: int to@[???]
                       Unresolved local var: bool changedHeap@[???]
                       Unresolved local var: []*runtime.timer timers@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  LOCK();
  pp_spill->timerModifiedEarliest = 0;
  UNLOCK();
  pprVar10 = (pp_spill->timers).array;
  uVar7 = (pp_spill->timers).len;
  uVar8 = (pp_spill->timers).cap;
  lVar3 = 0;
  pprVar11 = (runtime_timer **)0x0;
  uVar12 = 0;
  uVar13 = 0;
                    /* Unresolved local var: runtime.timer * t@[???] */
  do {
    uVar5 = uVar12;
    if ((long)uVar7 <= lVar3) {
      while( true ) {
        if ((long)uVar7 <= (long)uVar5) {
          LOCK();
          pp_spill->deletedTimers = pp_spill->deletedTimers + -(int)uVar13;
          UNLOCK();
          LOCK();
          pp_spill->numTimers = pp_spill->numTimers + -(int)uVar13;
          UNLOCK();
          if (uVar8 < uVar12) {
                    /* WARNING: Subroutine does not return */
            runtime_panicSliceAcap();
          }
          (pp_spill->timers).len = uVar12;
          (pp_spill->timers).cap = uVar8;
          if (runtime_writeBarrier._0_4_ == 0) {
            (pp_spill->timers).array = pprVar10;
          }
          else {
            runtime_gcWriteBarrierSI();
            uVar12 = extraout_RAX_02;
          }
          if (uVar12 == 0) {
            LOCK();
            pp_spill->timer0When = 0;
            UNLOCK();
          }
          else {
            LOCK();
            pp_spill->timer0When = (*pprVar10)->when;
            UNLOCK();
          }
          return;
        }
        if (uVar7 <= uVar5) break;
        if (runtime_writeBarrier._0_4_ == 0) {
          pprVar10[uVar5] = (runtime_timer *)0x0;
        }
        else {
          runtime_gcWriteBarrierBX();
          uVar12 = extraout_RAX_01;
          uVar8 = extraout_RDX;
        }
        uVar5 = uVar5 + 1;
      }
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
                    /* Unresolved local var: uint32 s@[???] */
    prVar9 = (runtime_p *)pprVar10[lVar3];
LAB_005090e8:
    do {
      while (uVar2 = *(uint *)&prVar9->mcache, uVar2 < 4) {
        if (uVar2 < 2) {
          if (uVar2 != 0) {
            if ((char)pprVar11 != '\0') {
              if (uVar7 <= uVar12) {
                    /* WARNING: Subroutine does not return */
                runtime_panicIndex();
              }
              i = pprVar10 + uVar12;
              uVar5 = uVar7;
              if (runtime_writeBarrier._0_4_ == 0) {
                pprVar10[uVar12] = (runtime_timer *)prVar9;
                lVar4 = lVar3;
                prVar9 = pp_spill;
                i = pprVar11;
              }
              else {
                runtime_gcWriteBarrierBX();
                lVar4 = extraout_RAX;
              }
              t.len = (int)prVar9;
              t.array = (runtime_timer **)lVar4;
              t.cap = uVar5;
              runtime_siftupTimer(t,(int)i);
            }
            uVar12 = uVar12 + 1;
            goto LAB_00508e82;
          }
LAB_0050924c:
          runtime_badTimer();
        }
        else if (uVar2 == 2) {
LAB_0050920f:
          runtime_badTimer();
        }
        else {
          LOCK();
          bVar14 = uVar2 == *(uint *)&prVar9->mcache;
          if (bVar14) {
            *(undefined4 *)&prVar9->mcache = 4;
          }
          UNLOCK();
          if (bVar14) {
            prVar9->id = 0;
            prVar9->status = 0;
            LOCK();
            bVar14 = *(int *)&prVar9->mcache == 4;
            if (bVar14) {
              *(undefined4 *)&prVar9->mcache = 5;
            }
            UNLOCK();
            if (!bVar14) {
              runtime_badTimer();
            }
            uVar13 = (ulong)((int)uVar13 + 1);
            pprVar11 = (runtime_timer **)0x1;
            goto LAB_00508e82;
          }
        }
      }
      if (uVar2 < 6) {
        if (uVar2 == 4) goto LAB_0050920f;
        goto LAB_0050924c;
      }
      if (uVar2 == 6) {
        runtime_osyield();
        goto LAB_005090e8;
      }
      if (8 < uVar2) {
        if (uVar2 == 9) goto LAB_0050920f;
        runtime_badTimer();
        goto LAB_005090e8;
      }
      LOCK();
      uVar1 = *(uint *)&prVar9->mcache;
      bVar14 = uVar2 == uVar1;
      if (bVar14) {
        *(undefined4 *)&prVar9->mcache = 9;
        uVar1 = uVar2;
      }
      uVar5 = (ulong)uVar1;
      UNLOCK();
    } while (!bVar14);
    prVar9->link = prVar9->m;
    if (uVar7 <= uVar12) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    pprVar11 = pprVar10 + uVar12;
    uVar6 = uVar7;
    if (runtime_writeBarrier._0_4_ == 0) {
      pprVar10[uVar12] = (runtime_timer *)prVar9;
    }
    else {
      runtime_gcWriteBarrier();
      uVar5 = extraout_RAX_00;
    }
    t_00.len = (int)pp_spill;
    t_00.array = (runtime_timer **)uVar5;
    t_00.cap = uVar6;
    runtime_siftupTimer(t_00,(int)pprVar11);
    LOCK();
    bVar14 = *(int *)&prVar9->mcache == 9;
    if (bVar14) {
      *(undefined4 *)&prVar9->mcache = 1;
    }
    UNLOCK();
    if (!bVar14) {
      runtime_badTimer();
    }
    uVar12 = uVar12 + 1;
    pprVar11 = (runtime_timer **)0x1;
LAB_00508e82:
    lVar3 = lVar3 + 1;
  } while( true );
}

