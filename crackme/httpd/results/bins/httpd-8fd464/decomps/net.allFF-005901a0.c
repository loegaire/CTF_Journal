
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.allFF([]uint8 b, bool ~r1) */

bool net_allFF(__uint8 b)

{
  long lVar1;
  __uint8 b_spill;
  
  lVar1 = 0;
  while( true ) {
    if (b_spill.len <= lVar1) {
      return SUB81(b_spill.len,0);
    }
    if (b_spill.array[lVar1] != 0xff) break;
    lVar1 = lVar1 + 1;
  }
  return SUB81(b_spill.len,0);
}

