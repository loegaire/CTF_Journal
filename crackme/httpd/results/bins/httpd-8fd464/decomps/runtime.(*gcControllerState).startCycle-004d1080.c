
/* WARNING: Unknown calling convention */

void runtime___gcControllerState__startCycle(runtime_gcControllerState *c)

{
  float64 v;
  runtime_p *prVar1;
  int64 v_00;
  runtime_p **pprVar2;
  int iVar3;
  uint64 uVar4;
  uint64 uVar5;
  ulong uVar6;
  long lVar7;
  long in_FS_OFFSET;
  double dVar8;
  float64 v_01;
  double dVar9;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  runtime_gcControllerState *c_spill;
  
                    /* Unresolved local var: float64 totalUtilizationGoal@[???]
                       Unresolved local var: float64 utilError@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  c_spill->scanWork = 0;
  c_spill->bgScanCredit = 0;
  c_spill->assistTime = 0;
  c_spill->dedicatedMarkTime = 0;
  c_spill->fractionalMarkTime = 0;
  c_spill->idleMarkTime = 0;
  uVar6 = c_spill->heapLive + 0x100000;
  if (c_spill->heapGoal < uVar6) {
    c_spill->heapGoal = uVar6;
  }
  dVar8 = (double)runtime_gomaxprocs * 0.25;
  lVar7 = (long)(dVar8 + 0.5);
  c_spill->dedicatedMarkWorkersNeeded = lVar7;
  dVar9 = (double)lVar7 / dVar8 - 1.0;
  if ((dVar9 < -0.3) || (0.3 < dVar9)) {
    if (dVar8 < (double)lVar7) {
      c_spill->dedicatedMarkWorkersNeeded = lVar7 + -1;
    }
    c_spill->fractionalUtilizationGoal =
         (float64)((dVar8 - (double)c_spill->dedicatedMarkWorkersNeeded) /
                  (double)runtime_gomaxprocs);
  }
  else {
    c_spill->fractionalUtilizationGoal = 0.0;
  }
  if (0 < runtime_debug.gcstoptheworld) {
    c_spill->dedicatedMarkWorkersNeeded = (long)runtime_gomaxprocs;
    c_spill->fractionalUtilizationGoal = 0.0;
  }
                    /* Unresolved local var: runtime.p * p@[???] */
  iVar3 = runtime_allp.len;
  pprVar2 = runtime_allp.array;
  for (lVar7 = 0; lVar7 < iVar3; lVar7 = lVar7 + 1) {
    prVar1 = pprVar2[lVar7];
    prVar1->gcAssistTime = 0;
    prVar1->gcFractionalMarkTime = 0;
  }
  runtime___gcControllerState__revise(c_spill);
  uVar5 = runtime_work.initialHeapLive;
  uVar4 = runtime_gcController.heapScan;
  if (0 < runtime_debug.gcpacertrace) {
    uVar6 = c_spill->heapGoal;
    v_00 = c_spill->dedicatedMarkWorkersNeeded;
    v = c_spill->fractionalUtilizationGoal;
    runtime_printlock();
    s.len = uVar5;
    s.str = &DAT_0029c0d6;
    runtime_printstring(s);
    runtime_printfloat(v_01);
    s_00.len = uVar5;
    s_00.str = &DAT_0028a3ac;
    runtime_printstring(s_00);
    runtime_printuint(uVar4 >> 0x14);
    s_01.len = uVar5;
    s_01.str = &DAT_0028a3ba;
    runtime_printstring(s_01);
    runtime_printuint(uVar5 >> 0x14);
    s_02.len = uVar5;
    s_02.str = &DAT_00287789;
    runtime_printstring(s_02);
    runtime_printuint(uVar6 >> 0x14);
    s_03.len = uVar5;
    s_03.str = &DAT_002944cf;
    runtime_printstring(s_03);
    runtime_printint(v_00);
    s_04.len = uVar5;
    s_04.str = (uint8 *)&net__stmp_20;
    runtime_printstring(s_04);
    runtime_printfloat(v);
    runtime_printnl();
    runtime_printunlock();
  }
  return;
}

