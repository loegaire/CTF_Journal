
/* WARNING: Unknown calling convention */

void net_lowerASCIIBytes(__uint8 x)

{
  long lVar1;
  __uint8 x_spill;
  
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: uint8 b@[???] */
  for (lVar1 = 0; lVar1 < x_spill.len; lVar1 = lVar1 + 1) {
    if ((byte)(x_spill.array[lVar1] + 0xbf) < 0x1a) {
      x_spill.array[lVar1] = x_spill.array[lVar1] + 0x20;
    }
  }
  return;
}

