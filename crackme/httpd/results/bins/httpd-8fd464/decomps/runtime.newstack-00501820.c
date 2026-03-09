
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_newstack(void)

{
  ulong v;
  uint uVar1;
  uintptr uVar2;
  ulong v_00;
  uint64 uVar3;
  runtime_g *extraout_RAX;
  runtime_g *extraout_RAX_00;
  runtime_g *prVar4;
  runtime__func *pc;
  long lVar5;
  uint64 uVar6;
  uint64 uVar7;
  uint64 flags;
  runtime_g *prVar8;
  runtime_g *in_RDI;
  runtime_g *gp;
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
  runtime_funcInfo rVar9;
  string s_29;
  string s_30;
  string s_31;
  string s_32;
  string s_33;
  string s_34;
  string s_35;
  string s_36;
  string s_37;
  string s_38;
  string s_39;
  string s_40;
  string s_41;
  string s_42;
  string s_43;
  runtime_funcInfo f;
  string s_44;
  string s_45;
  string s_46;
  string s_47;
  string s_48;
  string s_49;
  string s_50;
  runtime__func *local_1a0;
  runtime_moduledata *local_198;
  uint8 *local_190;
  ulong local_128;
  runtime__func *local_120;
  uint64 local_118;
  uint64 local_110;
  uint64 local_108;
  uint64 local_100;
  uint64 local_f8;
  long local_f0;
  runtime_moduledata *local_e8;
  runtime_g *local_e0;
  void *local_d8;
  void *local_d0;
  undefined8 *local_c8;
  runtime__func *local_c0;
  void *local_b8;
  uint64 local_b0;
  uint64 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  uint64 local_88;
  undefined8 uStack_80;
  uint64 local_78;
  uint64 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint64 local_50;
  undefined8 uStack_48;
  uintptr local_40;
  uintptr local_38;
  uintptr uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
                    /* Unresolved local var: runtime.g * thisg@[???]
                       Unresolved local var: uintptr sp@[???]
                       Unresolved local var: uintptr oldsize@[???]
                       Unresolved local var: uintptr newsize@[???]
                       Unresolved local var: runtime.gobuf morebuf@[???]
                       Unresolved local var: uint32 ~R0@[???] */
  while (&local_128 <= *(ulong **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_f0 = *(long *)(in_FS_OFFSET + -8);
  local_c8 = *(undefined8 **)(local_f0 + 0x30);
  prVar4 = (runtime_g *)local_c8[3];
  if (prVar4->stackguard0 == 0xfffffffffffffb2e) {
    s_50.len = (int)prVar4;
    s_50.str = &DAT_0029e033;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_50);
  }
  prVar8 = (runtime_g *)local_c8[0x19];
  local_e0 = prVar8;
  if (prVar4 != prVar8) {
                    /* Unresolved local var: runtime.gobuf morebuf@[???] */
    local_d0 = (void *)*local_c8;
    local_d8 = (void *)local_c8[10];
    runtime_printlock();
    s_44.len = (int)prVar4;
    s_44.str = (uint8 *)0x2a2950;
    runtime_printstring(s_44);
    runtime_printhex((uint64)prVar4);
    s_45.len = (int)prVar4;
    s_45.str = &DAT_00287fb1;
    runtime_printstring(s_45);
    runtime_printpointer(local_c8);
    s_46.len = (int)prVar4;
    s_46.str = &DAT_0028d1e1;
    runtime_printstring(s_46);
    runtime_printpointer(local_e0);
    s_47.len = (int)prVar4;
    s_47.str = &DAT_0028a3eb;
    runtime_printstring(s_47);
    runtime_printpointer(local_d0);
    s_48.len = (int)prVar4;
    s_48.str = &DAT_0029279a;
    runtime_printstring(s_48);
    runtime_printpointer(local_d8);
    runtime_printnl();
    runtime_printunlock();
    lVar5 = *(long *)(local_f0 + 0x30);
    local_40 = *(uintptr *)(lVar5 + 8);
    local_38 = *(uintptr *)(lVar5 + 0x10);
    uVar2 = *(uintptr *)(lVar5 + 0x18);
    local_28 = *(undefined8 *)(lVar5 + 0x20);
    uStack_20 = *(undefined8 *)(lVar5 + 0x28);
    local_18 = *(undefined8 *)(lVar5 + 0x30);
    uStack_10 = *(undefined8 *)(lVar5 + 0x38);
    uStack_30 = uVar2;
    runtime_traceback1(local_38,uVar2,local_40,in_RDI,(uint)prVar8);
    s_49.len = uVar2;
    s_49.str = &DAT_002a4e79;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_49);
  }
  if (prVar8->throwsplit != false) {
                    /* Unresolved local var: uintptr pcoff@[???]
                       Unresolved local var: string pcname@[???]
                       Unresolved local var: runtime.gobuf morebuf@[???] */
    local_78 = local_c8[1];
    local_70 = local_c8[2];
    uStack_68 = local_c8[3];
    local_60 = local_c8[4];
    uStack_58 = local_c8[5];
    local_50 = local_c8[6];
    uStack_48 = local_c8[7];
    prVar8->syscallsp = local_78;
    prVar8->syscallpc = local_70;
    rVar9 = runtime_findfunc((prVar8->sched).pc);
    f.datap = rVar9.datap;
    if (local_1a0 == (runtime__func *)0x0) {
      local_190 = &DAT_00000009;
      local_198 = (runtime_moduledata *)&DAT_0028d271;
      uVar6 = 0;
    }
    else {
      local_c0 = local_1a0;
      f._func = local_1a0;
      runtime_funcname(f);
      uVar6 = (local_e0->sched).pc - local_c0->entry;
    }
    prVar8 = local_e0;
    uVar7 = (local_e0->sched).sp;
    prVar4 = (runtime_g *)(local_e0->stack).lo;
    uVar3 = (local_e0->stack).hi;
    local_f8 = local_70;
    local_100 = local_78;
    local_108 = local_50;
    local_110 = (local_e0->sched).pc;
    local_118 = (local_e0->sched).lr;
    local_b8 = (local_e0->sched).ctxt;
    flags = uVar7;
    gp = prVar4;
    local_e8 = local_198;
    runtime_printlock();
    s_29.len = (int)prVar8;
    s_29.str = &DAT_0029ca6f;
    runtime_printstring(s_29);
    s_30.len = (int)prVar8;
    s_30.str = local_190;
    runtime_printstring(s_30);
    s_31.len = (int)prVar8;
    s_31.str = (uint8 *)&net__stmp_20;
    runtime_printstring(s_31);
    runtime_printhex(uVar6);
    s_32.len = (int)prVar8;
    s_32.str = &DAT_00287dc9;
    runtime_printstring(s_32);
    runtime_printhex(uVar7);
    s_33.len = (int)prVar8;
    s_33.str = &DAT_0028b8ba;
    runtime_printstring(s_33);
    runtime_printhex((uint64)prVar4);
    s_34.len = (int)prVar8;
    s_34.str = &DAT_00287787;
    runtime_printstring(s_34);
    runtime_printhex(uVar3);
    s_35.len = (int)prVar8;
    s_35.str = &DAT_00298a97;
    runtime_printstring(s_35);
    runtime_printhex(local_f8);
    s_36.len = (int)prVar8;
    s_36.str = &DAT_00287dc5;
    runtime_printstring(s_36);
    runtime_printhex(local_100);
    s_37.len = (int)prVar8;
    s_37.str = &DAT_00287db5;
    runtime_printstring(s_37);
    runtime_printhex(local_108);
    s_38.len = (int)prVar8;
    s_38.str = &DAT_00296472;
    runtime_printstring(s_38);
    runtime_printhex(local_110);
    s_39.len = (int)prVar8;
    s_39.str = &DAT_00287dc5;
    runtime_printstring(s_39);
    runtime_printhex(uVar7);
    s_40.len = (int)prVar8;
    s_40.str = &DAT_00287db5;
    runtime_printstring(s_40);
    runtime_printhex(local_118);
    s_41.len = (int)prVar8;
    s_41.str = &DAT_002893c6;
    runtime_printstring(s_41);
    runtime_printpointer(local_b8);
    s_42.len = (int)prVar8;
    s_42.str = &DAT_00287869;
    runtime_printstring(s_42);
    runtime_printunlock();
    *(undefined1 *)(*(long *)(local_f0 + 0x30) + 0x131) = 2;
    runtime_traceback1((uintptr)local_e0,(uintptr)prVar8,local_78,gp,flags);
    s_43.len = (int)prVar8;
    s_43.str = (uint8 *)0x2a2990;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_43);
  }
  local_b0 = local_c8[1];
  local_a8 = local_c8[2];
  uStack_a0 = local_c8[3];
  local_98 = local_c8[4];
  uStack_90 = local_c8[5];
  local_88 = local_c8[6];
  uStack_80 = local_c8[7];
  *(undefined8 *)(*(long *)(local_f0 + 0x30) + 0x10) = 0;
  *(undefined8 *)(*(long *)(local_f0 + 0x30) + 0x30) = 0;
  *(undefined8 *)(*(long *)(local_f0 + 0x30) + 8) = 0;
  *(undefined8 *)(*(long *)(local_f0 + 0x30) + 0x18) = 0;
  uVar2 = prVar8->stackguard0;
  if ((uVar2 == 0xfffffffffffffade) &&
     ((((lVar5 = *(long *)(local_f0 + 0x30), *(int *)(lVar5 + 0x110) != 0 ||
        (*(int *)(lVar5 + 0xf8) != 0)) || (*(long *)(lVar5 + 0x108) != 0)) ||
      (*(int *)(*(long *)(lVar5 + 0xd8) + 4) != 1)))) {
    prVar8->stackguard0 = (prVar8->stack).lo + 0x3a0;
    runtime_gogo();
  }
  uVar6 = local_88;
  v_00 = (local_e0->stack).lo;
  if (v_00 == 0) {
    s_28.len = (int)prVar4;
    s_28.str = &DAT_0029ed0d;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_28);
  }
  uVar7 = (local_e0->sched).sp;
  v = uVar7 - 8;
  if (v < v_00) {
    uVar3 = (local_e0->stack).hi;
    local_f8 = local_a8;
    local_100 = local_b0;
    local_108 = local_88;
    local_110 = (local_e0->sched).pc;
    local_118 = (local_e0->sched).lr;
    local_b8 = (local_e0->sched).ctxt;
    runtime_printlock();
    s.len = uVar6;
    s.str = &DAT_0029ca84;
    runtime_printstring(s);
    runtime_printhex(v);
    s_00.len = uVar6;
    s_00.str = &DAT_0028b8ba;
    runtime_printstring(s_00);
    runtime_printhex(v_00);
    s_01.len = uVar6;
    s_01.str = &DAT_00287787;
    runtime_printstring(s_01);
    runtime_printhex(uVar3);
    s_02.len = uVar6;
    s_02.str = &DAT_00298a97;
    runtime_printstring(s_02);
    runtime_printhex(local_f8);
    s_03.len = uVar6;
    s_03.str = &DAT_00287dc5;
    runtime_printstring(s_03);
    runtime_printhex(local_100);
    s_04.len = uVar6;
    s_04.str = &DAT_00287db5;
    runtime_printstring(s_04);
    runtime_printhex(local_108);
    s_05.len = uVar6;
    s_05.str = &DAT_00296472;
    runtime_printstring(s_05);
    runtime_printhex(local_110);
    s_06.len = uVar6;
    s_06.str = &DAT_00287dc5;
    runtime_printstring(s_06);
    runtime_printhex(uVar7);
    s_07.len = uVar6;
    s_07.str = &DAT_00287db5;
    runtime_printstring(s_07);
    runtime_printhex(local_118);
    s_08.len = uVar6;
    s_08.str = &DAT_002893c6;
    runtime_printstring(s_08);
    runtime_printpointer(local_b8);
    local_1a0 = (runtime__func *)0x2;
    s_09.len = uVar6;
    s_09.str = &DAT_00287869;
    runtime_printstring(s_09);
    runtime_printunlock();
    uVar7 = uVar6;
  }
  if (v < (local_e0->stack).lo) {
    uVar1 = local_e0->atomicstatus;
    local_128 = local_e0->goid;
    runtime_printlock();
    s_21.len = uVar7;
    s_21.str = &DAT_00293f16;
    runtime_printstring(s_21);
    runtime_printpointer(local_e0);
    s_22.len = uVar7;
    s_22.str = &DAT_0028a40e;
    runtime_printstring(s_22);
    runtime_printint(local_128);
    s_23.len = uVar7;
    s_23.str = &DAT_00294592;
    runtime_printstring(s_23);
    runtime_printhex((ulong)uVar1);
    s_24.len = uVar7;
    s_24.str = &DAT_00287831;
    runtime_printstring(s_24);
    runtime_printunlock();
    uVar6 = (local_e0->stack).lo;
    runtime_printlock();
    s_25.len = uVar7;
    s_25.str = (uint8 *)0x2a20bc;
    runtime_printstring(s_25);
    runtime_printhex(v);
    s_26.len = uVar7;
    s_26.str = &DAT_00287882;
    runtime_printstring(s_26);
    runtime_printhex(uVar6);
    runtime_printnl();
    runtime_printunlock();
    s_27.len = uVar7;
    s_27.str = (uint8 *)0x2a0fa6;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_27);
  }
  if (uVar2 == 0xfffffffffffffade) {
    prVar4 = *(runtime_g **)(local_f0 + 0x30);
    if ((runtime_g *)(prVar4->stack).lo == local_e0) {
      s_20.len = uVar7;
      s_20.str = &DAT_0029b7b1;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_20);
    }
    if ((prVar4->traceseq == 0) && ((int)prVar4->sigcode0 == 0)) {
      s_19.len = uVar7;
      s_19.str = &DAT_002a3e10;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_19);
    }
    if (local_e0->preemptShrink != false) {
      local_e0->preemptShrink = false;
      runtime_shrinkstack(prVar4);
      prVar4 = extraout_RAX;
    }
    if (local_e0->preemptStop != false) {
      runtime_preemptPark(prVar4);
      prVar4 = extraout_RAX_00;
    }
    runtime_gopreempt_m(prVar4);
  }
  pc = (runtime__func *)((local_e0->stack).hi - (local_e0->stack).lo);
  runtime_findfunc((uintptr)pc);
  rVar9._func = (runtime__func *)((long)pc * 2);
                    /* Unresolved local var: uintptr needed@[???]
                       Unresolved local var: uintptr used@[???] */
  if (local_1a0 != (runtime__func *)0x0) {
    rVar9.datap = local_198;
    local_120 = rVar9._func;
    runtime_funcMaxSPDelta(rVar9);
    lVar5 = (long)(int)local_198;
    for (rVar9._func = local_120;
        local_198 = (runtime_moduledata *)
                    ((long)rVar9._func - ((local_e0->stack).hi - (local_e0->sched).sp)),
        local_198 < (runtime_moduledata *)(lVar5 + 0x3a0);
        rVar9._func = (runtime__func *)((long)rVar9._func << 1)) {
    }
  }
  if (local_e0->stackguard0 == 0xfffffffffffffeed) {
    rVar9._func = pc;
  }
  if ((rVar9._func <= runtime_maxstacksize) && (rVar9._func <= runtime_maxstackceiling)) {
    runtime_casgstatus((runtime_g *)0x800000002,(uint32)local_198,(uint32)runtime_maxstacksize);
    runtime_copystack(local_e0,(uintptr)local_198);
    runtime_casgstatus(local_e0,(uint32)local_198,8);
    runtime_gogo();
    return;
  }
  if (runtime_maxstacksize < runtime_maxstackceiling) {
    runtime_printlock();
    s_10.len = (int)local_198;
    s_10.str = (uint8 *)0x2a3325;
    runtime_printstring(s_10);
    runtime_printuint(runtime_maxstacksize);
    s_11.len = (int)local_198;
    s_11.str = &DAT_0029284e;
    runtime_printstring(s_11);
    runtime_printunlock();
  }
  else {
    runtime_printlock();
    s_17.len = (int)local_198;
    s_17.str = (uint8 *)0x2a3325;
    runtime_printstring(s_17);
    runtime_printuint(runtime_maxstackceiling);
    s_18.len = (int)local_198;
    s_18.str = &DAT_0029284e;
    runtime_printstring(s_18);
    runtime_printunlock();
  }
  uVar6 = (local_e0->stack).lo;
  uVar7 = (local_e0->stack).hi;
  runtime_printlock();
  s_12.len = (int)local_198;
  s_12.str = &DAT_00293f22;
  runtime_printstring(s_12);
  runtime_printhex(v);
  s_13.len = (int)local_198;
  s_13.str = &DAT_0028b8ba;
  runtime_printstring(s_13);
  runtime_printhex(uVar6);
  s_14.len = (int)local_198;
  s_14.str = &DAT_00287787;
  runtime_printstring(s_14);
  runtime_printhex(uVar7);
  s_15.len = (int)local_198;
  s_15.str = &DAT_0028783b;
  runtime_printstring(s_15);
  runtime_printunlock();
  s_16.len = (int)local_198;
  s_16.str = &DAT_00297fe5;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_16);
}

