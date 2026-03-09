
/* WARNING: Unknown calling convention */

void runtime___pallocData__allocRange(runtime_pallocData *m,uint i,uint n)

{
  long in_FS_OFFSET;
  runtime_pallocData *m_spill;
  uint i_spill;
  uint n_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime___pageBits__setRange(m_spill->pallocBits,i,i_spill);
  runtime___pageBits__clearRange((runtime_pageBits *)n_spill,i,i_spill);
  return;
}

