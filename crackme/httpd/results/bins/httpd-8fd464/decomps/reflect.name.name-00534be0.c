
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.name.name(reflect.name n, string s) */

string reflect_name_name(reflect_name n)

{
  undefined1 auVar1 [16];
  long lVar2;
  ulong unaff_RBX;
  string sVar3;
  reflect_name n_spill;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
                    /* Unresolved local var: int l@[???] */
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  if (n_spill.bytes == (uint8 *)0x0) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = unaff_RBX;
    return (string)(auVar1 << 0x40);
  }
  lVar2 = 0;
                    /* Unresolved local var: int v@[???]
                       Unresolved local var: int i@[???]
                       Unresolved local var: uint8 x@[???] */
  while( true ) {
    if (lVar2 * 7 < 0) {
                    /* WARNING: Subroutine does not return */
      runtime_panicshift();
    }
    if ((n_spill.bytes[lVar2 + 1] & 0x80) == 0) break;
    lVar2 = lVar2 + 1;
  }
  sVar3.len = (int)n_spill.bytes;
  sVar3.str = n_spill.bytes + lVar2 + 2;
  return sVar3;
}

