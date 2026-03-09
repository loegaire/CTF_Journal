
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.MakeSlice(reflect.Type typ, int len, int cap,
   reflect.Value ~r3) */

reflect_Value reflect_MakeSlice(reflect_Type typ,int len,int cap)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *extraout_RAX;
  undefined1 *puVar3;
  undefined1 *iface;
  undefined1 *puVar4;
  undefined1 *unaff_RBP;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  interface___ e;
  interface___ e_00;
  interface___ e_01;
  interface___ e_02;
  reflect_Value rVar6;
  reflect_Type typ_spill;
  int len_spill;
  int cap_spill;
  
  rVar6.ptr = typ.data;
  do {
                    /* Unresolved local var: internal/unsafeheader.Slice * &s@[???] */
    puVar4 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar4 = (undefined1 *)((long)register0x00000020 + -0x28);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      pcVar1 = *(code **)(*(long *)((long)register0x00000020 + 8) + 0x98);
      *(undefined8 *)((long)register0x00000020 + -0x28) =
           *(undefined8 *)((long)register0x00000020 + 0x10);
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x53d8b8;
      (*pcVar1)();
      if (*(long *)((long)register0x00000020 + -0x20) == 0x17) {
        if (-1 < *(long *)((long)register0x00000020 + 0x18)) {
          if (-1 < *(long *)((long)register0x00000020 + 0x20)) {
            if (*(long *)((long)register0x00000020 + 0x18) <=
                *(long *)((long)register0x00000020 + 0x20)) {
              *(undefined **)((long)register0x00000020 + -0x28) = &DAT_00257160;
              *(undefined8 *)((long)register0x00000020 + -0x30) = 0x53d905;
              runtime_newobject((runtime__type *)&DAT_00257160);
              *(undefined8 *)((long)register0x00000020 + -0x10) =
                   *(undefined8 *)((long)register0x00000020 + -0x20);
              pcVar1 = *(code **)(*(long *)((long)register0x00000020 + 8) + 0x48);
              *(undefined8 *)((long)register0x00000020 + -0x28) =
                   *(undefined8 *)((long)register0x00000020 + 0x10);
              *(undefined8 *)((long)register0x00000020 + -0x30) = 0x53d923;
              (*pcVar1)();
              puVar3 = *(undefined1 **)((long)register0x00000020 + -0x20);
              iface = *(undefined1 **)((long)register0x00000020 + -0x18);
              if (puVar3 == go_itab__reflect_rtype_reflect_Type) {
                *(undefined1 **)((long)register0x00000020 + -0x28) = iface;
                *(runtime__type **)((long)register0x00000020 + -0x20) =
                     *(runtime__type **)((long)register0x00000020 + 0x20);
                *(undefined8 *)((long)register0x00000020 + -0x30) = 0x53d950;
                reflect_unsafe_NewArray
                          (*(runtime__type **)((long)register0x00000020 + 0x20),(int)rVar6.ptr);
                uVar2 = *(undefined8 *)((long)register0x00000020 + -0x18);
                puVar5 = *(undefined8 **)((long)register0x00000020 + -0x10);
                puVar5[1] = *(undefined8 *)((long)register0x00000020 + 0x18);
                puVar5[2] = *(undefined8 *)((long)register0x00000020 + 0x20);
                if (runtime_writeBarrier._0_4_ == 0) {
                  *puVar5 = uVar2;
                }
                else {
                  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x53d97f;
                  runtime_gcWriteBarrier();
                }
                iface = go_itab__reflect_rtype_reflect_Type;
                if (*(undefined1 **)((long)register0x00000020 + 8) ==
                    go_itab__reflect_rtype_reflect_Type) {
                  *(undefined8 *)((long)register0x00000020 + 0x28) =
                       *(undefined8 *)((long)register0x00000020 + 0x10);
                  *(undefined8 **)((long)register0x00000020 + 0x30) = puVar5;
                  *(undefined8 *)((long)register0x00000020 + 0x38) = 0x97;
                  rVar6.typ = (reflect_rtype *)*(undefined8 *)((long)register0x00000020 + 0x10);
                  rVar6.flag = (reflect_flag)go_itab__reflect_rtype_reflect_Type;
                  return rVar6;
                }
                *(undefined1 **)((long)register0x00000020 + -0x28) =
                     *(undefined1 **)((long)register0x00000020 + 8);
                *(undefined **)((long)register0x00000020 + -0x20) = &DAT_00281a20;
                *(undefined **)((long)register0x00000020 + -0x18) = &DAT_00277b20;
                *(undefined8 *)((long)register0x00000020 + -0x30) = 0x53d9d3;
                runtime_panicdottypeI
                          ((runtime_itab *)&DAT_00277b20,rVar6.ptr,
                           (runtime__type *)go_itab__reflect_rtype_reflect_Type);
                puVar3 = extraout_RAX;
              }
              *(undefined1 **)((long)register0x00000020 + -0x28) = puVar3;
              *(undefined **)((long)register0x00000020 + -0x20) = &DAT_00281a20;
              *(undefined **)((long)register0x00000020 + -0x18) = &DAT_00277b20;
              *(undefined8 *)((long)register0x00000020 + -0x30) = 0x53d9f4;
              runtime_panicdottypeI((runtime_itab *)&DAT_00277b20,rVar6.ptr,(runtime__type *)iface);
            }
            *(undefined **)((long)register0x00000020 + -0x28) = &DAT_00225520;
            *(undefined1 **)((long)register0x00000020 + -0x20) = reflect__stmp_131;
            *(undefined8 *)((long)register0x00000020 + -0x30) = 0x53da10;
            e.data = rVar6.ptr;
            e._type = (runtime__type *)reflect__stmp_131;
            runtime_gopanic(e);
          }
          *(undefined **)((long)register0x00000020 + -0x28) = &DAT_00225520;
          *(undefined1 **)((long)register0x00000020 + -0x20) = reflect__stmp_130;
          *(undefined8 *)((long)register0x00000020 + -0x30) = 0x53da2c;
          e_00.data = rVar6.ptr;
          e_00._type = (runtime__type *)reflect__stmp_130;
          runtime_gopanic(e_00);
        }
        *(undefined **)((long)register0x00000020 + -0x28) = &DAT_00225520;
        *(undefined ***)((long)register0x00000020 + -0x20) = &reflect__stmp_129;
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x53da48;
        e_01.data = rVar6.ptr;
        e_01._type = (runtime__type *)&reflect__stmp_129;
        runtime_gopanic(e_01);
      }
      *(undefined **)((long)register0x00000020 + -0x28) = &DAT_00225520;
      *(undefined ***)((long)register0x00000020 + -0x20) = &reflect__stmp_128;
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x53da65;
      e_02.data = rVar6.ptr;
      e_02._type = (runtime__type *)&reflect__stmp_128;
      runtime_gopanic(e_02);
    }
    *(undefined8 *)(puVar4 + -8) = 0x53da6b;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar4;
  } while( true );
}

