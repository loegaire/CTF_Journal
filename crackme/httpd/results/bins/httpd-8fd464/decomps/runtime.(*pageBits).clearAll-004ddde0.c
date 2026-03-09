
/* WARNING: Unknown calling convention */

void runtime___pageBits__clearAll(runtime_pageBits *b)

{
  long lVar1;
  runtime_pageBits *b_spill;
  
                    /* Unresolved local var: int i@[???] */
  for (lVar1 = 0; lVar1 < 8; lVar1 = lVar1 + 1) {
    (*b_spill)[lVar1] = 0;
  }
  return;
}

