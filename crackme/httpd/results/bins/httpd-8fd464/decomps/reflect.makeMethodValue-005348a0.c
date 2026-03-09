
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.makeMethodValue(string op, reflect.Value v, reflect.Value
   ~r2) */

reflect_Value reflect_makeMethodValue(string op,reflect_Value v)

{
  undefined8 uVar1;
  int iVar2;
  reflect_funcType *t;
  undefined8 *extraout_RAX;
  undefined8 *puVar3;
  long lVar4;
  runtime__type *want;
  undefined1 *puVar5;
  undefined1 *unaff_RBP;
  reflect_flag rVar6;
  int iVar7;
  int in_R8;
  long in_FS_OFFSET;
  string op_00;
  interface___ e;
  reflect_Value v_00;
  reflect_Value v_01;
  multireturn_reflect_rtype___reflect_funcType___void___ mVar8;
  reflect_Value rVar9;
  string op_spill;
  reflect_Value v_spill;
  runtime__type *iface;
  
  want = (runtime__type *)op.len;
  do {
                    /* Unresolved local var: reflect.flag fl@[???]
                       Unresolved local var: reflect.funcType * ftyp@[???]
                       Unresolved local var: uintptr code@[???]
                       Unresolved local var: reflect.methodValue * fv@[???]
                       Unresolved local var: reflect.Value rcvr@[???]
                       Unresolved local var: reflect.abiDesc abi@[???] */
    puVar5 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) <
        (undefined1 *)((long)register0x00000020 + -0x1f8)) {
      puVar5 = (undefined1 *)((long)register0x00000020 + -0x278);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      uVar1 = *(undefined8 *)((long)register0x00000020 + 0x28);
      if (((uint)uVar1 >> 9 & 1) != 0) {
        iface = *(runtime__type **)((long)register0x00000020 + 0x18);
        *(uint8 *)((long)register0x00000020 + -0x199) = iface->kind;
        *(runtime__type **)((long)register0x00000020 + -0x278) = iface;
        *(undefined8 *)((long)register0x00000020 + -0x270) =
             *(undefined8 *)((long)register0x00000020 + 0x20);
        *(undefined8 *)((long)register0x00000020 + -0x268) = uVar1;
        *(undefined8 *)((long)register0x00000020 + -0x280) = 0x534914;
        v_01.ptr = (void *)*(undefined8 *)((long)register0x00000020 + 0x20);
        v_01.typ = (reflect_rtype *)uVar1;
        v_01.flag = (reflect_flag)iface;
        reflect_Value_Type(v_01);
        want = *(runtime__type **)((long)register0x00000020 + -0x260);
        if (want == (runtime__type *)go_itab__reflect_rtype_reflect_Type) {
          *(undefined8 *)((long)register0x00000020 + -0x180) =
               *(undefined8 *)((long)register0x00000020 + -600);
          *(ulong *)((long)register0x00000020 + -0x198) =
               (ulong)(*(byte *)((long)register0x00000020 + -0x199) & 0x1f) |
               *(ulong *)((long)register0x00000020 + 0x28) & 0x1e0;
          *(code **)((long)register0x00000020 + -400) = reflect_methodValueCall;
          *(undefined8 *)((long)register0x00000020 + -0xc0) = 0;
          *(undefined1 **)((long)register0x00000020 + -0x288) = unaff_RBP;
          *(undefined8 *)((long)register0x00000020 + -0x280) = 0x5349af;
          t = (reflect_funcType *)FUN_0051a16f((undefined1 *)((long)register0x00000020 + -200));
          uVar1 = *(undefined8 *)((long)register0x00000020 + -0x288);
          *(reflect_funcType **)((long)register0x00000020 + -0x278) = t;
          *(undefined8 *)((long)register0x00000020 + -0x270) = 0;
          *(undefined8 *)((long)register0x00000020 + -0x280) = 0x5349c5;
          reflect_funcLayout(t,(reflect_rtype *)go_itab__reflect_rtype_reflect_Type);
          *(undefined8 *)((long)register0x00000020 + -0xc0) =
               *(undefined8 *)((long)register0x00000020 + -600);
          *(undefined8 *)((long)register0x00000020 + -0x288) = uVar1;
          *(undefined8 *)((long)register0x00000020 + -0x280) = 0x5349ef;
          FUN_0051a4a6((undefined1 *)((long)register0x00000020 + -0xb8),
                       (undefined1 *)((long)register0x00000020 + -0x250));
          *(undefined8 *)((long)register0x00000020 + -0x178) =
               *(undefined8 *)((long)register0x00000020 + -0xc0);
          *(undefined8 *)((long)register0x00000020 + -0x288) =
               *(undefined8 *)((long)register0x00000020 + -0x288);
          *(undefined8 *)((long)register0x00000020 + -0x280) = 0x534a2f;
          FUN_0051a4a6((undefined1 *)((long)register0x00000020 + -0x170),
                       (undefined1 *)((long)register0x00000020 + -0xb8));
          *(undefined **)((long)register0x00000020 + -0x278) = &DAT_00258360;
          *(undefined8 *)((long)register0x00000020 + -0x280) = 0x534a45;
          runtime_newobject((runtime__type *)&DAT_00258360);
          puVar3 = *(undefined8 **)((long)register0x00000020 + -0x270);
          *puVar3 = *(undefined8 *)((long)register0x00000020 + -400);
          if (runtime_writeBarrier._0_4_ == 0) {
            puVar3[1] = *(undefined8 *)((long)register0x00000020 + -0xd0);
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -0x280) = 0x534a75;
            runtime_gcWriteBarrierCX();
            puVar3 = extraout_RAX;
          }
          *(undefined8 **)((long)register0x00000020 + -0x188) = puVar3;
          puVar3[2] = *(undefined8 *)((long)register0x00000020 + -0xe8);
          lVar4 = *(long *)((long)register0x00000020 + 0x28) >> 10;
          puVar3[4] = lVar4;
          iVar2 = *(int *)((long)register0x00000020 + -0x198);
          puVar3[7] = iVar2;
          if (runtime_writeBarrier._0_4_ == 0) {
            rVar6 = *(reflect_flag *)((long)register0x00000020 + 0x18);
            puVar3[5] = rVar6;
            iVar7 = *(int *)((long)register0x00000020 + 0x20);
            puVar3[6] = iVar7;
          }
          else {
            rVar6 = *(reflect_flag *)((long)register0x00000020 + 0x18);
            *(undefined8 *)((long)register0x00000020 + -0x280) = 0x534ad9;
            runtime_gcWriteBarrierSI();
            iVar7 = *(int *)((long)register0x00000020 + 0x20);
            *(undefined8 *)((long)register0x00000020 + -0x280) = 0x534aea;
            runtime_gcWriteBarrierR8();
            in_R8 = iVar7;
          }
          *(undefined8 *)((long)register0x00000020 + -0x278) =
               *(undefined8 *)((long)register0x00000020 + 8);
          *(uint8 **)((long)register0x00000020 + -0x270) =
               *(uint8 **)((long)register0x00000020 + 0x10);
          *(reflect_flag *)((long)register0x00000020 + -0x268) = rVar6;
          *(int *)((long)register0x00000020 + -0x260) = iVar7;
          *(int *)((long)register0x00000020 + -600) = iVar2;
          *(long *)((long)register0x00000020 + -0x250) = lVar4;
          *(undefined8 *)((long)register0x00000020 + -0x280) = 0x534b1f;
          op_00.len = iVar2;
          op_00.str = *(uint8 **)((long)register0x00000020 + 0x10);
          v_00.ptr = (void *)iVar7;
          v_00.typ = (reflect_rtype *)lVar4;
          v_00.flag = rVar6;
          mVar8 = reflect_methodReceiver(op_00,v_00,in_R8);
          rVar9.flag = mVar8.fn;
          rVar9.ptr = mVar8.t;
          *(undefined8 *)((long)register0x00000020 + 0x30) =
               *(undefined8 *)((long)register0x00000020 + -0x180);
          *(undefined8 *)((long)register0x00000020 + 0x38) =
               *(undefined8 *)((long)register0x00000020 + -0x188);
          rVar9.typ = *(ulong *)((long)register0x00000020 + 0x28) & 0x60 | 0x13;
          *(ulong *)((long)register0x00000020 + 0x40) = rVar9.typ;
          return rVar9;
        }
        *(runtime__type **)((long)register0x00000020 + -0x278) = want;
        *(undefined **)((long)register0x00000020 + -0x270) = &DAT_00281a20;
        *(undefined **)((long)register0x00000020 + -0x268) = &DAT_00277b20;
        *(undefined8 *)((long)register0x00000020 + -0x280) = 0x534b8a;
        runtime_panicdottypeI((runtime_itab *)&DAT_00277b20,want,iface);
      }
      *(undefined **)((long)register0x00000020 + -0x278) = &DAT_00225520;
      *(undefined1 **)((long)register0x00000020 + -0x270) = reflect__stmp_13;
      *(undefined8 *)((long)register0x00000020 + -0x280) = 0x534ba6;
      e.data = want;
      e._type = (runtime__type *)reflect__stmp_13;
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar5 + -8) = 0x534bac;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar5;
  } while( true );
}

