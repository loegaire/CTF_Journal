
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.Value.Field(reflect.Value v, int i, reflect.Value ~r1) */

reflect_Value reflect_Value_Field(reflect_Value v,int i)

{
  long lVar1;
  long lVar2;
  runtime__type *prVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong extraout_RAX;
  ulong uVar6;
  void *pvVar7;
  undefined1 *puVar8;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  interface___ e;
  interface___ e_00;
  reflect_Value rVar9;
  reflect_structType *tt;
  int i_spill;
  
  pvVar7 = v.ptr;
  do {
                    /* Unresolved local var: reflect.rtype * typ@[???]
                       Unresolved local var: reflect.flag fl@[???]
                       Unresolved local var: void * ptr@[???] */
    puVar8 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar8 = (undefined1 *)((long)register0x00000020 + -0x20);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      uVar5 = *(ulong *)((long)register0x00000020 + 0x18) & 0x1f;
      if (uVar5 == 0x19) {
        lVar1 = *(long *)(*(long *)((long)register0x00000020 + 8) + 0x38);
        pvVar7 = *(void **)((long)register0x00000020 + 0x20);
        if (pvVar7 < *(void **)(*(long *)((long)register0x00000020 + 8) + 0x40)) {
          lVar2 = *(long *)(lVar1 + 8 + (long)pvVar7 * 0x18);
          uVar6 = *(ulong *)((long)register0x00000020 + 0x18) & 0x1a0 |
                  (ulong)(*(byte *)(lVar2 + 0x17) & 0x1f);
          uVar5 = uVar6;
          if ((**(byte **)(lVar1 + (long)pvVar7 * 0x18) & 1) == 0) {
            uVar5 = uVar6 | 0x20;
            if ((*(ulong *)(lVar1 + 0x10 + (long)pvVar7 * 0x18) & 1) != 0) {
              uVar5 = uVar6 | 0x40;
            }
          }
          uVar6 = *(ulong *)(lVar1 + 0x10 + (long)pvVar7 * 0x18);
          *(long *)((long)register0x00000020 + 0x28) = lVar2;
          rVar9.typ = (uVar6 >> 1) + *(long *)((long)register0x00000020 + 0x10);
          *(long *)((long)register0x00000020 + 0x30) = rVar9.typ;
          *(ulong *)((long)register0x00000020 + 0x38) = uVar5;
          rVar9.ptr = (void *)lVar2;
          rVar9.flag = uVar5;
          return rVar9;
        }
        *(undefined **)((long)register0x00000020 + -0x20) = &DAT_00225520;
        *(undefined ***)((long)register0x00000020 + -0x18) = &reflect__stmp_78;
        *(undefined8 *)((long)register0x00000020 + -0x28) = 0x53b258;
        e.data = pvVar7;
        e._type = (runtime__type *)&reflect__stmp_78;
        runtime_gopanic(e);
        uVar5 = extraout_RAX;
      }
      *(ulong *)((long)register0x00000020 + -0x10) = uVar5;
      *(undefined **)((long)register0x00000020 + -0x20) = &DAT_0024d5e0;
      *(undefined8 *)((long)register0x00000020 + -0x28) = 0x53b26d;
      runtime_newobject((runtime__type *)&DAT_0024d5e0);
      prVar3 = *(runtime__type **)((long)register0x00000020 + -0x18);
      prVar3->ptrdata = 0x13;
      prVar3->size = (uintptr)&DAT_0029b719;
      uVar4 = *(undefined8 *)((long)register0x00000020 + -0x10);
      prVar3->hash = (int)uVar4;
      prVar3->tflag = (char)((ulong)uVar4 >> 0x20);
      prVar3->align = (char)((ulong)uVar4 >> 0x28);
      prVar3->fieldAlign = (char)((ulong)uVar4 >> 0x30);
      prVar3->kind = (char)((ulong)uVar4 >> 0x38);
      *(undefined **)((long)register0x00000020 + -0x20) = &DAT_00233920;
      *(runtime__type **)((long)register0x00000020 + -0x18) = prVar3;
      *(undefined8 *)((long)register0x00000020 + -0x28) = 0x53b2a5;
      e_00.data = pvVar7;
      e_00._type = prVar3;
      runtime_gopanic(e_00);
    }
    *(undefined8 *)(puVar8 + -8) = 0x53b2ab;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar8;
  } while( true );
}

