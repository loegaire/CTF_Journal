
/* WARNING: Unknown calling convention */

void runtime___pageBits__setRange(runtime_pageBits *b,uint i,uint n)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  runtime_pageBits *b_spill;
  uint i_spill;
  uint n_spill;
  
                    /* Unresolved local var: uint j@[???] */
  uVar2 = i_spill >> 6;
  if (7 < uVar2) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndexU();
  }
  bVar3 = (byte)i_spill;
  if (n_spill == 1) {
    (*b_spill)[uVar2] = (*b_spill)[uVar2] | 1L << (bVar3 & 0x3f);
    return;
  }
  uVar1 = (n_spill + i_spill) - 1;
  uVar4 = uVar1 >> 6;
  if (uVar4 == uVar2) {
    (*b_spill)[uVar2] =
         (*b_spill)[uVar2] |
         (1L << ((byte)n_spill & 0x3f) & -(ulong)(n_spill < 0x40)) - 1 << (bVar3 & 0x3f);
    return;
  }
  if (uVar4 < 8) {
    (*b_spill)[uVar2] = (*b_spill)[uVar2] | -1L << (bVar3 & 0x3f);
                    /* Unresolved local var: uint k@[???] */
    while (uVar2 + 1 < uVar4) {
      (*b_spill)[uVar2 + 1] = 0xffffffffffffffff;
      uVar2 = uVar2 + 1;
    }
    uVar2 = (uVar1 & 0x3f) + 1;
    (*b_spill)[uVar4] =
         (*b_spill)[uVar4] | (1L << ((byte)uVar2 & 0x3f) & -(ulong)(uVar2 < 0x40)) - 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndexU();
}

