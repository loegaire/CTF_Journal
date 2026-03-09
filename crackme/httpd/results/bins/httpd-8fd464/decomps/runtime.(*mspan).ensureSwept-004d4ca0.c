
/* WARNING: Unknown calling convention */

void runtime___mspan__ensureSwept(runtime_mspan *s)

{
  long *plVar1;
  uint32 uVar2;
  uint32 uVar3;
  int unaff_RBX;
  ulong uVar4;
  long in_FS_OFFSET;
  bool bVar5;
  bool bVar6;
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
  string s_10;
  runtime_mspan *s_spill;
  runtime_sweepLocked local_30;
  float64 local_28;
  uint64 local_20;
  uint64 local_18;
  uint64 local_10;
  
                    /* Unresolved local var: runtime.g * _g_@[DW_OP_reg2(RCX)]
                       Unresolved local var: runtime.sweepLocker sl@[???] */
  while (uVar3 = runtime_mheap_.sweepgen,
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  plVar1 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x30);
  if ((((int)plVar1[0x22] == 0) && ((int)plVar1[0x1f] == 0)) &&
     (*plVar1 != *(long *)(in_FS_OFFSET + -8))) {
    s_10.len = unaff_RBX;
    s_10.str = &DAT_002a3d00;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_10);
  }
  uVar4 = (ulong)(runtime_mheap_.sweepgen - 2);
  if (s_spill->sweepgen == runtime_mheap_.sweepgen - 2) {
    LOCK();
    runtime_mheap_.sweepers = runtime_mheap_.sweepers + 1;
    UNLOCK();
    uVar4 = 0x7f2c70;
    bVar6 = true;
    LOCK();
    bVar5 = runtime_mheap_.sweepgen - 2 == s_spill->sweepgen;
    if (bVar5) {
      s_spill->sweepgen = runtime_mheap_.sweepgen - 1;
    }
    UNLOCK();
    if (bVar5) {
      bVar5 = true;
      local_30.mspan = s_spill;
      bVar6 = true;
    }
    else {
      bVar5 = false;
      local_30.mspan = (runtime_mspan *)0x0;
    }
  }
  else {
    bVar5 = false;
    local_30.mspan = (runtime_mspan *)0x0;
    bVar6 = false;
                    /* Unresolved local var: bool ok@[???]
                       Unresolved local var: runtime.sweepLocked s@[???] */
  }
  if (bVar5) {
    runtime___sweepLocked__sweep(&local_30,SUB81(uVar4,0));
    if (bVar6) {
      LOCK();
      uVar3 = runtime_mheap_.sweepers - 1;
      UNLOCK();
      bVar6 = runtime_mheap_.sweepers == 1;
      runtime_mheap_.sweepers = uVar3;
      if ((bVar6 && runtime_mheap_.sweepDrained != 0) && (0 < runtime_debug.gcpacertrace)) {
        local_10 = runtime_gcController.heapLive;
        local_18 = runtime_mheap_.sweepHeapLiveBasis;
        local_20 = runtime_mheap_.pagesSwept;
        local_28 = runtime_mheap_.sweepPagesPerByte;
        runtime_printlock();
        s_05.len = uVar4;
        s_05.str = (uint8 *)0x2a1fe3;
        runtime_printstring(s_05);
        runtime_printuint(local_10 >> 0x14);
        s_06.len = uVar4;
        s_06.str = &DAT_00296703;
        runtime_printstring(s_06);
        runtime_printuint(local_10 - local_18 >> 0x14);
        s_07.len = uVar4;
        s_07.str = &DAT_0029d8ec;
        runtime_printstring(s_07);
        runtime_printuint(local_20);
        s_08.len = uVar4;
        s_08.str = &DAT_0028ebf2;
        runtime_printstring(s_08);
        runtime_printfloat(local_28);
        s_09.len = uVar4;
        s_09.str = &DAT_002927ca;
        runtime_printstring(s_09);
        runtime_printunlock();
      }
    }
    return;
  }
  if (bVar6) {
    LOCK();
    uVar2 = runtime_mheap_.sweepers - 1;
    UNLOCK();
    bVar6 = runtime_mheap_.sweepers == 1;
    runtime_mheap_.sweepers = uVar2;
    if ((bVar6 && runtime_mheap_.sweepDrained != 0) && (0 < runtime_debug.gcpacertrace)) {
      local_10 = runtime_gcController.heapLive;
      local_18 = runtime_mheap_.sweepHeapLiveBasis;
      local_20 = runtime_mheap_.pagesSwept;
      local_28 = runtime_mheap_.sweepPagesPerByte;
      runtime_printlock();
      s_00.len = uVar4;
      s_00.str = (uint8 *)0x2a1fe3;
      runtime_printstring(s_00);
      runtime_printuint(local_10 >> 0x14);
      s_01.len = uVar4;
      s_01.str = &DAT_00296703;
      runtime_printstring(s_01);
      runtime_printuint(local_10 - local_18 >> 0x14);
      s_02.len = uVar4;
      s_02.str = &DAT_0029d8ec;
      runtime_printstring(s_02);
      runtime_printuint(local_20);
      s_03.len = uVar4;
      s_03.str = &DAT_0028ebf2;
      runtime_printstring(s_03);
      runtime_printfloat(local_28);
      s_04.len = uVar4;
      s_04.str = &DAT_002927ca;
      runtime_printstring(s_04);
      runtime_printunlock();
                    /* Unresolved local var: uint32 spangen@[???] */
    }
  }
  while ((s_spill->sweepgen != uVar3 && (s_spill->sweepgen != uVar3 + 3))) {
    runtime_osyield();
  }
  return;
}

