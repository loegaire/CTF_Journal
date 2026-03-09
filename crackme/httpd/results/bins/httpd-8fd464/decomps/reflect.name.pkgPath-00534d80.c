
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.name.pkgPath(reflect.name n, string ~r0) */

string reflect_name_pkgPath(reflect_name n)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int unaff_RBX;
  long lVar6;
  long in_FS_OFFSET;
  string sVar7;
  string sVar8;
  reflect_name n_spill;
  undefined4 uStack_1c;
  reflect_name local_18;
  uint local_c;
  
                    /* Unresolved local var: int l@[???]
                       Unresolved local var: int off@[???]
                       Unresolved local var: reflect.name pkgPathName@[???]
                       Unresolved local var: int32 nameOff@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((n_spill.bytes != (uint8 *)0x0) && ((*n_spill.bytes & 4) != 0)) {
    lVar3 = 0;
    lVar6 = 0;
                    /* Unresolved local var: int v@[???]
                       Unresolved local var: int i@[???]
                       Unresolved local var: uint8 x@[???] */
    while( true ) {
      uVar1 = lVar3 * 7;
      if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        runtime_panicshift();
      }
      lVar6 = lVar6 + ((ulong)(n_spill.bytes[lVar3 + 1] & 0x7f) << ((byte)uVar1 & 0x3f) &
                      -(ulong)(uVar1 < 0x40));
      if ((n_spill.bytes[lVar3 + 1] & 0x80) == 0) break;
      lVar3 = lVar3 + 1;
    }
    lVar4 = lVar6 + lVar3 + 2;
    if ((*n_spill.bytes & 2) != 0) {
                    /* Unresolved local var: int l2@[???] */
      lVar4 = 0;
      lVar5 = 0;
                    /* Unresolved local var: int v@[???]
                       Unresolved local var: int i@[???]
                       Unresolved local var: uint8 x@[???] */
      while( true ) {
        uVar1 = lVar4 * 7;
        if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
          runtime_panicshift();
        }
        lVar5 = lVar5 + ((ulong)(n_spill.bytes[lVar6 + lVar3 + lVar4 + 2] & 0x7f) <<
                         ((byte)uVar1 & 0x3f) & -(ulong)(uVar1 < 0x40));
        if ((n_spill.bytes[lVar6 + lVar3 + lVar4 + 2] & 0x80) == 0) break;
        lVar4 = lVar4 + 1;
      }
      lVar4 = lVar5 + lVar4 + lVar6 + lVar3 + 3;
    }
    local_c = 0;
    if (&local_c != (uint *)(n_spill.bytes + lVar4)) {
      local_c = *(uint *)(n_spill.bytes + lVar4);
    }
    uVar2 = local_c;
    reflect_resolveTypeOff((void *)(ulong)local_c,(int32)lVar4);
    sVar7 = reflect_name_name(local_18);
    sVar8.len = sVar7.len;
    sVar8.str._4_4_ = uStack_1c;
    sVar8.str._0_4_ = uVar2;
    return sVar8;
  }
  sVar7.len = unaff_RBX;
  sVar7.str = n_spill.bytes;
  return sVar7;
}

