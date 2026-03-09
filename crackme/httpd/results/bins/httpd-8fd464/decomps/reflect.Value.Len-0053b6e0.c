
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.Value.Len(reflect.Value v, int ~r0) */

int reflect_Value_Len(reflect_Value v)

{
  int iVar1;
  runtime__type *prVar2;
  undefined8 uVar3;
  ulong uVar4;
  runtime_hchan *c;
  runtime_hmap *h;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  interface___ e;
  interface___ e_00;
  interface___ e_01;
  reflect_arrayType *tt;
  
  e.data = v.ptr;
  do {
                    /* Unresolved local var: reflect.Kind k@[???] */
    puVar6 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar6 = (undefined1 *)((long)register0x00000020 + -0x20);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      uVar4 = *(ulong *)((long)register0x00000020 + 0x18) & 0x1f;
      *(ulong *)((long)register0x00000020 + -0x10) = uVar4;
      uVar5 = (uint)*(ulong *)((long)register0x00000020 + 0x18);
      if (uVar4 < 0x13) {
        if (uVar4 == 0x11) {
          iVar1 = *(int *)(*(long *)((long)register0x00000020 + 8) + 0x40);
          *(int *)((long)register0x00000020 + 0x20) = iVar1;
          return iVar1;
        }
        if (uVar4 != 0x12) {
LAB_0053b821:
          *(undefined **)((long)register0x00000020 + -0x20) = &DAT_0024d5e0;
          *(undefined8 *)((long)register0x00000020 + -0x28) = 0x53b831;
          runtime_newobject((runtime__type *)&DAT_0024d5e0);
          prVar2 = *(runtime__type **)((long)register0x00000020 + -0x18);
          prVar2->ptrdata = 0x11;
          prVar2->size = (uintptr)&DAT_0029a2d3;
          uVar3 = *(undefined8 *)((long)register0x00000020 + -0x10);
          prVar2->hash = (int)uVar3;
          prVar2->tflag = (char)((ulong)uVar3 >> 0x20);
          prVar2->align = (char)((ulong)uVar3 >> 0x28);
          prVar2->fieldAlign = (char)((ulong)uVar3 >> 0x30);
          prVar2->kind = (char)((ulong)uVar3 >> 0x38);
          *(undefined **)((long)register0x00000020 + -0x20) = &DAT_00233920;
          *(runtime__type **)((long)register0x00000020 + -0x18) = prVar2;
          *(undefined8 *)((long)register0x00000020 + -0x28) = 0x53b866;
          e._type = prVar2;
          runtime_gopanic(e);
          goto LAB_0053b866;
        }
        if ((**(long **)((long)register0x00000020 + 8) == 8) &&
           ((*(long **)((long)register0x00000020 + 8))[1] != 0)) {
          if ((uVar5 >> 7 & 1) == 0) {
            c = *(runtime_hchan **)((long)register0x00000020 + 0x10);
          }
          else {
            c = (runtime_hchan *)**(undefined8 **)((long)register0x00000020 + 0x10);
          }
          *(runtime_hchan **)((long)register0x00000020 + -0x20) = c;
          *(undefined8 *)((long)register0x00000020 + -0x28) = 0x53b765;
          reflect_chanlen(c);
          *(int *)((long)register0x00000020 + 0x20) = *(int *)((long)register0x00000020 + -0x18);
          return *(int *)((long)register0x00000020 + -0x18);
        }
      }
      else {
        if (uVar4 != 0x15) {
          if (uVar4 == 0x17) {
            iVar1 = *(int *)(*(long *)((long)register0x00000020 + 0x10) + 8);
            *(int *)((long)register0x00000020 + 0x20) = iVar1;
            return iVar1;
          }
          if (uVar4 == 0x18) {
            iVar1 = *(int *)(*(long *)((long)register0x00000020 + 0x10) + 8);
            *(int *)((long)register0x00000020 + 0x20) = iVar1;
            return iVar1;
          }
          goto LAB_0053b821;
        }
        if ((**(long **)((long)register0x00000020 + 8) == 8) &&
           ((*(long **)((long)register0x00000020 + 8))[1] != 0)) {
          if ((uVar5 >> 7 & 1) == 0) {
            h = *(runtime_hmap **)((long)register0x00000020 + 0x10);
          }
          else {
            h = (runtime_hmap *)**(undefined8 **)((long)register0x00000020 + 0x10);
          }
          *(runtime_hmap **)((long)register0x00000020 + -0x20) = h;
          *(undefined8 *)((long)register0x00000020 + -0x28) = 0x53b7d0;
          reflect_maplen(h);
          *(int *)((long)register0x00000020 + 0x20) = *(int *)((long)register0x00000020 + -0x18);
          return *(int *)((long)register0x00000020 + -0x18);
        }
LAB_0053b866:
        *(undefined **)((long)register0x00000020 + -0x20) = &DAT_00225520;
        *(undefined ***)((long)register0x00000020 + -0x18) = &reflect__stmp_10;
        *(undefined8 *)((long)register0x00000020 + -0x28) = 0x53b885;
        e_00.data = e.data;
        e_00._type = (runtime__type *)&reflect__stmp_10;
        runtime_gopanic(e_00);
      }
      *(undefined **)((long)register0x00000020 + -0x20) = &DAT_00225520;
      *(undefined ***)((long)register0x00000020 + -0x18) = &reflect__stmp_10;
      *(undefined8 *)((long)register0x00000020 + -0x28) = 0x53b8a5;
      e_01.data = e.data;
      e_01._type = (runtime__type *)&reflect__stmp_10;
      runtime_gopanic(e_01);
    }
    *(undefined8 *)(puVar6 + -8) = 0x53b8ab;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar6;
  } while( true );
}

