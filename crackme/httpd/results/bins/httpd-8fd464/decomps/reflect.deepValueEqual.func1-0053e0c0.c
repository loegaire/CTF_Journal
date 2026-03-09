
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.deepValueEqual.func1(reflect.Value v1, reflect.Value v2,
   bool ~r2) */

bool reflect_deepValueEqual_func1(reflect_Value v1,reflect_Value v2)

{
  runtime__type *prVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  bool bVar7;
  interface___ e;
  interface___ e_00;
  void *ptr;
  void *ptr_1;
  
  e.data = v1.ptr;
  do {
    puVar6 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar6 = (undefined1 *)((long)register0x00000020 + -0x20);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      uVar3 = *(ulong *)((long)register0x00000020 + 0x18) & 0x1f;
      if (1 < uVar3 - 0x14) {
        if (uVar3 == 0x16) {
          if (*(long *)(*(long *)((long)register0x00000020 + 8) + 8) == 0) {
            *(undefined1 *)((long)register0x00000020 + 0x38) = 0;
            return true;
          }
        }
        else if (uVar3 != 0x17) {
          *(undefined1 *)((long)register0x00000020 + 0x38) = 0;
          return SUB81(uVar3,0);
        }
      }
      *(ulong *)((long)register0x00000020 + -0x10) = uVar3;
      if (uVar3 < 0x15) {
        if (uVar3 - 0x12 < 2) goto LAB_0053e16f;
        if (uVar3 == 0x14) {
LAB_0053e157:
          lVar4 = **(long **)((long)register0x00000020 + 0x10);
          goto LAB_0053e190;
        }
      }
      else {
        if (0x16 < uVar3) {
          if (uVar3 == 0x17) goto LAB_0053e157;
          if (uVar3 != 0x1a) goto LAB_0053e272;
        }
LAB_0053e16f:
        uVar5 = (uint)*(ulong *)((long)register0x00000020 + 0x18);
        if ((uVar5 >> 9 & 1) == 0) {
          if ((uVar5 >> 7 & 1) == 0) {
            lVar4 = *(long *)((long)register0x00000020 + 0x10);
          }
          else {
            lVar4 = **(long **)((long)register0x00000020 + 0x10);
          }
LAB_0053e190:
          if (lVar4 == 0) {
            bVar7 = false;
            goto LAB_0053e210;
          }
        }
        uVar3 = *(ulong *)((long)register0x00000020 + 0x30) & 0x1f;
        *(ulong *)((long)register0x00000020 + -0x10) = uVar3;
        if (uVar3 < 0x15) {
          if (uVar3 - 0x12 < 2) goto LAB_0053e1e8;
          if (uVar3 == 0x14) {
LAB_0053e1d4:
            bVar7 = **(long **)((long)register0x00000020 + 0x28) == 0;
            goto LAB_0053e20d;
          }
        }
        else {
          if (uVar3 < 0x17) {
LAB_0053e1e8:
            uVar5 = (uint)*(ulong *)((long)register0x00000020 + 0x30);
            if ((uVar5 >> 9 & 1) == 0) {
              if ((uVar5 >> 7 & 1) == 0) {
                lVar4 = *(long *)((long)register0x00000020 + 0x28);
              }
              else {
                lVar4 = **(long **)((long)register0x00000020 + 0x28);
              }
              bVar7 = lVar4 == 0;
            }
            else {
              bVar7 = false;
            }
LAB_0053e20d:
            bVar7 = (bool)(bVar7 ^ 1);
LAB_0053e210:
            *(bool *)((long)register0x00000020 + 0x38) = bVar7;
            return bVar7;
          }
          if (uVar3 == 0x17) goto LAB_0053e1d4;
          if (uVar3 == 0x1a) goto LAB_0053e1e8;
        }
        *(undefined **)((long)register0x00000020 + -0x20) = &DAT_0024d5e0;
        *(undefined8 *)((long)register0x00000020 + -0x28) = 0x53e23d;
        runtime_newobject((runtime__type *)&DAT_0024d5e0);
        prVar1 = *(runtime__type **)((long)register0x00000020 + -0x18);
        prVar1->ptrdata = 0x13;
        prVar1->size = (uintptr)&DAT_0029b752;
        uVar2 = *(undefined8 *)((long)register0x00000020 + -0x10);
        prVar1->hash = (int)uVar2;
        prVar1->tflag = (char)((ulong)uVar2 >> 0x20);
        prVar1->align = (char)((ulong)uVar2 >> 0x28);
        prVar1->fieldAlign = (char)((ulong)uVar2 >> 0x30);
        prVar1->kind = (char)((ulong)uVar2 >> 0x38);
        *(undefined **)((long)register0x00000020 + -0x20) = &DAT_00233920;
        *(runtime__type **)((long)register0x00000020 + -0x18) = prVar1;
        *(undefined8 *)((long)register0x00000020 + -0x28) = 0x53e272;
        e._type = prVar1;
        runtime_gopanic(e);
      }
LAB_0053e272:
      *(undefined **)((long)register0x00000020 + -0x20) = &DAT_0024d5e0;
      *(undefined8 *)((long)register0x00000020 + -0x28) = 0x53e285;
      runtime_newobject((runtime__type *)&DAT_0024d5e0);
      prVar1 = *(runtime__type **)((long)register0x00000020 + -0x18);
      prVar1->ptrdata = 0x13;
      prVar1->size = (uintptr)&DAT_0029b752;
      uVar2 = *(undefined8 *)((long)register0x00000020 + -0x10);
      prVar1->hash = (int)uVar2;
      prVar1->tflag = (char)((ulong)uVar2 >> 0x20);
      prVar1->align = (char)((ulong)uVar2 >> 0x28);
      prVar1->fieldAlign = (char)((ulong)uVar2 >> 0x30);
      prVar1->kind = (char)((ulong)uVar2 >> 0x38);
      *(undefined **)((long)register0x00000020 + -0x20) = &DAT_00233920;
      *(runtime__type **)((long)register0x00000020 + -0x18) = prVar1;
      *(undefined8 *)((long)register0x00000020 + -0x28) = 0x53e2ba;
      e_00.data = e.data;
      e_00._type = prVar1;
      runtime_gopanic(e_00);
    }
    *(undefined8 *)(puVar6 + -8) = 0x53e2c5;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar6;
  } while( true );
}

