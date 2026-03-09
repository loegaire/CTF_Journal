
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.(*rtype).exportedMethods(reflect.rtype * t,
   []reflect.method ~r0) */

__reflect_method reflect___rtype__exportedMethods(reflect_rtype *t)

{
  undefined1 auVar1 [24];
  long lVar2;
  ulong in_RCX;
  ulong uVar3;
  undefined8 unaff_RBX;
  undefined1 *puVar4;
  undefined1 *unaff_RBP;
  long in_FS_OFFSET;
  __reflect_method _Var5;
  reflect_rtype *t_spill;
  
  do {
                    /* Unresolved local var: reflect.uncommonType * ut@[???] */
    puVar4 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar4 = (undefined1 *)((long)register0x00000020 + -0x18);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      *(reflect_rtype **)((long)register0x00000020 + -0x18) =
           *(reflect_rtype **)((long)register0x00000020 + 8);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x53570f;
      reflect___rtype__uncommon(*(reflect_rtype **)((long)register0x00000020 + 8));
      lVar2 = *(long *)((long)register0x00000020 + -0x10);
      if (lVar2 == 0) {
        *(undefined8 *)((long)register0x00000020 + 0x10) = 0;
        *(undefined8 *)((long)register0x00000020 + 0x18) = 0;
        *(undefined8 *)((long)register0x00000020 + 0x20) = 0;
        auVar1._8_8_ = in_RCX;
        auVar1._0_8_ = unaff_RBX;
        auVar1._16_8_ = 0;
        return (__reflect_method)(auVar1 << 0x40);
      }
      uVar3 = (ulong)*(ushort *)(lVar2 + 6);
      if (*(ushort *)(lVar2 + 6) == 0) {
        uVar3 = 0;
        lVar2 = 0;
LAB_0053573a:
        *(long *)((long)register0x00000020 + 0x10) = lVar2;
        *(ulong *)((long)register0x00000020 + 0x18) = uVar3;
        *(ulong *)((long)register0x00000020 + 0x20) = uVar3;
        _Var5.len = unaff_RBX;
        _Var5.array = (reflect_method *)lVar2;
        _Var5.cap = in_RCX;
        return _Var5;
      }
      in_RCX = (ulong)*(uint *)(lVar2 + 8);
      lVar2 = lVar2 + in_RCX;
      if (uVar3 < 0x10001) goto LAB_0053573a;
      unaff_RBX = 0x10000;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x53577a;
      runtime_panicSlice3Alen();
    }
    *(undefined8 *)(puVar4 + -8) = 0x535785;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar4;
  } while( true );
}

