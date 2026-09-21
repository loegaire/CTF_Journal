
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*mheap).grow(runtime.mheap * h, uintptr npage, bool ~r1)
    */

bool runtime___mheap__grow(runtime_mheap *h,uintptr npage)

{
  ulong uVar1;
  uintptr uVar2;
  runtime_sysMemStat v;
  undefined1 extraout_AL;
  ulong uVar3;
  uint64 v_00;
  void *v_01;
  ulong uVar4;
  long lVar5;
  long in_FS_OFFSET;
  multireturn_void___uintptr_ mVar6;
  string s;
  string s_00;
  string s_01;
  runtime_mheap *h_spill;
  uintptr npage_spill;
  uintptr local_58;
  runtime_sysMemStat *local_50;
  
                    /* Unresolved local var: uintptr totalGrowth@[???]
                       Unresolved local var: uintptr end@[???]
                       Unresolved local var: uintptr nBase@[???]
                       Unresolved local var: uintptr v@[???]
                       Unresolved local var: runtime.heapStatsDelta * stats@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  v_00 = (npage_spill + 0x1ff & 0xfffffffffffffe00) * 0x2000;
  uVar3 = (h_spill->curArena).base;
  uVar1 = v_00 + uVar3;
  uVar4 = (runtime_physPageSize + uVar1) - 1 & -runtime_physPageSize;
  if (((h_spill->curArena).end < uVar4) || (uVar1 < uVar3)) {
                    /* Unresolved local var: void * av@[???]
                       Unresolved local var: uintptr asize@[???] */
    mVar6 = runtime___mheap__sysAlloc(h_spill,uVar1);
    v = runtime_memstats.heap_sys;
    s.len = mVar6.size;
    if (local_58 == 0) {
      runtime_printlock();
      s.str = &DAT_002a6717;
      runtime_printstring(s);
      runtime_printuint(v_00);
      s_00.len = s.len;
      s_00.str = &DAT_002945ac;
      runtime_printstring(s_00);
      runtime_printuint(v);
      s_01.len = s.len;
      s_01.str = &DAT_0028d1c6;
      runtime_printstring(s_01);
      runtime_printunlock();
      return (bool)extraout_AL;
    }
    uVar2 = (h_spill->curArena).end;
    if (local_58 == uVar2) {
      (h_spill->curArena).end = local_58 + (long)local_50;
      v_01 = (void *)0x0;
    }
    else {
                    /* Unresolved local var: uintptr size@[???] */
      v_01 = (void *)(uVar2 - (h_spill->curArena).base);
      if (v_01 == (void *)0x0) {
        v_01 = (void *)0x0;
      }
      else {
                    /* Unresolved local var: runtime.heapStatsDelta * stats@[???] */
        runtime_sysMap(&runtime_memstats.heap_sys,(uintptr)h_spill,local_50);
        LOCK();
        runtime_memstats.heap_released = runtime_memstats.heap_released + (long)v_01;
        UNLOCK();
        runtime___consistentHeapStats__acquire(&runtime_memstats.heapStats);
        LOCK();
        *(long *)((long)v_01 + 8) = *(long *)((long)v_01 + 8) + (long)v_01;
        UNLOCK();
        runtime___consistentHeapStats__release(&runtime_memstats.heapStats);
        runtime___pageAlloc__grow((runtime_pageAlloc *)h_spill,(uintptr)h_spill,(uintptr)v_01);
      }
      (h_spill->curArena).base = local_58;
      (h_spill->curArena).end = (long)local_50 + local_58;
    }
    uVar4 = -runtime_physPageSize & (runtime_physPageSize + (h_spill->curArena).base + v_00) - 1;
  }
  else {
    v_01 = (void *)0x0;
  }
  uVar2 = (h_spill->curArena).base;
  (h_spill->curArena).base = uVar4;
  lVar5 = uVar4 - uVar2;
  runtime_sysMap(v_01,(uintptr)h_spill,&runtime_memstats.heap_sys);
  LOCK();
  runtime_memstats.heap_released = runtime_memstats.heap_released + lVar5;
  UNLOCK();
  runtime___consistentHeapStats__acquire(&runtime_memstats.heapStats);
  LOCK();
  *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + lVar5;
  UNLOCK();
  runtime___consistentHeapStats__release(&runtime_memstats.heapStats);
  runtime___pageAlloc__grow((runtime_pageAlloc *)h_spill,(uintptr)h_spill,(uintptr)&h_spill->pages);
                    /* Unresolved local var: uint64 retained@[???] */
  uVar3 = (long)v_01 + (runtime_memstats.heap_sys - runtime_memstats.heap_released) + lVar5;
  uVar1 = h_spill->scavengeGoal;
  if (uVar1 < uVar3) {
                    /* Unresolved local var: uintptr todo@[???] */
                    /* Unresolved local var: uintptr overage@[???] */
    uVar3 = runtime___pageAlloc__scavenge
                      ((runtime_pageAlloc *)(uVar3 - uVar1),(uintptr)&h_spill->pages,SUB81(uVar1,0))
    ;
  }
  return SUB81(uVar3,0);
}

