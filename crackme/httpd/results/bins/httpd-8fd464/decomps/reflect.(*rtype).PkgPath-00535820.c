
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.(*rtype).PkgPath(reflect.rtype * t, string ~r0) */

string reflect___rtype__PkgPath(reflect_rtype *t)

{
  uint uVar1;
  undefined1 auVar2 [16];
  ulong unaff_RBX;
  long in_FS_OFFSET;
  string sVar3;
  string sVar4;
  reflect_rtype *t_spill;
  undefined4 local_18;
  undefined4 uStack_14;
  reflect_name local_10;
  
                    /* Unresolved local var: reflect.uncommonType * ut@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((t_spill->tflag & 4) != 0) {
    reflect___rtype__uncommon(t_spill);
    if ((uint *)CONCAT44(uStack_14,local_18) != (uint *)0x0) {
      uVar1 = *(uint *)CONCAT44(uStack_14,local_18);
      reflect_resolveNameOff((void *)(ulong)uVar1,(int32)unaff_RBX);
      sVar3 = reflect_name_name(local_10);
      sVar4.len = sVar3.len;
      sVar4.str._4_4_ = uStack_14;
      sVar4.str._0_4_ = uVar1;
      return sVar4;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = unaff_RBX;
    return (string)(auVar2 << 0x40);
  }
  sVar3.len = unaff_RBX;
  sVar3.str = (uint8 *)t_spill;
  return sVar3;
}

