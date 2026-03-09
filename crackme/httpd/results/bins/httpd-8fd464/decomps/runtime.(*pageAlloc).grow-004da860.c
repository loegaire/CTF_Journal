
/* WARNING: Unknown calling convention */

void runtime___pageAlloc__grow(runtime_pageAlloc *p,uintptr base,uintptr size)

{
  runtime_pageAlloc *prVar1;
  ulong uVar2;
  runtime_pageAlloc *npages;
  runtime_sysMemStat *prVar3;
  runtime_pageAlloc *prVar4;
  runtime_sysMemStat *sysStat;
  long in_FS_OFFSET;
  string s;
  runtime_addrRange r;
  runtime_pageAlloc *p_spill;
  uintptr base_spill;
  uintptr size_spill;
  runtime_pallocData (*local_58) [8192];
  undefined2 local_50;
  undefined6 uStack_4e;
  
                    /* Unresolved local var: uintptr limit@[???]
                       Unresolved local var: uintptr ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uVar2 = base_spill & 0xffffffffffc00000;
  runtime___pageAlloc__sysGrow(p_spill,size_spill,uVar2);
  prVar1 = (runtime_pageAlloc *)(uVar2 + 0x800000000000);
  prVar3 = (runtime_sysMemStat *)((ulong)prVar1 >> 0x16);
  if (((runtime_sysMemStat *)p_spill->start == (runtime_sysMemStat *)0x0) ||
     (prVar3 < (runtime_sysMemStat *)p_spill->start)) {
    p_spill->start = (runtime_chunkIdx)prVar3;
  }
  sysStat = (runtime_sysMemStat *)
            ((size_spill + base_spill + 0x3fffff & 0xffffffffffc00000) + 0x800000000000 >> 0x16);
  if ((runtime_sysMemStat *)p_spill->end < sysStat) {
    p_spill->end = (runtime_chunkIdx)sysStat;
  }
  prVar4 = prVar1;
  runtime_makeAddrRange((uintptr)p_spill,0x800000000000);
  local_58._2_6_ = uStack_4e;
  local_58._0_2_ = local_50;
  r.limit.a = (uintptr)&p_spill->inUse;
  r.base.a = (uintptr)local_58;
  runtime___addrRanges__add((runtime_addrRanges *)p_spill,r);
                    /* Unresolved local var: runtime.offAddr b@[???] */
  npages = (runtime_pageAlloc *)((p_spill->searchAddr).a + 0x800000000000);
  if (prVar1 < npages) {
    (p_spill->searchAddr).a = uVar2;
  }
  while( true ) {
    if (sysStat <= prVar3) {
      runtime___pageAlloc__update
                ((runtime_pageAlloc *)(size_spill >> 0xd),(uintptr)sysStat,(uintptr)npages,
                 SUB81(prVar4,0),SUB81(prVar3,0));
      return;
    }
    uVar2 = (ulong)prVar3 >> 0xd;
    if (0x1fff < uVar2) break;
    if (p_spill->chunks[uVar2] == (runtime_pallocData (*) [8192])0x0) {
                    /* Unresolved local var: void * r@[???] */
      runtime_sysAlloc((uintptr)p_spill,sysStat);
      if (local_58 == (runtime_pallocData (*) [8192])0x0) {
        s.len = (int)sysStat;
        s.str = &DAT_0029e70f;
                    /* WARNING: Subroutine does not return */
        runtime_throw(s);
      }
      LOCK();
      p_spill->chunks[uVar2] = local_58;
      UNLOCK();
    }
    prVar4 = (runtime_pageAlloc *)(((ulong)prVar3 & 0x1fff) * 0x80);
    local_58 = (runtime_pallocData (*) [8192])0x200;
    runtime___pageBits__setRange
              ((runtime_pageBits *)p_spill,(uint)sysStat,
               (long)&prVar4->summary[2].cap + (long)p_spill->chunks[uVar2]);
    prVar3 = (runtime_sysMemStat *)((long)prVar3 + 1);
    npages = p_spill;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndexU();
}

