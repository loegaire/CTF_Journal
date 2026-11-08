
/* WARNING: Unknown calling convention */

void runtime___mspan__refillAllocCache(runtime_mspan *s,uintptr whichByte)

{
  runtime_mspan *s_spill;
  uintptr whichByte_spill;
  
                    /* Unresolved local var: uint8[8] * bytes@[???] */
  s_spill->allocCache = ~*(ulong *)(s_spill->allocBits + whichByte_spill);
  return;
}

