
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.Value.Addr(reflect.Value v, reflect.Value ~r0) */

reflect_Value reflect_Value_Addr(reflect_Value v)

{
  reflect_flag rVar1;
  undefined1 *puVar2;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  interface___ e;
  reflect_Value rVar3;
  reflect_Value v_spill;
  
  rVar1 = v.flag;
  rVar3.ptr = v.ptr;
  do {
                    /* Unresolved local var: reflect.flag fl@[???] */
    puVar2 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar2 = (undefined1 *)((long)register0x00000020 + -0x18);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      if (((uint)*(undefined8 *)((long)register0x00000020 + 0x18) >> 8 & 1) != 0) {
        *(reflect_rtype **)((long)register0x00000020 + -0x18) =
             *(reflect_rtype **)((long)register0x00000020 + 8);
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x539e16;
        reflect___rtype__ptrTo(*(reflect_rtype **)((long)register0x00000020 + 8));
        *(undefined8 *)((long)register0x00000020 + 0x20) =
             *(undefined8 *)((long)register0x00000020 + -0x10);
        *(undefined8 *)((long)register0x00000020 + 0x28) =
             *(undefined8 *)((long)register0x00000020 + 0x10);
        rVar3.typ = *(ulong *)((long)register0x00000020 + 0x18) & 0x60 | 0x16;
        *(ulong *)((long)register0x00000020 + 0x30) = rVar3.typ;
        rVar3.flag = rVar1;
        return rVar3;
      }
      *(undefined **)((long)register0x00000020 + -0x18) = &DAT_00225520;
      *(undefined1 **)((long)register0x00000020 + -0x10) = reflect__stmp_45;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x539e65;
      e.data = rVar3.ptr;
      e._type = (runtime__type *)reflect__stmp_45;
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar2 + -8) = 0x539e6b;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar2;
  } while( true );
}

