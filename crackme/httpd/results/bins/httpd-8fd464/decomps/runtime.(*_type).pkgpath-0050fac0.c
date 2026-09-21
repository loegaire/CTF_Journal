
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*_type).pkgpath(runtime._type * t, string ~r0) */

string runtime____type__pkgpath(runtime__type *t)

{
  uint uVar1;
  byte bVar2;
  int unaff_RBX;
  long in_FS_OFFSET;
  string sVar3;
  string sVar4;
  string sVar5;
  string sVar6;
  runtime_structtype *st;
  undefined4 local_18;
  undefined4 uStack_14;
  runtime_name local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: runtime.uncommontype * u@[???] */
  runtime____type__uncommon(&st->typ);
  if ((uint *)CONCAT44(uStack_14,local_18) != (uint *)0x0) {
    uVar1 = *(uint *)CONCAT44(uStack_14,local_18);
    runtime_resolveNameOff((void *)(ulong)uVar1,(runtime_nameOff)unaff_RBX);
    sVar3 = runtime_name_name(local_10);
    sVar3.str._4_4_ = uStack_14;
    sVar3.str._0_4_ = uVar1;
    return sVar3;
  }
  bVar2 = (st->typ).kind & 0x1f;
  if (bVar2 == 0x14) {
    sVar3 = runtime_name_name((runtime_name)(st->pkgPath).bytes);
    sVar6.len = sVar3.len;
    sVar6.str._4_4_ = uStack_14;
    sVar6.str._0_4_ = local_18;
    return sVar6;
  }
  if (bVar2 == 0x19) {
    sVar3 = runtime_name_name((runtime_name)(st->pkgPath).bytes);
    sVar4.len = sVar3.len;
    sVar4.str._4_4_ = uStack_14;
    sVar4.str._0_4_ = local_18;
    return sVar4;
  }
  sVar5.len = unaff_RBX;
  sVar5.str = (uint8 *)st;
  return sVar5;
}

