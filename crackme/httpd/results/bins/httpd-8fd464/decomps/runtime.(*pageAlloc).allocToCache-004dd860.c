
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*pageAlloc).allocToCache(runtime.pageAlloc * p,
   runtime.pageCache ~r0) */

runtime_pageCache runtime___pageAlloc__allocToCache(runtime_pageAlloc *p)

{
  long lVar1;
  runtime_offAddr rVar2;
  ulong uVar3;
  runtime_pallocBits *b;
  runtime_pageAlloc *p_00;
  uint64 in_RCX;
  ulong uVar4;
  runtime_pallocData (*searchIdx) [8192];
  runtime_pageAlloc *prVar5;
  undefined1 contig;
  ulong uVar6;
  long lVar7;
  uintptr uVar8;
  long in_FS_OFFSET;
  multireturn_uintptr_runtime_offAddr_ mVar9;
  multireturn_uint_uint__conflict mVar10;
  string s;
  runtime_pageCache rVar11;
  runtime_pageCache rVar12;
  runtime_pageCache rVar13;
  runtime_pageAlloc *p_spill;
  ulong local_58;
  undefined2 local_50;
  undefined6 uStack_4e;
  
                    /* Unresolved local var: runtime.pageCache c@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x18)) {
    runtime_morestackc();
  }
  uVar8 = (p_spill->searchAddr).a;
  rVar13.base = (runtime_pageAlloc *)(uVar8 + 0x800000000000 >> 0x16);
  if ((runtime_pageAlloc *)p_spill->end <= rVar13.base) {
    rVar13.cache = uVar8;
    rVar13.scav = in_RCX;
    return rVar13;
  }
  if ((runtime_pageAlloc *)p_spill->summary[4].len <= rVar13.base) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndexU();
  }
  if (p_spill->summary[4].array[(long)rVar13.base] == 0) {
                    /* Unresolved local var: uintptr addr@[???] */
    mVar9 = runtime___pageAlloc__find(rVar13.base,uVar8);
    rVar2 = runtime_maxSearchAddr;
    rVar11.cache = mVar9.~r2.a;
    if (local_58 == 0) {
      (p_spill->searchAddr).a = runtime_maxSearchAddr.a;
      rVar11.base = rVar2.a;
      rVar11.scav = (uint64)p_spill;
      return rVar11;
    }
    uVar4 = local_58 + 0x800000000000 >> 0x23;
    if (0x1fff < uVar4) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
    searchIdx = (runtime_pallocData (*) [8192])((local_58 + 0x800000000000 >> 0x16 & 0x1fff) * 0x80)
    ;
    lVar7 = (long)(*searchIdx)[0].pallocBits + (long)(*p_spill->chunks[uVar4])[0].pallocBits;
    uVar3 = (local_58 & 0x3fffff) >> 0x13;
    if (7 < uVar3) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
    uVar6 = *(ulong *)(lVar7 + uVar3 * 8);
    uVar8 = local_58 & 0xfffffffffff80000;
    p_00 = *(runtime_pageAlloc **)
            ((long)(*searchIdx)[0].pallocBits +
            (long)((*p_spill->chunks[uVar4])[0].scavenged + uVar3));
  }
  else {
    uVar6 = uVar8 + 0x800000000000 >> 0x23;
    if (0x1fff < uVar6) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
    searchIdx = p_spill->chunks[uVar6];
    b = (runtime_pallocBits *)(((ulong)rVar13.base & 0x1fff) * 0x80);
    lVar1 = (long)*b + (long)searchIdx;
    lVar7 = lVar1;
    mVar10 = runtime___pallocBits__find(b,(uVar8 & 0x3fffff) >> 0xd,(uint)searchIdx);
    s.len = mVar10.~r3;
    uVar6 = CONCAT62(uStack_4e,local_50);
    if (uVar6 == 0xffffffffffffffff) {
      s.str = &DAT_00299865;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s);
    }
    uVar4 = uVar6 >> 6;
    if (7 < uVar4) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
    uVar8 = ((uVar6 & 0xffffffffffffffc0) * 0x2000 + (long)rVar13.base * 0x400000) - 0x800000000000;
    uVar6 = *(ulong *)(lVar1 + uVar4 * 8);
    p_00 = *(runtime_pageAlloc **)((long)b[1] + (long)((*searchIdx)[0].pallocBits + uVar4));
  }
  contig = (undefined1)lVar7;
  prVar5 = p_spill;
  runtime___pageAlloc__allocRange(p_00,(uintptr)searchIdx,~uVar6);
  runtime___pageAlloc__update(p_spill,(uintptr)searchIdx,uVar8,(bool)contig,SUB81(prVar5,0));
  (p_spill->searchAddr).a = uVar8 + 0x7e000;
  rVar12.cache = (uint64)searchIdx;
  rVar12.base = (uintptr)p_00;
  rVar12.scav = uVar8 + 0x7e000;
  return rVar12;
}

