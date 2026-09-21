
/* WARNING: Unknown calling convention */

void runtime___pageCache__flush(runtime_pageCache *c,runtime_pageAlloc *p)

{
  ulong uVar1;
  uint64 *puVar2;
  ulong uVar3;
  ulong n;
  uintptr npages;
  ulong uVar4;
  long in_FS_OFFSET;
  runtime_pageCache *c_spill;
  runtime_pageAlloc *p_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x18)) {
    runtime_morestackc();
  }
  if (c_spill->cache == 0) {
    return;
  }
  uVar1 = c_spill->base + 0x800000000000;
  uVar4 = (c_spill->base & 0x3fffff) >> 0xd;
  uVar3 = 0;
                    /* Unresolved local var: uint i@[???] */
  do {
    if (0x3f < uVar3) {
                    /* Unresolved local var: runtime.offAddr b@[???] */
      uVar1 = c_spill->base + 0x800000000000;
      npages = (p_spill->searchAddr).a + 0x800000000000;
      if (uVar1 < npages) {
        (p_spill->searchAddr).a = c_spill->base;
      }
      runtime___pageAlloc__update
                ((runtime_pageAlloc *)c_spill->base,(uintptr)c_spill,npages,false,SUB81(uVar1,0));
      c_spill->base = 0;
      c_spill->cache = 0;
      c_spill->scav = 0;
      return;
    }
    n = uVar3;
    if ((c_spill->cache >> (uVar3 & 0x3f) & 1) != 0) {
      if (0x1fff < uVar1 >> 0x23) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndexU();
      }
      n = uVar4 + uVar3;
      if (7 < n >> 6) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndexU();
      }
      puVar2 = (*p_spill->chunks[uVar1 >> 0x23])[uVar1 >> 0x16 & 0x1fff].pallocBits + (n >> 6);
      *puVar2 = *puVar2 & ~(1L << ((byte)n & 0x3f));
    }
    if ((c_spill->scav >> (uVar3 & 0x3f) & 1) != 0) {
      if (0x1fff < uVar1 >> 0x23) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndexU();
      }
      runtime___pageBits__setRange((runtime_pageBits *)(uVar4 + uVar3),(uint)c_spill,n);
    }
    uVar3 = uVar3 + 1;
  } while( true );
}

