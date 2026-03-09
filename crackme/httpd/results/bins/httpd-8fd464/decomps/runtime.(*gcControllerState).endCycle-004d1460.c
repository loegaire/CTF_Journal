
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*gcControllerState).endCycle(runtime.gcControllerState *
   c, bool userForced, float64 ~r1) */

float64 runtime___gcControllerState__endCycle(runtime_gcControllerState *c,bool userForced)

{
  double v;
  ulong uVar1;
  ulong uVar2;
  uint64 v_00;
  uint64 v_01;
  int64 v_02;
  long lVar3;
  long in_FS_OFFSET;
  double v_03;
  double v_04;
  double v_05;
  double v_06;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  string s_05;
  string s_06;
  string s_07;
  string s_08;
  string s_09;
  string s_10;
  string s_11;
  runtime_gcControllerState *c_spill;
  bool userForced_spill;
  long local_80;
  
                    /* Unresolved local var: float64 goalGrowthRatio@[???]
                       Unresolved local var: float64 actualGrowthRatio@[???]
                       Unresolved local var: int64 assistDuration@[???]
                       Unresolved local var: float64 utilization@[???]
                       Unresolved local var: float64 triggerError@[???]
                       Unresolved local var: float64 triggerRatio@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (!userForced_spill) {
                    /* Unresolved local var: float64 egogc@[???] */
    uVar1 = c_spill->heapMarked;
    v_03 = (double)(c_spill->heapGoal - uVar1) / (double)uVar1;
    if (v_03 < 0.0) {
      v_03 = 0.0;
    }
    uVar2 = c_spill->heapLive;
    runtime_nanotime1();
    lVar3 = local_80 - c_spill->markStartTime;
    if (lVar3 < 1) {
      v_06 = 0.25;
    }
    else {
      v_06 = (double)c_spill->assistTime / (double)(lVar3 * runtime_gomaxprocs) + 0.25;
    }
    v_04 = (double)uVar2 / (double)uVar1 - 1.0;
    v = (double)c_spill->triggerRatio;
    v_05 = v_04 - v;
    if (0 < runtime_debug.gcpacertrace) {
                    /* Unresolved local var: uint64 H_m_prev@[???]
                       Unresolved local var: uint64 H_T@[???]
                       Unresolved local var: float64 h_a@[???]
                       Unresolved local var: uint64 H_a@[???]
                       Unresolved local var: float64 h_g@[???]
                       Unresolved local var: int64 H_g@[???]
                       Unresolved local var: float64 u_a@[???]
                       Unresolved local var: float64 u_g@[???]
                       Unresolved local var: int64 W_a@[???] */
      uVar1 = c_spill->heapMarked;
      v_00 = c_spill->trigger;
      v_01 = c_spill->heapLive;
      v_02 = c_spill->scanWork;
      runtime_printlock();
      s.len = v_01;
      s.str = &DAT_00299a55;
      runtime_printstring(s);
      runtime_printuint(uVar1);
      s_00.len = v_01;
      s_00.str = &DAT_002888f4;
      runtime_printstring(s_00);
      runtime_printfloat((float64)v);
      s_01.len = v_01;
      s_01.str = &DAT_002888c7;
      runtime_printstring(s_01);
      runtime_printuint(v_00);
      s_02.len = v_01;
      s_02.str = &DAT_002888ea;
      runtime_printstring(s_02);
      runtime_printfloat((float64)v_04);
      s_03.len = v_01;
      s_03.str = &DAT_002888cc;
      runtime_printstring(s_03);
      runtime_printuint(v_01);
      s_04.len = v_01;
      s_04.str = &DAT_002888ef;
      runtime_printstring(s_04);
      runtime_printfloat((float64)v_03);
      s_05.len = v_01;
      s_05.str = &DAT_002888d1;
      runtime_printstring(s_05);
      runtime_printint((long)((v_03 + 1.0) * (double)uVar1));
      s_06.len = v_01;
      s_06.str = &DAT_0028891c;
      runtime_printstring(s_06);
      runtime_printfloat((float64)v_06);
      s_07.len = v_01;
      s_07.str = &DAT_00288921;
      runtime_printstring(s_07);
      runtime_printfloat(0.3);
      s_08.len = v_01;
      s_08.str = &DAT_002888db;
      runtime_printstring(s_08);
      runtime_printint(v_02);
      s_09.len = v_01;
      s_09.str = &DAT_0028b862;
      runtime_printstring(s_09);
      runtime_printfloat((float64)(v_03 - v));
      s_10.len = v_01;
      s_10.str = &DAT_0028ebd4;
      runtime_printstring(s_10);
      runtime_printfloat((float64)v_05);
      s_11.len = v_01;
      s_11.str = &DAT_0028d232;
      runtime_printstring(s_11);
      runtime_printfloat((float64)(v_06 / 0.3));
      runtime_printnl();
      runtime_printunlock();
    }
    return (float64)(((v_03 - v) - v_05 * (v_06 / 0.3)) * 0.5 + v);
  }
  return c_spill->triggerRatio;
}

