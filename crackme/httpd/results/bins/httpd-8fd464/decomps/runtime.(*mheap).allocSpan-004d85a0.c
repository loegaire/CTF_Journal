
/* WARNING: Removing unreachable block (ram,0x004d878a) */
/* WARNING: Removing unreachable block (ram,0x004d8bb8) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*mheap).allocSpan(runtime.mheap * h, uintptr npages,
   runtime.spanAllocType typ, runtime.spanClass spanclass, runtime.mspan * s) */

runtime_mspan *
runtime___mheap__allocSpan
          (runtime_mheap *h,uintptr npages,runtime_spanAllocType typ,runtime_spanClass spanclass)

{
  undefined1 *puVar1;
  int *piVar2;
  __runtime_pallocSum *p_Var3;
  uintptr uVar4;
  long lVar5;
  long lVar6;
  runtime_mspan *extraout_RAX;
  runtime_mheap *prVar7;
  runtime_pallocSum *prVar8;
  ulong uVar9;
  runtime_mspan *prVar10;
  runtime_pallocSum *prVar11;
  runtime_mheap *h_00;
  ulong uVar12;
  runtime_mspan *prVar13;
  long in_FS_OFFSET;
  multireturn_uintptr_uintptr__conflict mVar14;
  runtime_mheap *h_spill;
  uintptr allocPages;
  runtime_spanAllocType typ_spill;
  runtime_spanClass spanclass_spill;
  runtime_mheap *local_60;
  runtime_mheap *local_58;
  runtime_mspan *local_50;
  
                    /* Unresolved local var: runtime.g * gp@[DW_OP_reg0(RAX)]
                       Unresolved local var: uintptr base@[???]
                       Unresolved local var: uintptr scav@[???]
                       Unresolved local var: runtime.p * pp@[???]
                       Unresolved local var: runtime.heapStatsDelta * stats@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x18)) {
    runtime_morestackc();
  }
  uVar4 = *(uintptr *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xd8);
  prVar7 = local_58;
  prVar10 = local_50;
  if ((uVar4 == 0) || (0xf < allocPages)) {
    h_00 = (runtime_mheap *)0x0;
    prVar7 = (runtime_mheap *)0x0;
    prVar10 = (runtime_mspan *)0x0;
  }
  else {
                    /* Unresolved local var: runtime.pageCache * c@[???] */
    if (*(long *)(uVar4 + 0x50) == 0) {
      runtime_lock2(&h_spill->lock);
      runtime___pageAlloc__allocToCache((runtime_pageAlloc *)h_spill);
      *(runtime_mheap **)(uVar4 + 0x48) = local_60;
      *(runtime_mheap **)(uVar4 + 0x50) = local_58;
      *(runtime_mspan **)(uVar4 + 0x58) = local_50;
      runtime_unlock2(&h_spill->lock);
      npages = uVar4;
    }
    local_60 = (runtime_mheap *)allocPages;
    runtime___pageCache__alloc((runtime_pageCache *)(uVar4 + 0x48),npages);
    if (local_58 == (runtime_mheap *)0x0) {
      h_00 = (runtime_mheap *)0x0;
    }
    else {
                    /* Unresolved local var: runtime.p * pp@[???]
                       Unresolved local var: runtime.mspan * s@[???] */
      lVar5 = *(long *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xd8);
      if ((lVar5 == 0) || (lVar6 = *(long *)(lVar5 + 0x1228), lVar6 == 0)) {
        h_00 = (runtime_mheap *)0x0;
      }
      else {
        if (0x7f < lVar6 - 1U) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        h_00 = *(runtime_mheap **)(lVar5 + 0x1228 + lVar6 * 8);
        *(ulong *)(lVar5 + 0x1228) = lVar6 - 1U;
      }
      if (h_00 != (runtime_mheap *)0x0) goto LAB_004d8806;
    }
  }
  runtime_lock2(&prVar7->lock);
  if (prVar7 == (runtime_mheap *)0x0) {
    local_60 = (runtime_mheap *)allocPages;
    mVar14 = runtime___pageAlloc__alloc((runtime_pageAlloc *)h_spill,(uintptr)h_00);
    prVar7 = local_58;
    prVar10 = local_50;
    if (local_58 == (runtime_mheap *)0x0) {
      runtime___mheap__grow(h_spill,mVar14.scav);
      runtime_unlock2(&h_spill->lock);
      return extraout_RAX;
    }
  }
                    /* Unresolved local var: uintptr allocBase@[???] */
  if (h_00 == (runtime_mheap *)0x0) {
    runtime___mheap__allocMSpanLocked(h_spill);
    h_00 = local_60;
  }
  runtime_unlock2(&h_spill->lock);
