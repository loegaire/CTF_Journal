
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*pageAlloc).allocRange(runtime.pageAlloc * p, uintptr
   base, uintptr npages, uintptr ~r2) */

uintptr runtime___pageAlloc__allocRange(runtime_pageAlloc *p,uintptr base,uintptr npages)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  runtime_pageBits *b;
  runtime_pageAlloc *p_00;
  ulong i;
  runtime_pallocData *m;
  uintptr i_00;
  char alloc;
  uint uVar4;
  undefined1 contig;
  ulong uVar5;
  ulong uVar6;
  ulong n;
  long in_FS_OFFSET;
  runtime_pageAlloc *p_spill;
  uintptr base_spill;
  uintptr npages_spill;
  undefined2 local_68;
  undefined6 uStack_66;
  
                    /* Unresolved local var: uintptr limit@[???]
                       Unresolved local var: uint scav@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uVar2 = base_spill + 0x800000000000;
  uVar3 = uVar2 >> 0x16;
  uVar6 = base_spill + npages_spill * 0x2000 + 0x7fffffffffff;
  n = uVar6 >> 0x16;
  uVar5 = (base_spill & 0x3fffff) >> 0xd;
  i = ((base_spill + npages_spill * 0x2000) - 1 & 0x3fffff) >> 0xd;
  if (n == uVar3) {
    if (0x1fff < uVar2 >> 0x23) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
    b = (runtime_pageBits *)((uVar3 & 0x1fff) * 0x80);
    alloc = (char)p_spill->chunks[uVar2 >> 0x23] + (char)b + '@';
    i_00 = (i - uVar5) + 1;
    runtime___pageBits__popcntRange(b,i_00,(uint)p_spill->chunks[uVar2 >> 0x23]);
    contig = (undefined1)uVar5;
    p_00 = (runtime_pageAlloc *)CONCAT62(uStack_66,local_68);
    runtime___pallocData__allocRange((runtime_pallocData *)p_00,i_00,i_00);
  }
  else {
    if (0x1fff < uVar2 >> 0x23) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
    lVar1 = uVar5 - 0x200;
    uVar4 = -lVar1;
    runtime___pageBits__popcntRange
              ((runtime_pageBits *)((uVar3 & 0x1fff) * 0x80),i,(uint)p_spill->chunks[uVar2 >> 0x23])
    ;
    m = (runtime_pallocData *)CONCAT62(uStack_66,local_68);
    runtime___pallocData__allocRange(m,i,-lVar1);
                    /* Unresolved local var: runtime.chunkIdx c@[???] */
    while( true ) {
      contig = (undefined1)uVar5;
      alloc = (char)uVar4;
      uVar3 = uVar3 + 1;
      if (n <= uVar3) break;
      if (0x1fff < uVar3 >> 0xd) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndexU();
      }
      uVar4 = (uVar3 & 0x1fff) * 0x80;
                    /* Unresolved local var: runtime.pallocData * chunk@[???] */
      runtime___pageBits__popcntRange
                ((runtime_pageBits *)p_spill->chunks[uVar3 >> 0xd],
                 (uint)(*p_spill->chunks[uVar3 >> 0xd])[uVar3 & 0x1fff].scavenged,n);
      runtime___pallocData__allocAll((runtime_pallocData *)CONCAT62(uStack_66,local_68));
      m = (runtime_pallocData *)
          ((long)((runtime_pallocData *)CONCAT62(uStack_66,local_68))->pallocBits +
          (long)m->pallocBits);
    }
    uVar6 = uVar6 >> 0x23;
    if (0x1fff < uVar6) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
    i_00 = i + 1;
    runtime___pageBits__popcntRange
              ((runtime_pageBits *)p_spill->chunks[uVar6],i_00,(n & 0x1fff) * 0x80);
    runtime___pallocData__allocRange((runtime_pallocData *)CONCAT62(uStack_66,local_68),i_00,i_00);
    p_00 = (runtime_pageAlloc *)
           ((long)m->pallocBits +
           (long)((runtime_pallocData *)CONCAT62(uStack_66,local_68))->pallocBits);
  }
  runtime___pageAlloc__update(p_00,i_00,npages_spill,(bool)contig,(bool)alloc);
  return (long)p_00 << 0xd;
}

