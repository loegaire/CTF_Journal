
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.Value.Type(reflect.Value v, reflect.Type ~r0) */

reflect_Type reflect_Value_Type(reflect_Value v)

{
  uint uVar1;
  long lVar2;
  runtime__type *prVar3;
  reflect_rtype *t;
  undefined1 *puVar4;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  reflect_Type rVar5;
  reflect_Type rVar6;
  reflect_Type rVar7;
  interface___ e;
  interface___ e_00;
  interface___ e_01;
  __reflect_method _Var8;
  reflect_flag f;
  
  rVar6.data = v.ptr;
  do {
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: []reflect.method ms@[???] */
    puVar4 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar4 = (undefined1 *)((long)register0x00000020 + -0x30);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      lVar2 = *(long *)((long)register0x00000020 + 0x18);
      if (lVar2 != 0) {
        if (((uint)lVar2 >> 9 & 1) == 0) {
          *(undefined1 **)((long)register0x00000020 + 0x20) = go_itab__reflect_rtype_reflect_Type;
          *(runtime_itab **)((long)register0x00000020 + 0x28) =
               *(runtime_itab **)((long)register0x00000020 + 8);
          rVar7.data = rVar6.data;
          rVar7.tab = *(runtime_itab **)((long)register0x00000020 + 8);
          return rVar7;
        }
        t = (reflect_rtype *)(lVar2 >> 10);
        lVar2 = *(long *)((long)register0x00000020 + 8);
        if ((*(byte *)(lVar2 + 0x17) & 0x1f) == 0x14) {
          if (t < *(reflect_rtype **)(lVar2 + 0x40)) {
            uVar1 = *(uint *)(*(long *)(lVar2 + 0x38) + 4 + (long)t * 8);
            *(long *)((long)register0x00000020 + -0x30) = lVar2;
            *(uint *)((long)register0x00000020 + -0x28) = uVar1;
            *(undefined8 *)((long)register0x00000020 + -0x38) = 0x53d18e;
            reflect_resolveTypeOff((void *)(ulong)uVar1,(int32)rVar6.data);
            *(undefined1 **)((long)register0x00000020 + 0x20) = go_itab__reflect_rtype_reflect_Type;
            *(runtime_itab **)((long)register0x00000020 + 0x28) =
                 *(runtime_itab **)((long)register0x00000020 + -0x20);
            rVar5.data = rVar6.data;
            rVar5.tab = *(runtime_itab **)((long)register0x00000020 + -0x20);
            return rVar5;
          }
        }
        else {
          *(reflect_rtype **)((long)register0x00000020 + -0x10) = t;
          *(long *)((long)register0x00000020 + -0x30) = lVar2;
          *(undefined8 *)((long)register0x00000020 + -0x38) = 0x53d1bc;
          _Var8 = reflect___rtype__exportedMethods(t);
          rVar6.data = (void *)_Var8.len;
          if (*(ulong *)((long)register0x00000020 + -0x10) <
              *(ulong *)((long)register0x00000020 + -0x20)) {
            uVar1 = *(uint *)(*(long *)((long)register0x00000020 + -0x28) + 4 +
                             *(ulong *)((long)register0x00000020 + -0x10) * 0x10);
            *(undefined8 *)((long)register0x00000020 + -0x30) =
                 *(undefined8 *)((long)register0x00000020 + 8);
            *(uint *)((long)register0x00000020 + -0x28) = uVar1;
            *(undefined8 *)((long)register0x00000020 + -0x38) = 0x53d1e7;
            reflect_resolveTypeOff((void *)(ulong)uVar1,(int32)_Var8.len);
            *(undefined1 **)((long)register0x00000020 + 0x20) = go_itab__reflect_rtype_reflect_Type;
            *(runtime_itab **)((long)register0x00000020 + 0x28) =
                 *(runtime_itab **)((long)register0x00000020 + -0x20);
            rVar6.tab = *(runtime_itab **)((long)register0x00000020 + -0x20);
            return rVar6;
          }
          *(undefined **)((long)register0x00000020 + -0x30) = &DAT_00225520;
          *(undefined ***)((long)register0x00000020 + -0x28) = &reflect__stmp_67;
          *(undefined8 *)((long)register0x00000020 + -0x38) = 0x53d245;
          e.data = rVar6.data;
          e._type = (runtime__type *)&reflect__stmp_67;
          runtime_gopanic(e);
        }
        *(undefined **)((long)register0x00000020 + -0x30) = &DAT_00225520;
        *(undefined ***)((long)register0x00000020 + -0x28) = &reflect__stmp_67;
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0x53d265;
        e_00.data = rVar6.data;
        e_00._type = (runtime__type *)&reflect__stmp_67;
        runtime_gopanic(e_00);
      }
      *(undefined **)((long)register0x00000020 + -0x30) = &DAT_0024d5e0;
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x53d275;
      runtime_newobject((runtime__type *)&DAT_0024d5e0);
      prVar3 = *(runtime__type **)((long)register0x00000020 + -0x28);
      prVar3->ptrdata = 0x12;
      prVar3->size = (uintptr)&DAT_0029aca4;
      prVar3->hash = 0;
      prVar3->tflag = 0;
      prVar3->align = 0;
      prVar3->fieldAlign = 0;
      prVar3->kind = 0;
      *(undefined **)((long)register0x00000020 + -0x30) = &DAT_00233920;
      *(runtime__type **)((long)register0x00000020 + -0x28) = prVar3;
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x53d2a9;
      e_01.data = rVar6.data;
      e_01._type = prVar3;
      runtime_gopanic(e_01);
    }
    *(undefined8 *)(puVar4 + -8) = 0x53d2af;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar4;
  } while( true );
}

