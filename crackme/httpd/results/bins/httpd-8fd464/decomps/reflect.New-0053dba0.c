
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.New(reflect.Type typ, reflect.Value ~r1) */

reflect_Value reflect_New(reflect_Type typ)

{
  byte bVar1;
  undefined1 *extraout_RAX;
  undefined1 *puVar2;
  undefined1 *iface;
  undefined1 *puVar3;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  interface___ e;
  interface___ e_00;
  reflect_Value rVar4;
  reflect_rtype *t;
  
  rVar4.ptr = typ.data;
  do {
                    /* Unresolved local var: reflect.rtype * pt@[???]
                       Unresolved local var: void * ptr@[???] */
    puVar3 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar3 = (undefined1 *)((long)register0x00000020 + -0x28);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      if (*(long *)((long)register0x00000020 + 8) != 0) {
        puVar2 = *(undefined1 **)((long)register0x00000020 + 8);
        iface = go_itab__reflect_rtype_reflect_Type;
        if (puVar2 == go_itab__reflect_rtype_reflect_Type) {
          *(reflect_rtype **)((long)register0x00000020 + -0x28) =
               *(reflect_rtype **)((long)register0x00000020 + 0x10);
          *(undefined8 *)((long)register0x00000020 + -0x30) = 0x53dbf3;
          reflect___rtype__ptrTo(*(reflect_rtype **)((long)register0x00000020 + 0x10));
          bVar1 = *(byte *)(*(long *)((long)register0x00000020 + -0x20) + 0x17);
          iface = (undefined1 *)(ulong)bVar1;
          if ((bVar1 & 0x20) != 0) {
            *(long *)((long)register0x00000020 + -0x10) =
                 *(long *)((long)register0x00000020 + -0x20);
            *(runtime__type **)((long)register0x00000020 + -0x28) =
                 *(runtime__type **)((long)register0x00000020 + 0x10);
            *(undefined8 *)((long)register0x00000020 + -0x30) = 0x53dc18;
            reflect_unsafe_New(*(runtime__type **)((long)register0x00000020 + 0x10));
            *(reflect_flag *)((long)register0x00000020 + 0x18) =
                 *(reflect_flag *)((long)register0x00000020 + -0x10);
            *(undefined8 *)((long)register0x00000020 + 0x20) =
                 *(undefined8 *)((long)register0x00000020 + -0x20);
            *(undefined8 *)((long)register0x00000020 + 0x28) = 0x16;
            rVar4.typ = (reflect_rtype *)*(undefined8 *)((long)register0x00000020 + -0x20);
            rVar4.flag = *(reflect_flag *)((long)register0x00000020 + -0x10);
            return rVar4;
          }
          *(undefined **)((long)register0x00000020 + -0x28) = &DAT_00225520;
          *(undefined1 **)((long)register0x00000020 + -0x20) = reflect__stmp_138;
          *(undefined8 *)((long)register0x00000020 + -0x30) = 0x53dc5b;
          e.data = rVar4.ptr;
          e._type = (runtime__type *)reflect__stmp_138;
          runtime_gopanic(e);
          puVar2 = extraout_RAX;
        }
        *(undefined1 **)((long)register0x00000020 + -0x28) = puVar2;
        *(undefined **)((long)register0x00000020 + -0x20) = &DAT_00281a20;
        *(undefined **)((long)register0x00000020 + -0x18) = &DAT_00277b20;
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x53dc7c;
        runtime_panicdottypeI((runtime_itab *)&DAT_00277b20,rVar4.ptr,(runtime__type *)iface);
      }
      *(undefined **)((long)register0x00000020 + -0x28) = &DAT_00225520;
      *(undefined1 **)((long)register0x00000020 + -0x20) = reflect__stmp_137;
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x53dc98;
      e_00.data = rVar4.ptr;
      e_00._type = (runtime__type *)reflect__stmp_137;
      runtime_gopanic(e_00);
    }
    *(undefined8 *)(puVar3 + -8) = 0x53dc9e;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar3;
  } while( true );
}

