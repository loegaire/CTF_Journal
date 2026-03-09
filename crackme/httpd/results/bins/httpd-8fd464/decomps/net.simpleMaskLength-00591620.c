
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.simpleMaskLength(net.IPMask mask, int ~r1) */

int net_simpleMaskLength(net_IPMask mask)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  net_IPMask mask_spill;
  
                    /* Unresolved local var: int n@[???] */
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: uint8 v@[???] */
  uVar1 = 0;
  while( true ) {
    if (mask_spill.len <= (long)uVar1) {
      return uVar1;
    }
    bVar2 = mask_spill.array[uVar1];
    if (bVar2 != 0xff) break;
    uVar1 = uVar1 + 1;
  }
  for (; (bVar2 & 0x80) != 0; bVar2 = bVar2 << 1) {
  }
  uVar3 = uVar1;
  if (bVar2 == 0) {
    while( true ) {
      uVar3 = uVar3 + 1;
      if (mask_spill.len <= (long)uVar3) {
        return uVar1;
      }
      if ((ulong)mask_spill.len <= uVar3) break;
      if (mask_spill.array[uVar3] != 0) {
        return uVar1;
      }
    }
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  return uVar1;
}

