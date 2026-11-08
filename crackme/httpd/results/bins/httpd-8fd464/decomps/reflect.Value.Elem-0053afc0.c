
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.Value.Elem(reflect.Value v, reflect.Value ~r0) */

reflect_Value reflect_Value_Elem(reflect_Value v)

{
  byte bVar1;
  long lVar2;
  runtime__type *prVar3;
  undefined1 auVar4 [24];
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  reflect_flag rVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  interface___ e;
  reflect_Value rVar11;
  reflect_Value rVar12;
  reflect_ptrType *tt;
  void *ptr;
  
  e.data = v.ptr;
  do {
                    /* Unresolved local var: reflect.Kind k@[???] */
    puVar10 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar10 = (undefined1 *)((long)register0x00000020 + -0x30);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      uVar9 = *(ulong *)((long)register0x00000020 + 0x18);
      uVar5 = uVar9 & 0x1f;
                    /* Unresolved local var: reflect.Value x@[???]
                       Unresolved local var: interface_{} eface@[???] */
      if (uVar5 == 0x14) {
        *(reflect_rtype **)((long)register0x00000020 + -0x30) =
             *(reflect_rtype **)((long)register0x00000020 + 8);
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0x53b079;
        reflect___rtype__NumMethod(*(reflect_rtype **)((long)register0x00000020 + 8));
        if (*(long *)((long)register0x00000020 + -0x28) == 0) {
          uVar7 = **(undefined8 **)((long)register0x00000020 + 0x10);
          lVar6 = (*(undefined8 **)((long)register0x00000020 + 0x10))[1];
        }
        else {
          lVar2 = **(long **)((long)register0x00000020 + 0x10);
          lVar6 = (*(long **)((long)register0x00000020 + 0x10))[1];
          uVar7 = 0;
          if (lVar2 != 0) {
            uVar7 = *(undefined8 *)(lVar2 + 8);
          }
        }
        *(undefined8 *)((long)register0x00000020 + -0x18) = uVar7;
        *(long *)((long)register0x00000020 + -0x10) = lVar6;
                    /* Unresolved local var: reflect.rtype * t@[???]
                       Unresolved local var: reflect.flag f@[???] */
        rVar8 = *(reflect_flag *)((long)register0x00000020 + -0x18);
        if (rVar8 == 0) {
          rVar8 = 0;
          lVar6 = 0;
          uVar9 = 0;
        }
        else {
          bVar1 = *(byte *)(rVar8 + 0x17);
          e.data = (undefined1 *)(ulong)(uint)bVar1;
          uVar9 = (ulong)(bVar1 & 0x1f);
          if ((bVar1 & 0x20) == 0) {
            uVar9 = uVar9 | 0x80;
          }
        }
        uVar5 = 0;
        if (uVar9 != 0) {
          uVar5 = 0;
          e.data = &DAT_00000020;
          if ((*(ulong *)((long)register0x00000020 + 0x18) & 0x60) != 0) {
            uVar5 = 0x20;
          }
          uVar5 = uVar9 | uVar5;
        }
        *(reflect_flag *)((long)register0x00000020 + 0x20) = rVar8;
        *(long *)((long)register0x00000020 + 0x28) = lVar6;
        *(ulong *)((long)register0x00000020 + 0x30) = uVar5;
        rVar12.ptr = e.data;
        rVar12.typ = (reflect_rtype *)lVar6;
        rVar12.flag = rVar8;
        return rVar12;
      }
                    /* Unresolved local var: reflect.rtype * typ@[???]
                       Unresolved local var: reflect.flag fl@[???] */
      if (uVar5 == 0x16) {
        if (((uint)uVar9 >> 7 & 1) == 0) {
          lVar6 = *(long *)((long)register0x00000020 + 0x10);
        }
        else {
          lVar6 = **(long **)((long)register0x00000020 + 0x10);
        }
        if (lVar6 == 0) {
          *(undefined8 *)((long)register0x00000020 + 0x20) = 0;
          *(undefined8 *)((long)register0x00000020 + 0x28) = 0;
          *(undefined8 *)((long)register0x00000020 + 0x30) = 0;
          auVar4._8_8_ = uVar9;
          auVar4._0_8_ = e.data;
          auVar4._16_8_ = 0;
          return (reflect_Value)(auVar4 << 0x40);
        }
        bVar1 = *(byte *)(*(long *)(*(long *)((long)register0x00000020 + 8) + 0x30) + 0x17);
        *(long *)((long)register0x00000020 + 0x20) =
             *(long *)(*(long *)((long)register0x00000020 + 8) + 0x30);
        *(long *)((long)register0x00000020 + 0x28) = lVar6;
        rVar11.ptr._0_4_ = bVar1 & 0x1f;
        rVar11.flag = uVar9 & 0x60 | (ulong)(uint)rVar11.ptr | 0x180;
        *(ulong *)((long)register0x00000020 + 0x30) = rVar11.flag;
        rVar11.typ = (reflect_rtype *)lVar6;
        rVar11.ptr._4_4_ = 0;
        return rVar11;
      }
      *(ulong *)((long)register0x00000020 + -0x20) = uVar5;
      *(undefined **)((long)register0x00000020 + -0x30) = &DAT_0024d5e0;
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x53b130;
      runtime_newobject((runtime__type *)&DAT_0024d5e0);
      prVar3 = *(runtime__type **)((long)register0x00000020 + -0x28);
      prVar3->ptrdata = 0x12;
      prVar3->size = (uintptr)&DAT_0029ac92;
      uVar7 = *(undefined8 *)((long)register0x00000020 + -0x20);
      prVar3->hash = (int)uVar7;
      prVar3->tflag = (char)((ulong)uVar7 >> 0x20);
      prVar3->align = (char)((ulong)uVar7 >> 0x28);
      prVar3->fieldAlign = (char)((ulong)uVar7 >> 0x30);
      prVar3->kind = (char)((ulong)uVar7 >> 0x38);
      *(undefined **)((long)register0x00000020 + -0x30) = &DAT_00233920;
      *(runtime__type **)((long)register0x00000020 + -0x28) = prVar3;
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x53b165;
      e._type = prVar3;
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar10 + -8) = 0x53b16b;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar10;
  } while( true );
}

