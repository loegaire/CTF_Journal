
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.gentraceback(uintptr pc0, uintptr sp0, uintptr lr0,
   runtime.g * gp, int skip, uintptr * pcbuf, int max, func(*runtime.stkframe,_unsafe.Pointer)_bool
   * * callback, void * v, uint flags, int ~r10) */

int runtime_gentraceback
              (uintptr pc0,uintptr sp0,uintptr lr0,runtime_g *gp,int skip,uintptr *pcbuf,int max,
              func__runtime_stkframe__unsafe_Pointer__bool **callback,void *v,uint flags)

{
  byte bVar1;
  uintptr uVar2;
  runtime_ptabEntry rVar3;
  ulong uVar4;
  runtime_ptabEntry rVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  runtime_moduledata *prVar9;
  runtime_moduledata *prVar10;
  runtime_ptabEntry rVar11;
  runtime_ptabEntry gp_00;
  char cVar12;
  undefined1 uVar13;
  runtime_ptabEntry extraout_RDX;
  runtime_pcvalueCache *prVar14;
  uint uVar15;
  runtime_ptabEntry rVar16;
  runtime_pcvalueCache *prVar17;
  char cVar18;
  runtime_ptabEntry **pprVar19;
  ulong uVar20;
  runtime_g *targetpc;
  long lVar21;
  runtime_ptabEntry rVar22;
  runtime_stkframe *prVar23;
  runtime_ptabEntry rVar24;
  uint uVar25;
  long in_FS_OFFSET;
  bool bVar26;
  runtime_funcInfo rVar27;
  string s;
  runtime_stack stk;
  string s_00;
  runtime_funcInfo f;
  string s_01;
  string s_02;
  string s_03;
  runtime_stack stk_00;
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
  runtime_funcInfo f_00;
  runtime_funcInfo f_01;
  runtime_funcInfo f_02;
  runtime_funcInfo f_03;
  string s_14;
  string s_15;
  string s_16;
  string s_17;
  string s_18;
  runtime_funcInfo f_04;
  runtime_funcInfo f_05;
  runtime_funcInfo f_06;
  string s_19;
  string s_20;
  runtime_funcInfo f_07;
  string s_21;
  string s_22;
  string s_23;
  string s_24;
  string s_25;
  string s_26;
  string s_27;
  string s_28;
  runtime_funcInfo f_08;
  string s_29;
  runtime_funcInfo f_09;
  string s_30;
  string s_31;
  string s_32;
  string s_33;
  runtime_funcInfo f_10;
  multireturn_string_int32_ mVar29;
  uintptr pc0_spill;
  uintptr sp0_spill;
  uintptr lr0_spill;
  runtime_g *gp_spill;
  int skip_spill;
  uintptr *pcbuf_spill;
  int max_spill;
  func__runtime_stkframe__unsafe_Pointer__bool **callback_spill;
  void *v_spill;
  runtime_ptabEntry local_328;
  runtime_ptabEntry local_320;
  runtime_ptabEntry local_318;
  runtime_stkframe *local_310;
  int local_308;
  runtime_typeOff rStack_304;
  undefined8 local_300;
  runtime_ptabEntry local_2b0;
  runtime_stkframe *local_2a8;
  uint8 *local_2a0;
  long local_298;
  runtime_ptabEntry local_290;
  runtime_ptabEntry local_288;
  runtime_ptabEntry local_280;
  runtime_ptabEntry local_278;
  long local_270;
  runtime_ptabEntry local_268;
  runtime_ptabEntry local_260;
  int64 local_258;
  runtime_ptabEntry local_250;
  runtime_ptabEntry local_248;
  runtime_ptabEntry local_240;
  runtime_ptabEntry local_238;
  runtime_ptabEntry local_230;
  runtime__func local_228;
  runtime_stkframe local_1f8 [2];
  long local_f8;
  runtime_moduledata *local_f0;
  long local_e8;
  long local_e0;
  runtime_ptabEntry local_d8;
  runtime_ptabEntry local_d0;
  runtime_ptabEntry local_c8;
  runtime_ptabEntry local_c0;
  runtime_ptabEntry local_b8;
  runtime_ptabEntry local_b0;
  runtime_ptabEntry local_a8;
  runtime_ptabEntry local_a0;
  runtime_ptabEntry local_98;
  runtime_stkframe *local_90;
  runtime_ptabEntry *local_88;
  runtime_moduledata *local_80;
  runtime_ptabEntry local_78;
  runtime_ptabEntry local_70;
  runtime_ptabEntry local_68;
  runtime_ptabEntry local_60;
  runtime_ptabEntry local_58;
  runtime_ptabEntry local_50;
  runtime_ptabEntry local_48;
  runtime_ptabEntry local_40;
  runtime_ptabEntry local_38;
  runtime_ptabEntry local_30;
  runtime_ptabEntry local_28;
  runtime_ptabEntry local_20;
  long local_18;
  undefined8 local_10;
  string sVar28;
  
                    /* Unresolved local var: int32 level@[???]
                       Unresolved local var: runtime.funcval * ctxt@[???]
                       Unresolved local var: int nprint@[???]
                       Unresolved local var: bool waspanic@[???]
                       Unresolved local var: bool printing@[???]
                       Unresolved local var: runtime.funcID lastFuncID@[???]
                       Unresolved local var: int n@[???]
                       Unresolved local var: runtime.funcInfo f@[???]
                       Unresolved local var: []uintptr cgoCtxt@[???]
                       Unresolved local var: runtime.stkframe frame@[???]
                       Unresolved local var: runtime.pcvalueCache cache@[???]
                       Unresolved local var: void * ~R0@[???] */
  while (&local_2b0 <= *(runtime_ptabEntry **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((0 < (long)gp_spill) && (max_spill != 0)) {
    sVar28.len = sp0;
    sVar28.str = &DAT_002aa56f;
                    /* WARNING: Subroutine does not return */
    runtime_throw(sVar28);
  }
                    /* Unresolved local var: runtime.g * ourg@[???] */
  uVar2 = *(uintptr *)(in_FS_OFFSET + -8);
  if ((lr0_spill == uVar2) && (*(uintptr *)(*(long *)(uVar2 + 0x30) + 200) == uVar2)) {
    s_33.len = lr0_spill;
    s_33.str = &DAT_002aabc1;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_33);
  }
                    /* Unresolved local var: uint32 t@[???] */
  bVar1 = *(byte *)(*(long *)(uVar2 + 0x30) + 0x131);
  uVar15 = runtime_traceback_cache >> 2;
  if (bVar1 != 0) {
    uVar15 = (uint)bVar1;
  }
  if ((flags == 0xffffffffffffffff) && (pc0_spill == 0xffffffffffffffff)) {
    pc0_spill = *(uintptr *)(lr0_spill + 0x70);
    if (pc0_spill == 0) {
      flags = *(uint *)(lr0_spill + 0x40);
      pc0_spill = *(uintptr *)(lr0_spill + 0x38);
      prVar23 = *(runtime_stkframe **)(lr0_spill + 0x50);
    }
    else {
      flags = *(uint *)(lr0_spill + 0x78);
      prVar23 = (runtime_stkframe *)0x0;
    }
  }
  else {
    prVar23 = (runtime_stkframe *)0x0;
  }
  local_60.name = 0;
  local_60.typ = 0;
  pprVar19 = &local_88;
  iVar8 = max_spill;
  FUN_0051a190(pprVar19,uVar15,pc0_spill);
  local_88 = *(runtime_ptabEntry **)(lr0_spill + 0x150);
  local_298 = *(long *)(lr0_spill + 0x158);
  if (skip_spill == 0) {
    uVar20 = CONCAT71((int7)((ulong)pprVar19 >> 8),iVar8 == 0);
  }
  else {
    uVar20 = 0;
  }
  cVar18 = (char)uVar20;
                    /* Unresolved local var: runtime.funcFlag flag@[???]
                       Unresolved local var: runtime.funcInfo flr@[???]
                       Unresolved local var: bool ok@[???] */
  local_50 = (runtime_ptabEntry)flags;
  local_38 = extraout_RDX;
  if ((runtime_ptabEntry)flags == (runtime_ptabEntry)0x0) {
    local_50 = *(runtime_ptabEntry *)extraout_RDX;
    local_38 = (runtime_ptabEntry)((long)extraout_RDX + 8);
  }
  uVar4 = uVar20;
  local_238 = extraout_RDX;
  local_230 = (runtime_ptabEntry)flags;
  local_90 = prVar23;
  rVar27 = runtime_findfunc((uintptr)local_50);
  s.len = rVar27.datap;
  if (local_328 == (runtime_ptabEntry)0x0) {
    if ((max_spill != 0) || (cVar18 != '\0')) {
      local_230 = local_50;
      runtime_printlock();
      s.str = &DAT_0029c162;
      runtime_printstring(s);
      runtime_printhex((uint64)local_230);
      runtime_printnl();
      runtime_printunlock();
      stk.hi = (uintptr)s.len;
      stk.lo = (uintptr)&local_60;
      runtime_tracebackHexdump(stk,*(runtime_stkframe **)(lr0_spill + 8),uVar4);
    }
    if (max_spill == 0) {
      return 0;
    }
    s_00.len = (int)s.len;
    s_00.str = &DAT_002906fa;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_00);
  }
  local_60 = local_328;
  local_58 = local_320;
  FUN_0051a154();
  rVar5.name = 0;
  rVar5.typ = 0;
  prVar9 = (runtime_moduledata *)0x0;
  prVar14 = (runtime_pcvalueCache *)0x0;
  gp_00.name = 0;
  gp_00.typ = 0;
  rVar24 = local_230;
  prVar23 = local_90;
  lVar21 = local_298;
  while (((long)rVar5 < (long)pcbuf_spill &&
         (local_90 = prVar23, *(int *)((long)local_60 + 0x14) != 0))) {
    s_01.len = (runtime_moduledata *)(ulong)*(byte *)((long)local_60 + 0x29);
    bVar1 = *(byte *)((long)local_60 + 0x28);
    prVar17 = (runtime_pcvalueCache *)(ulong)bVar1;
    if (bVar1 == 4) {
      s_01.len = (runtime_moduledata *)(ulong)(*(byte *)((long)local_60 + 0x29) & 0xfffffffd);
    }
    if ((((local_50 == rVar24) && (local_38 == local_238)) &&
        (*(runtime_ptabEntry *)(lr0_spill + 0x78) == rVar24)) &&
       (*(runtime_ptabEntry *)(lr0_spill + 0x70) == local_238)) {
      s_01.len = (runtime_moduledata *)(ulong)((uint)s_01.len & 0xfffffffd);
    }
                    /* Unresolved local var: uintptr ctxt@[???] */
                    /* Unresolved local var: uintptr tracepc@[???] */
    cVar12 = (char)prVar14;
    cVar6 = (char)prVar9;
    uVar25 = (uint)v_spill;
    prVar10 = prVar9;
    rVar16 = local_58;
    rVar11 = local_60;
    local_240 = (runtime_ptabEntry)gp_spill;
    if (local_30 == (runtime_ptabEntry)0x0) {
      if ((((uVar25 >> 2 & 1) != 0) && (**(uintptr **)(lr0_spill + 0x30) == lr0_spill)) &&
         (uVar2 = (*(uintptr **)(lr0_spill + 0x30))[0x19], uVar2 != 0)) {
        if (bVar1 == 0xd) {
          local_50 = *(runtime_ptabEntry *)(uVar2 + 0x40);
          runtime_findfunc((uintptr)local_50);
          local_60 = local_328;
          local_58 = local_320;
          s_01.len = (runtime_moduledata *)(ulong)*(byte *)((long)local_328 + 0x29);
          local_38 = *(runtime_ptabEntry *)(*(long *)(*(long *)(lr0_spill + 0x30) + 200) + 0x38);
          lVar21 = *(long *)(*(long *)(lr0_spill + 0x30) + 200);
          local_88 = *(runtime_ptabEntry **)(lVar21 + 0x150);
          lVar21 = *(long *)(lVar21 + 0x158);
          prVar10 = (runtime_moduledata *)((ulong)prVar9 & 0xff);
                    /* Unresolved local var: uintptr lrPtr@[???]
                       Unresolved local var: bool doPrint@[???] */
                    /* Unresolved local var: uintptr pc@[???]
                       Unresolved local var: uintptr tracepc@[???] */
        }
        else if (bVar1 == 0x14) {
          local_38 = *(runtime_ptabEntry *)(uVar2 + 0x38);
          prVar17 = *(runtime_pcvalueCache **)(*(long *)(lr0_spill + 0x30) + 200);
          local_88 = (runtime_ptabEntry *)prVar17[1].entries[0][5].targetpc;
          lVar21._0_4_ = prVar17[1].entries[0][5].off;
          lVar21._4_4_ = prVar17[1].entries[0][5].val;
          s_01.len = (runtime_moduledata *)(ulong)((uint)s_01.len & 0xfffffffd);
        }
      }
      local_328 = local_58;
      local_320 = local_50;
      local_318 = (runtime_ptabEntry)local_1f8;
      rVar27.datap = s_01.len;
      rVar27._func = (runtime__func *)local_318;
      local_298 = lVar21;
      local_a0 = local_58;
      local_98 = local_60;
      runtime_funcspdelta(rVar27,(uintptr)prVar10,prVar17);
      local_30 = (runtime_ptabEntry)((long)(int)local_310 + (long)local_38 + 8);
      prVar10 = (runtime_moduledata *)((ulong)prVar9 & 0xff);
                    /* Unresolved local var: void * inldata@[???]
                       Unresolved local var: void * ~R0@[???] */
      rVar24 = local_230;
      rVar16 = local_a0;
      lVar21 = local_298;
      rVar11 = local_98;
    }
    local_298 = lVar21;
    local_a0 = rVar16;
    local_98 = rVar11;
    if (((ulong)s_01.len & 1) == 0) {
      if (((ulong)s_01.len & 2) == 0) {
LAB_0050bbd0:
        if (local_40 == (runtime_ptabEntry)0x0) {
          local_2b0 = (runtime_ptabEntry)((long)local_30 + -8);
          local_40 = *(runtime_ptabEntry *)local_2b0;
        }
        else {
          local_2b0.name = 0;
          local_2b0.typ = 0;
        }
        runtime_findfunc((uintptr)local_40);
        rVar16 = local_320;
        rVar11 = local_328;
        if (local_328 == (runtime_ptabEntry)0x0) {
          s_01.len = (runtime_moduledata *)(uVar20 & 0xff);
          if (((cVar18 != '\0') && (*(char *)(*(long *)(lr0_spill + 0x30) + 0x120) != '\0')) &&
             (*(char *)((long)local_98 + 0x28) == '\x13')) {
            s_01.len = (runtime_moduledata *)0x0;
          }
          local_68 = local_328;
          local_70 = local_320;
          if ((max_spill != 0) || ((char)s_01.len != '\0')) {
            f.datap = s_01.len;
            f._func = (runtime__func *)local_a0;
            rVar24 = local_98;
            sVar28 = runtime_funcname(f);
            s_01.len = (runtime_moduledata *)sVar28.len;
            local_78 = local_320;
            local_248 = local_318;
            local_250 = local_40;
            runtime_printlock();
            s_01.str = &DAT_002a3e54;
            runtime_printstring(s_01);
            s_02.len = (int)s_01.len;
            s_02.str = (uint8 *)local_248;
            runtime_printstring(s_02);
            s_03.len = (int)s_01.len;
            s_03.str = &DAT_002944dc;
            runtime_printstring(s_03);
            runtime_printhex((uint64)local_250);
            runtime_printnl();
            runtime_printunlock();
            local_328 = *(runtime_ptabEntry *)(lr0_spill + 8);
            local_320 = (runtime_ptabEntry)&local_60;
            local_318 = local_2b0;
            stk_00.hi = (uintptr)s_01.len;
            stk_00.lo = lr0_spill;
            runtime_tracebackHexdump(stk_00,(runtime_stkframe *)local_2b0,(uintptr)rVar24);
          }
          rVar16 = local_70;
          rVar11 = local_68;
          if (max_spill != 0) {
            s_29.len = (int)s_01.len;
            s_29.str = &DAT_0029a427;
                    /* WARNING: Subroutine does not return */
            runtime_throw(s_29);
          }
        }
        prVar10 = (runtime_moduledata *)((ulong)prVar9 & 0xff);
        rVar24 = local_230;
        local_c8 = rVar16;
      }
      else {
        if (max_spill != 0) {
          if ((long)rVar5 < 1) goto LAB_0050bbd0;
          if (max_spill != 0) {
            f_09.datap = (runtime_moduledata *)max_spill;
            f_09._func = (runtime__func *)rVar5;
            sVar28 = runtime_funcname(f_09);
            s_30.len = sVar28.len;
            local_78 = local_320;
            local_240 = local_318;
            runtime_printlock();
            s_30.str = &DAT_002a617b;
            runtime_printstring(s_30);
            s_31.len = s_30.len;
            s_31.str = (uint8 *)local_240;
            runtime_printstring(s_31);
            runtime_printnl();
            runtime_printunlock();
            s_32.len = s_30.len;
            s_32.str = &DAT_0028e9ed;
                    /* WARNING: Subroutine does not return */
            runtime_throw(s_32);
          }
        }
        local_40.name = 0;
        local_40.typ = 0;
        local_c8.name = 0;
        local_c8.typ = 0;
        rVar11.name = 0;
        rVar11.typ = 0;
      }
      local_a8 = local_c8;
      local_288 = rVar5;
    }
    else {
      local_40.name = 0;
      local_40.typ = 0;
      rVar11.name = 0;
      rVar11.typ = 0;
      local_a8.name = 0;
      local_a8.typ = 0;
    }
    rVar22 = local_98;
    rVar16 = local_a0;
    local_28 = (runtime_ptabEntry)((long)local_30 + -8);
    if ((ulong)local_38 < (ulong)local_28) {
      local_28 = (runtime_ptabEntry)((long)local_30 + -0x10);
    }
    local_c0 = rVar11;
    if ((max_spill != 0) || (cVar18 != '\0')) {
      local_20 = local_30;
      if (max_spill == 0) {
        bVar26 = false;
      }
      else {
        bVar26 = *(int *)((long)local_98 + 0xc) == -0x80000000;
      }
      local_18 = (long)*(int *)((long)local_98 + 0xc);
      local_10 = 0;
      rVar24 = local_230;
      if (bVar26) {
        local_318.name._0_1_ = max_spill != 0;
        local_310 = local_90;
        f_10.datap = prVar10;
        f_10._func = (runtime__func *)max_spill;
        runtime_getArgInfo(local_90,f_10,rVar11.name._0_1_,(runtime_funcval *)(uVar20 & 0xff));
        local_18 = CONCAT44(rStack_304,local_308);
        local_10 = local_300;
        prVar10 = (runtime_moduledata *)((ulong)prVar9 & 0xff);
                    /* Unresolved local var: void * inldata@[???]
                       Unresolved local var: void * ~R0@[???]
                       Unresolved local var: runtime.inlinedCall[1048576] * inltree@[???]
                       Unresolved local var: int32 ix@[???] */
        rVar24 = local_230;
        local_328 = rVar22;
        local_320 = rVar16;
      }
    }
    cVar7 = (char)prVar10;
    local_48 = local_50;
    if (cVar7 != '\0') {
      if (*(uint *)((long)local_60 + 0x10) == 0) {
        local_48.name = 0;
        local_48.typ = 0;
      }
      else {
        local_48 = (runtime_ptabEntry)
                   (*(long *)local_60 + (ulong)*(uint *)((long)local_60 + 0x10) + 1);
      }
    }
    if (max_spill != 0) {
      local_328 = (runtime_ptabEntry)callback_spill;
      (**(code **)max_spill)(local_c0,uVar20 & 0xff,max_spill);
      rVar24 = local_230;
      cVar7 = cVar6;
      if ((char)local_320.name == '\0') {
        return (int)rVar5;
      }
    }
    if (skip_spill != 0) {
      if ((((rVar5 == (runtime_ptabEntry)0x0) && ((uVar25 >> 1 & 1) != 0)) || (cVar7 != '\0')) ||
         (*(runtime_ptabEntry *)local_98 == local_50)) {
        rVar16 = (runtime_ptabEntry)((long)local_50 + 1);
        rVar24 = local_50;
      }
      else {
        rVar24 = (runtime_ptabEntry)((long)local_50 + -1);
        rVar16 = local_50;
      }
                    /* Unresolved local var: void * p@[???] */
      if (*(byte *)((long)local_98 + 0x2b) < 4) {
        local_f8 = 0;
        local_290 = rVar5;
      }
      else {
        lVar21 = (long)local_98 + (ulong)*(uint *)&((__uint32 *)((long)local_98 + 0x20))->array * 4
                 + 0x2c;
        if (((uint)lVar21 >> 2 & 1) != 0) {
          if (((uint)local_98.name >> 2 & 1) != 0) {
            local_e0 = lVar21;
            runtime_printlock();
            local_328.name = 0x19;
            local_328.typ = 0;
            s_04.len._0_4_ = rVar16.name;
            s_04.len._4_4_ = rVar16.typ;
            s_04.str = &DAT_0029ee6b;
            runtime_printstring(s_04);
            runtime_printpointer((void *)local_98);
            runtime_printnl();
            runtime_printunlock();
            lVar21 = local_e0;
            cVar7 = cVar6;
          }
          lVar21 = lVar21 + 4;
        }
        local_f8 = *(long *)(lVar21 + 0x18);
      }
      prVar17 = (runtime_pcvalueCache *)(uVar20 & 0xff);
      targetpc = v_spill;
      if (local_f8 != 0) {
        while( true ) {
          local_328 = local_a0;
          cVar12 = (char)prVar14;
          local_320.name = 2;
          local_310 = local_1f8;
          f_08.datap = (runtime_moduledata *)rVar16;
          f_08._func = (runtime__func *)rVar5;
          local_250 = rVar16;
          local_248 = rVar5;
          runtime_pcdatavalue(f_08,(uint32)local_310,(uintptr)targetpc,prVar17);
          rVar5 = local_248;
          rVar16 = local_250;
          local_318 = rVar24;
          cVar7 = cVar6;
          if (local_308 < 0) break;
          uVar4 = (ulong)local_308;
          if (0xfffff < uVar4) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          if (((*(char *)(local_f8 + uVar4 * 0x14 + 2) != '\x16') || (cVar12 == '\t')) ||
             ((cVar12 == '\x13' || (cVar12 == '\x0f')))) {
            if ((long)local_240 < 1) {
              if ((long)local_248 < (long)pcbuf_spill) {
                if (0xfffff < (ulong)local_248) {
                    /* WARNING: Subroutine does not return */
                  runtime_panicIndex();
                }
                *(runtime_ptabEntry *)(skip_spill + (long)local_248 * 8) = local_250;
                local_248 = (runtime_ptabEntry)((long)local_248 + 1);
              }
            }
            else {
              local_240 = (runtime_ptabEntry)
                          ((long)&((runtime_g *)((long)local_240 + -0x188))->gcAssistBytes + 7);
            }
          }
          prVar14 = (runtime_pcvalueCache *)(ulong)*(byte *)(local_f8 + uVar4 * 0x14 + 2);
          rVar24 = (runtime_ptabEntry)
                   ((long)*(int *)(local_f8 + uVar4 * 0x14 + 0x10) + *(long *)local_60);
          rVar16 = (runtime_ptabEntry)((long)rVar24 + 1);
          rVar5 = local_248;
          prVar17 = prVar14;
          targetpc = (runtime_g *)local_240;
        }
      }
      if (((*(char *)((long)local_98 + 0x28) != '\x16') || (cVar12 == '\t')) ||
         ((cVar12 == '\x13' || (cVar12 == '\x0f')))) {
        if ((long)local_240 < 1) {
          if ((long)rVar5 < (long)pcbuf_spill) {
            if (0xfffff < (ulong)rVar5) {
                    /* WARNING: Subroutine does not return */
              runtime_panicIndex();
            }
            *(runtime_ptabEntry *)(skip_spill + (long)rVar5 * 8) = rVar16;
            rVar5 = (runtime_ptabEntry)((long)rVar5 + 1);
          }
        }
        else {
          local_240 = (runtime_ptabEntry)
                      ((long)&((runtime_g *)((long)local_240 + -0x188))->gcAssistBytes + 7);
        }
      }
      prVar14 = (runtime_pcvalueCache *)(ulong)*(byte *)((long)local_98 + 0x28);
      rVar5 = (runtime_ptabEntry)((long)rVar5 + -1);
      rVar24 = local_230;
    }
    if (cVar18 != '\0') {
      rVar16 = local_50;
      if ((((0 < (long)rVar5) || ((uVar25 >> 1 & 1) == 0)) &&
          ((ulong)*(runtime_ptabEntry *)local_98 < (ulong)local_50)) && (cVar7 == '\0')) {
        rVar16 = (runtime_ptabEntry)((long)local_50 + -1);
      }
                    /* Unresolved local var: void * p@[???] */
      uVar13 = SUB81(prVar14,0);
      local_248 = rVar5;
      if (*(byte *)((long)local_98 + 0x2b) < 4) {
        prVar9 = (runtime_moduledata *)0x0;
      }
      else {
        lVar21 = (long)local_98 + (ulong)*(uint *)&((__uint32 *)((long)local_98 + 0x20))->array * 4
                 + 0x2c;
        if (((uint)lVar21 >> 2 & 1) != 0) {
          if (((uint)local_98.name >> 2 & 1) != 0) {
            local_e8 = lVar21;
                    /* Unresolved local var: void * argp@[???]
                       Unresolved local var: string name@[???]
                       Unresolved local var: string file@[???] */
            runtime_printlock();
            local_328.name = 0x19;
            local_328.typ = 0;
            s_05.len = max_spill;
            s_05.str = &DAT_0029ee6b;
            runtime_printstring(s_05);
            runtime_printpointer((void *)local_98);
            runtime_printnl();
            runtime_printunlock();
            lVar21 = local_e8;
          }
          lVar21 = lVar21 + 4;
        }
        prVar9 = *(runtime_moduledata **)(lVar21 + 0x18);
        rVar24 = local_230;
      }
      local_250 = rVar16;
      if (prVar9 != (runtime_moduledata *)0x0) {
                    /* Unresolved local var: runtime.inlinedCall[1048576] * inltree@[???]
                       Unresolved local var: runtime.funcInfo inlFuncInfo@[???]
                       Unresolved local var: runtime._func inlFunc@[???] */
        local_228.entry = 0;
        local_228.nameoff = 0;
        local_228.args = 0;
        local_228.deferreturn = 0;
        local_228.pcsp = 0;
        local_228.pcfile = 0;
        local_228.pcln = 0;
        local_228.npcdata = 0;
        local_228.cuOffset = 0;
        local_228.funcID = 0;
        local_228.flag = 0;
        local_228._[0] = 0;
        local_228.nfuncdata = 0;
        local_228._44_4_ = 0;
        rVar5 = local_248;
        s_01.len = (runtime_moduledata *)max_spill;
        rVar11 = local_c0;
        rVar22 = gp_00;
        local_f0 = prVar9;
        while( true ) {
          local_328 = local_a0;
          uVar13 = SUB81(prVar14,0);
          local_320.name = 2;
          rVar3 = local_320;
          local_310 = (runtime_stkframe *)0x0;
          f_00.datap = s_01.len;
          f_00._func = (runtime__func *)rVar5;
          local_268 = rVar22;
          local_250 = rVar16;
          runtime_pcdatavalue(f_00,(uint32)prVar9,(uintptr)rVar11,(runtime_pcvalueCache *)rVar16);
          gp_00 = local_268;
          rVar24 = local_230;
          local_318 = rVar16;
          if (local_308 < 0) break;
          uVar4 = (ulong)local_308;
          if (0xfffff < uVar4) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          local_270 = uVar4 * 5;
          local_228.nameoff = *(int32 *)((long)&(local_f0->funcnametab).array + uVar4 * 0x14 + 4);
          local_228.funcID = *(runtime_funcID *)((long)&local_f0->pcHeader + uVar4 * 0x14 + 2);
          local_80 = (runtime_moduledata *)((long)&local_f0->pcHeader + uVar4 * 0x14);
          if (((ulong)v_spill & 1) == 0) {
            local_320 = (runtime_ptabEntry)lr0_spill;
            f_01.datap = (runtime_moduledata *)lr0_spill;
            f_01._func = &local_228;
            runtime_showframe(f_01,(runtime_g *)local_a0,rVar11.name._0_1_,
                              (runtime_funcID)local_268.name,(runtime_funcID)rVar22.name);
          }
          else {
                    /* Unresolved local var: string name@[???]
                       Unresolved local var: string file@[???] */
            f_02.datap = local_80;
            f_02._func = &local_228;
            runtime_funcname(f_02);
            local_d0 = local_320;
            local_320 = local_250;
            f_03.datap = (runtime_moduledata *)local_a0;
            f_03._func = (runtime__func *)rVar3;
            mVar29 = runtime_funcline(f_03,(uintptr)rVar16);
            s_14.len = mVar29.file.len;
            local_258 = (int64)local_308;
            local_2a0 = (uint8 *)0x0;
            local_b0 = rVar16;
            runtime_printlock();
            s_14.str = (uint8 *)rVar16;
            runtime_printstring(s_14);
            s_15.len = s_14.len;
            s_15.str = &DAT_00289438;
            runtime_printstring(s_15);
            runtime_printunlock();
            runtime_printlock();
            s_16.len = s_14.len;
            s_16.str = &DAT_002b2e50;
            runtime_printstring(s_16);
            s_17.len = s_14.len;
            s_17.str = local_2a0;
            runtime_printstring(s_17);
            s_18.len = s_14.len;
            s_18.str = &DAT_00287748;
            runtime_printstring(s_18);
            runtime_printint(local_258);
            runtime_printnl();
            runtime_printunlock();
            local_268 = (runtime_ptabEntry)((long)local_268 + 1);
          }
                    /* Unresolved local var: int32 ix@[???] */
          prVar14 = (runtime_pcvalueCache *)(ulong)*(byte *)((long)&local_80->pcHeader + 2);
          prVar9 = (runtime_moduledata *)((long)&(local_f0->funcnametab).len + local_270 * 4);
          rVar16 = (runtime_ptabEntry)((long)*(int *)&prVar9->pcHeader + *(long *)local_60);
          rVar5 = local_60;
          s_01.len = local_f0;
          rVar22 = local_268;
        }
      }
      rVar16 = local_a0;
      rVar5 = local_318;
      local_268 = gp_00;
      if (((ulong)v_spill & 1) == 0) {
        f_04._func = (runtime__func *)(ulong)*(byte *)((long)local_98 + 0x28);
        local_320 = (runtime_ptabEntry)lr0_spill;
        local_318.name._1_1_ = *(byte *)((long)local_98 + 0x28);
        local_318.name._0_1_ = gp_00 == (runtime_ptabEntry)0x0;
        local_318._3_5_ = rVar5._3_5_;
        local_318.name._2_1_ = uVar13;
        f_04.datap = (runtime_moduledata *)lr0_spill;
        runtime_showframe(f_04,(runtime_g *)gp_00,local_c0.name._0_1_,(runtime_funcID)v_spill,
                          (runtime_funcID)rVar24.name);
        rVar24 = local_230;
        cVar6 = (char)local_310;
        local_328 = rVar16;
      }
      else {
        cVar6 = '\x01';
      }
      gp_00 = local_268;
      if (cVar6 != '\0') {
        f_05.datap = (runtime_moduledata *)max_spill;
        f_05._func = (runtime__func *)local_248;
        runtime_funcname(f_05);
        local_d8 = local_320;
        f_06.datap = (runtime_moduledata *)local_a0;
        f_06._func = (runtime__func *)local_320;
        runtime_funcline(f_06,(uintptr)local_318);
        local_258 = (int64)local_308;
        local_b8 = local_318;
        local_2a8 = local_310;
        rVar24 = local_318;
        if (((local_318 == (runtime_ptabEntry)0xf) && (*(long *)local_d8 == 0x2e656d69746e7572)) &&
           ((*(int *)&((__uint8 *)((long)local_d8 + 8))->array == 0x61706f67 &&
            ((*(short *)((long)local_d8 + 0xc) == 0x696e && (*(char *)((long)local_d8 + 0xe) == 'c')
             ))))) {
          rVar24.name = 5;
          rVar24.typ = 0;
          local_d8 = (runtime_ptabEntry)&DAT_00289038;
        }
        runtime_printlock();
        s_19.len._0_4_ = rVar24.name;
        s_19.len._4_4_ = rVar24.typ;
        s_19.str = (uint8 *)rVar24;
        runtime_printstring(s_19);
        s_20.len._0_4_ = rVar24.name;
        s_20.len._4_4_ = rVar24.typ;
        s_20.str = (uint8 *)((long)&go_string__ + 1);
        runtime_printstring(s_20);
        runtime_printunlock();
        local_320 = local_20;
        f_07.datap = (runtime_moduledata *)rVar24;
        f_07._func = (runtime__func *)local_20;
        runtime_printArgs(f_07,(void *)local_98);
        runtime_printlock();
        s_21.len._0_4_ = rVar24.name;
        s_21.len._4_4_ = rVar24.typ;
        s_21.str = &DAT_00287783;
        runtime_printstring(s_21);
        runtime_printunlock();
        runtime_printlock();
        s_22.len._0_4_ = rVar24.name;
        s_22.len._4_4_ = rVar24.typ;
        s_22.str = &DAT_002b2e50;
        runtime_printstring(s_22);
        s_23.len._0_4_ = rVar24.name;
        s_23.len._4_4_ = rVar24.typ;
        s_23.str = (uint8 *)local_2a8;
        runtime_printstring(s_23);
        local_328.name = 1;
        local_328.typ = 0;
        s_24.len._0_4_ = rVar24.name;
        s_24.len._4_4_ = rVar24.typ;
        s_24.str = &DAT_00287748;
        runtime_printstring(s_24);
        runtime_printint(local_258);
        runtime_printunlock();
        if ((ulong)*(runtime_ptabEntry *)local_98 < (ulong)local_50) {
          local_250 = local_50;
          local_278 = *(runtime_ptabEntry *)local_98;
          runtime_printlock();
          local_328.name = 2;
          local_328.typ = 0;
          s_25.len._0_4_ = rVar24.name;
          s_25.len._4_4_ = rVar24.typ;
          s_25.str = (uint8 *)((long)&DAT_0028776c + 1);
          runtime_printstring(s_25);
          runtime_printhex((long)local_250 - (long)local_278);
          runtime_printunlock();
        }
        lVar21 = *(long *)(lr0_spill + 0x30);
        if ((((lVar21 != 0) && (0 < *(int *)(lVar21 + 0xfc))) &&
            (*(uintptr *)(lVar21 + 200) == lr0_spill)) || (1 < (int)uVar15)) {
          local_250 = local_30;
          local_278 = local_38;
          local_280 = local_50;
          runtime_printlock();
          s_26.len._0_4_ = rVar24.name;
          s_26.len._4_4_ = rVar24.typ;
          s_26.str = &DAT_00287da9;
          runtime_printstring(s_26);
          runtime_printhex((uint64)local_250);
          s_27.len._0_4_ = rVar24.name;
          s_27.len._4_4_ = rVar24.typ;
          s_27.str = &DAT_00287dc9;
          runtime_printstring(s_27);
          runtime_printhex((uint64)local_278);
          local_328.name = 4;
          local_328.typ = 0;
          s_28.len._0_4_ = rVar24.name;
          s_28.len._4_4_ = rVar24.typ;
          s_28.str = &DAT_00287dc1;
          runtime_printstring(s_28);
          runtime_printhex((uint64)local_280);
          runtime_printunlock();
        }
        runtime_printlock();
        runtime_printnl();
        runtime_printunlock();
        gp_00 = (runtime_ptabEntry)((long)local_268 + 1);
        rVar24 = local_230;
      }
      prVar14 = (runtime_pcvalueCache *)(ulong)*(byte *)((long)local_98 + 0x28);
      rVar5 = local_248;
    }
    rVar5 = (runtime_ptabEntry)((long)rVar5 + 1);
    lVar21 = local_298;
    if ((*(char *)((long)local_98 + 0x28) == '\x04') && (0 < local_298)) {
      rVar16 = local_88[local_298 + -1];
      rVar22 = rVar5;
      if ((local_240 == (runtime_ptabEntry)0x0) && (max_spill == 0)) {
        local_328.name._0_1_ = cVar18;
        local_310 = (runtime_stkframe *)pcbuf_spill;
        local_260 = gp_00;
        runtime_tracebackCgoContext
                  ((uintptr *)(uVar20 & 0xff),false,(uintptr)pcbuf_spill,(int)local_c0,(int)rVar16);
        rVar22.typ = rStack_304;
        rVar22.name = local_308;
        gp_00 = local_260;
        rVar24 = local_230;
        local_320 = rVar16;
        local_318 = rVar5;
      }
      rVar5 = rVar22;
      lVar21 = local_298 + -1;
    }
    rVar16 = local_30;
    if (local_c0 == (runtime_ptabEntry)0x0) break;
    local_58 = local_a8;
    local_50 = local_40;
    local_40.name = 0;
    local_40.typ = 0;
    local_38 = local_30;
    local_30.name = 0;
    local_30.typ = 0;
    local_10 = 0;
    prVar23 = (runtime_stkframe *)0x0;
    prVar9 = (runtime_moduledata *)
             (CONCAT71(rVar16._1_7_,*(char *)((long)local_98 + 0x28) == '\x13') & 0xffffffff);
    gp_spill = (runtime_g *)local_240;
    local_60 = local_c0;
  }
  if (cVar18 != '\0') {
    rVar5 = gp_00;
  }
  if (((max_spill != 0) && ((long)rVar5 < (long)pcbuf_spill)) &&
     (local_238 = *(runtime_ptabEntry *)(lr0_spill + 0x80), local_238 != local_38)) {
    local_230 = local_38;
    local_258 = *(int64 *)(lr0_spill + 0x98);
    runtime_printlock();
    s_06.len = (int)pcbuf_spill;
    s_06.str = &DAT_002902c2;
    runtime_printstring(s_06);
    runtime_printint(local_258);
    s_07.len = (int)pcbuf_spill;
    s_07.str = &DAT_00290a0e;
    runtime_printstring(s_07);
    runtime_printhex((uint64)local_230);
    s_08.len = (int)pcbuf_spill;
    s_08.str = &DAT_00288917;
    runtime_printstring(s_08);
    runtime_printhex((uint64)local_238);
    runtime_printnl();
    runtime_printunlock();
    local_230 = *(runtime_ptabEntry *)lr0_spill;
    local_238 = *(runtime_ptabEntry *)(lr0_spill + 8);
    runtime_printlock();
    s_09.len = (int)pcbuf_spill;
    s_09.str = &DAT_0028bcaa;
    runtime_printstring(s_09);
    runtime_printhex((uint64)local_230);
    s_10.len = (int)pcbuf_spill;
    s_10.str = (uint8 *)((long)&go_string__ + 3);
    runtime_printstring(s_10);
    runtime_printhex((uint64)local_238);
    s_11.len = (int)pcbuf_spill;
    s_11.str = &DAT_00287fb9;
    runtime_printstring(s_11);
    runtime_printint((int64)rVar5);
    s_12.len = (int)pcbuf_spill;
    s_12.str = &DAT_002888f9;
    runtime_printstring(s_12);
    runtime_printint((int64)pcbuf_spill);
    runtime_printnl();
    runtime_printunlock();
    s_13.len = (int)pcbuf_spill;
    s_13.str = &DAT_002a46c4;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_13);
  }
  return (int)rVar5;
}

