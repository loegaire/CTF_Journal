
/* WARNING: Unknown calling convention */

void runtime___mcache__releaseAll(runtime_mcache *c)

{
  ushort uVar1;
  runtime_mspan *prVar2;
  runtime_consistentHeapStats *m;
  uint32 uVar3;
  ulong uVar4;
  runtime_mcentral *c_00;
  long in_FS_OFFSET;
  runtime_mcache *c_spill;
  runtime_mspan *local_38;
  
                    /* Unresolved local var: uint32 sg@[???]
                       Unresolved local var: runtime.heapStatsDelta * stats@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  LOCK();
  runtime_gcController.heapScan = runtime_gcController.heapScan + c_spill->scanAlloc;
  UNLOCK();
  c_spill->scanAlloc = 0;
  uVar3 = runtime_mheap_.sweepgen;
  c_00 = (runtime_mcentral *)0x0;
                    /* Unresolved local var: int i@[???] */
  do {
    if (0x87 < (long)c_00) {
      c_spill->tiny = 0;
      c_spill->tinyoffset = 0;
      runtime___consistentHeapStats__acquire((runtime_consistentHeapStats *)c_spill);
      LOCK();
      local_38->freeindex = local_38->freeindex + c_spill->tinyAllocs;
      UNLOCK();
      c_spill->tinyAllocs = 0;
      runtime___consistentHeapStats__release(&runtime_memstats.heapStats);
      if (runtime_gcBlackenEnabled != 0) {
        runtime___gcControllerState__revise(&runtime_gcController);
      }
      return;
    }
                    /* Unresolved local var: runtime.mspan * s@[???] */
    prVar2 = c_spill->alloc[(long)c_00];
    if (prVar2 != &runtime_emptymspan) {
                    /* Unresolved local var: runtime.heapStatsDelta * stats@[???] */
      m = (runtime_consistentHeapStats *)prVar2->nelems;
      uVar1 = prVar2->allocCount;
      runtime___consistentHeapStats__acquire(m);
      uVar4 = (ulong)(char)((byte)((ulong)c_00 >> 1) & 0x7f);
      if (0x43 < uVar4) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      LOCK();
      (&local_38->allocBits)[uVar4] = (&local_38->allocBits)[uVar4] + ((ulong)uVar1 - (long)m);
      UNLOCK();
      runtime___consistentHeapStats__release(&runtime_memstats.heapStats);
      if (prVar2->sweepgen != uVar3 + 1) {
        LOCK();
        runtime_gcController.heapLive =
             runtime_gcController.heapLive + ((ulong)uVar1 - (long)m) * prVar2->elemsize;
        UNLOCK();
      }
      runtime___mcentral__uncacheSpan(c_00,(runtime_mspan *)runtime_mheap_.central);
      c_spill->alloc[(long)c_00] = &runtime_emptymspan;
      local_38 = prVar2;
    }
    c_00 = (runtime_mcentral *)&c_00->field_0x1;
  } while( true );
}

