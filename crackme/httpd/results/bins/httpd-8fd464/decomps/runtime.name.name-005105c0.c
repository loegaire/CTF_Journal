
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.name.name(runtime.name n, string s) */

string runtime_name_name(runtime_name n)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  long lVar3;
  long lVar4;
  ulong unaff_RBX;
  string sVar5;
  string sVar6;
  runtime_name n_spill;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
                    /* Unresolved local var: int l@[???] */
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  if (n_spill.bytes == (uint8 *)0x0) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = unaff_RBX;
    return (string)(auVar2 << 0x40);
  }
  lVar3 = 0;
  lVar4 = 0;
                    /* Unresolved local var: int v@[???]
                       Unresolved local var: int i@[???]
                       Unresolved local var: uint8 x@[???] */
  while( true ) {
    uVar1 = lVar3 * 7;
    if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      runtime_panicshift();
    }
    lVar4 = lVar4 + ((ulong)(n_spill.bytes[lVar3 + 1] & 0x7f) << ((byte)uVar1 & 0x3f) &
                    -(ulong)(uVar1 < 0x40));
    if ((n_spill.bytes[lVar3 + 1] & 0x80) == 0) break;
    lVar3 = lVar3 + 1;
  }
  if (lVar4 == 0) {
    sVar5.len = (int)n_spill.bytes;
    sVar5.str = n_spill.bytes;
    return sVar5;
  }
  sVar6.len = (int)n_spill.bytes;
  sVar6.str = n_spill.bytes + lVar3 + 2;
  return sVar6;
}

