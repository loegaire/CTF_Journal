
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.Value.Pointer(reflect.Value v, uintptr ~r0) */

uintptr reflect_Value_Pointer(reflect_Value v)

{
  runtime__type *prVar1;
  undefined8 uVar2;
  ulong uVar3;
  uintptr *puVar4;
  uintptr uVar5;
  long *plVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  interface___ e;
  interface___ e_00;
  interface___ e_01;
  reflect_Value v_spill;
  
  e.data = v.ptr;
  do {
                    /* Unresolved local var: reflect.Kind k@[???] */
    puVar8 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar8 = (undefined1 *)((long)register0x00000020 + -0x20);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      uVar3 = *(ulong *)((long)register0x00000020 + 0x18) & 0x1f;
      *(ulong *)((long)register0x00000020 + -0x10) = uVar3;
      uVar7 = (uint)*(ulong *)((long)register0x00000020 + 0x18);
      if (uVar3 < 0x16) {
        if (uVar3 == 0x12) {
          plVar6 = *(long **)((long)register0x00000020 + 8);
LAB_0053c651:
          if ((*plVar6 == 8) && (plVar6[1] != 0)) {
            if ((uVar7 >> 7 & 1) == 0) {
              uVar5 = *(uintptr *)((long)register0x00000020 + 0x10);
            }
            else {
              uVar5 = **(uintptr **)((long)register0x00000020 + 0x10);
            }
            *(uintptr *)((long)register0x00000020 + 0x20) = uVar5;
            return uVar5;
          }
          *(undefined **)((long)register0x00000020 + -0x20) = &DAT_00225520;
          *(undefined ***)((long)register0x00000020 + -0x18) = &reflect__stmp_10;
          *(undefined8 *)((long)register0x00000020 + -0x28) = 0x53c6b5;
          e._type = (runtime__type *)&reflect__stmp_10;
          runtime_gopanic(e);
          goto LAB_0053c6b5;
        }
                    /* Unresolved local var: void * p@[???] */
        if (uVar3 != 0x13) {
          if (uVar3 != 0x15) goto LAB_0053c6b5;
          plVar6 = *(long **)((long)register0x00000020 + 8);
          goto LAB_0053c651;
        }
        if ((uVar7 >> 9 & 1) != 0) {
          *(code **)((long)register0x00000020 + 0x20) = reflect_methodValueCall;
          return (uintptr)reflect_methodValueCall;
        }
        if ((**(long **)((long)register0x00000020 + 8) == 8) &&
           ((*(long **)((long)register0x00000020 + 8))[1] != 0)) {
          if ((uVar7 >> 7 & 1) == 0) {
            puVar4 = *(uintptr **)((long)register0x00000020 + 0x10);
          }
          else {
            puVar4 = (uintptr *)**(undefined8 **)((long)register0x00000020 + 0x10);
          }
          uVar5 = 0;
          if (puVar4 != (uintptr *)0x0) {
            uVar5 = *puVar4;
          }
          *(uintptr *)((long)register0x00000020 + 0x20) = uVar5;
          return uVar5;
        }
      }
      else {
        if (uVar3 == 0x16) {
          plVar6 = *(long **)((long)register0x00000020 + 8);
          if (plVar6[1] == 0) {
            uVar5 = **(uintptr **)((long)register0x00000020 + 0x10);
            *(uintptr *)((long)register0x00000020 + 0x20) = uVar5;
            return uVar5;
          }
          goto LAB_0053c651;
        }
        if (uVar3 == 0x17) {
          uVar5 = **(uintptr **)((long)register0x00000020 + 0x10);
          *(uintptr *)((long)register0x00000020 + 0x20) = uVar5;
          return uVar5;
        }
        if (uVar3 == 0x1a) {
          plVar6 = *(long **)((long)register0x00000020 + 8);
          goto LAB_0053c651;
        }
LAB_0053c6b5:
        *(undefined **)((long)register0x00000020 + -0x20) = &DAT_0024d5e0;
        *(undefined8 *)((long)register0x00000020 + -0x28) = 0x53c6c5;
        runtime_newobject((runtime__type *)&DAT_0024d5e0);
        prVar1 = *(runtime__type **)((long)register0x00000020 + -0x18);
        prVar1->ptrdata = 0x15;
        prVar1->size = (uintptr)&DAT_0029ca1b;
        uVar2 = *(undefined8 *)((long)register0x00000020 + -0x10);
        prVar1->hash = (int)uVar2;
        prVar1->tflag = (char)((ulong)uVar2 >> 0x20);
        prVar1->align = (char)((ulong)uVar2 >> 0x28);
        prVar1->fieldAlign = (char)((ulong)uVar2 >> 0x30);
        prVar1->kind = (char)((ulong)uVar2 >> 0x38);
        *(undefined **)((long)register0x00000020 + -0x20) = &DAT_00233920;
        *(runtime__type **)((long)register0x00000020 + -0x18) = prVar1;
        *(undefined8 *)((long)register0x00000020 + -0x28) = 0x53c6fa;
        e_00.data = e.data;
        e_00._type = prVar1;
        runtime_gopanic(e_00);
      }
      *(undefined **)((long)register0x00000020 + -0x20) = &DAT_00225520;
      *(undefined ***)((long)register0x00000020 + -0x18) = &reflect__stmp_10;
      *(undefined8 *)((long)register0x00000020 + -0x28) = 0x53c716;
      e_01.data = e.data;
      e_01._type = (runtime__type *)&reflect__stmp_10;
      runtime_gopanic(e_01);
    }
    *(undefined8 *)(puVar8 + -8) = 0x53c71c;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar8;
  } while( true );
}

