
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*Frames).Next(runtime.Frames * ci, runtime.Frame frame,
   bool more) */

multireturn_runtime_Frame_bool_ runtime___Frames__Next(runtime_Frames *ci)

{
  void *pvVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  runtime_moduledata *prVar6;
  runtime_Frame rVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  runtime_moduledata *extraout_RAX;
  long *extraout_RAX_00;
  runtime_moduledata *extraout_RAX_01;
  undefined8 extraout_RAX_02;
  runtime_moduledata *src;
  long *targetpc;
  runtime_moduledata *prVar11;
  runtime_moduledata *prVar12;
  uintptr uVar13;
  uintptr extraout_RDX;
  uintptr extraout_RDX_00;
  long extraout_RDX_01;
  uintptr extraout_RDX_02;
  uintptr extraout_RDX_03;
  uintptr extraout_RDX_04;
  uintptr extraout_RDX_05;
  runtime_moduledata *prVar14;
  runtime_moduledata *prVar15;
  runtime_moduledata *cap;
  char strict;
  undefined1 *puVar16;
  void *srcPtr;
  runtime_moduledata **pprVar17;
  runtime_Func **pprVar18;
  undefined1 uVar19;
  long lVar20;
  uint32 *puVar21;
  long *plVar22;
  runtime_moduledata *prVar23;
  runtime_moduledata *prVar24;
  long in_FS_OFFSET;
  runtime_funcInfo rVar25;
  runtime_funcInfo f;
  string s;
  runtime_funcInfo f_00;
  runtime_funcInfo f_01;
  runtime_slice old;
  runtime_slice old_00;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  runtime_Frame frame_return_result_alias;
  runtime_Frames *ci_spill;
  runtime_moduledata *local_108;
  runtime_moduledata *local_100;
  runtime_moduledata *local_f8;
  runtime_moduledata *local_f0;
  undefined1 local_e8;
  undefined7 uStack_e7;
  int local_e0;
  undefined4 uStack_dc;
  void *local_d8;
  uint32 *local_90;
  runtime_moduledata *local_88;
  runtime_moduledata *local_80;
  runtime_moduledata *local_78;
  long local_70;
  runtime_moduledata *local_68;
  long *local_60;
  runtime_pcHeader *local_58;
  runtime_moduledata *local_50;
  runtime_moduledata *local_48;
  runtime_moduledata *local_40;
  uint8 *local_20;
  runtime_moduledata *local_18;
  runtime_moduledata *local_10;
  
                    /* Unresolved local var: void * ~R0@[???] */
  while (&local_90 <= *(uint32 ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  puVar16 = (undefined1 *)&stack0xffffffffffffffe0;
  uVar10 = FUN_0051a190();
  auVar27._8_8_ = puVar16;
  auVar27._0_8_ = uVar10;
  targetpc = (long *)frame_return_result_alias.PC;
  prVar11 = local_108;
  do {
    local_108 = prVar11;
    lVar20 = targetpc[4];
    lVar3 = targetpc[3];
    plVar22 = targetpc + 3;
    local_60 = plVar22;
    if (1 < lVar20) {
LAB_00504b48:
      if (lVar20 == 2) {
        FUN_0051a4fa(&frame_return_result_alias.Func,lVar3);
        uVar19 = SUB81(plVar22,0);
        prVar11 = *(runtime_moduledata **)(extraout_RDX_01 + 0x18);
        if (*(void **)(extraout_RDX_01 + 0x20) < (void *)0x2) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        strict = (char)extraout_RDX_01 + '0';
        if (runtime_writeBarrier._0_4_ == 0) {
          FUN_0051a4fa();
          uVar13 = extraout_RDX_02;
        }
        else {
          runtime_typedmemmove
                    ((runtime__type *)&DAT_00271020,prVar11,*(void **)(extraout_RDX_01 + 0x20));
          uVar19 = SUB81(local_60,0);
          uVar13 = frame_return_result_alias.PC;
        }
        *(undefined8 *)(uVar13 + 0x20) = 1;
        *(undefined8 *)(uVar13 + 0x28) = 2;
        if (runtime_writeBarrier._0_4_ == 0) {
          *(uintptr *)(uVar13 + 0x18) = uVar13 + 0x30;
        }
        else {
          strict = uVar19;
          runtime_gcWriteBarrier();
          uVar13 = extraout_RDX_03;
        }
      }
      else {
        pprVar18 = &frame_return_result_alias.Func;
        FUN_0051a4fa(pprVar18,lVar3);
        strict = (char)pprVar18;
        prVar11 = *(runtime_moduledata **)(extraout_RDX_04 + 0x18);
        if (*(long *)(extraout_RDX_04 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceB();
        }
        *(long *)(extraout_RDX_04 + 0x20) = *(long *)(extraout_RDX_04 + 0x20) + -1;
        lVar20 = *(long *)(extraout_RDX_04 + 0x28) + -1;
        *(long *)(extraout_RDX_04 + 0x28) = lVar20;
        if (runtime_writeBarrier._0_4_ == 0) {
          *(ulong *)(extraout_RDX_04 + 0x18) = (long)&prVar11->pcHeader + (-lVar20 >> 0x3f & 0x50U);
          uVar13 = extraout_RDX_04;
        }
        else {
          strict = (char)plVar22;
          runtime_gcWriteBarrier();
          uVar13 = extraout_RDX_05;
        }
      }
LAB_00504c7f:
      uVar19 = (undefined1)*(undefined8 *)(uVar13 + 0x20);
      if (frame_return_result_alias.funcInfo.datap == (runtime_moduledata *)0x0) {
        uVar19 = 0;
      }
      else {
        rVar25.datap = prVar11;
        rVar25._func = (runtime__func *)frame_return_result_alias.funcInfo.datap;
                    /* Unresolved local var: string file@[???] */
        runtime_funcline1(rVar25,(uintptr)ci_spill,(bool)strict);
        rVar7 = frame_return_result_alias;
        frame_return_result_alias.Line._1_7_ = uStack_e7;
        frame_return_result_alias.Line._0_1_ = local_e8;
        frame_return_result_alias._0_40_ = rVar7._0_40_;
        frame_return_result_alias.File.len = (int)local_f0;
        frame_return_result_alias.funcInfo = rVar7.funcInfo;
        frame_return_result_alias.Entry = (long)local_e0;
      }
      uVar9 = uVar19;
      return (multireturn_runtime_Frame_bool_)CONCAT801(frame_return_result_alias,uVar9);
    }
                    /* Unresolved local var: uintptr pc@[???]
                       Unresolved local var: runtime.Func * f@[???]
                       Unresolved local var: uintptr entry@[???]
                       Unresolved local var: string name@[???]
                       Unresolved local var: uintptr ~R0@[???] */
    lVar4 = targetpc[2];
    if (targetpc[1] == 0) {
      if (lVar20 == 0) {
        uVar8 = auVar27[0];
        return (multireturn_runtime_Frame_bool_)CONCAT801(frame_return_result_alias,uVar8);
      }
      if (lVar20 == 1) {
        pprVar18 = &frame_return_result_alias.Func;
        FUN_0051a4fa(pprVar18,lVar3);
        strict = (char)pprVar18;
        *(undefined8 *)(extraout_RDX + 0x20) = 0;
        *(undefined8 *)(extraout_RDX + 0x28) = 2;
        prVar11 = (runtime_moduledata *)0x1;
        if (runtime_writeBarrier._0_4_ == 0) {
          *(uintptr *)(extraout_RDX + 0x18) = extraout_RDX + 0x30;
          uVar13 = extraout_RDX;
        }
        else {
          strict = (char)plVar22;
          runtime_gcWriteBarrier();
          uVar13 = extraout_RDX_00;
        }
        goto LAB_00504c7f;
      }
      goto LAB_00504b48;
    }
    prVar11 = *(runtime_moduledata **)*targetpc;
    targetpc[1] = targetpc[1] + -1;
    targetpc[2] = lVar4 + -1;
    if (runtime_writeBarrier._0_4_ == 0) {
      *targetpc = (-(lVar4 + -1) >> 0x3f & 8U) + (long)*targetpc;
      targetpc = auVar27._8_8_;
    }
    else {
      runtime_gcWriteBarrierCX();
      prVar11 = extraout_RAX;
    }
    rVar25 = runtime_findfunc((uintptr)prVar11);
    f.datap = rVar25.datap;
    if (local_108 == (runtime_moduledata *)0x0) {
      if (runtime_cgoSymbolizer == (void *)0x0) {
        auVar27._8_8_ = frame_return_result_alias.PC;
        auVar27._0_8_ = local_100;
        targetpc = (long *)frame_return_result_alias.PC;
        prVar11 = local_108;
      }
      else {
        runtime_expandCgoFrames((uintptr)prVar11);
        pvVar5 = *(void **)(frame_return_result_alias.PC + 0x20);
        pvVar1 = (void *)((long)&local_100->pcHeader + (long)pvVar5);
        srcPtr = *(void **)(frame_return_result_alias.PC + 0x28);
        lVar20 = *(long *)(frame_return_result_alias.PC + 0x18);
        if (srcPtr < pvVar1) {
          local_68 = local_108;
          old.len = frame_return_result_alias.PC;
          old.array = pvVar1;
          old.cap = (int)srcPtr;
          runtime_growslice((runtime__type *)&DAT_00271020,old,0);
          lVar20 = CONCAT71(uStack_e7,local_e8);
          local_108 = local_68;
          srcPtr = local_d8;
        }
        if (pvVar1 < pvVar5) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceB();
        }
        prVar11 = (runtime_moduledata *)
                  (((long)pvVar5 - (long)srcPtr >> 0x3f & (ulong)((long)pvVar5 * 0x50)) + lVar20);
        local_f0 = local_100;
        local_70 = lVar20;
        runtime_typedslicecopy
                  ((runtime__type *)local_100,(void *)((long)pvVar5 * 0x50),0x271020,srcPtr,
                   (int)local_108);
        auVar27._8_8_ = frame_return_result_alias.PC;
        auVar27._0_8_ = srcPtr;
        *(void **)(frame_return_result_alias.PC + 0x20) = pvVar1;
        *(void **)(frame_return_result_alias.PC + 0x28) = srcPtr;
        local_f8 = local_108;
        if (runtime_writeBarrier._0_4_ == 0) {
          *(long *)(frame_return_result_alias.PC + 0x18) = local_70;
          targetpc = (long *)frame_return_result_alias.PC;
        }
        else {
          runtime_gcWriteBarrierDX();
          auVar27._8_8_ = extraout_RAX_00;
          auVar27._0_8_ = extraout_RAX_00;
          targetpc = extraout_RAX_00;
        }
      }
    }
    else {
      prVar12 = (runtime_moduledata *)
                (*(runtime_pcvalueCacheEnt (*) [8])&local_108->pcHeader)[0].targetpc;
      if (prVar12 == (runtime_moduledata *)0x0) {
        prVar12 = (runtime_moduledata *)(local_108->funcnametab).array;
      }
      local_78 = local_108;
      local_80 = local_100;
      local_108 = local_100;
      f._func = (runtime__func *)local_100;
      runtime_funcname(f);
                    /* Unresolved local var: void * inldata@[???]
                       Unresolved local var: void * ~R0@[???]
                       Unresolved local var: runtime.inlinedCall[1048576] * inltree@[???]
                       Unresolved local var: int32 ix@[???] */
      if (prVar12 < prVar11) {
        prVar11 = (runtime_moduledata *)((long)&prVar11[-1].next + 7);
      }
      local_88 = local_100;
                    /* Unresolved local var: void * p@[???] */
      prVar15 = local_78;
      if (*(byte *)((long)&(local_78->cutab).len + 3) < 4) {
        lVar20 = 0;
      }
      else {
        puVar21 = (uint32 *)
                  ((long)&(local_78->cutab).len + ((ulong)*(uint *)&(local_78->cutab).array + 1) * 4
                  );
        if (((uint)puVar21 >> 2 & 1) != 0) {
          if (((uint)local_78 >> 2 & 1) != 0) {
            local_90 = puVar21;
            runtime_printlock();
            local_108 = (runtime_moduledata *)&DAT_00000019;
            s.len = (int)local_f8;
            s.str = &DAT_0029ee6b;
            runtime_printstring(s);
            runtime_printpointer(local_78);
            runtime_printnl();
            runtime_printunlock();
            puVar21 = local_90;
          }
          puVar21 = puVar21 + 1;
        }
        lVar20 = *(long *)(puVar21 + 6);
      }
      src = local_88;
      prVar14 = local_f8;
      prVar23 = local_78;
      prVar6 = local_f8;
      if (lVar20 != 0) {
        local_108 = local_80;
        local_100 = (runtime_moduledata *)CONCAT44(local_100._4_4_,2);
        local_f0 = (runtime_moduledata *)0x0;
        local_e8 = 0;
        f_00.datap = local_f8;
        f_00._func = (runtime__func *)prVar11;
        runtime_pcdatavalue1
                  (f_00,(uint32)local_80,(uintptr)targetpc,(runtime_pcvalueCache *)prVar15,
                   SUB81(lVar20,0));
        src = local_88;
        prVar23 = local_78;
        prVar6 = prVar11;
        if (-1 < local_e0) {
          if (0xfffff < (ulong)(long)local_e0) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          uVar2 = *(uint *)(lVar20 + 0xc + (long)local_e0 * 0x14);
          f_01._func = (runtime__func *)(ulong)uVar2;
          local_108 = local_80;
          local_100 = (runtime_moduledata *)CONCAT44(local_100._4_4_,uVar2);
          f_01.datap = local_f8;
          runtime_funcnameFromNameoff(f_01,(int32)local_78);
          src = prVar11;
          prVar14 = (runtime_moduledata *)0x0;
          prVar23 = (runtime_moduledata *)0x0;
        }
      }
      local_f8 = prVar6;
      pprVar17 = &local_88;
      cap = local_78;
      auVar26 = FUN_0051a190(pprVar17,local_78,prVar12);
      local_20 = auVar26._8_8_;
      local_58 = auVar26._0_8_;
      local_10 = local_80;
      prVar12 = *(runtime_moduledata **)(frame_return_result_alias.PC + 0x20);
      prVar11 = (runtime_moduledata *)
                ((long)&(*(runtime_pcvalueCacheEnt (*) [8])&prVar12->pcHeader)[0].targetpc + 1);
      prVar15 = *(runtime_moduledata **)(frame_return_result_alias.PC + 0x18);
      prVar6 = *(runtime_moduledata **)(frame_return_result_alias.PC + 0x28);
      uVar13 = frame_return_result_alias.PC;
      prVar24 = prVar15;
      local_50 = prVar23;
      local_48 = src;
      local_40 = prVar14;
      local_18 = cap;
      if (prVar6 < prVar11) {
        old_00.len = (int)src;
        old_00.array = prVar12;
        old_00.cap = (int)pprVar17;
        runtime_growslice((runtime__type *)&DAT_00271020,old_00,(int)cap);
        auVar26._8_8_ = local_20;
        auVar26._0_8_ = local_58;
        prVar24 = (runtime_moduledata *)CONCAT71(uStack_e7,local_e8);
        src = (runtime_moduledata *)CONCAT44(uStack_dc,local_e0);
        uVar13 = frame_return_result_alias.PC;
        *(void **)(frame_return_result_alias.PC + 0x28) = local_d8;
        local_108 = prVar15;
        local_100 = prVar12;
        local_f8 = prVar6;
        local_f0 = prVar11;
        if (runtime_writeBarrier._0_4_ == 0) {
          *(runtime_moduledata **)(frame_return_result_alias.PC + 0x18) = prVar24;
          prVar12 = src;
        }
        else {
          runtime_gcWriteBarrier();
          auVar26._8_8_ = local_20;
          auVar26._0_8_ = local_58;
          prVar12 = src;
          prVar24 = extraout_RAX_01;
        }
      }
      local_20 = auVar26._8_8_;
      local_58 = auVar26._0_8_;
      *(undefined1 **)(uVar13 + 0x20) =
           (undefined1 *)
           ((long)&(*(runtime_pcvalueCacheEnt (*) [8])&prVar12->pcHeader)[0].targetpc + 1);
      prVar11 = (runtime_moduledata *)
                (*(runtime_pcvalueCacheEnt (*) [8])&prVar24->pcHeader + (long)prVar12 * 5);
      if (runtime_writeBarrier._0_4_ == 0) {
        auVar27 = FUN_0051a4fa(prVar11,&stack0xffffffffffffffa8);
        targetpc = auVar27._8_8_;
        prVar11 = local_108;
      }
      else {
        local_100 = (runtime_moduledata *)&stack0xffffffffffffffa8;
        runtime_typedmemmove((runtime__type *)local_100,(void *)((long)prVar12 * 0x50),src);
        auVar27._8_8_ = frame_return_result_alias.PC;
        auVar27._0_8_ = extraout_RAX_02;
        targetpc = (long *)frame_return_result_alias.PC;
      }
    }
  } while( true );
}

