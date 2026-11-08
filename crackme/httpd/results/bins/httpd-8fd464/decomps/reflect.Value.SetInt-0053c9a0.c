
/* WARNING: Unknown calling convention */

void reflect_Value_SetInt(reflect_Value v,int64 x)

{
  runtime__type *prVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  interface___ e;
  reflect_Value v_spill;
  int64 x_spill;
  
  e.data = v.ptr;
  do {
    puVar4 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar4 = (undefined1 *)((long)register0x00000020 + -0x20);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      uVar3 = *(ulong *)((long)register0x00000020 + 0x18);
      if (((uVar3 & 0x60) != 0) || (((uint)uVar3 >> 8 & 1) == 0)) {
        *(ulong *)((long)register0x00000020 + -0x20) = uVar3;
        *(undefined8 *)((long)register0x00000020 + -0x28) = 0x53c9dd;
        reflect_flag_mustBeAssignableSlow(uVar3);
        uVar3 = *(ulong *)((long)register0x00000020 + 0x18);
      }
      uVar3 = uVar3 & 0x1f;
      *(ulong *)((long)register0x00000020 + -0x10) = uVar3;
                    /* Unresolved local var: reflect.Kind k@[???] */
      if (uVar3 < 4) {
        if (uVar3 == 2) {
          **(undefined8 **)((long)register0x00000020 + 0x10) =
               *(undefined8 *)((long)register0x00000020 + 0x20);
          return;
        }
        if (uVar3 == 3) {
          **(undefined1 **)((long)register0x00000020 + 0x10) =
               (char)*(undefined8 *)((long)register0x00000020 + 0x20);
          return;
        }
      }
      else {
        if (uVar3 == 4) {
          **(undefined2 **)((long)register0x00000020 + 0x10) =
               (short)*(undefined8 *)((long)register0x00000020 + 0x20);
          return;
        }
        if (uVar3 == 5) {
          **(undefined4 **)((long)register0x00000020 + 0x10) =
               (int)*(undefined8 *)((long)register0x00000020 + 0x20);
          return;
        }
        if (uVar3 == 6) {
          **(undefined8 **)((long)register0x00000020 + 0x10) =
               *(undefined8 *)((long)register0x00000020 + 0x20);
          return;
        }
      }
      *(undefined **)((long)register0x00000020 + -0x20) = &DAT_0024d5e0;
      *(undefined8 *)((long)register0x00000020 + -0x28) = 0x53ca76;
      runtime_newobject((runtime__type *)&DAT_0024d5e0);
      prVar1 = *(runtime__type **)((long)register0x00000020 + -0x18);
      prVar1->ptrdata = 0x14;
      prVar1->size = (uintptr)&DAT_0029c112;
      uVar2 = *(undefined8 *)((long)register0x00000020 + -0x10);
      prVar1->hash = (int)uVar2;
      prVar1->tflag = (char)((ulong)uVar2 >> 0x20);
      prVar1->align = (char)((ulong)uVar2 >> 0x28);
      prVar1->fieldAlign = (char)((ulong)uVar2 >> 0x30);
      prVar1->kind = (char)((ulong)uVar2 >> 0x38);
      *(undefined **)((long)register0x00000020 + -0x20) = &DAT_00233920;
      *(runtime__type **)((long)register0x00000020 + -0x18) = prVar1;
      *(undefined8 *)((long)register0x00000020 + -0x28) = 0x53caab;
      e._type = prVar1;
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar4 + -8) = 0x53cab1;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar4;
  } while( true );
}

