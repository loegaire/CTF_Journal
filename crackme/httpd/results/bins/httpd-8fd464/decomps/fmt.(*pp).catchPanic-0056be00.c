
/* WARNING: Unknown calling convention */

void fmt___pp__catchPanic(fmt_pp *p,interface___ arg,int32 verb,string method)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 auVar3 [16];
  runtime__type *extraout_RAX;
  runtime__type *extraout_RAX_00;
  runtime__type *extraout_RAX_01;
  runtime__type *prVar4;
  long extraout_RAX_02;
  undefined1 (*pauVar5) [16];
  undefined8 uVar6;
  undefined1 *puVar7;
  void *pvVar8;
  long lVar9;
  byte bVar10;
  long extraout_RDX;
  undefined1 *extraout_RDX_00;
  undefined1 *puVar11;
  void *extraout_RDX_01;
  void *pvVar12;
  undefined8 *puVar13;
  ulong uVar14;
  runtime__type *prVar15;
  long lVar16;
  undefined1 *unaff_RBP;
  ulong cap;
  int cap_00;
  long *plVar17;
  undefined1 *puVar18;
  long in_FS_OFFSET;
  bool bVar19;
  interface___ arg_00;
  interface___ e;
  runtime_slice old;
  runtime_slice old_00;
  runtime_slice old_01;
  runtime_slice old_02;
  runtime_slice old_03;
  runtime_slice old_04;
  fmt_pp *p_spill;
  interface___ arg_spill;
  int32 verb_spill;
  string method_spill;
  
  do {
    puVar7 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) <
        (undefined1 *)((long)register0x00000020 + -0x20)) {
      puVar7 = (undefined1 *)((long)register0x00000020 + -0xa0);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
                    /* Unresolved local var: interface_{} err@[???] */
      *(undefined1 **)((long)register0x00000020 + -0xa0) =
           (undefined1 *)((long)register0x00000020 + 8);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x56be45;
      runtime_gorecover((uintptr)((long)register0x00000020 + 8));
                    /* Unresolved local var: fmt.fmtFlags oldFlags@[???] */
      prVar4 = *(runtime__type **)((long)register0x00000020 + -0x98);
      uVar6 = *(undefined8 *)((long)register0x00000020 + -0x90);
      if (*(long *)((long)register0x00000020 + -0x98) == 0) {
        return;
      }
      lVar9 = *(long *)((long)register0x00000020 + 0x10);
      if (lVar9 == 0) {
        bVar10 = 0;
        bVar19 = false;
        puVar13 = (undefined8 *)0x0;
      }
      else {
        if (reflect_dummy.b == false) {
          puVar13 = *(undefined8 **)((long)register0x00000020 + 0x18);
        }
        else {
          reflect_dummy.x._type = *(runtime__type **)((long)register0x00000020 + 0x10);
          if (runtime_writeBarrier._0_4_ == 0) {
            puVar13 = *(undefined8 **)((long)register0x00000020 + 0x18);
            reflect_dummy.x.data = puVar13;
          }
          else {
            puVar13 = *(undefined8 **)((long)register0x00000020 + 0x18);
            *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x56beb3;
            runtime_gcWriteBarrierBX();
            prVar4 = extraout_RAX;
            lVar9 = extraout_RDX;
          }
        }
        *(long *)((long)register0x00000020 + -0x18) = lVar9;
        *(undefined8 **)((long)register0x00000020 + -0x10) = puVar13;
                    /* Unresolved local var: reflect.rtype * t@[???]
                       Unresolved local var: reflect.flag f@[???] */
        if (*(long *)((long)register0x00000020 + -0x18) == 0) {
          bVar10 = 0;
          bVar19 = false;
          puVar13 = (undefined8 *)0x0;
        }
        else {
          bVar1 = *(byte *)(*(long *)((long)register0x00000020 + -0x18) + 0x17);
          bVar10 = bVar1 & 0x1f;
          bVar19 = (bVar1 & 0x20) == 0;
        }
      }
                    /* Unresolved local var: reflect.Value v@[???] */
      if (bVar10 == 0x16) {
                    /* Unresolved local var: void * ptr@[???] */
        if (bVar19) {
          puVar13 = (undefined8 *)*puVar13;
        }
        if (puVar13 == (undefined8 *)0x0) {
          plVar17 = *(long **)((long)register0x00000020 + 8);
          prVar4 = (runtime__type *)plVar17[1];
          puVar7 = (undefined1 *)((long)&prVar4->size + 5);
          puVar11 = (undefined1 *)plVar17[2];
          lVar9 = *plVar17;
          if (puVar11 < puVar7) {
            *(undefined1 **)((long)register0x00000020 + -0x58) = puVar7;
            *(runtime__type **)((long)register0x00000020 + -0x60) = prVar4;
            *(undefined **)((long)register0x00000020 + -0xa0) = &DAT_00225720;
            *(long *)((long)register0x00000020 + -0x98) = lVar9;
            *(runtime__type **)((long)register0x00000020 + -0x90) = prVar4;
            *(undefined1 **)((long)register0x00000020 + -0x88) = puVar11;
            *(undefined1 **)((long)register0x00000020 + -0x80) = puVar7;
            *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x56bf7a;
            old.len = (int)puVar7;
            old.array = (void *)lVar9;
            old.cap = (int)plVar17;
            runtime_growslice(prVar4,old,0x225720);
            lVar9 = *(long *)((long)register0x00000020 + -0x78);
            puVar11 = *(undefined1 **)((long)register0x00000020 + -0x68);
            prVar4 = *(runtime__type **)((long)register0x00000020 + -0x60);
            puVar7 = *(undefined1 **)((long)register0x00000020 + -0x58);
            plVar17 = *(long **)((long)register0x00000020 + 8);
          }
          *(undefined4 *)((long)&prVar4->size + lVar9) = 0x6c696e3c;
          *(undefined1 *)((long)&prVar4->size + lVar9 + 4) = 0x3e;
          plVar17[1] = (long)puVar7;
          plVar17[2] = (long)puVar11;
          if (runtime_writeBarrier._0_4_ == 0) {
            *plVar17 = lVar9;
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x56bfbd;
            runtime_gcWriteBarrierBX();
          }
          return;
        }
      }
      plVar17 = *(long **)((long)register0x00000020 + 8);
      if (*(char *)((long)plVar17 + 0xb2) == '\0') {
        *(runtime__type **)((long)register0x00000020 + -0x20) = prVar4;
        *(undefined8 *)((long)register0x00000020 + -0x30) = uVar6;
        lVar9 = plVar17[10];
        *(long *)((long)register0x00000020 + -0x39) = plVar17[9];
        *(char *)((long)register0x00000020 + -0x31) = (char)lVar9;
        plVar17[9] = 0;
        *(undefined8 *)((long)plVar17 + 0x49) = 0;
        lVar9 = plVar17[1];
        uVar14 = lVar9 + 2;
        cap = plVar17[2];
        lVar16 = *plVar17;
        if (cap < uVar14) {
          *(ulong *)((long)register0x00000020 + -0x58) = uVar14;
          *(long *)((long)register0x00000020 + -0x60) = lVar9;
          *(undefined **)((long)register0x00000020 + -0xa0) = &DAT_00225720;
          *(long *)((long)register0x00000020 + -0x98) = lVar16;
          *(long *)((long)register0x00000020 + -0x90) = lVar9;
          *(ulong *)((long)register0x00000020 + -0x88) = cap;
          *(ulong *)((long)register0x00000020 + -0x80) = uVar14;
          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x56c058;
          old_00.len = uVar6;
          old_00.array = (void *)uVar14;
          old_00.cap = (int)plVar17;
          runtime_growslice((runtime__type *)&DAT_00225720,old_00,cap);
          lVar16 = *(long *)((long)register0x00000020 + -0x78);
          cap = *(ulong *)((long)register0x00000020 + -0x68);
          lVar9 = *(long *)((long)register0x00000020 + -0x60);
          uVar14 = *(ulong *)((long)register0x00000020 + -0x58);
          plVar17 = *(long **)((long)register0x00000020 + 8);
        }
        *(undefined2 *)(lVar16 + lVar9) = 0x2125;
        plVar17[1] = uVar14;
        plVar17[2] = cap;
        if (runtime_writeBarrier._0_4_ == 0) {
          *plVar17 = lVar16;
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x56c0a5;
          runtime_gcWriteBarrierR8();
        }
        *(long **)((long)register0x00000020 + -0xa0) = plVar17;
        *(uint *)((long)register0x00000020 + -0x98) = *(uint *)((long)register0x00000020 + 0x20);
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x56c0b9;
        fmt___buffer__writeRune
                  ((fmt_buffer *)(ulong)*(uint *)((long)register0x00000020 + 0x20),(int32)uVar14);
        plVar17 = *(long **)((long)register0x00000020 + 8);
        prVar4 = (runtime__type *)plVar17[1];
        *(runtime__type **)((long)register0x00000020 + -0x58) = prVar4;
        puVar7 = (undefined1 *)((long)&prVar4->size + 7);
        puVar11 = (undefined1 *)plVar17[2];
        lVar9 = *plVar17;
        if (puVar11 < puVar7) {
          *(undefined1 **)((long)register0x00000020 + -0x60) = puVar7;
          *(undefined **)((long)register0x00000020 + -0xa0) = &DAT_00225720;
          *(long *)((long)register0x00000020 + -0x98) = lVar9;
          *(runtime__type **)((long)register0x00000020 + -0x90) = prVar4;
          *(undefined1 **)((long)register0x00000020 + -0x88) = puVar11;
          *(undefined1 **)((long)register0x00000020 + -0x80) = puVar7;
          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x56c105;
          old_01.len = (int)puVar7;
          old_01.array = (void *)lVar9;
          old_01.cap = (int)plVar17;
          runtime_growslice(prVar4,old_01,0x225720);
          lVar9 = *(long *)((long)register0x00000020 + -0x78);
          puVar11 = *(undefined1 **)((long)register0x00000020 + -0x68);
          prVar4 = *(runtime__type **)((long)register0x00000020 + -0x58);
          puVar7 = *(undefined1 **)((long)register0x00000020 + -0x60);
          plVar17 = *(long **)((long)register0x00000020 + 8);
        }
        *(undefined4 *)((long)&prVar4->size + lVar9) = 0x4e415028;
        *(undefined4 *)((long)&prVar4->size + lVar9 + 3) = 0x3d43494e;
        plVar17[1] = (long)puVar7;
        plVar17[2] = (long)puVar11;
        cap_00 = *(long *)((long)register0x00000020 + 0x30);
        puVar18 = (undefined1 *)((long)&prVar4->size + cap_00 + 7);
        lVar16 = (long)&prVar4->size + cap_00;
        if (runtime_writeBarrier._0_4_ == 0) {
          *plVar17 = lVar9;
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x56c15f;
          runtime_gcWriteBarrierBX();
          prVar4 = extraout_RAX_00;
          puVar11 = extraout_RDX_00;
        }
        *(long *)((long)register0x00000020 + -0x60) = lVar16;
        *(undefined1 **)((long)register0x00000020 + -0x48) = puVar18;
        if (puVar11 < puVar18) {
          *(undefined **)((long)register0x00000020 + -0xa0) = &DAT_00225720;
          *(long *)((long)register0x00000020 + -0x98) = lVar9;
          *(undefined1 **)((long)register0x00000020 + -0x90) = puVar7;
          *(undefined1 **)((long)register0x00000020 + -0x88) = puVar11;
          *(undefined1 **)((long)register0x00000020 + -0x80) = puVar18;
          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x56c193;
          old_02.len = (int)puVar7;
          old_02.array = (void *)lVar9;
          old_02.cap = (int)plVar17;
          runtime_growslice((runtime__type *)&DAT_00225720,old_02,cap_00);
          lVar9 = *(long *)((long)register0x00000020 + -0x78);
          puVar11 = *(undefined1 **)((long)register0x00000020 + -0x68);
          prVar4 = *(runtime__type **)((long)register0x00000020 + -0x58);
          cap_00 = *(int *)((long)register0x00000020 + 0x30);
        }
        *(undefined1 **)((long)register0x00000020 + -0x50) = puVar11;
        *(long *)((long)register0x00000020 + -0x28) = lVar9;
        *(long *)((long)register0x00000020 + -0xa0) = (long)&prVar4->size + lVar9 + 7;
        *(undefined8 *)((long)register0x00000020 + -0x98) =
             *(undefined8 *)((long)register0x00000020 + 0x28);
        *(int *)((long)register0x00000020 + -0x90) = cap_00;
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x56c1d7;
        runtime_memmove();
        prVar4 = *(runtime__type **)((long)register0x00000020 + -0x48);
        plVar17 = *(long **)((long)register0x00000020 + 8);
        plVar17[1] = (long)prVar4;
        pvVar8 = *(void **)((long)register0x00000020 + -0x50);
        plVar17[2] = (long)pvVar8;
        pvVar12 = (void *)(*(long *)((long)register0x00000020 + -0x58) +
                           *(long *)((long)register0x00000020 + 0x30) + 0x10);
        if (runtime_writeBarrier._0_4_ == 0) {
          prVar15 = *(runtime__type **)((long)register0x00000020 + -0x28);
          *plVar17 = (long)prVar15;
        }
        else {
          prVar15 = *(runtime__type **)((long)register0x00000020 + -0x28);
          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x56c225;
          runtime_gcWriteBarrierBX();
          prVar4 = extraout_RAX_01;
          pvVar12 = extraout_RDX_01;
        }
        if (pvVar8 < pvVar12) {
          *(void **)((long)register0x00000020 + -0x58) = pvVar12;
          *(undefined **)((long)register0x00000020 + -0xa0) = &DAT_00225720;
          *(runtime__type **)((long)register0x00000020 + -0x98) = prVar15;
          *(runtime__type **)((long)register0x00000020 + -0x90) = prVar4;
          *(void **)((long)register0x00000020 + -0x88) = pvVar8;
          *(void **)((long)register0x00000020 + -0x80) = pvVar12;
          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x56c254;
          old_03.len = (int)pvVar8;
          old_03.array = prVar15;
          old_03.cap = (int)plVar17;
          runtime_growslice(prVar4,old_03,0x225720);
          prVar15 = *(runtime__type **)((long)register0x00000020 + -0x78);
          pvVar8 = *(void **)((long)register0x00000020 + -0x68);
          plVar17 = *(long **)((long)register0x00000020 + 8);
          pvVar12 = *(void **)((long)register0x00000020 + -0x58);
        }
        lVar9 = *(long *)((long)register0x00000020 + -0x60);
        *(undefined8 *)((long)&prVar15->size + lVar9 + 7) = 0x3a646f6874656d20;
        *(undefined1 *)((long)&prVar15->ptrdata + lVar9 + 7) = 0x20;
        plVar17[1] = (long)pvVar12;
        plVar17[2] = (long)pvVar8;
        if (runtime_writeBarrier._0_4_ == 0) {
          *plVar17 = (long)prVar15;
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x56c2a5;
          runtime_gcWriteBarrierBX();
        }
        *(undefined1 *)((long)plVar17 + 0xb2) = 1;
        *(long **)((long)register0x00000020 + -0xa0) = plVar17;
        *(undefined8 *)((long)register0x00000020 + -0x98) =
             *(undefined8 *)((long)register0x00000020 + -0x20);
        *(fmt_pp **)((long)register0x00000020 + -0x90) =
             *(fmt_pp **)((long)register0x00000020 + -0x30);
        *(undefined4 *)((long)register0x00000020 + -0x88) = 0x76;
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x56c2d4;
        arg_00.data = pvVar8;
        arg_00._type = prVar15;
        fmt___pp__printArg(*(fmt_pp **)((long)register0x00000020 + -0x30),arg_00,(int32)plVar17);
        pauVar5 = *(undefined1 (**) [16])((long)register0x00000020 + 8);
        pauVar5[0xb][2] = 0;
        lVar9 = *(long *)(*pauVar5 + 8);
        lVar16 = *(long *)*pauVar5;
        auVar3 = *pauVar5;
        uVar14 = *(ulong *)pauVar5[1];
        if (uVar14 < lVar9 + 1U) {
          *(undefined **)((long)register0x00000020 + -0xa0) = &DAT_00225720;
          *(long *)((long)register0x00000020 + -0x98) = lVar16;
          *(long *)((long)register0x00000020 + -0x90) = lVar9;
          *(ulong *)((long)register0x00000020 + -0x88) = uVar14;
          *(ulong *)((long)register0x00000020 + -0x80) = lVar9 + 1U;
          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x56c31c;
          old_04.cap = (int)plVar17;
          old_04._0_16_ = auVar3;
          runtime_growslice((runtime__type *)&DAT_00225720,old_04,uVar14);
          lVar16 = *(long *)((long)register0x00000020 + -0x78);
          lVar9 = *(long *)((long)register0x00000020 + -0x70);
          pauVar5 = *(undefined1 (**) [16])((long)register0x00000020 + 8);
          *(undefined8 *)pauVar5[1] = *(undefined8 *)((long)register0x00000020 + -0x68);
          if (runtime_writeBarrier._0_4_ == 0) {
            *(long *)*pauVar5 = lVar16;
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x56c34c;
            runtime_gcWriteBarrier();
            lVar16 = extraout_RAX_02;
          }
        }
        *(long *)(*pauVar5 + 8) = lVar9 + 1;
        *(undefined1 *)(lVar16 + lVar9) = 0x29;
        uVar2 = *(undefined1 *)((long)register0x00000020 + -0x31);
        *(undefined8 *)(pauVar5[4] + 8) = *(undefined8 *)((long)register0x00000020 + -0x39);
        pauVar5[5][0] = uVar2;
        return;
      }
      *(runtime__type **)((long)register0x00000020 + -0xa0) = prVar4;
      *(undefined8 *)((long)register0x00000020 + -0x98) = uVar6;
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x56c38d;
      e.data = puVar13;
      e._type = prVar4;
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar7 + -8) = 0x56c393;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar7;
  } while( true );
}