LAB_004d8806:
  (h_00->lock).key = 0;
  (h_00->pages).summary[0].array = (runtime_pallocSum *)0x0;
  (h_00->pages).summary[0].len = 0;
  (h_00->pages).summary[0].cap = (int)prVar7;
  (h_00->pages).summary[1].array = (runtime_pallocSum *)allocPages;
  *(undefined2 *)&(h_00->pages).summary[3].cap = 0;
  *(undefined1 *)((long)&(h_00->pages).summary[3].cap + 2) = 0;
  (h_00->pages).summary[4].array = (runtime_pallocSum *)0x0;
  (h_00->pages).summary[4].cap = 0;
  (h_00->pages).chunks[0] = (runtime_pallocData (*) [8192])0x0;
  *(undefined1 *)((long)&(h_00->pages).summary[3].cap + 4) = 0;
  (h_00->pages).summary[1].cap = 0;
  (h_00->pages).summary[2].cap = 0;
  (h_00->pages).summary[3].array = (runtime_pallocSum *)0x0;
  puVar1 = (undefined1 *)((long)&(h_00->pages).summary[3].cap + 3);
  LOCK();
  *puVar1 = 0;
  UNLOCK();
  runtime___mheap__allocNeedsZero(prVar7,(uintptr)h_00,(uintptr)prVar10);
  if ((char)local_50 != '\0') {
    *(undefined1 *)((long)&(h_00->pages).summary[3].cap + 4) = 1;
  }
  prVar8 = (runtime_pallocSum *)(allocPages * 0x2000);
  if (typ_spill == 0) {
    *(runtime_spanClass *)((long)&(h_00->pages).summary[3].cap + 2) = spanclass_spill;
    if (spanclass_spill >> 1 == 0) {
      (h_00->pages).summary[4].array = prVar8;
      (h_00->pages).summary[2].array = (runtime_pallocSum *)0x1;
      *(undefined4 *)((long)&(h_00->pages).summary[3].len + 4) = 0;
    }
    else {
      uVar12 = (ulong)(char)(spanclass_spill >> 1);
      if (0x43 < uVar12) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      prVar11 = (runtime_pallocSum *)(ulong)runtime_class_to_size[uVar12];
      (h_00->pages).summary[4].array = prVar11;
      if (prVar11 == (runtime_pallocSum *)0x0) {
                    /* WARNING: Subroutine does not return */
        runtime_panicdivide();
      }
      (h_00->pages).summary[2].array = (runtime_pallocSum *)((ulong)prVar8 / (ulong)prVar11);
      *(uint32 *)((long)&(h_00->pages).summary[3].len + 4) = runtime_class_to_divmagic[uVar12];
    }
    (h_00->pages).summary[1].cap = 0;
    (h_00->pages).summary[2].len = -1;
    runtime_newMarkBits((uintptr)(h_00->pages).summary[2].array);
    (h_00->pages).summary[3].array = (runtime_pallocSum *)prVar7;
    runtime_newAllocBits((uintptr)(h_00->pages).summary[2].array);
    (h_00->pages).summary[2].cap = (int)prVar7;
    LOCK();
    *(uint32 *)&(h_00->pages).summary[3].len = h_spill->sweepgen;
    UNLOCK();
    LOCK();
    *puVar1 = 1;
    UNLOCK();
  }
  else {
    (h_00->pages).summary[1].len = 0;
    (h_00->pages).summary[2].array = (runtime_pallocSum *)0x0;
    (h_00->pages).summary[4].len =
         (long)(h_00->pages).summary[1].array * 0x2000 + (h_00->pages).summary[0].cap;
    LOCK();
    *puVar1 = 2;
    UNLOCK();
  }
  if (prVar10 != (runtime_mspan *)0x0) {
    LOCK();
    runtime_memstats.heap_released = runtime_memstats.heap_released - (long)prVar10;
    UNLOCK();
  }
  prVar13 = prVar10;
  if (typ_spill == 0) {
    LOCK();
    runtime_memstats.heap_inuse = runtime_memstats.heap_inuse + (long)prVar8;
    UNLOCK();
    local_60 = prVar7;
  }
  else {
    local_60 = (runtime_mheap *)(allocPages * -0x2000);
    runtime___sysMemStat__add(&runtime_memstats.heap_sys,allocPages);
  }
  runtime___consistentHeapStats__acquire(&runtime_memstats.heapStats);
  LOCK();
  (local_60->lock).key = (long)&prVar10->next + (local_60->lock).key;
  UNLOCK();
  LOCK();
  (local_60->pages).summary[0].array =
       (runtime_pallocSum *)((long)(local_60->pages).summary[0].array - (long)prVar10);
  UNLOCK();
  if (typ_spill < 2) {
    if (typ_spill == 0) {
      LOCK();
      piVar2 = &(local_60->pages).summary[0].len;
      *piVar2 = *piVar2 + (long)prVar8;
      UNLOCK();
    }
    else {
      LOCK();
      piVar2 = &(local_60->pages).summary[0].cap;
      *piVar2 = *piVar2 + (long)prVar8;
      UNLOCK();
    }
  }
  else if (typ_spill == 2) {
    LOCK();
    piVar2 = &(local_60->pages).summary[1].len;
    *piVar2 = *piVar2 + (long)prVar8;
    UNLOCK();
  }
  else if (typ_spill == 3) {
    LOCK();
    p_Var3 = (local_60->pages).summary + 1;
    p_Var3->array = p_Var3->array + allocPages * 0x400;
    UNLOCK();
  }
  runtime___consistentHeapStats__release(&runtime_memstats.heapStats);
  runtime___mheap__setSpans(h_00,allocPages,allocPages,prVar13);
  if (typ_spill == 0) {
                    /* Unresolved local var: runtime.heapArena * arena@[???]
                       Unresolved local var: uintptr pageIdx@[???] */
    uVar12 = (h_00->pages).summary[0].cap;
    uVar9 = uVar12 + 0x800000000000 >> 0x1a;
    if (0x3fffff < uVar9) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
    LOCK();
    "*net.addrinfoErrno"
    [(long)((*runtime_mheap_.arenas[0])[uVar9]->bitmap + (uVar12 >> 0x10 & 0x3ff) + 2)] =
         "*net.addrinfoErrno"
         [(long)((*runtime_mheap_.arenas[0])[uVar9]->bitmap + (uVar12 >> 0x10 & 0x3ff) + 2)] |
         (byte)(1 << ((byte)(uVar12 >> 0xd) & 7));
    UNLOCK();
    LOCK();
    h_spill->pagesInUse = h_spill->pagesInUse + allocPages;
    UNLOCK();
  }
  runtime_publicationBarrier();
  return (runtime_mspan *)h_00;
}

