
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.Value.Index(reflect.Value v, int i, reflect.Value ~r1) */

reflect_Value reflect_Value_Index(reflect_Value v,int i)

{
  byte bVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  runtime__type *prVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong extraout_RAX;
  undefined1 *puVar9;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  interface___ e;
  interface___ e_00;
  interface___ e_01;
  interface___ e_02;
  reflect_Value rVar10;
  reflect_Value rVar11;
  reflect_Value rVar12;
  reflect_arrayType *tt;
  internal_unsafeheader_Slice *s;
  int i_spill;
  
  e.data = v.ptr;
  do {
    puVar9 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar9 = (undefined1 *)((long)register0x00000020 + -0x20);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      uVar2 = *(ulong *)((long)register0x00000020 + 0x18);
      uVar8 = uVar2 & 0x1f;
                    /* Unresolved local var: reflect.rtype * typ@[???]
                       Unresolved local var: uintptr offset@[???]
                       Unresolved local var: void * val@[???]
                       Unresolved local var: reflect.flag fl@[???] */
      if (uVar8 == 0x11) {
        if (*(ulong *)((long)register0x00000020 + 0x20) <
            *(ulong *)(*(long *)((long)register0x00000020 + 8) + 0x40)) {
          plVar3 = *(long **)(*(long *)((long)register0x00000020 + 8) + 0x30);
          lVar4 = *plVar3;
          bVar1 = *(byte *)((long)plVar3 + 0x17);
          *(long **)((long)register0x00000020 + 0x28) = plVar3;
          *(ulong *)((long)register0x00000020 + 0x30) =
               *(ulong *)((long)register0x00000020 + 0x20) * lVar4 +
               *(long *)((long)register0x00000020 + 0x10);
          uVar8 = 0;
          if ((uVar2 & 0x60) != 0) {
            uVar8 = 0x20;
          }
          rVar10.flag = uVar2 & 0x180 | uVar8;
          *(ulong *)((long)register0x00000020 + 0x38) = bVar1 & 0x1f | rVar10.flag;
          rVar10.ptr = (void *)lVar4;
          rVar10.typ = (reflect_rtype *)uVar8;
          return rVar10;
        }
      }
      else {
                    /* Unresolved local var: reflect.rtype * typ@[???]
                       Unresolved local var: void * val@[???]
                       Unresolved local var: reflect.flag fl@[???] */
        if (uVar8 == 0x17) {
          if (*(ulong *)((long)register0x00000020 + 0x20) <
              (ulong)(*(long **)((long)register0x00000020 + 0x10))[1]) {
            plVar3 = *(long **)(*(long *)((long)register0x00000020 + 8) + 0x30);
            lVar4 = *plVar3;
            lVar5 = **(long **)((long)register0x00000020 + 0x10);
            bVar1 = *(byte *)((long)plVar3 + 0x17);
            *(long **)((long)register0x00000020 + 0x28) = plVar3;
            *(ulong *)((long)register0x00000020 + 0x30) =
                 *(ulong *)((long)register0x00000020 + 0x20) * lVar4 + lVar5;
            uVar8 = 0;
            if ((uVar2 & 0x60) != 0) {
              uVar8 = 0x20;
            }
            *(ulong *)((long)register0x00000020 + 0x38) = bVar1 & 0x1f | uVar8 | 0x180;
            rVar11.ptr = plVar3;
            rVar11.typ = (reflect_rtype *)uVar8;
            rVar11.flag = 0x20;
            return rVar11;
          }
        }
        else {
                    /* Unresolved local var: void * p@[???]
                       Unresolved local var: reflect.flag fl@[???] */
          if (uVar8 == 0x18) {
            if (*(ulong *)((long)register0x00000020 + 0x20) <
                (ulong)(*(long **)((long)register0x00000020 + 0x10))[1]) {
              lVar4 = **(long **)((long)register0x00000020 + 0x10);
              *(reflect_rtype **)((long)register0x00000020 + 0x28) = reflect_uint8Type;
              *(ulong *)((long)register0x00000020 + 0x30) =
                   *(ulong *)((long)register0x00000020 + 0x20) + lVar4;
              uVar8 = 0;
              if ((uVar2 & 0x60) != 0) {
                uVar8 = 0x20;
              }
              rVar12.typ = uVar8 | 0x88;
              *(ulong *)((long)register0x00000020 + 0x38) = rVar12.typ;
              rVar12.ptr = reflect_uint8Type;
              rVar12.flag = 0x20;
              return rVar12;
            }
            *(undefined **)((long)register0x00000020 + -0x20) = &DAT_00225520;
            *(undefined ***)((long)register0x00000020 + -0x18) = &reflect__stmp_82;
            *(undefined8 *)((long)register0x00000020 + -0x28) = 0x53b445;
            e._type = (runtime__type *)&reflect__stmp_82;
            runtime_gopanic(e);
            uVar8 = extraout_RAX;
          }
          *(ulong *)((long)register0x00000020 + -0x10) = uVar8;
          *(undefined **)((long)register0x00000020 + -0x20) = &DAT_0024d5e0;
          *(undefined8 *)((long)register0x00000020 + -0x28) = 0x53b45a;
          runtime_newobject((runtime__type *)&DAT_0024d5e0);
          prVar6 = *(runtime__type **)((long)register0x00000020 + -0x18);
          prVar6->ptrdata = 0x13;
          prVar6->size = (uintptr)&DAT_0029b73f;
          uVar7 = *(undefined8 *)((long)register0x00000020 + -0x10);
          prVar6->hash = (int)uVar7;
          prVar6->tflag = (char)((ulong)uVar7 >> 0x20);
          prVar6->align = (char)((ulong)uVar7 >> 0x28);
          prVar6->fieldAlign = (char)((ulong)uVar7 >> 0x30);
          prVar6->kind = (char)((ulong)uVar7 >> 0x38);
          *(undefined **)((long)register0x00000020 + -0x20) = &DAT_00233920;
          *(runtime__type **)((long)register0x00000020 + -0x18) = prVar6;
          *(undefined8 *)((long)register0x00000020 + -0x28) = 0x53b48f;
          e_00.data = e.data;
          e_00._type = prVar6;
          runtime_gopanic(e_00);
        }
        *(undefined **)((long)register0x00000020 + -0x20) = &DAT_00225520;
        *(undefined1 **)((long)register0x00000020 + -0x18) = reflect__stmp_14;
        *(undefined8 *)((long)register0x00000020 + -0x28) = 0x53b4ab;
        e_01.data = e.data;
        e_01._type = (runtime__type *)reflect__stmp_14;
        runtime_gopanic(e_01);
      }
      *(undefined **)((long)register0x00000020 + -0x20) = &DAT_00225520;
      *(undefined ***)((long)register0x00000020 + -0x18) = &reflect__stmp_80;
      *(undefined8 *)((long)register0x00000020 + -0x28) = 0x53b4c7;
      e_02.data = e.data;
      e_02._type = (runtime__type *)&reflect__stmp_80;
      runtime_gopanic(e_02);
    }
    *(undefined8 *)(puVar9 + -8) = 0x53b4cd;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar9;
  } while( true );
}

