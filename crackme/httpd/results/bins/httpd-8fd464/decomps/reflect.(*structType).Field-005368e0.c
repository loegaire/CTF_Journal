
/* WARNING: Variable defined which should be unmapped: return_value_alias_variable */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.(*structType).Field(reflect.structType * t, int i,
   reflect.StructField f) */

reflect_StructField reflect___structType__Field(reflect_structType *t,int i)

{
  long lVar1;
  undefined8 *puVar2;
  reflect_name rVar3;
  long lVar4;
  undefined8 unaff_RBP;
  long lVar5;
  undefined1 *puVar6;
  long in_FS_OFFSET;
  interface___ e;
  reflect_StructField return_value_alias_variable;
  reflect_structType *t_spill;
  int i_spill;
  
  do {
    puVar6 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar6 = (undefined1 *)((long)register0x00000020 + -0x30);
      *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
      *(undefined8 *)((long)register0x00000020 + 0x18) = 0;
      *(undefined1 **)((long)register0x00000020 + -0x40) =
           (undefined1 *)((long)register0x00000020 + -8);
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x53692f;
      FUN_0051a18b();
      unaff_RBP = *(undefined8 *)((long)register0x00000020 + -0x40);
      lVar4 = *(long *)((long)register0x00000020 + 0x10);
      if ((-1 < lVar4) &&
         (lVar1 = *(long *)(*(long *)((long)register0x00000020 + 8) + 0x38),
         lVar4 < *(long *)(*(long *)((long)register0x00000020 + 8) + 0x40))) {
        lVar5 = *(long *)(lVar1 + 8 + lVar4 * 0x18);
        if (lVar5 == 0) {
          puVar6 = (undefined1 *)0x0;
          lVar5 = 0;
        }
        else {
          puVar6 = go_itab__reflect_rtype_reflect_Type;
        }
        *(long *)((long)register0x00000020 + -0x10) = lVar1;
        *(long *)((long)register0x00000020 + -0x18) = lVar4 * 3;
        *(undefined1 **)((long)register0x00000020 + 0x38) = puVar6;
        *(long *)((long)register0x00000020 + 0x40) = lVar5;
        rVar3.bytes = *(uint8 **)(lVar1 + lVar4 * 0x18);
        *(uint8 **)((long)register0x00000020 + -0x30) = rVar3.bytes;
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0x536998;
        reflect_name_name(rVar3);
        *(undefined8 *)((long)register0x00000020 + 0x18) =
             *(undefined8 *)((long)register0x00000020 + -0x28);
        *(undefined8 *)((long)register0x00000020 + 0x20) =
             *(undefined8 *)((long)register0x00000020 + -0x20);
        rVar3.bytes = *(uint8 **)((long)register0x00000020 + -0x18);
        lVar4 = *(long *)((long)register0x00000020 + -0x10);
        *(bool *)((long)register0x00000020 + 0x78) =
             (*(ulong *)(lVar4 + 0x10 + (long)rVar3.bytes * 8) & 1) != 0;
        if ((**(byte **)(lVar4 + (long)rVar3.bytes * 8) & 1) == 0) {
          rVar3.bytes = *(uint8 **)(*(long *)((long)register0x00000020 + 8) + 0x30);
          *(uint8 **)((long)register0x00000020 + -0x30) = rVar3.bytes;
          *(undefined8 *)((long)register0x00000020 + -0x38) = 0x5369e5;
          reflect_name_name(rVar3);
          *(undefined8 *)((long)register0x00000020 + 0x28) =
               *(undefined8 *)((long)register0x00000020 + -0x28);
          *(undefined8 *)((long)register0x00000020 + 0x30) =
               *(undefined8 *)((long)register0x00000020 + -0x20);
                    /* Unresolved local var: string tag@[???] */
          rVar3.bytes = *(uint8 **)((long)register0x00000020 + -0x18);
          lVar4 = *(long *)((long)register0x00000020 + -0x10);
        }
        *(undefined8 *)((long)register0x00000020 + -0x30) =
             *(undefined8 *)(lVar4 + (long)rVar3.bytes * 8);
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0x536a10;
        reflect_name_tag(rVar3);
        if (*(long *)((long)register0x00000020 + -0x20) != 0) {
          *(undefined8 *)((long)register0x00000020 + 0x48) =
               *(undefined8 *)((long)register0x00000020 + -0x28);
          *(long *)((long)register0x00000020 + 0x50) = *(long *)((long)register0x00000020 + -0x20);
        }
        *(ulong *)((long)register0x00000020 + 0x58) =
             *(ulong *)(*(long *)((long)register0x00000020 + -0x10) + 0x10 +
                       *(long *)((long)register0x00000020 + -0x18) * 8) >> 1;
        *(undefined **)((long)register0x00000020 + -0x30) = &DAT_002265c0;
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0x536a56;
        runtime_newobject((runtime__type *)&DAT_002265c0);
        puVar2 = *(undefined8 **)((long)register0x00000020 + -0x28);
        *puVar2 = *(undefined8 *)((long)register0x00000020 + 0x10);
        *(undefined8 **)((long)register0x00000020 + 0x60) = puVar2;
        *(undefined8 *)((long)register0x00000020 + 0x68) = 1;
        *(undefined8 *)((long)register0x00000020 + 0x70) = 1;
        return return_value_alias_variable;
      }
      *(undefined **)((long)register0x00000020 + -0x30) = &DAT_00225520;
      *(undefined1 **)((long)register0x00000020 + -0x28) = reflect__stmp_17;
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x536aa9;
      e.data = (void *)i;
      e._type = (runtime__type *)reflect__stmp_17;
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar6 + -8) = 0x536aaf;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar6;
  } while( true );
}

