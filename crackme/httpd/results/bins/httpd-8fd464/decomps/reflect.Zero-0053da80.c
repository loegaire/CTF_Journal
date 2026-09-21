
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.Zero(reflect.Type typ, reflect.Value ~r1) */

reflect_Value reflect_Zero(reflect_Type typ)

{
  runtime__type *typ_00;
  ulong uVar1;
  uint8 *puVar2;
  undefined1 *puVar3;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  interface___ e;
  reflect_Value rVar4;
  reflect_Value rVar5;
  reflect_rtype *t;
  
  rVar4.ptr = typ.data;
  do {
                    /* Unresolved local var: reflect.flag fl@[???]
                       Unresolved local var: reflect.Kind ~R0@[???] */
    puVar3 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar3 = (undefined1 *)((long)register0x00000020 + -0x28);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      if (*(long *)((long)register0x00000020 + 8) != 0) {
        if (*(undefined1 **)((long)register0x00000020 + 8) == go_itab__reflect_rtype_reflect_Type) {
          typ_00 = *(runtime__type **)((long)register0x00000020 + 0x10);
          rVar5.flag._0_4_ = typ_00->kind & 0x1f;
          uVar1 = (ulong)(uint)rVar5.flag;
          if ((typ_00->kind & 0x20) == 0) {
                    /* Unresolved local var: void * p@[???] */
            if (typ_00->size < 0x401) {
              puVar2 = runtime_zeroVal;
            }
            else {
              *(ulong *)((long)register0x00000020 + -0x10) = uVar1;
              *(runtime__type **)((long)register0x00000020 + -0x28) = typ_00;
              *(undefined8 *)((long)register0x00000020 + -0x30) = 0x53dafd;
              reflect_unsafe_New(typ_00);
              puVar2 = *(uint8 **)((long)register0x00000020 + -0x20);
              uVar1 = *(ulong *)((long)register0x00000020 + -0x10);
              typ_00 = *(runtime__type **)((long)register0x00000020 + 0x10);
            }
            *(runtime__type **)((long)register0x00000020 + 0x18) = typ_00;
            *(uint8 **)((long)register0x00000020 + 0x20) = puVar2;
            rVar4.flag = uVar1 | 0x80;
            *(ulong *)((long)register0x00000020 + 0x28) = rVar4.flag;
            rVar4.typ = (reflect_rtype *)typ_00;
            return rVar4;
          }
          *(runtime__type **)((long)register0x00000020 + 0x18) = typ_00;
          *(undefined8 *)((long)register0x00000020 + 0x20) = 0;
          *(ulong *)((long)register0x00000020 + 0x28) = uVar1;
          rVar5.ptr = rVar4.ptr;
          rVar5.typ = (reflect_rtype *)typ_00;
          rVar5.flag._4_4_ = 0;
          return rVar5;
        }
        *(undefined1 **)((long)register0x00000020 + -0x28) =
             *(undefined1 **)((long)register0x00000020 + 8);
        *(undefined **)((long)register0x00000020 + -0x20) = &DAT_00281a20;
        *(undefined **)((long)register0x00000020 + -0x18) = &DAT_00277b20;
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x53db6b;
        runtime_panicdottypeI
                  ((runtime_itab *)&DAT_00277b20,rVar4.ptr,
                   (runtime__type *)go_itab__reflect_rtype_reflect_Type);
      }
      *(undefined **)((long)register0x00000020 + -0x28) = &DAT_00225520;
      *(undefined1 **)((long)register0x00000020 + -0x20) = reflect__stmp_136;
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x53db87;
      e.data = rVar4.ptr;
      e._type = (runtime__type *)reflect__stmp_136;
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar3 + -8) = 0x53db8d;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar3;
  } while( true );
}

