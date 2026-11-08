
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.name.tag(runtime.name n, string s) */

string runtime_name_tag(runtime_name n)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int unaff_RBX;
  string sVar6;
  string sVar7;
  runtime_name n_spill;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
                    /* Unresolved local var: int l@[???]
                       Unresolved local var: int l2@[???] */
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  if ((*n_spill.bytes & 2) == 0) {
    sVar6.len = unaff_RBX;
    sVar6.str = n_spill.bytes;
    return sVar6;
  }
  lVar3 = 0;
  lVar5 = 0;
                    /* Unresolved local var: int v@[???]
                       Unresolved local var: int i@[???]
                       Unresolved local var: uint8 x@[???] */
  while( true ) {
    uVar2 = lVar3 * 7;
    if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      runtime_panicshift();
    }
    lVar5 = lVar5 + ((ulong)(n_spill.bytes[lVar3 + 1] & 0x7f) << ((byte)uVar2 & 0x3f) &
                    -(ulong)(uVar2 < 0x40));
    if ((n_spill.bytes[lVar3 + 1] & 0x80) == 0) break;
    lVar3 = lVar3 + 1;
  }
  lVar4 = 0;
  sVar7.len = 0;
                    /* Unresolved local var: int v@[???]
                       Unresolved local var: int i@[???]
                       Unresolved local var: uint8 x@[???] */
  while( true ) {
    lVar1 = lVar5 + lVar3 + lVar4;
    uVar2 = lVar4 * 7;
    if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      runtime_panicshift();
    }
    sVar7.len = sVar7.len +
                ((ulong)(n_spill.bytes[lVar1 + 2] & 0x7f) << ((byte)uVar2 & 0x3f) &
                -(ulong)(uVar2 < 0x40));
    if ((n_spill.bytes[lVar1 + 2] & 0x80) == 0) break;
    lVar4 = lVar4 + 1;
  }
  sVar7.str = n_spill.bytes + lVar1 + 3;
  return sVar7;
}

