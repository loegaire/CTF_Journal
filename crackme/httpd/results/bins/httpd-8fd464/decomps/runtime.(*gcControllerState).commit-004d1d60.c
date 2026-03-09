
/* WARNING: Unknown calling convention */

void runtime___gcControllerState__commit(runtime_gcControllerState *c,float64 triggerRatio)

{
  int iVar1;
  uint64 v;
  uint64 v_00;
  uint64 v_01;
  uint64 v_02;
  runtime_gcControllerState *c_00;
  long lVar2;
  runtime_gcControllerState *prVar3;
  runtime_gcControllerState *v_03;
  runtime_gcControllerState *prVar4;
  long in_FS_OFFSET;
  double dVar5;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  string s_05;
  runtime_gcControllerState *c_spill;
  float64 triggerRatio_spill;
  
                    /* Unresolved local var: uint64 goal@[???]
                       Unresolved local var: uint64 trigger@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  iVar1 = c_spill->gcPercent;
  if (iVar1 < 0) {
                    /* Unresolved local var: float64 scalingFactor@[???]
                       Unresolved local var: float64 maxTriggerRatio@[???]
                       Unresolved local var: float64 minTriggerRatio@[???] */
    prVar3 = (runtime_gcControllerState *)0xffffffffffffffff;
    if ((double)triggerRatio_spill < 0.0) {
      triggerRatio_spill = 0.0;
    }
  }
  else {
    prVar3 = (runtime_gcControllerState *)
             (((long)iVar1 * c_spill->heapMarked) / 100 + c_spill->heapMarked);
    dVar5 = ((double)iVar1 / 100.0) * 0.95;
    if ((double)triggerRatio_spill <= dVar5) {
      dVar5 = (double)triggerRatio_spill;
    }
    triggerRatio_spill = (float64)(((double)iVar1 / 100.0) * 0.6);
    if ((double)triggerRatio_spill <= dVar5) {
      triggerRatio_spill = (float64)dVar5;
    }
  }
  c_spill->triggerRatio = triggerRatio_spill;
  v_02 = runtime_work.initialHeapLive;
  if (c_spill->gcPercent < 0) {
    c_00 = (runtime_gcControllerState *)0xffffffffffffffff;
  }
  else {
                    /* Unresolved local var: uint64 minTrigger@[???] */
    dVar5 = ((double)triggerRatio_spill + 1.0) * (double)c_spill->heapMarked;
    if (9.223372036854776e+18 <= dVar5) {
      c_00 = (runtime_gcControllerState *)
             ((long)(dVar5 - 9.223372036854776e+18) | 0x8000000000000000);
    }
    else {
      c_00 = (runtime_gcControllerState *)(long)dVar5;
    }
    v_03 = (runtime_gcControllerState *)c_spill->heapMinimum;
                    /* Unresolved local var: uint64 sweepMin@[???] */
    if ((runtime_mheap_.sweepDrained == 0 || runtime_mheap_.sweepers != 0) &&
       (prVar4 = (runtime_gcControllerState *)(c_spill->heapLive + 0x100000), v_03 < prVar4)) {
      v_03 = prVar4;
    }
    if (c_00 < v_03) {
      c_00 = v_03;
    }
    if ((long)c_00 < 0) {
      v = c_spill->heapGoal;
      v_00 = c_spill->heapMarked;
      v_01 = c_spill->heapLive;
      runtime_printlock();
      s.len = v_02;
      s.str = &DAT_0029acda;
      runtime_printstring(s);
      runtime_printuint(v);
      s_00.len = v_02;
      s_00.str = &DAT_0029278e;
      runtime_printstring(s_00);
      runtime_printuint(v_00);
      s_01.len = v_02;
      s_01.str = &DAT_0029d623;
      runtime_printstring(s_01);
      runtime_printuint(v_01);
      s_02.len = v_02;
      s_02.str = &DAT_00299b85;
      runtime_printstring(s_02);
      runtime_printuint(v_02);
      s_03.len = v_02;
      s_03.str = &DAT_00296277;
      runtime_printstring(s_03);
      runtime_printfloat(triggerRatio_spill);
      s_04.len = v_02;
      s_04.str = &DAT_002927a6;
      runtime_printstring(s_04);
      runtime_printuint((uint64)v_03);
      runtime_printnl();
      runtime_printunlock();
      s_05.len = v_02;
      s_05.str = &DAT_0029a405;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_05);
    }
    if (prVar3 < c_00) {
      prVar3 = c_00;
    }
  }
  c_spill->trigger = (uint64)c_00;
  LOCK();
  c_spill->heapGoal = (uint64)prVar3;
  UNLOCK();
  if (runtime_trace.enabled != false) {
    runtime_traceHeapGoal();
                    /* Unresolved local var: uint64 heapLiveBasis@[???]
                       Unresolved local var: int64 heapDistance@[???]
                       Unresolved local var: uint64 pagesSwept@[???]
                       Unresolved local var: uint64 pagesInUse@[???]
                       Unresolved local var: int64 sweepDistancePages@[???] */
  }
  if (runtime_gcphase != 0) {
    runtime___gcControllerState__revise(c_00);
  }
  if (runtime_mheap_.sweepDrained == 0 || runtime_mheap_.sweepers != 0) {
    lVar2 = (long)c_00 + (-0x100000 - c_spill->heapLive);
    if (lVar2 < 0x2000) {
      lVar2 = 0x2000;
    }
    if ((long)(runtime_mheap_.pagesInUse - runtime_mheap_.pagesSwept) < 1) {
      runtime_mheap_.sweepPagesPerByte = 0.0;
    }
    else {
      runtime_mheap_.sweepPagesPerByte =
           (float64)((double)(long)(runtime_mheap_.pagesInUse - runtime_mheap_.pagesSwept) /
                    (double)lVar2);
      LOCK();
      runtime_mheap_.pagesSweptBasis = runtime_mheap_.pagesSwept;
      UNLOCK();
      runtime_mheap_.sweepHeapLiveBasis = c_spill->heapLive;
    }
  }
  else {
    runtime_mheap_.sweepPagesPerByte = 0.0;
  }
  runtime_gcPaceScavenger();
  return;
}

