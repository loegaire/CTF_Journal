
/* WARNING: Removing unreachable block (ram,0x004c80e9) */
/* WARNING: Removing unreachable block (ram,0x004c80fe) */
/* WARNING: Removing unreachable block (ram,0x004c8105) */
/* WARNING: Removing unreachable block (ram,0x004c811a) */
/* WARNING: Removing unreachable block (ram,0x004c8128) */
/* WARNING: Removing unreachable block (ram,0x004c8142) */
/* WARNING: Removing unreachable block (ram,0x004c8134) */
/* WARNING: Removing unreachable block (ram,0x004c80f7) */
/* WARNING: Removing unreachable block (ram,0x004c8149) */
/* WARNING: Removing unreachable block (ram,0x004c8156) */
/* WARNING: Removing unreachable block (ram,0x004c817a) */
/* WARNING: Removing unreachable block (ram,0x004c81a2) */
/* WARNING: Removing unreachable block (ram,0x004c8195) */
/* WARNING: Removing unreachable block (ram,0x004c81a4) */
/* WARNING: Removing unreachable block (ram,0x004c81ad) */
/* WARNING: Removing unreachable block (ram,0x004c81ba) */
/* WARNING: Removing unreachable block (ram,0x004c82bd) */
/* WARNING: Removing unreachable block (ram,0x004c8085) */
/* WARNING: Removing unreachable block (ram,0x004c7fe9) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*mcentral).cacheSpan(runtime.mcentral * c, runtime.mspan
   * ~r0) */

runtime_mspan * runtime___mcentral__cacheSpan(runtime_mcentral *c)

