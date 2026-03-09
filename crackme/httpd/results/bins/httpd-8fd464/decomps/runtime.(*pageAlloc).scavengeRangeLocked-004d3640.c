
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*pageAlloc).scavengeRangeLocked(runtime.pageAlloc * p,
   runtime.chunkIdx ci, uint base, uint npages, uintptr ~r3) */

uintptr runtime___pageAlloc__scavengeRangeLocked
                  (runtime_pageAlloc *p,runtime_chunkIdx ci,uint base,uint npages)

{
  uintptr uVar1;
  long *plVar2;
  long in_FS_OFFSET;
  runtime_pageAlloc *p_spill;
  runtime_chunkIdx ci_spill;
  uint base_spill;
  uint npages_spill;
  
                    /* Unresolved local var: uintptr addr@[???]
                       Unresolved local var: runtime.heapStatsDelta * stats@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (ci_spill >> 0xd < 0x2000) {
    runtime___pageBits__setRange((runtime_pageBits *)base_spill,npages_spill,base);
    uVar1 = base_spill * 0x2000 + ci_spill * 0x400000;
                    /* Unresolved local var: runtime.offAddr oAddr@[???] */
    if (uVar1 < (p_spill->scav).scavLWM.a + 0x800000000000) {
      (p_spill->scav).scavLWM.a = uVar1 - 0x800000000000;
    }
    if (p_spill->test != false) {
      return uVar1;
    }
    plVar2 = (long *)(npages_spill * 0x2000);
    runtime_madvise();
    LOCK();
    runtime_memstats.heap_released = runtime_memstats.heap_released + npages_spill * 0x2000;
    UNLOCK();
    runtime___consistentHeapStats__acquire(&runtime_memstats.heapStats);
    LOCK();
    *plVar2 = *plVar2 + npages_spill * -0x2000;
    UNLOCK();
    LOCK();
    plVar2[1] = plVar2[1] + npages_spill * 0x2000;
    UNLOCK();
    runtime___consistentHeapStats__release(&runtime_memstats.heapStats);
    return uVar1 - 0x800000000000;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndexU();
}

