
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*pageAlloc).scavengeOne(runtime.pageAlloc * p,
   runtime.addrRange work, uintptr max, bool mayUnlock, uintptr ~r3, runtime.addrRange ~r4) */

multireturn_uintptr_runtime_addrRange_
runtime___pageAlloc__scavengeOne
          (runtime_pageAlloc *p,runtime_addrRange work,uintptr max,bool mayUnlock)

{
  ulong uVar1;
  runtime_pallocData *prVar2;
  runtime_pageAlloc *extraout_RAX;
  runtime_offAddr rVar3;
  runtime_pageAlloc *searchIdx;
  uint uVar4;
  long lVar5;
  runtime_pallocData *m;
  ulong uVar6;
  Elf64_Ehdr *pEVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  multireturn_uint_uint_ mVar9;
  runtime_addrRange work_00;
  string s;
  multireturn_uintptr_runtime_addrRange_ mVar10;
  multireturn_uintptr_runtime_addrRange_ mVar11;
  multireturn_uintptr_runtime_addrRange_ mVar12;
  multireturn_uintptr_runtime_addrRange_ mVar13;
  runtime_pageAlloc *p_spill;
  runtime_addrRange work_spill;
  uintptr max_spill;
  bool mayUnlock_spill;
  runtime_pallocData *local_80;
  ulong local_78;
  uint local_70;
  runtime_pageAlloc *local_68;
  runtime_pallocData *local_10;
  
  rVar3 = work.limit.a;
                    /* Unresolved local var: uintptr maxPages@[???]
                       Unresolved local var: uintptr minPages@[???]
                       Unresolved local var: uintptr maxAddr@[???]
                       Unresolved local var: func(runtime.addrRange)_(runtime.chunkIdx,_bool) * *
                       findCandidate@[???] */
  while (&local_10 <= *(runtime_pallocData ***)(*(long *)(in_FS_OFFSET + -8) + 0x18)) {
    runtime_morestackc();
    p = extraout_RAX;
  }
  uVar4 = 0x800000000000;
  if (work_spill.base.a + 0x800000000000 < work_spill.limit.a + 0x800000000000) {
    lVar5 = work_spill.limit.a - work_spill.base.a;
  }
  else {
    lVar5 = 0;
  }
  if (lVar5 == 0) {
    mVar11.~r4.base.a = (uintptr)p_spill;
    mVar11.~r3 = (uintptr)p;
    mVar11.~r4.limit.a = rVar3.a;
    return mVar11;
  }
  if ((work_spill.base.a & 0x3fffff) != 0) {
    s.len = (int)p_spill;
    s.str = &DAT_002a7fbb;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
  m = (runtime_pallocData *)(runtime_physPageSize >> 0xd);
  if (m == (runtime_pallocData *)0x0) {
    m = (runtime_pallocData *)0x1;
  }
  uVar6 = max_spill >> 0xd;
                    /* Unresolved local var: runtime.chunkIdx candidateChunkIdx@[???]
                       Unresolved local var: runtime.pallocData * chunk@[???]
                       Unresolved local var: uint base@[???]
                       Unresolved local var: uint npages@[???] */
  if ((max_spill & 0x1fff) != 0) {
    uVar6 = (max_spill >> 0xd) + 1;
  }
  uVar1 = work_spill.limit.a + 0x7fffffffffff >> 0x16;
  if ((ulong)p_spill->summary[4].len <= uVar1) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndexU();
  }
  uVar8 = p_spill->summary[4].array[uVar1];
  if ((long)uVar8 < 0) {
    pEVar7 = &Elf64_Ehdr_00200000;
  }
  else {
    pEVar7 = (Elf64_Ehdr *)(uVar8 >> 0x15 & 0x1fffff);
  }
  if (m <= pEVar7) {
    uVar8 = work_spill.limit.a + 0x7fffffffffff >> 0x23;
    if (0x1fff < uVar8) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
                    /* Unresolved local var: uint base@[???]
                       Unresolved local var: uint npages@[???] */
    mVar9 = runtime___pallocData__findScavengeCandidate
                      ((runtime_pallocData *)((work_spill.limit.a - 1 & 0x3fffff) >> 0xd),
                       (uint)p_spill,(uintptr)p_spill->chunks[uVar8],0x800000000000);
    mVar10.~r4.base.a = mVar9.~r4;
    local_80 = m;
    local_78 = uVar6;
    if (local_68 != (runtime_pageAlloc *)0x0) {
      runtime___pageAlloc__scavengeRangeLocked(local_68,mVar10.~r4.base.a,local_70,uVar4);
      mVar10.~r3 = local_70;
      mVar10.~r4.limit.a = work_spill.base.a;
      return mVar10;
    }
  }
  uVar1 = uVar1 * 0x400000;
  local_10 = m;
  while( true ) {
    uVar4 = 0x800000000000;
    rVar3.a = 0xffff800000000000;
    if (work_spill.base.a + 0x800000000000 < uVar1) {
      lVar5 = (uVar1 - 0x800000000000) - work_spill.base.a;
    }
    else {
      lVar5 = 0;
    }
    prVar2 = (runtime_pallocData *)0x0;
    searchIdx = p_spill;
    if (lVar5 == 0) break;
    if (mayUnlock_spill) {
      runtime_unlock2(p_spill->mheapLock);
    }
    work_00.limit.a = (uintptr)p_spill;
    work_00.base.a = (uintptr)runtime___pageAlloc__scavengeOne_func3;
    runtime___pageAlloc__scavengeOne_func3(work_00);
    rVar3.a = local_78 & 0xff;
    if (mayUnlock_spill) {
      rVar3.a = (uintptr)p_spill->mheapLock;
      runtime_lock2((runtime_mutex *)p_spill);
    }
    searchIdx = (runtime_pageAlloc *)(ulong)mayUnlock_spill;
    prVar2 = local_80;
    if ((char)local_78 == '\0') break;
    if (0x1fff < (ulong)local_80 >> 0xd) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
    mVar9 = runtime___pallocData__findScavengeCandidate(m,(uint)searchIdx,(uintptr)p_spill,uVar4);
    mVar12.~r4.base.a = mVar9.~r4;
    if (local_68 != (runtime_pageAlloc *)0x0) {
      runtime___pageAlloc__scavengeRangeLocked(local_68,mVar12.~r4.base.a,local_70,uVar4);
      mVar12.~r3 = local_70;
      mVar12.~r4.limit.a = work_spill.base.a;
      return mVar12;
    }
    uVar1 = (long)local_80 << 0x16;
    local_80 = m;
    local_78 = uVar6;
  }
  mVar13.~r4.base.a = (uintptr)searchIdx;
  mVar13.~r3 = (uintptr)prVar2;
  mVar13.~r4.limit.a = rVar3.a;
  return mVar13;
}

