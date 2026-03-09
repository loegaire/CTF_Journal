
/* WARNING: Unknown calling convention */

void reflect_callMethod(reflect_methodValue *ctxt,void *frame,bool *retValid,
                       internal_abi_RegArgs *regs)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  uint8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  reflect_flag rVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  reflect_funcType *t;
  sync_Pool *p;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  void *src;
  uintptr n;
  undefined1 *puVar17;
  ulong uVar18;
  runtime__type *from;
  undefined8 *puVar19;
  undefined8 unaff_RBP;
  long lVar20;
  undefined8 *puVar21;
  ulong uVar22;
  int in_R8;
  ulong uVar23;
  ulong uVar24;
  long in_FS_OFFSET;
  string op;
  interface___ iVar25;
  interface___ e;
  interface___ e_00;
  interface___ e_01;
  interface___ e_02;
  interface___ e_03;
  interface___ e_04;
  interface___ e_05;
  multireturn_reflect_rtype___reflect_funcType___void___ mVar26;
  reflect_Value v;
  reflect_methodValue *ctxt_spill;
  void *valueFrame;
  bool *retValid_spill;
  internal_abi_RegArgs *valueRegs;
  
  do {
                    /* Unresolved local var: reflect.rtype * rcvrType@[???]
                       Unresolved local var: reflect.funcType * valueFuncType@[???]
                       Unresolved local var: void * methodFn@[???]
                       Unresolved local var: reflect.rtype * methodFrameType@[???]
                       Unresolved local var: sync.Pool * methodFramePool@[???]
                       Unresolved local var: void * methodFrame@[???]
                       Unresolved local var: uintptr methodFrameSize@[???]
                       Unresolved local var: reflect.abiDesc valueABI@[???]
                       Unresolved local var: reflect.abiDesc methodABI@[???]
                       Unresolved local var: internal/abi.RegArgs methodRegs@[???] */
    lVar20 = *(long *)(in_FS_OFFSET + -8);
    puVar17 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(lVar20 + 0x10) < (undefined1 *)((long)register0x00000020 + -0x470)) {
      puVar17 = (undefined1 *)((long)register0x00000020 + -0x4f0);
      *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
      plVar15 = *(long **)(lVar20 + 0x20);
      if ((plVar15 != (long *)0x0) &&
         ((undefined1 *)*plVar15 == (undefined1 *)((long)register0x00000020 + 8))) {
        *plVar15 = (long)((long)register0x00000020 + -0x4f0);
      }
      puVar4 = *(uint8 **)((long)register0x00000020 + 8);
      uVar5 = *(undefined8 *)(puVar4 + 0x30);
      *(undefined8 *)((long)register0x00000020 + -0x238) = uVar5;
      uVar16 = *(undefined8 *)(puVar4 + 0x28);
      *(undefined8 *)((long)register0x00000020 + -0x240) = uVar16;
      iVar6 = *(int *)(puVar4 + 0x38);
      *(int *)((long)register0x00000020 + -0x408) = iVar6;
      rVar7 = *(reflect_flag *)(puVar4 + 0x20);
      *(undefined **)((long)register0x00000020 + -0x4f0) = &DAT_002880d1;
      *(undefined8 *)((long)register0x00000020 + -0x4e8) = 4;
      *(undefined8 *)((long)register0x00000020 + -0x4e0) = uVar16;
      *(undefined8 *)((long)register0x00000020 + -0x4d8) = uVar5;
      *(int *)((long)register0x00000020 + -0x4d0) = iVar6;
      *(reflect_flag *)((long)register0x00000020 + -0x4c8) = rVar7;
      *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53a51c;
      op.len = iVar6;
      op.str = puVar4;
      v.ptr = &DAT_002880d1;
      v.typ = (reflect_rtype *)uVar5;
      v.flag = rVar7;
      mVar26 = reflect_methodReceiver(op,v,in_R8);
      *(undefined8 *)((long)register0x00000020 + -0x278) =
           *(undefined8 *)((long)register0x00000020 + -0x4b8);
      *(undefined8 *)((long)register0x00000020 + -0x268) =
           *(undefined8 *)((long)register0x00000020 + -0x4c0);
      *(undefined8 *)((long)register0x00000020 + -0x248) =
           *(undefined8 *)((long)register0x00000020 + -0x4b0);
      *(undefined8 *)((long)register0x00000020 + -0xc0) = 0;
      *(undefined1 **)((long)register0x00000020 + -0x500) =
           (undefined1 *)((long)register0x00000020 + -8);
      *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53a56f;
      t = (reflect_funcType *)FUN_0051a16f((undefined1 *)((long)register0x00000020 + -200));
      uVar5 = *(undefined8 *)((long)register0x00000020 + -0x500);
      *(reflect_funcType **)((long)register0x00000020 + -0x4f0) = t;
      *(undefined8 *)((long)register0x00000020 + -0x4e8) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53a585;
      reflect_funcLayout(t,&(mVar26.t)->rtype);
      *(undefined8 *)((long)register0x00000020 + -0xc0) =
           *(undefined8 *)((long)register0x00000020 + -0x4d0);
      *(undefined8 *)((long)register0x00000020 + -0x500) = uVar5;
      *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53a5af;
      FUN_0051a4a6((undefined1 *)((long)register0x00000020 + -0xb8),
                   (undefined1 *)((long)register0x00000020 + -0x4c8));
      *(undefined8 *)((long)register0x00000020 + -0x230) =
           *(undefined8 *)((long)register0x00000020 + -0xc0);
      *(undefined8 *)((long)register0x00000020 + -0x500) =
           *(undefined8 *)((long)register0x00000020 + -0x500);
      *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53a5ef;
      FUN_0051a4a6((undefined1 *)((long)register0x00000020 + -0x228),
                   (undefined1 *)((long)register0x00000020 + -0xb8));
      *(undefined8 *)((long)register0x00000020 + -0xc0) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x500) =
           *(undefined8 *)((long)register0x00000020 + -0x500);
      *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53a62f;
      FUN_0051a16f((undefined1 *)((long)register0x00000020 + -200));
      uVar5 = *(undefined8 *)((long)register0x00000020 + -0x500);
      *(reflect_funcType **)((long)register0x00000020 + -0x4f0) =
           *(reflect_funcType **)((long)register0x00000020 + -0x278);
      *(undefined8 *)((long)register0x00000020 + -0x4e8) =
           *(undefined8 *)((long)register0x00000020 + -0x268);
      *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53a651;
      reflect_funcLayout(*(reflect_funcType **)((long)register0x00000020 + -0x278),
                         &(mVar26.t)->rtype);
      *(undefined8 *)((long)register0x00000020 + -0x260) =
           *(undefined8 *)((long)register0x00000020 + -0x4e0);
      uVar16 = *(undefined8 *)((long)register0x00000020 + -0x4d8);
      *(undefined8 *)((long)register0x00000020 + -600) = uVar16;
      *(undefined8 *)((long)register0x00000020 + -0xc0) =
           *(undefined8 *)((long)register0x00000020 + -0x4d0);
      *(undefined8 *)((long)register0x00000020 + -0x500) = uVar5;
      *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53a694;
      FUN_0051a4a6((undefined1 *)((long)register0x00000020 + -0xb8),
                   (undefined1 *)((long)register0x00000020 + -0x4c8));
      *(undefined8 *)((long)register0x00000020 + -0x178) =
           *(undefined8 *)((long)register0x00000020 + -0xc0);
      *(undefined8 *)((long)register0x00000020 + -0x500) =
           *(undefined8 *)((long)register0x00000020 + -0x500);
      *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53a6cf;
      p = (sync_Pool *)
          FUN_0051a4a6((undefined1 *)((long)register0x00000020 + -0x170),
                       (undefined1 *)((long)register0x00000020 + -0xb8));
      unaff_RBP = *(undefined8 *)((long)register0x00000020 + -0x500);
      *(undefined8 *)((long)register0x00000020 + -0x4f0) = uVar16;
      *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53a6dc;
      iVar25 = sync___Pool__Get(p);
      puVar19 = *(undefined8 **)((long)register0x00000020 + -0x4e0);
      if (*(undefined **)((long)register0x00000020 + -0x4e8) == &DAT_002257a0) break;
      *(undefined **)((long)register0x00000020 + -0x4f0) =
           *(undefined **)((long)register0x00000020 + -0x4e8);
      *(undefined **)((long)register0x00000020 + -0x4e8) = &DAT_002257a0;
      *(undefined8 **)((long)register0x00000020 + -0x4e0) = &DAT_0022dfe0;
      *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53af89;
      runtime_panicdottypeE
                ((runtime__type *)&DAT_0022dfe0,iVar25.data,(runtime__type *)&DAT_002257a0);
    }
    *(undefined8 *)(puVar17 + -8) = 0x53af8f;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar17;
  } while( true );
                    /* Unresolved local var: reflect.abiStep st@[???] */
  puVar8 = *(undefined8 **)((long)register0x00000020 + -0x178);
  if (*(long *)((long)register0x00000020 + -0x170) == 0) {
LAB_0053af65:
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53af6f;
    runtime_panicIndex();
  }
  uVar5 = puVar8[1];
  *(undefined8 *)((long)register0x00000020 + -0x370) = *puVar8;
  *(undefined8 *)((long)register0x00000020 + -0x368) = uVar5;
  uVar5 = puVar8[3];
  *(undefined8 *)((long)register0x00000020 + -0x360) = puVar8[2];
  *(undefined8 *)((long)register0x00000020 + -0x358) = uVar5;
  uVar5 = puVar8[5];
  *(undefined8 *)((long)register0x00000020 + -0x350) = puVar8[4];
  *(undefined8 *)((long)register0x00000020 + -0x348) = uVar5;
  if (*(long *)((long)register0x00000020 + -0x370) == 1) {
    if ((*(byte *)(*(long *)((long)register0x00000020 + -0x240) + 0x17) & 0x1f) == 0x14) {
      if (runtime_writeBarrier._0_4_ == 0) {
        *puVar19 = *(undefined8 *)(*(long *)((long)register0x00000020 + -0x238) + 8);
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53a785;
        runtime_gcWriteBarrierSI();
      }
    }
    else if ((((uint)*(undefined8 *)((long)register0x00000020 + -0x408) >> 7 & 1) == 0) ||
            ((*(byte *)(*(long *)((long)register0x00000020 + -0x240) + 0x17) & 0x20) == 0)) {
      if (runtime_writeBarrier._0_4_ == 0) {
        *puVar19 = *(undefined8 *)((long)register0x00000020 + -0x238);
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53a7ef;
        runtime_gcWriteBarrierSI();
      }
    }
    else if (runtime_writeBarrier._0_4_ == 0) {
      *puVar19 = **(undefined8 **)((long)register0x00000020 + -0x238);
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53a7c5;
      runtime_gcWriteBarrierSI();
    }
  }
  else if ((*(byte *)(*(long *)((long)register0x00000020 + -0x240) + 0x17) & 0x1f) == 0x14) {
    *(undefined8 *)((long)register0x00000020 + -0x418) =
         *(undefined8 *)(*(long *)((long)register0x00000020 + -0x238) + 8);
  }
  else if ((((uint)*(undefined8 *)((long)register0x00000020 + -0x408) >> 7 & 1) == 0) ||
          ((*(byte *)(*(long *)((long)register0x00000020 + -0x240) + 0x17) & 0x20) == 0)) {
    *(undefined8 *)((long)register0x00000020 + -0x418) =
         *(undefined8 *)((long)register0x00000020 + -0x238);
  }
  else {
    *(undefined8 *)((long)register0x00000020 + -0x418) =
         **(undefined8 **)((long)register0x00000020 + -0x238);
  }
                    /* Unresolved local var: uintptr uadd@[???] */
  lVar20 = *(long *)((long)register0x00000020 + -0x278);
  if ((*(byte *)(lVar20 + 0x14) & 1) == 0) {
    lVar14 = 0x38;
  }
  else {
    lVar14 = 0x48;
  }
  uVar18 = (ulong)*(ushort *)(lVar20 + 0x30);
  if (*(ushort *)(lVar20 + 0x30) == 0) {
    uVar18 = 0;
    lVar20 = 0;
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: reflect.rtype * t@[???]
                       Unresolved local var: reflect.rtype * * ~R0.ptr@[???]
                       Unresolved local var: int ~R0.len@[???] */
  }
  else {
    lVar20 = lVar20 + lVar14;
    if (0x100000 < uVar18) {
      *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53af65;
      runtime_panicSlice3Alen();
      goto LAB_0053af65;
    }
  }
  *(long *)((long)register0x00000020 + -0x280) = lVar20;
  *(ulong *)((long)register0x00000020 + -0x418) = uVar18;
  *(undefined8 **)((long)register0x00000020 + -0x250) = puVar19;
  uVar22 = 0;
  do {
    if ((long)uVar18 <= (long)uVar22) {
      iVar13 = (int)**(undefined8 **)((long)register0x00000020 + -0x260);
      from = *(runtime__type **)((long)register0x00000020 + -0xe0);
      *(undefined8 **)((long)register0x00000020 + -0x4f0) =
           *(undefined8 **)((long)register0x00000020 + -0x260);
      *(undefined8 *)((long)register0x00000020 + -0x4e8) =
           *(undefined8 *)((long)register0x00000020 + -0x248);
      *(undefined8 **)((long)register0x00000020 + -0x4e0) = puVar19;
      *(int *)((long)register0x00000020 + -0x4d8) = iVar13;
      *(int *)((long)register0x00000020 + -0x4d4) = (int)from;
      *(uint *)((long)register0x00000020 + -0x4d0) =
           (iVar13 + 7U & 0xfffffff8) + (int)*(undefined8 *)((long)register0x00000020 + -0xd8);
      *(undefined1 **)((long)register0x00000020 + -0x4c8) =
           (undefined1 *)((long)register0x00000020 + -0x418);
      *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53ab73;
      runtime_reflectcall();
                    /* Unresolved local var: uintptr retSize@[???] */
      plVar15 = *(long **)((long)register0x00000020 + -0x260);
      n = *plVar15 - *(long *)((long)register0x00000020 + -0xe0);
      if (n != 0) {
                    /* Unresolved local var: void * valueRet@[???]
                       Unresolved local var: void * methodRet@[???] */
        from = *(runtime__type **)((long)register0x00000020 + 0x10);
        *(long *)((long)register0x00000020 + -0x4f0) =
             (long)&from->size + *(long *)((long)register0x00000020 + -0x198);
        *(long *)((long)register0x00000020 + -0x4e8) =
             *(long *)((long)register0x00000020 + -0xe0) +
             (long)*(void **)((long)register0x00000020 + -0x250);
        *(uintptr *)((long)register0x00000020 + -0x4e0) = n;
        *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53abc5;
        reflect_memmove(*(void **)((long)register0x00000020 + -0x250),from,n);
        plVar15 = *(long **)((long)register0x00000020 + -0x260);
      }
      puVar17 = *(undefined1 **)((long)register0x00000020 + 0x18);
      *puVar17 = 1;
      *(long **)((long)register0x00000020 + -0x4f0) = plVar15;
      *(runtime__type **)((long)register0x00000020 + -0x4e8) =
           *(runtime__type **)((long)register0x00000020 + -0x250);
      *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53abee;
      reflect_typedmemclr(*(runtime__type **)((long)register0x00000020 + -0x250),from);
      *(undefined8 *)((long)register0x00000020 + -0x4f0) =
           *(undefined8 *)((long)register0x00000020 + -600);
      *(undefined **)((long)register0x00000020 + -0x4e8) = &DAT_002257a0;
      *(sync_Pool **)((long)register0x00000020 + -0x4e0) =
           *(sync_Pool **)((long)register0x00000020 + -0x250);
      *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53ac18;
      iVar25.data = puVar17;
      iVar25._type = from;
      sync___Pool__Put(*(sync_Pool **)((long)register0x00000020 + -0x250),iVar25);
      return;
    }
                    /* Unresolved local var: []reflect.abiStep valueSteps@[???]
                       Unresolved local var: []reflect.abiStep methodSteps@[???] */
                    /* Unresolved local var: int s@[???]
                       Unresolved local var: int e@[???] */
    uVar23 = *(ulong *)((long)register0x00000020 + -0x210);
    if (uVar23 <= uVar22) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53af5a;
      runtime_panicIndex();
    }
    uVar9 = *(ulong *)(*(long *)((long)register0x00000020 + -0x218) + uVar22 * 8);
    if (uVar22 == uVar23 - 1) {
      uVar23 = *(ulong *)((long)register0x00000020 + -0x228);
    }
    else {
      if (uVar23 <= uVar22 + 1) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53af52;
        runtime_panicIndex();
      }
      uVar23 = *(ulong *)(*(long *)((long)register0x00000020 + -0x218) + 8 + uVar22 * 8);
    }
    lVar14 = *(long *)((long)register0x00000020 + -0x230);
    if (*(ulong *)((long)register0x00000020 + -0x220) < uVar23) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53af47;
      runtime_panicSliceAcap();
    }
    if (uVar23 < uVar9) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53af3c;
      runtime_panicSliceB();
    }
    uVar1 = uVar22 + 1;
    uVar24 = (long)(uVar9 - *(ulong *)((long)register0x00000020 + -0x220)) >> 0x3f & uVar9 * 0x30;
    puVar19 = (undefined8 *)(lVar14 + uVar24);
                    /* Unresolved local var: int s@[???]
                       Unresolved local var: int e@[???] */
    uVar10 = *(ulong *)((long)register0x00000020 + -0x158);
    if (uVar10 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53af31;
      runtime_panicIndex();
    }
    *(undefined8 *)((long)register0x00000020 + -0x270) = *(undefined8 *)(lVar20 + uVar22 * 8);
    uVar11 = *(ulong *)(*(long *)((long)register0x00000020 + -0x160) + 8 + uVar22 * 8);
    if (uVar10 - 1 == uVar1) {
      uVar22 = *(ulong *)((long)register0x00000020 + -0x170);
    }
    else {
      if (uVar10 <= uVar22 + 2) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53af26;
        runtime_panicIndex();
      }
      uVar22 = *(ulong *)(*(long *)((long)register0x00000020 + -0x160) + 0x10 + uVar22 * 8);
    }
    lVar12 = *(long *)((long)register0x00000020 + -0x178);
    if (*(ulong *)((long)register0x00000020 + -0x168) < uVar22) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53af1b;
      runtime_panicSliceAcap();
    }
    if (uVar22 < uVar11) {
LAB_0053af05:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53af10;
      runtime_panicSliceB();
    }
    e_01.data = (void *)(uVar22 - uVar11);
    uVar22 = (long)(uVar11 - *(ulong *)((long)register0x00000020 + -0x168)) >> 0x3f & uVar11 * 0x30;
    puVar8 = (undefined8 *)(uVar22 + lVar12);
    if (uVar23 == uVar9) {
      uVar22 = uVar1;
      if (e_01.data != (void *)0x0) {
        *(undefined **)((long)register0x00000020 + -0x4f0) = &DAT_00225520;
        *(undefined8 **)((long)register0x00000020 + -0x4e8) = &reflect__stmp_69;
        *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53af05;
        e_05.data = e_01.data;
        e_05._type = (runtime__type *)&reflect__stmp_69;
        runtime_gopanic(e_05);
        goto LAB_0053af05;
      }
    }
    else {
                    /* Unresolved local var: reflect.abiStep vStep@[???] */
      uVar5 = puVar19[1];
      *(undefined8 *)((long)register0x00000020 + -0x3a0) = *puVar19;
      *(undefined8 *)((long)register0x00000020 + -0x398) = uVar5;
      lVar20 = uVar24 + lVar14;
      puVar21 = (undefined8 *)(lVar20 + 0x10);
      uVar5 = *(undefined8 *)(lVar20 + 0x18);
      *(undefined8 *)((long)register0x00000020 + -0x390) = *puVar21;
      *(undefined8 *)((long)register0x00000020 + -0x388) = uVar5;
      lVar14 = uVar24 + lVar14;
      puVar2 = (undefined8 *)(lVar14 + 0x20);
      uVar5 = *(undefined8 *)(lVar14 + 0x28);
      *(undefined8 *)((long)register0x00000020 + -0x380) = *puVar2;
      *(undefined8 *)((long)register0x00000020 + -0x378) = uVar5;
      if (*(long *)((long)register0x00000020 + -0x3a0) != 1) {
                    /* Unresolved local var: reflect.abiStep mStep@[???] */
        if (e_01.data != (void *)0x0) {
          uVar5 = puVar8[1];
          *(undefined8 *)((long)register0x00000020 + -0x2e0) = *puVar8;
          *(undefined8 *)((long)register0x00000020 + -0x2d8) = uVar5;
          lVar3 = lVar12 + uVar22;
          uVar5 = *(undefined8 *)(lVar3 + 0x18);
          *(undefined8 *)((long)register0x00000020 + -0x2d0) = *(undefined8 *)(lVar3 + 0x10);
          *(undefined8 *)((long)register0x00000020 + -0x2c8) = uVar5;
          lVar12 = lVar12 + uVar22;
          uVar5 = *(undefined8 *)(lVar12 + 0x28);
          *(undefined8 *)((long)register0x00000020 + -0x2c0) = *(undefined8 *)(lVar12 + 0x20);
          *(undefined8 *)((long)register0x00000020 + -0x2b8) = uVar5;
          if (*(long *)((long)register0x00000020 + -0x2e0) == 1) {
                    /* Unresolved local var: reflect.abiStep vStep@[???] */
            uVar5 = puVar19[1];
            *(undefined8 *)((long)register0x00000020 + -0x400) = *puVar19;
            *(undefined8 *)((long)register0x00000020 + -0x3f8) = uVar5;
            uVar5 = *(undefined8 *)(lVar20 + 0x18);
            *(undefined8 *)((long)register0x00000020 + -0x3f0) = *puVar21;
            *(undefined8 *)((long)register0x00000020 + -1000) = uVar5;
            uVar5 = *(undefined8 *)(lVar14 + 0x28);
            *(undefined8 *)((long)register0x00000020 + -0x3e0) = *puVar2;
            *(undefined8 *)((long)register0x00000020 + -0x3d8) = uVar5;
            lVar20 = *(long *)((long)register0x00000020 + -0x400);
            if (lVar20 == 2) {
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53add2;
              runtime_panicIndex();
            }
            if (lVar20 != 3) {
              if (lVar20 == 4) {
                    /* WARNING: Subroutine does not return */
                *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53ad85;
                runtime_panicIndex();
              }
              *(undefined **)((long)register0x00000020 + -0x4f0) = &DAT_00225520;
              *(undefined1 **)((long)register0x00000020 + -0x4e8) = reflect__stmp_72;
              *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53ada5;
              e_01._type = (runtime__type *)reflect__stmp_72;
              runtime_gopanic(e_01);
            }
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53adb9;
            runtime_panicIndex();
          }
          if (e_01.data == (void *)(uVar23 - uVar9)) {
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: reflect.abiStep vStep@[???] */
            uVar5 = puVar19[1];
            *(undefined8 *)((long)register0x00000020 + -0x3d0) = *puVar19;
            *(undefined8 *)((long)register0x00000020 + -0x3c8) = uVar5;
            uVar5 = *(undefined8 *)(lVar20 + 0x18);
            *(undefined8 *)((long)register0x00000020 + -0x3c0) = *puVar21;
            *(undefined8 *)((long)register0x00000020 + -0x3b8) = uVar5;
            uVar5 = *(undefined8 *)(lVar14 + 0x28);
            *(undefined8 *)((long)register0x00000020 + -0x3b0) = *puVar2;
            *(undefined8 *)((long)register0x00000020 + -0x3a8) = uVar5;
                    /* Unresolved local var: reflect.abiStep mStep@[???] */
            uVar5 = puVar8[1];
            *(undefined8 *)((long)register0x00000020 + -0x2b0) = *puVar8;
            *(undefined8 *)((long)register0x00000020 + -0x2a8) = uVar5;
            uVar5 = *(undefined8 *)(lVar3 + 0x18);
            *(undefined8 *)((long)register0x00000020 + -0x2a0) = *(undefined8 *)(lVar3 + 0x10);
            *(undefined8 *)((long)register0x00000020 + -0x298) = uVar5;
            uVar5 = *(undefined8 *)(lVar12 + 0x28);
            *(undefined8 *)((long)register0x00000020 + -0x290) = *(undefined8 *)(lVar12 + 0x20);
            *(undefined8 *)((long)register0x00000020 + -0x288) = uVar5;
            lVar20 = *(long *)((long)register0x00000020 + -0x3d0);
            if (*(long *)((long)register0x00000020 + -0x2b0) == lVar20) {
              if (lVar20 == 2) {
                    /* WARNING: Subroutine does not return */
                *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53ae9e;
                runtime_panicIndex();
              }
              if (lVar20 != 3) {
                if (lVar20 == 4) {
                    /* WARNING: Subroutine does not return */
                  *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53ae5a;
                  runtime_panicIndex();
                }
                *(undefined **)((long)register0x00000020 + -0x4f0) = &DAT_00225520;
                *(undefined1 **)((long)register0x00000020 + -0x4e8) = reflect__stmp_72;
                *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53ae76;
                e_02.data = e_01.data;
                e_02._type = (runtime__type *)reflect__stmp_72;
                runtime_gopanic(e_02);
              }
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53ae8a;
              runtime_panicIndex();
            }
            *(undefined **)((long)register0x00000020 + -0x4f0) = &DAT_00225520;
            *(undefined1 **)((long)register0x00000020 + -0x4e8) = reflect__stmp_73;
            *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53aeba;
            e_03.data = e_01.data;
            e_03._type = (runtime__type *)reflect__stmp_73;
            runtime_gopanic(e_03);
          }
          *(undefined **)((long)register0x00000020 + -0x4f0) = &DAT_00225520;
          *(undefined1 **)((long)register0x00000020 + -0x4e8) = reflect__stmp_73;
          *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53aed6;
          e_04.data = e_01.data;
          e_04._type = (runtime__type *)reflect__stmp_73;
          runtime_gopanic(e_04);
        }
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53aee5;
        runtime_panicIndex();
      }
                    /* Unresolved local var: reflect.abiStep mStep@[???] */
      if (e_01.data == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53acde;
        runtime_panicIndex();
      }
      uVar5 = puVar8[1];
      *(undefined8 *)((long)register0x00000020 + -0x310) = *puVar8;
      *(undefined8 *)((long)register0x00000020 + -0x308) = uVar5;
      puVar19 = (undefined8 *)(lVar12 + uVar22 + 0x10);
      uVar5 = *(undefined8 *)(lVar12 + uVar22 + 0x18);
      *(undefined8 *)((long)register0x00000020 + -0x300) = *puVar19;
      *(undefined8 *)((long)register0x00000020 + -0x2f8) = uVar5;
      puVar21 = (undefined8 *)(lVar12 + uVar22 + 0x20);
      uVar5 = *(undefined8 *)(lVar12 + uVar22 + 0x28);
      *(undefined8 *)((long)register0x00000020 + -0x2f0) = *puVar21;
      *(undefined8 *)((long)register0x00000020 + -0x2e8) = uVar5;
      if (*(long *)((long)register0x00000020 + -0x310) != 1) {
LAB_0053ac45:
                    /* Unresolved local var: reflect.abiStep mStep@[???] */
        uVar5 = puVar8[1];
        *(undefined8 *)((long)register0x00000020 + -0x340) = *puVar8;
        *(undefined8 *)((long)register0x00000020 + -0x338) = uVar5;
        uVar5 = puVar19[1];
        *(undefined8 *)((long)register0x00000020 + -0x330) = *puVar19;
        *(undefined8 *)((long)register0x00000020 + -0x328) = uVar5;
        uVar5 = puVar21[1];
        *(undefined8 *)((long)register0x00000020 + -800) = *puVar21;
        *(undefined8 *)((long)register0x00000020 + -0x318) = uVar5;
        lVar20 = *(long *)((long)register0x00000020 + -0x340);
        if (lVar20 == 2) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53acd4;
          runtime_panicIndex();
        }
        if (lVar20 != 3) {
          if (lVar20 == 4) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53ac95;
            runtime_panicIndex();
          }
          *(undefined **)((long)register0x00000020 + -0x4f0) = &DAT_00225520;
          *(undefined1 **)((long)register0x00000020 + -0x4e8) = reflect__stmp_71;
          *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53acb1;
          e_00.data = puVar19;
          e_00._type = (runtime__type *)reflect__stmp_71;
          runtime_gopanic(e_00);
        }
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53acc5;
        runtime_panicIndex();
      }
      puVar19 = *(undefined8 **)((long)register0x00000020 + -0x390);
      if (*(undefined8 **)((long)register0x00000020 + -0x300) != puVar19) {
        *(undefined **)((long)register0x00000020 + -0x4f0) = &DAT_00225520;
        *(undefined8 **)((long)register0x00000020 + -0x4e8) = &reflect__stmp_69;
        *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53ac45;
        e.data = puVar19;
        e._type = (runtime__type *)&reflect__stmp_69;
        runtime_gopanic(e);
        goto LAB_0053ac45;
      }
      *(ulong *)((long)register0x00000020 + -0x410) = uVar1;
      *(undefined8 *)((long)register0x00000020 + -0x4f0) =
           *(undefined8 *)((long)register0x00000020 + -0x270);
      *(long *)((long)register0x00000020 + -0x4e8) =
           *(long *)((long)register0x00000020 + -0x2f8) +
           *(long *)((long)register0x00000020 + -0x250);
      src = (void *)((long)&(*(runtime__type **)((long)register0x00000020 + 0x10))->size +
                    *(long *)((long)register0x00000020 + -0x388));
      *(void **)((long)register0x00000020 + -0x4e0) = src;
      *(undefined8 *)((long)register0x00000020 + -0x4f8) = 0x53aaf7;
      reflect_typedmemmove(*(runtime__type **)((long)register0x00000020 + 0x10),puVar19,src);
      uVar18 = *(ulong *)((long)register0x00000020 + -0x418);
      lVar20 = *(long *)((long)register0x00000020 + -0x280);
      uVar22 = *(ulong *)((long)register0x00000020 + -0x410);
    }
    puVar19 = *(undefined8 **)((long)register0x00000020 + -0x250);
  } while( true );
}

