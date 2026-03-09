
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.funcLayout(reflect.funcType * t, reflect.rtype * rcvr,
   reflect.rtype * frametype, sync.Pool * framePool, reflect.abiDesc abi) */

multireturn_reflect_rtype___sync_Pool___reflect_abiDesc__x86_64
reflect_funcLayout(reflect_funcType *t,reflect_rtype *rcvr)

{
  int *piVar1;
  undefined8 *puVar2;
  sync_Map *m;
  runtime_tmpBuf *pauVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 uVar6;
  reflect_rtype *extraout_RAX;
  reflect_rtype *prVar7;
  uint8 *puVar8;
  undefined8 uVar9;
  reflect_rtype *extraout_RAX_00;
  reflect_rtype *extraout_RAX_01;
  long lVar10;
  uint8 *puVar11;
  undefined8 uVar12;
  runtime__type *prVar13;
  undefined8 uVar14;
  undefined8 extraout_RDX;
  undefined1 *puVar16;
  undefined8 unaff_RBP;
  undefined1 exported;
  undefined1 *in_RSI;
  uint8 **ppuVar17;
  uint8 *in_R8;
  int in_R9;
  uint8 *in_R10;
  int in_R11;
  long in_FS_OFFSET;
  bool bVar18;
  string n;
  runtime_eface rVar19;
  string sVar20;
  string val;
  interface___ e;
  string val_00;
  interface___ e_00;
  string a1;
  interface___ value;
  string a1_00;
  string a1_01;
  interface___ key;
  string a0;
  string a0_00;
  interface___ key_00;
  string a0_01;
  string a0_02;
  string tag;
  multireturn_interface____bool_ mVar21;
  multireturn_interface____bool__conflict mVar22;
  string a2;
  string a2_00;
  string a3;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  reflect_abiDesc abi_return_result_alias;
  reflect_funcType *t_spill;
  reflect_rtype *rcvr_spill;
  reflect_rtype *rcvr_00;
  void *pvVar15;
  runtime__type *want;
  
  do {
                    /* Unresolved local var: reflect.rtype * x@[???]
                       Unresolved local var: reflect.layoutKey k@[???]
                       Unresolved local var: string s@[???]
                       Unresolved local var: interface_{} lti@[???]
                       Unresolved local var: reflect.layoutType lt@[???] */
    puVar16 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) <
        (undefined1 *)((long)register0x00000020 + -0x338)) {
      puVar16 = (undefined1 *)((long)register0x00000020 + -0x3b8);
      *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
      *(undefined8 *)((long)register0x00000020 + 0x28) = 0;
      puVar8 = (uint8 *)((long)register0x00000020 + 0x20);
      *(undefined1 **)((long)register0x00000020 + -0x3c8) =
           (undefined1 *)((long)register0x00000020 + -8);
      *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0x53886f;
      FUN_0051a16f();
      unaff_RBP = *(undefined8 *)((long)register0x00000020 + -0x3c8);
      prVar7 = *(reflect_rtype **)((long)register0x00000020 + 8);
      if ((prVar7->kind & 0x1f) == 0x13) {
        prVar13 = *(runtime__type **)((long)register0x00000020 + 0x10);
        if ((prVar13 == (runtime__type *)0x0) || ((prVar13->kind & 0x1f) != 0x14)) {
                    /* Unresolved local var: interface_{} lti@[???] */
          *(reflect_rtype **)((long)register0x00000020 + -0x270) = prVar7;
          *(runtime__type **)((long)register0x00000020 + -0x268) = prVar13;
          *(reflect_rtype **)((long)register0x00000020 + -0x280) = prVar7;
          *(runtime__type **)((long)register0x00000020 + -0x278) = prVar13;
          *(sync_Map **)((long)register0x00000020 + -0x3b8) = &reflect_layoutCache;
          *(undefined **)((long)register0x00000020 + -0x3b0) = &DAT_0024d720;
          in_RSI = (undefined1 *)((long)register0x00000020 + -0x280);
          *(undefined1 **)((long)register0x00000020 + -0x3a8) = in_RSI;
          *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0x5388f3;
          key.data = prVar13;
          key._type = (runtime__type *)&DAT_0024d720;
          mVar21 = sync___Map__Load((sync_Map *)prVar7,key);
          rcvr_00 = mVar21.value.data;
                    /* Unresolved local var: reflect.layoutType lt@[???] */
          prVar13 = *(runtime__type **)((long)register0x00000020 + -0x398);
          if (*(char *)((long)register0x00000020 + -0x390) == '\0') {
            *(reflect_funcType **)((long)register0x00000020 + -0x3b8) =
                 *(reflect_funcType **)((long)register0x00000020 + 8);
            *(undefined8 *)((long)register0x00000020 + -0x3b0) =
                 *(undefined8 *)((long)register0x00000020 + 0x10);
            *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0x538a34;
            reflect_newAbiDesc(*(reflect_funcType **)((long)register0x00000020 + 8),rcvr_00);
            *(undefined8 *)((long)register0x00000020 + 0x28) =
                 *(undefined8 *)((long)register0x00000020 + -0x3a8);
            ppuVar17 = (uint8 **)((long)register0x00000020 + 0x30);
            puVar16 = (undefined1 *)((long)register0x00000020 + -0x3a0);
            *(undefined8 *)((long)register0x00000020 + -0x3c8) = unaff_RBP;
            *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0x538a6f;
            FUN_0051a4a6();
            uVar14 = *(undefined8 *)((long)register0x00000020 + -0x3c8);
            *(runtime__type **)((long)register0x00000020 + -0x2f0) =
                 (runtime__type *)
                 (*(long *)((long)register0x00000020 + 0xc0) +
                 *(long *)((long)register0x00000020 + 0xa0));
            *(undefined **)((long)register0x00000020 + -0x3b8) = &DAT_00278860;
            *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0x538a9b;
            runtime_newobject((runtime__type *)
                              (*(long *)((long)register0x00000020 + 0xc0) +
                              *(long *)((long)register0x00000020 + 0xa0)));
            prVar7 = *(reflect_rtype **)((long)register0x00000020 + -0x3b0);
            prVar7->align = 8;
            prVar7->size = *(long *)((long)register0x00000020 + -0x2f0) + 7U & 0xfffffffffffffff8;
            prVar7->ptrdata = (ulong)**(uint **)((long)register0x00000020 + 0xd0) << 3;
            piVar1 = *(int **)((long)register0x00000020 + 0xd0);
            if (*piVar1 == 0) {
              lVar10 = *(long *)((long)register0x00000020 + 0x10);
              bVar18 = lVar10 == 0;
            }
            else {
              if (*(long *)(piVar1 + 4) == 0) goto LAB_00538f70;
              if (runtime_writeBarrier._0_4_ == 0) {
                prVar7->gcdata = *(uint8 **)(piVar1 + 2);
                lVar10 = *(long *)((long)register0x00000020 + 0x10);
                bVar18 = lVar10 == 0;
              }
              else {
                ppuVar17 = &prVar7->gcdata;
                *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0x538b0c;
                runtime_gcWriteBarrierBX();
                lVar10 = *(long *)((long)register0x00000020 + 0x10);
                bVar18 = lVar10 == 0;
                prVar7 = extraout_RAX;
              }
            }
            *(reflect_rtype **)((long)register0x00000020 + -0x2a0) = prVar7;
            if (bVar18) {
              *(reflect_rtype **)((long)register0x00000020 + -0x3b8) =
                   *(reflect_rtype **)((long)register0x00000020 + 8);
              *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0x538c05;
              sVar20 = reflect___rtype__String(*(reflect_rtype **)((long)register0x00000020 + 8));
              a0_00.str = (uint8 *)sVar20.len;
              uVar12 = *(undefined8 *)((long)register0x00000020 + -0x3b0);
              iVar4 = *(int *)((long)register0x00000020 + -0x3a8);
              *(undefined1 **)((long)register0x00000020 + -0x3b8) =
                   (undefined1 *)((long)register0x00000020 + -0x2e0);
              *(undefined **)((long)register0x00000020 + -0x3b0) = &DAT_0028dd4e;
              *(undefined8 *)((long)register0x00000020 + -0x3a8) = 9;
              *(undefined8 *)((long)register0x00000020 + -0x3a0) = uVar12;
              *(int *)((long)register0x00000020 + -0x398) = iVar4;
              *(undefined8 *)((long)register0x00000020 + -0x390) = 0x287742;
              *(undefined8 *)((long)register0x00000020 + -0x388) = 1;
              *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0x538c54;
              sVar20.len = (int)puVar16;
              sVar20.str = (uint8 *)ppuVar17;
              a0_00.len = iVar4;
              a2_00.len = in_R9;
              a2_00.str = in_R8;
              sVar20 = runtime_concatstring3
                                 ((runtime_tmpBuf *)((long)&go_string__ + 2),a0_00,sVar20,a2_00);
              exported = SUB81(puVar16,0);
              pvVar15 = (void *)sVar20.len;
              puVar8 = *(uint8 **)((long)register0x00000020 + -0x380);
              puVar11 = *(uint8 **)((long)register0x00000020 + -0x378);
            }
            else {
              *(long *)((long)register0x00000020 + -0x3b8) = lVar10;
              *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0x538b3b;
              reflect___rtype__String(prVar7);
              *(reflect_rtype **)((long)register0x00000020 + -0x288) =
                   *(reflect_rtype **)((long)register0x00000020 + -0x3b0);
              *(undefined8 *)((long)register0x00000020 + -0x2e8) =
                   *(undefined8 *)((long)register0x00000020 + -0x3a8);
              *(undefined8 *)((long)register0x00000020 + -0x3b8) =
                   *(undefined8 *)((long)register0x00000020 + 8);
              *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0x538b66;
              sVar20 = reflect___rtype__String
                                 (*(reflect_rtype **)((long)register0x00000020 + -0x3b0));
              a0.str = (uint8 *)sVar20.len;
              uVar12 = *(undefined8 *)((long)register0x00000020 + -0x3b0);
              iVar4 = *(int *)((long)register0x00000020 + -0x3a8);
              *(undefined1 **)((long)register0x00000020 + -0x3b8) =
                   (undefined1 *)((long)register0x00000020 + -0x2c0);
              *(undefined **)((long)register0x00000020 + -0x3b0) = &DAT_00291b33;
              *(undefined8 *)((long)register0x00000020 + -0x3a8) = 0xb;
              *(undefined8 *)((long)register0x00000020 + -0x3a0) =
                   *(undefined8 *)((long)register0x00000020 + -0x288);
              *(undefined8 *)((long)register0x00000020 + -0x398) =
                   *(undefined8 *)((long)register0x00000020 + -0x2e8);
              *(undefined **)((long)register0x00000020 + -0x390) = &DAT_00287781;
              *(undefined8 *)((long)register0x00000020 + -0x388) = 2;
              *(undefined8 *)((long)register0x00000020 + -0x380) = uVar12;
              *(int *)((long)register0x00000020 + -0x378) = iVar4;
              *(undefined8 *)((long)register0x00000020 + -0x370) = 0x287742;
              *(undefined8 *)((long)register0x00000020 + -0x368) = 1;
              *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0x538be5;
              a1.len = (int)puVar16;
              a1.str = (uint8 *)ppuVar17;
              a0.len = iVar4;
              a2.len = in_R9;
              a2.str = in_R8;
              a3.len = in_R11;
              a3.str = in_R10;
              sVar20 = runtime_concatstring5
                                 ((runtime_tmpBuf *)((long)&go_string__ + 2),a0,a1,a2,a3,
                                  *(string *)((long)register0x00000020 + -0x3b8));
              exported = SUB81(puVar16,0);
              pvVar15 = (void *)sVar20.len;
              puVar8 = *(uint8 **)((long)register0x00000020 + -0x360);
              puVar11 = *(uint8 **)((long)register0x00000020 + -0x358);
            }
            *(uint8 **)((long)register0x00000020 + -0x3b8) = puVar8;
            *(uint8 **)((long)register0x00000020 + -0x3b0) = puVar11;
            *(undefined8 *)((long)register0x00000020 + -0x3a8) = 0;
            *(undefined8 *)((long)register0x00000020 + -0x3a0) = 0;
            *(undefined1 *)((long)register0x00000020 + -0x398) = 0;
            *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0x538c7b;
            n.len = (int)pvVar15;
            n.str = puVar8;
            tag.len = (int)ppuVar17;
            tag.str = puVar11;
            reflect_newName(n,tag,(bool)exported);
            *(void **)((long)register0x00000020 + -0x3b8) =
                 *(void **)((long)register0x00000020 + -0x390);
            *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0x538c89;
            reflect_addReflectOff(*(void **)((long)register0x00000020 + -0x390));
            *(undefined4 *)(*(long *)((long)register0x00000020 + -0x2a0) + 0x28) =
                 *(undefined4 *)((long)register0x00000020 + -0x3b0);
            *(undefined **)((long)register0x00000020 + -0x3b8) = &DAT_0026e4a0;
            *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0x538ca8;
            runtime_newobject((runtime__type *)&DAT_0026e4a0);
            *(runtime__type **)((long)register0x00000020 + -0x290) =
                 *(runtime__type **)((long)register0x00000020 + -0x3b0);
            *(undefined **)((long)register0x00000020 + -0x3b8) = &DAT_002461a0;
            *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0x538cc5;
            runtime_newobject(*(runtime__type **)((long)register0x00000020 + -0x3b0));
            puVar2 = *(undefined8 **)((long)register0x00000020 + -0x3b0);
            *puVar2 = reflect_funcLayout_func1;
            if (runtime_writeBarrier._0_4_ == 0) {
              uVar12 = *(undefined8 *)((long)register0x00000020 + -0x2a0);
              puVar2[1] = uVar12;
              *(undefined8 **)(*(long *)((long)register0x00000020 + -0x290) + 0x20) = puVar2;
            }
            else {
              uVar12 = *(undefined8 *)((long)register0x00000020 + -0x2a0);
              *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0x538d08;
              runtime_gcWriteBarrierCX();
              *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0x538d19;
              runtime_gcWriteBarrier();
            }
            *(undefined8 *)((long)register0x00000020 + -0x270) =
                 *(undefined8 *)((long)register0x00000020 + 8);
            *(undefined8 *)((long)register0x00000020 + -0x268) =
                 *(undefined8 *)((long)register0x00000020 + 0x10);
            *(undefined8 *)((long)register0x00000020 + -0xd0) = 0;
            *(undefined8 *)((long)register0x00000020 + -0x3c8) = uVar14;
            *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0x538d6f;
            FUN_0051a16b((undefined1 *)((long)register0x00000020 + -200));
            *(undefined8 *)((long)register0x00000020 + -0xd0) = uVar12;
            *(undefined8 *)((long)register0x00000020 + -200) = extraout_RDX;
            *(undefined8 *)((long)register0x00000020 + -0xc0) =
                 *(undefined8 *)((long)register0x00000020 + 0x28);
            prVar13 = (runtime__type *)((long)register0x00000020 + -0xb8);
            puVar16 = (undefined1 *)((long)register0x00000020 + 0x30);
            *(undefined8 *)((long)register0x00000020 + -0x3c8) =
                 *(undefined8 *)((long)register0x00000020 + -0x3c8);
            *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0x538db2;
            FUN_0051a4a6();
            uVar14 = *(undefined8 *)((long)register0x00000020 + -0x3c8);
            *(undefined **)((long)register0x00000020 + -0x3b8) = &DAT_0024d720;
            *(runtime__type **)((long)register0x00000020 + -0x3b0) =
                 (runtime__type *)((long)register0x00000020 + -0x270);
            *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0x538dd3;
            runtime_convT2E((runtime__type *)((long)register0x00000020 + -0x270),pvVar15);
            *(runtime__type **)((long)register0x00000020 + -0x288) =
                 *(runtime__type **)((long)register0x00000020 + -0x3a8);
            *(undefined8 *)((long)register0x00000020 + -0x298) =
                 *(undefined8 *)((long)register0x00000020 + -0x3a0);
            *(undefined **)((long)register0x00000020 + -0x3b8) = &DAT_002582a0;
            *(undefined1 **)((long)register0x00000020 + -0x3b0) =
                 (undefined1 *)((long)register0x00000020 + -0xd0);
            *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0x538e0a;
            rVar19 = runtime_convT2E(*(runtime__type **)((long)register0x00000020 + -0x3a8),
                                     (undefined1 *)((long)register0x00000020 + -0xd0));
            key_00._type = rVar19.data;
            m = *(sync_Map **)((long)register0x00000020 + -0x3a8);
            pvVar15 = *(void **)((long)register0x00000020 + -0x3a0);
            *(sync_Map **)((long)register0x00000020 + -0x3b8) = &reflect_layoutCache;
            *(undefined8 *)((long)register0x00000020 + -0x3b0) =
                 *(undefined8 *)((long)register0x00000020 + -0x288);
            *(undefined8 *)((long)register0x00000020 + -0x3a8) =
                 *(undefined8 *)((long)register0x00000020 + -0x298);
            *(sync_Map **)((long)register0x00000020 + -0x3a0) = m;
            *(void **)((long)register0x00000020 + -0x398) = pvVar15;
            *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0x538e48;
            value.data = puVar16;
            value._type = prVar13;
            key_00.data = pvVar15;
            mVar22 = sync___Map__LoadOrStore(m,key_00,value);
            want = mVar22.actual.data;
            prVar13 = *(runtime__type **)((long)register0x00000020 + -0x388);
            *(undefined8 *)((long)register0x00000020 + -0xd0) = 0;
            *(undefined8 *)((long)register0x00000020 + -0x3c8) = uVar14;
            *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0x538e79;
            puVar5 = (undefined *)FUN_0051a16b((undefined1 *)((long)register0x00000020 + -200));
            if (puVar5 == &DAT_002582a0) {
              *(uintptr *)((long)register0x00000020 + -0xd0) = prVar13->size;
              *(undefined8 *)((long)register0x00000020 + -0x3c8) =
                   *(undefined8 *)((long)register0x00000020 + -0x3c8);
              *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0x538eb3;
              FUN_0051a498((undefined1 *)((long)register0x00000020 + -200),&prVar13->ptrdata);
              *(undefined8 *)((long)register0x00000020 + -0x260) =
                   *(undefined8 *)((long)register0x00000020 + -0xd0);
              *(undefined8 *)((long)register0x00000020 + -0x3c8) =
                   *(undefined8 *)((long)register0x00000020 + -0x3c8);
              *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0x538eef;
              FUN_0051a498((undefined1 *)((long)register0x00000020 + -600),
                           (undefined1 *)((long)register0x00000020 + -200));
              uVar14 = *(undefined8 *)((long)register0x00000020 + -600);
              *(undefined8 *)((long)register0x00000020 + 0x28) =
                   *(undefined8 *)((long)register0x00000020 + -0x250);
              *(undefined8 *)((long)register0x00000020 + -0x3c8) =
                   *(undefined8 *)((long)register0x00000020 + -0x3c8);
              *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0x538f32;
              uVar9 = FUN_0051a4a6((undefined1 *)((long)register0x00000020 + 0x30),
                                   (undefined1 *)((long)register0x00000020 + -0x248));
              *(undefined8 *)((long)register0x00000020 + 0x18) = uVar9;
              *(undefined8 *)((long)register0x00000020 + 0x20) = uVar14;
              auVar24 = CONCAT88(uVar9,want);
              return (multireturn_reflect_rtype___sync_Pool___reflect_abiDesc__x86_64)
                     CONCAT18416(abi_return_result_alias,auVar24);
            }
            *(undefined **)((long)register0x00000020 + -0x3b8) = puVar5;
            *(undefined **)((long)register0x00000020 + -0x3b0) = &DAT_002582a0;
            *(undefined8 **)((long)register0x00000020 + -0x3a8) = &DAT_0022dfe0;
            *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0x538f70;
            runtime_panicdottypeE((runtime__type *)&DAT_0022dfe0,want,prVar13);
LAB_00538f70:
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0x538f7a;
            runtime_panicIndex();
          }
          *(undefined8 *)((long)register0x00000020 + -0xd0) = 0;
          puVar8 = (uint8 *)((long)register0x00000020 + -200);
          *(undefined8 *)((long)register0x00000020 + -0x3c8) = unaff_RBP;
          *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0x53892f;
          puVar5 = (undefined *)FUN_0051a16b();
          unaff_RBP = *(undefined8 *)((long)register0x00000020 + -0x3c8);
          if (puVar5 == &DAT_002582a0) {
            *(uintptr *)((long)register0x00000020 + -0xd0) = prVar13->size;
            *(undefined8 *)((long)register0x00000020 + -0x3c8) = unaff_RBP;
            *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0x53896f;
            FUN_0051a498((undefined1 *)((long)register0x00000020 + -200),&prVar13->ptrdata);
            *(undefined8 *)((long)register0x00000020 + -0x198) =
                 *(undefined8 *)((long)register0x00000020 + -0xd0);
            *(undefined8 *)((long)register0x00000020 + -0x3c8) =
                 *(undefined8 *)((long)register0x00000020 + -0x3c8);
            *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0x5389af;
            FUN_0051a498((undefined1 *)((long)register0x00000020 + -400),
                         (undefined1 *)((long)register0x00000020 + -200));
            uVar14 = *(undefined8 *)((long)register0x00000020 + -400);
            *(undefined8 *)((long)register0x00000020 + 0x28) =
                 *(undefined8 *)((long)register0x00000020 + -0x188);
            *(undefined8 *)((long)register0x00000020 + -0x3c8) =
                 *(undefined8 *)((long)register0x00000020 + -0x3c8);
            *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0x5389f2;
            uVar6 = FUN_0051a4a6((undefined1 *)((long)register0x00000020 + 0x30),
                                 (undefined1 *)((long)register0x00000020 + -0x180));
            *(undefined8 *)((long)register0x00000020 + 0x18) = uVar6;
            *(undefined8 *)((long)register0x00000020 + 0x20) = uVar14;
            auVar23 = CONCAT88(uVar6,rcvr_00);
            return (multireturn_reflect_rtype___sync_Pool___reflect_abiDesc__x86_64)
                   CONCAT18416(abi_return_result_alias,auVar23);
          }
          *(undefined **)((long)register0x00000020 + -0x3b8) = puVar5;
          *(undefined **)((long)register0x00000020 + -0x3b0) = &DAT_002582a0;
          *(undefined8 **)((long)register0x00000020 + -0x3a8) = &DAT_0022dfe0;
          *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0x538f94;
          runtime_panicdottypeE((runtime__type *)&DAT_0022dfe0,(runtime__type *)rcvr_00,prVar13);
          prVar7 = extraout_RAX_00;
        }
        *(runtime__type **)((long)register0x00000020 + -0x3b8) = prVar13;
        *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0x538f9d;
        sVar20 = reflect___rtype__String(prVar7);
        a0_01.str = (uint8 *)sVar20.len;
        pauVar3 = *(runtime_tmpBuf **)((long)register0x00000020 + -0x3b0);
        iVar4 = *(int *)((long)register0x00000020 + -0x3a8);
        *(undefined8 *)((long)register0x00000020 + -0x3b8) = 0;
        *(undefined **)((long)register0x00000020 + -0x3b0) = &DAT_002a7c98;
        *(undefined8 *)((long)register0x00000020 + -0x3a8) = 0x2c;
        *(runtime_tmpBuf **)((long)register0x00000020 + -0x3a0) = pauVar3;
        *(int *)((long)register0x00000020 + -0x398) = iVar4;
        *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0x538fd3;
        a1_00.len = (int)in_RSI;
        a1_00.str = puVar8;
        a0_01.len = iVar4;
        sVar20 = runtime_concatstring2(pauVar3,a0_01,a1_00);
        val.len = (void *)sVar20.len;
        *(uint8 **)((long)register0x00000020 + -0x3b8) =
             *(uint8 **)((long)register0x00000020 + -0x390);
        *(undefined8 *)((long)register0x00000020 + -0x3b0) =
             *(undefined8 *)((long)register0x00000020 + -0x388);
        *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0x538feb;
        val.str = *(uint8 **)((long)register0x00000020 + -0x390);
        runtime_convTstring(val);
        *(undefined **)((long)register0x00000020 + -0x3b8) = &DAT_00225520;
        *(runtime__type **)((long)register0x00000020 + -0x3b0) =
             *(runtime__type **)((long)register0x00000020 + -0x3a8);
        *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0x539005;
        e.data = val.len;
        e._type = *(runtime__type **)((long)register0x00000020 + -0x3a8);
        runtime_gopanic(e);
        prVar7 = extraout_RAX_01;
      }
      *(reflect_rtype **)((long)register0x00000020 + -0x3b8) = prVar7;
      *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0x53900e;
      sVar20 = reflect___rtype__String(prVar7);
      a0_02.str = (uint8 *)sVar20.len;
      pauVar3 = *(runtime_tmpBuf **)((long)register0x00000020 + -0x3b0);
      iVar4 = *(int *)((long)register0x00000020 + -0x3a8);
      *(undefined8 *)((long)register0x00000020 + -0x3b8) = 0;
      *(undefined **)((long)register0x00000020 + -0x3b0) = &DAT_002a545a;
      *(undefined8 *)((long)register0x00000020 + -0x3a8) = 0x25;
      *(runtime_tmpBuf **)((long)register0x00000020 + -0x3a0) = pauVar3;
      *(int *)((long)register0x00000020 + -0x398) = iVar4;
      *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0x539045;
      a1_01.len = (int)in_RSI;
      a1_01.str = puVar8;
      a0_02.len = iVar4;
      sVar20 = runtime_concatstring2(pauVar3,a0_02,a1_01);
      val_00.len = (void *)sVar20.len;
      *(uint8 **)((long)register0x00000020 + -0x3b8) =
           *(uint8 **)((long)register0x00000020 + -0x390);
      *(undefined8 *)((long)register0x00000020 + -0x3b0) =
           *(undefined8 *)((long)register0x00000020 + -0x388);
      *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0x53905d;
      val_00.str = *(uint8 **)((long)register0x00000020 + -0x390);
      runtime_convTstring(val_00);
      *(undefined **)((long)register0x00000020 + -0x3b8) = &DAT_00225520;
      *(runtime__type **)((long)register0x00000020 + -0x3b0) =
           *(runtime__type **)((long)register0x00000020 + -0x3a8);
      *(undefined8 *)((long)register0x00000020 + -0x3c0) = 0x539077;
      e_00.data = val_00.len;
      e_00._type = *(runtime__type **)((long)register0x00000020 + -0x3a8);
      runtime_gopanic(e_00);
    }
    *(undefined8 *)(puVar16 + -8) = 0x53907d;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar16;
  } while( true );
}

