
/* WARNING: Unknown calling convention */

void runtime___pageAlloc__free(runtime_pageAlloc *p,uintptr base,uintptr npages)

{
  ulong uVar1;
  ulong uVar2;
  runtime_pallocData *i;
  runtime_pallocData *i_00;
  runtime_pageAlloc *prVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  runtime_pageAlloc *p_spill;
  runtime_offAddr b;
  uintptr npages_spill;
  
                    /* Unresolved local var: uintptr limit@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x18)) {
    runtime_morestackc();
  }
  uVar5 = b.a + 0x800000000000;
  if (uVar5 < (p_spill->searchAddr).a + 0x800000000000) {
    (p_spill->searchAddr).a = b.a;
  }
  uVar1 = (npages_spill * 0x2000 + b.a) - 1;
                    /* Unresolved local var: runtime.offAddr offLimit@[???] */
  uVar6 = npages_spill * 0x2000 + b.a + 0x7fffffffffff;
  if ((p_spill->scav).freeHWM.a + 0x800000000000 < uVar6) {
    (p_spill->scav).freeHWM.a = uVar1;
  }
  if (npages_spill == 1) {
    if (0x1fff < uVar5 >> 0x23) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
    i_00 = *p_spill->chunks[uVar5 >> 0x23] + (uVar5 >> 0x16 & 0x1fff);
    uVar5 = (b.a & 0x3fffff) >> 0x13;
    if (7 < uVar5) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
    p_spill = (runtime_pageAlloc *)((b.a & 0x3fffff) >> 0xd);
    i_00->pallocBits[uVar5] = i_00->pallocBits[uVar5] & ~(1L << ((byte)p_spill & 0x3f));
    prVar3 = p_spill;
  }
  else {
    uVar4 = uVar5 >> 0x16;
    uVar2 = (b.a & 0x3fffff) >> 0xd;
    i = (runtime_pallocData *)((uVar1 & 0x3fffff) >> 0xd);
    if (uVar6 >> 0x16 == uVar4) {
      prVar3 = (runtime_pageAlloc *)(uVar5 >> 0x23);
      if ((runtime_pageAlloc *)0x1fff < prVar3) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndexU();
      }
      uVar5 = (uVar4 & 0x1fff) * 0x80;
      p_spill = (runtime_pageAlloc *)(*p_spill->chunks[(long)prVar3] + (uVar4 & 0x1fff));
      i_00 = (runtime_pallocData *)((long)i - uVar2);
      runtime___pageBits__clearRange
                ((runtime_pageBits *)((long)i_00->pallocBits + 1),(uint)i_00,(uint)p_spill);
    }
    else {
      prVar3 = (runtime_pageAlloc *)(uVar5 >> 0x23);
      if ((runtime_pageAlloc *)0x1fff < prVar3) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndexU();
      }
      uVar5 = (uVar4 & 0x1fff) * 0x80;
      runtime___pageBits__clearRange
                ((runtime_pageBits *)-(uVar2 - 0x200),(uint)i,
                 (uint)(*p_spill->chunks[(long)prVar3] + (uVar4 & 0x1fff)));
      i_00 = i;
                    /* Unresolved local var: runtime.chunkIdx c@[???] */
      while (uVar4 = uVar4 + 1, uVar4 < uVar6 >> 0x16) {
        if (0x1fff < uVar4 >> 0xd) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndexU();
        }
        i_00 = (runtime_pallocData *)((uVar4 & 0x1fff) * 0x80);
        runtime___pageBits__clearAll((*p_spill->chunks[uVar4 >> 0xd])[uVar4 & 0x1fff].pallocBits);
      }
      if (0x1fff < uVar6 >> 0x23) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndexU();
      }
      runtime___pageBits__clearRange
                ((runtime_pageBits *)((long)i->pallocBits + 1),(uint)i_00,(uint)p_spill);
    }
  }
  runtime___pageAlloc__update
            ((runtime_pageAlloc *)b.a,(uintptr)i_00,(uintptr)p_spill,SUB81(uVar5,0),SUB81(prVar3,0))
  ;
  return;
}

