
/* WARNING: Unknown calling convention */

void runtime___mcache__refill(runtime_mcache *c,runtime_spanClass spc)

{
  uintptr *puVar1;
  ushort uVar2;
  runtime_consistentHeapStats *prVar3;
  runtime_mcentral *c_00;
  runtime_mspan *prVar4;
  uintptr uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  string s_02;
  __uint64 args;
  runtime_mcache *c_spill;
  runtime_spanClass spc_spill;
  runtime_consistentHeapStats *local_38;
  uint64 local_10;
  
                    /* Unresolved local var: runtime.mspan * s@[???]
                       Unresolved local var: runtime.heapStatsDelta * stats@[???]
                       Unresolved local var: uintptr usedBytes@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  c_00 = (runtime_mcentral *)(ulong)spc_spill;
  if ((runtime_mcentral *)0x87 < c_00) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  prVar3 = (runtime_consistentHeapStats *)c_spill->alloc[(long)c_00];
  uVar2 = *(ushort *)(prVar3->stats[0].smallAllocCount + 3);
  if (prVar3->stats[0].largeAlloc != (ulong)uVar2) {
    s_02.len._0_2_ = uVar2;
    s_02.str = &DAT_002a664f;
    s_02.len._2_6_ = 0;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_02);
  }
  prVar4 = &runtime_emptymspan;
  if (prVar3 != (runtime_consistentHeapStats *)&runtime_emptymspan) {
    s_01.len._0_4_ = runtime_mheap_.sweepgen + 3;
    if (*(uint32 *)(prVar3->stats[0].smallAllocCount + 2) != (uint32)s_01.len) {
      s_01.str = &DAT_0029d153;
      s_01.len._4_4_ = 0;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_01);
    }
    prVar4 = (runtime_mspan *)0x7f2d88;
    runtime___mcentral__uncacheSpan(c_00,(runtime_mspan *)runtime_mheap_.central);
    local_38 = prVar3;
  }
  runtime___mcentral__cacheSpan((runtime_mcentral *)(ulong)spc_spill);
  if (local_38 != (runtime_consistentHeapStats *)0x0) {
    if (local_38->stats[0].largeAlloc == (ulong)(ushort)local_38->stats[0].smallAllocCount[3]) {
      s.len = (int)prVar4;
      s.str = &DAT_0029d51b;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s);
    }
    *(uint32 *)(local_38->stats[0].smallAllocCount + 2) = runtime_mheap_.sweepgen + 3;
    runtime___consistentHeapStats__acquire(local_38);
    if ((ulong)(long)(char)(spc_spill >> 1) < 0x44) {
      puVar1 = local_38->stats[0].smallAllocCount + (char)(spc_spill >> 1);
      uVar6 = (ulong)(ushort)local_38->stats[0].smallAllocCount[3];
      LOCK();
      uVar5 = *puVar1;
      *puVar1 = *puVar1 + (local_38->stats[0].largeAlloc - uVar6);
      UNLOCK();
      if (spc_spill == 5) {
        LOCK();
        puVar1 = &local_38->stats[0].tinyAllocCount;
        uVar5 = *puVar1;
        *puVar1 = *puVar1 + c_spill->tinyAllocs;
        UNLOCK();
        c_spill->tinyAllocs = 0;
      }
      runtime___consistentHeapStats__release(&runtime_memstats.heapStats);
      LOCK();
      runtime_gcController.heapLive =
           runtime_gcController.heapLive +
           (local_38->stats[0].inWorkBufs * 0x2000 -
           (ulong)(ushort)local_38->stats[0].smallAllocCount[3] *
           local_38->stats[0].smallAllocCount[4]);
      UNLOCK();
      LOCK();
      runtime_gcController.heapScan = runtime_gcController.heapScan + c_spill->scanAlloc;
      UNLOCK();
      c_spill->scanAlloc = 0;
      if (runtime_trace.enabled != false) {
        local_10 = runtime_gcController.heapLive;
        args.len = uVar6;
        args.array = &c_spill->nextSample;
        args.cap = uVar5;
        runtime_traceEvent((uint8)&local_10,0xcfa858,args);
      }
      if (runtime_gcBlackenEnabled != 0) {
        runtime___gcControllerState__revise(&runtime_gcController);
      }
      c_spill->alloc[spc_spill] = (runtime_mspan *)local_38;
      return;
    }
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  s_00.len = (int)prVar4;
  s_00.str = &DAT_00295b8f;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_00);
}