{
  uint uVar1;
  uint32 uVar2;
  uint uVar3;
  long lVar4;
  runtime_mcentral *prVar5;
  runtime_mcentral *extraout_RAX;
  char cVar6;
  byte bVar7;
  long in_FS_OFFSET;
  bool bVar8;
  bool bVar9;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  string s_05;
  string s_06;
  string s_07;
  string s_08;
  string s_09;
  runtime_mcentral *c_spill;
  runtime_mspan *local_70;
  runtime_sweepLocked local_48 [2];
  runtime_mspan *local_38;
  float64 local_30;
  uint64 local_28;
  uint64 local_20;
  uint64 local_18;
  long local_10;
  
                    /* Unresolved local var: bool traceDone@[???]
                       Unresolved local var: int spanBudget@[???]
                       Unresolved local var: runtime.mspan * s@[???]
                       Unresolved local var: uint32 sg@[???]
                       Unresolved local var: uintptr freeByteBase@[???]
                       Unresolved local var: runtime.sweepLocker sl@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  bVar7 = c_spill->spanclass >> 1;
  if (0x43 < (ulong)(long)(char)bVar7) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  local_70 = (runtime_mspan *)0x0;
  runtime_deductSweepCredit((ulong)runtime_class_to_allocnpages[(char)bVar7] << 0xd,(ulong)bVar7);
  if (runtime_trace.enabled != false) {
    runtime_traceGCSweepStart();
  }
  uVar2 = runtime_mheap_.sweepgen;
  uVar3 = runtime_mheap_.sweepgen >> 1 & 1;
  local_10 = (long)(ulong)uVar3 * 5;
  runtime___spanSet__pop((runtime_spanSet *)(ulong)uVar3);
  bVar9 = false;
  lVar4 = 100;
  if (1 < (ulong)-(uVar3 - 1)) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  runtime___spanSet__pop(c_spill->partial + -(uVar3 - 1));
  for (; -1 < lVar4; lVar4 = lVar4 + -1) {
    if (1 < (ulong)-(uVar3 - 1)) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    runtime___spanSet__pop(c_spill->full + -(uVar3 - 1));
    if (local_70 == (runtime_mspan *)0x0) break;
    prVar5 = (runtime_mcentral *)(ulong)(uVar2 - 2);
    if (local_70->sweepgen == uVar2 - 2) {
      if (!bVar9) {
        LOCK();
        runtime_mheap_.sweepers = runtime_mheap_.sweepers + 1;
        UNLOCK();
        bVar9 = true;
      }
      uVar1 = uVar2 - 2;
      prVar5 = (runtime_mcentral *)(ulong)uVar1;
      LOCK();
      bVar8 = uVar1 == local_70->sweepgen;
      if (bVar8) {
        local_70->sweepgen = uVar2 - 1;
      }
      UNLOCK();
      if (bVar8) {
        bVar8 = true;
        local_48[0].mspan = local_70;
      }
      else {
        bVar8 = false;
        local_48[0].mspan = (runtime_mspan *)0x0;
      }
    }
    else {
      bVar8 = false;
      local_48[0].mspan = (runtime_mspan *)0x0;
                    /* Unresolved local var: bool ok@[???]
                       Unresolved local var: runtime.sweepLocked s@[???] */
    }
    if (bVar8) {
      local_38 = local_70;
                    /* Unresolved local var: uintptr freeIndex@[???] */
      local_70 = (runtime_mspan *)CONCAT71(local_70._1_7_,1);
      runtime___sweepLocked__sweep(local_48,SUB81(prVar5,0));
      runtime___mspan__nextFreeIndex(local_48[0].mspan);
      if ((runtime_mspan *)(local_48[0].mspan)->nelems != local_70) {
        (local_48[0].mspan)->freeindex = (uintptr)local_70;
        if (bVar9) {
          LOCK();
          uVar2 = runtime_mheap_.sweepers - 1;
          UNLOCK();
          bVar9 = runtime_mheap_.sweepers == 1;
          runtime_mheap_.sweepers = uVar2;
          if ((bVar9 && runtime_mheap_.sweepDrained != 0) && (0 < runtime_debug.gcpacertrace)) {
            local_18 = runtime_gcController.heapLive;
            local_20 = runtime_mheap_.sweepHeapLiveBasis;
            local_28 = runtime_mheap_.pagesSwept;
            local_30 = runtime_mheap_.sweepPagesPerByte;
            runtime_printlock();
            s_00.len = (int)prVar5;
            s_00.str = (uint8 *)0x2a1fe3;
            runtime_printstring(s_00);
            runtime_printuint(local_18 >> 0x14);
            s_01.len = (int)prVar5;
            s_01.str = &DAT_00296703;
            runtime_printstring(s_01);
            runtime_printuint(local_18 - local_20 >> 0x14);
            s_02.len = (int)prVar5;
            s_02.str = &DAT_0029d8ec;
            runtime_printstring(s_02);
            runtime_printuint(local_28);
            s_03.len = (int)prVar5;
            s_03.str = &DAT_0028ebf2;
            runtime_printstring(s_03);
            runtime_printfloat(local_30);
            s_04.len = (int)prVar5;
            s_04.str = &DAT_002927ca;
            runtime_printstring(s_04);
            runtime_printunlock();
          }
        }
        cVar6 = '\0';
        c_spill = prVar5;
        goto LAB_004c7feb;
      }
      local_70 = local_48[0].mspan;
      runtime___spanSet__push
                ((runtime_spanSet *)local_48[0].mspan,
                 (runtime_mspan *)(&c_spill->full[0].spineLock + local_10));
    }
  }
  if (bVar9) {
    LOCK();
    uVar2 = runtime_mheap_.sweepers - 1;
    UNLOCK();
    bVar9 = runtime_mheap_.sweepers == 1;
    runtime_mheap_.sweepers = uVar2;
    if ((bVar9 && runtime_mheap_.sweepDrained != 0) && (0 < runtime_debug.gcpacertrace)) {
      local_18 = runtime_gcController.heapLive;
      local_20 = runtime_mheap_.sweepHeapLiveBasis;
      local_28 = runtime_mheap_.pagesSwept;
      local_30 = runtime_mheap_.sweepPagesPerByte;
      runtime_printlock();
      s_05.len = (int)c_spill;
      s_05.str = (uint8 *)0x2a1fe3;
      runtime_printstring(s_05);
      runtime_printuint(local_18 >> 0x14);
      s_06.len = (int)c_spill;
      s_06.str = &DAT_00296703;
      runtime_printstring(s_06);
      runtime_printuint(local_18 - local_20 >> 0x14);
      s_07.len = (int)c_spill;
      s_07.str = &DAT_0029d8ec;
      runtime_printstring(s_07);
      runtime_printuint(local_28);
      s_08.len = (int)c_spill;
      s_08.str = &DAT_0028ebf2;
      runtime_printstring(s_08);
      runtime_printfloat(local_30);
      local_70 = (runtime_mspan *)&DAT_0000000c;
      s_09.len = (int)c_spill;
      s_09.str = &DAT_002927ca;
      runtime_printstring(s_09);
      runtime_printunlock();
    }
  }
  cVar6 = runtime_trace.enabled;
  prVar5 = (runtime_mcentral *)(ulong)runtime_trace.enabled;
  if (runtime_trace.enabled != false) {
    runtime_traceGCSweepDone();
    prVar5 = extraout_RAX;
  }
  runtime___mcentral__grow(prVar5);
  local_38 = local_70;
  if (local_70 == (runtime_mspan *)0x0) {
    return (runtime_mspan *)0x0;
  }
LAB_004c7feb:
  if ((runtime_trace.enabled != false) && (cVar6 == '\0')) {
    runtime_traceGCSweepDone();
  }
  if ((local_38->nelems != (ulong)local_38->allocCount) && (local_38->freeindex != local_38->nelems)
     ) {
    runtime___mspan__refillAllocCache(local_38,(uintptr)c_spill);
    local_38->allocCache = local_38->allocCache >> ((byte)local_38->freeindex & 0x3f);
    return local_38;
  }
  s.len = (int)c_spill;
  s.str = &DAT_0029e7cf;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}

