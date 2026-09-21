
/* WARNING: Unknown calling convention */

void runtime_schedtrace(bool detailed)

{
  bool v;
  bool v_00;
  uint32 uVar1;
  uint32 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  runtime_p *prVar8;
  uint8 *puVar9;
  int iVar10;
  runtime_m *prVar11;
  int iVar12;
  int64 iVar13;
  long lVar14;
  int64 iVar15;
  long in_FS_OFFSET;
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
  string s_12;
  string s_13;
  string s_14;
  string s_15;
  string s_16;
  string s_17;
  string s_18;
  string s_19;
  string s_20;
  string s_21;
  string s_22;
  string s_23;
  string s_24;
  string s_25;
  string s_26;
  string s_27;
  string s_28;
  string s_29;
  string s_30;
  bool detailed_spill;
  long local_b8;
  ulong local_38;
  ulong local_30;
  int64 local_28;
  runtime_m *local_20;
  uint8 *local_18;
  runtime_p **local_10;
  
                    /* Unresolved local var: int64 now@[???]
                       Unresolved local var: int64 ~R0@[???] */
  while (&local_38 <= *(ulong **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_nanotime1();
  if (runtime_starttime == 0) {
    runtime_starttime = local_b8;
  }
  runtime_lock2(&runtime_sched.lock);
  local_28 = runtime_starttime;
  local_30 = (ulong)runtime_sched.npidle;
  local_38 = (ulong)runtime_sched.nmspinning;
  s.len = (long)runtime_sched.nmidle;
  lVar14 = (long)runtime_sched.runqsize;
  iVar4 = (int)runtime_sched.nmfreed;
  iVar12 = (int)runtime_sched.mnext;
  runtime_printlock();
  s.str = &DAT_002895f4;
  runtime_printstring(s);
  runtime_printint((local_b8 - local_28) * 0x431bde82d7b634db);
  s_00.len = s.len;
  s_00.str = &DAT_00298dd0;
  runtime_printstring(s_00);
  runtime_printint((long)runtime_gomaxprocs);
  s_01.len = s.len;
  s_01.str = &DAT_0029091c;
  runtime_printstring(s_01);
  runtime_printuint(local_30);
  s_02.len = s.len;
  s_02.str = &DAT_0028d229;
  runtime_printstring(s_02);
  runtime_printint((long)(iVar12 - iVar4));
  s_03.len = s.len;
  s_03.str = &DAT_00299b96;
  runtime_printstring(s_03);
  runtime_printuint(local_38);
  s_04.len = s.len;
  s_04.str = &DAT_00294503;
  runtime_printstring(s_04);
  runtime_printint(s.len);
  s_05.len = s.len;
  s_05.str = &DAT_0028ec06;
  runtime_printstring(s_05);
  runtime_printint(lVar14);
  runtime_printunlock();
  uVar1 = runtime_sched.sysmonwait;
  if (detailed_spill) {
    local_30 = (ulong)runtime_sched.gcwaiting;
    local_28 = (int64)runtime_sched.nmidlelocked;
    lVar14 = (long)runtime_sched.stopwait;
    local_38 = (ulong)runtime_sched.sysmonwait;
    runtime_printlock();
    s_06.len._0_4_ = uVar1;
    s_06.str = &DAT_00290911;
    s_06.len._4_4_ = 0;
    runtime_printstring(s_06);
    runtime_printuint(local_30);
    s_07.len._0_4_ = uVar1;
    s_07.str = &DAT_0029648d;
    s_07.len._4_4_ = 0;
    runtime_printstring(s_07);
    runtime_printint(local_28);
    s_08.len._0_4_ = uVar1;
    s_08.str = &DAT_0028ec24;
    s_08.len._4_4_ = 0;
    runtime_printstring(s_08);
    runtime_printint(lVar14);
    s_09.len._0_4_ = uVar1;
    s_09.str = &DAT_00292812;
    s_09.len._4_4_ = 0;
    runtime_printstring(s_09);
    runtime_printuint(local_38);
    runtime_printnl();
    runtime_printunlock();
  }
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: runtime.p * _p_@[???] */
  iVar10 = runtime_allp.len;
  local_10 = runtime_allp.array;
  for (lVar14 = 0; lVar14 < iVar10; lVar14 = lVar14 + 1) {
    prVar8 = local_10[lVar14];
                    /* Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: uint32 h@[???]
                       Unresolved local var: uint32 t@[???] */
    uVar1 = prVar8->runqhead;
    uVar2 = prVar8->runqtail;
    if (detailed_spill) {
                    /* Unresolved local var: int64 id@[???] */
      if (prVar8->m == 0) {
        iVar15 = -1;
      }
      else {
        iVar15 = *(int64 *)(prVar8->m + 0xf0);
      }
      local_30 = (ulong)prVar8->status;
      local_38 = (ulong)prVar8->schedtick;
      uVar3 = prVar8->syscalltick;
      s_10.len = (long)(prVar8->gFree).n;
      iVar13 = (prVar8->timers).len;
      local_28 = s_10.len;
      runtime_printlock();
      s_10.str = &DAT_00287873;
      runtime_printstring(s_10);
      runtime_printint(lVar14);
      s_11.len = s_10.len;
      s_11.str = &DAT_0028d31c;
      runtime_printstring(s_11);
      runtime_printuint(local_30);
      s_12.len = s_10.len;
      s_12.str = &DAT_00290969;
      runtime_printstring(s_12);
      runtime_printuint(local_38);
      s_13.len = s_10.len;
      s_13.str = &DAT_0029456b;
      runtime_printstring(s_13);
      runtime_printuint((ulong)uVar3);
      s_14.len = s_10.len;
      s_14.str = &DAT_00287885;
      runtime_printstring(s_14);
      runtime_printint(iVar15);
      s_15.len = s_10.len;
      s_15.str = &DAT_0028ebfc;
      runtime_printstring(s_15);
      runtime_printuint((ulong)(uVar2 - uVar1));
      s_16.len = s_10.len;
      s_16.str = &DAT_0028ebe8;
      runtime_printstring(s_16);
      runtime_printint(local_28);
      s_17.len = s_10.len;
      s_17.str = &DAT_0029097f;
      runtime_printstring(s_17);
      runtime_printint(iVar13);
      runtime_printnl();
      runtime_printunlock();
    }
    else {
      runtime_printlock();
      runtime_printsp();
      runtime_printunlock();
      if (lVar14 == 0) {
        runtime_printlock();
        runtime_printstring((string)ZEXT816(0x287754));
        runtime_printunlock();
      }
      runtime_printlock();
      runtime_printuint((ulong)(uVar2 - uVar1));
      runtime_printunlock();
      if (lVar14 == runtime_allp.len + -1) {
        runtime_printlock();
        s_18.len = lVar14;
        s_18.str = &DAT_0028783b;
        runtime_printstring(s_18);
        runtime_printunlock();
      }
    }
  }
  prVar11 = runtime_allm;
  if (!detailed_spill) {
    runtime_unlock(&runtime_sched.lock);
    return;
  }
  while (prVar11 != (runtime_m *)0x0) {
    if ((int *)prVar11->p == (int *)0x0) {
      iVar12 = -1;
    }
    else {
      iVar12 = *(int *)prVar11->p;
    }
    if (prVar11->curg == (runtime_g *)0x0) {
      iVar15 = -1;
    }
    else {
      iVar15 = prVar11->curg->goid;
    }
    if (prVar11->lockedg == 0) {
      iVar13 = -1;
    }
    else {
      iVar13 = *(int64 *)(prVar11->lockedg + 0x98);
    }
                    /* Unresolved local var: runtime.p * _p_@[???]
                       Unresolved local var: runtime.g * gp@[???]
                       Unresolved local var: runtime.g * lockedg@[???]
                       Unresolved local var: int32 id1@[???]
                       Unresolved local var: int64 id2@[???]
                       Unresolved local var: int64 id3@[???] */
    local_28 = prVar11->id;
    iVar4 = prVar11->mallocing;
    iVar5 = prVar11->throwing;
    local_18 = (prVar11->preemptoff).str;
    puVar9 = (uint8 *)(prVar11->preemptoff).len;
    iVar6 = prVar11->locks;
    iVar7 = prVar11->dying;
    v = prVar11->spinning;
    v_00 = prVar11->blocked;
    local_20 = prVar11;
    runtime_printlock();
    s_19.len = iVar13;
    s_19.str = &DAT_00287870;
    runtime_printstring(s_19);
    runtime_printint(local_28);
    s_20.len = iVar13;
    s_20.str = &DAT_00287e5d;
    runtime_printstring(s_20);
    runtime_printint((long)iVar12);
    s_21.len = iVar13;
    s_21.str = &DAT_002893cc;
    runtime_printstring(s_21);
    runtime_printint(iVar15);
    s_22.len = iVar13;
    s_22.str = &DAT_00290932;
    runtime_printstring(s_22);
    runtime_printint((long)iVar4);
    s_23.len = iVar13;
    s_23.str = &DAT_0028ec56;
    runtime_printstring(s_23);
    runtime_printint((long)iVar5);
    s_24.len = iVar13;
    s_24.str = &DAT_002927d6;
    runtime_printstring(s_24);
    s_25.len = iVar13;
    s_25.str = puVar9;
    runtime_printstring(s_25);
    s_26.len = iVar13;
    s_26.str = &DAT_0028a3e4;
    runtime_printstring(s_26);
    runtime_printint((long)iVar6);
    s_27.len = iVar13;
    s_27.str = &DAT_0028a3cf;
    runtime_printstring(s_27);
    runtime_printint((long)iVar7);
    s_28.len = iVar13;
    s_28.str = &DAT_0028ec1a;
    runtime_printstring(s_28);
    runtime_printbool(v);
    s_29.len = iVar13;
    s_29.str = &DAT_0028d1b4;
    runtime_printstring(s_29);
    runtime_printbool(v_00);
    s_30.len = iVar13;
    s_30.str = &DAT_0028d1cf;
    runtime_printstring(s_30);
    runtime_printint(iVar13);
    runtime_printnl();
    runtime_printunlock();
    prVar11 = local_20->alllink;
  }
  runtime_forEachG((func__runtime_g_ **)&PTR_runtime_schedtrace_func1_002b39f0);
  runtime_unlock(&runtime_sched.lock);
  return;
}

