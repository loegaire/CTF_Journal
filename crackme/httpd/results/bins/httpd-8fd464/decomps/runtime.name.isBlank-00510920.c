
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.name.isBlank(runtime.name n, bool ~r0) */

bool runtime_name_isBlank(runtime_name n)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  runtime_name n_spill;
  
                    /* Unresolved local var: int l@[???] */
  if (n_spill.bytes == (uint8 *)0x0) {
    return false;
  }
  lVar3 = 0;
  lVar2 = 0;
                    /* Unresolved local var: int v@[???]
                       Unresolved local var: int i@[???]
                       Unresolved local var: uint8 x@[???] */
  while( true ) {
    uVar1 = lVar3 * 7;
    if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      runtime_panicshift();
    }
    lVar2 = ((ulong)(n_spill.bytes[lVar3 + 1] & 0x7f) << ((byte)uVar1 & 0x3f) &
            -(ulong)(uVar1 < 0x40)) + lVar2;
    if ((n_spill.bytes[lVar3 + 1] & 0x80) == 0) break;
    lVar3 = lVar3 + 1;
  }
  if (lVar2 == 1) {
    bVar4 = n_spill.bytes[2] == 0x5f;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

