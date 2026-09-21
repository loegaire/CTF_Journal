
/* WARNING: Removing unreachable block (ram,0x004cb18b) */
/* WARNING: Removing unreachable block (ram,0x004cb1ab) */
/* WARNING: Unknown calling convention */

void runtime_gcMarkTermination(float64 nextTriggerRatio)

{
  int *piVar1;
  uint64 *puVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  uint32 uVar6;
  char cVar7;
  uint8 ev;
  long lVar8;
  long lVar9;
  code **ppcVar10;
  uint64 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined1 handoff;
  int unaff_RBX;
  int in_RSI;
  ulong uVar15;
  ulong ns;
  long in_FS_OFFSET;
  bool bVar16;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string sVar17;
  string s_04;
  string s_05;
  string s_06;
  string s_07;
  string s_08;
  string s_09;
  string s_10;
  string s_11;
  string s_12;
  string s_13;
  string s_14;
  string s_15;
  string s_16;
  string s_17;
  string s_18;
  string s_19;
  string s_20;
  string s_21;
  __uint64 args;
  __uint8 _Var18;
  __uint8 buf;
  float64 nextTriggerRatio_spill;
  int local_1a8;
  long lStack_198;
  runtime_tmpBuf *local_190;
  int local_188;
  uint64 local_130;
  long local_128;
  runtime_tmpBuf *local_120;
  float64 local_118;
  uint64 local_110;
  uint64 local_108;
  uint64 local_100;
  code *local_f8;
  char cStack_e9;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  int64 local_d0 [15];
  long local_58;
  int64 local_50;
  long lStack_48;
  int64 local_40;
  long lStack_38;
  long local_30;
  runtime_g *local_28;
  runtime_g *local_20;
  long local_18;
  ulong local_10;
  
                    /* Unresolved local var: int64 startTime@[???]
                       Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: runtime.g * _g_@[???]
                       Unresolved local var: runtime.g * gp@[???]
                       Unresolved local var: int64 now@[???]
                       Unresolved local var: int64 sec@[???]
                       Unresolved local var: int64 unixNow@[???]
                       Unresolved local var: int64 sweepTermCpu@[???]
                       Unresolved local var: int64 markCpu@[???]
                       Unresolved local var: int64 markTermCpu@[???]
                       Unresolved local var: int64 cycleCpu@[???]
                       Unresolved local var: int64 totalCpu@[???]
                       Unresolved local var: runtime.sweepLocker sl@[???]
                       Unresolved local var: runtime.m * ~R0@[???]
                       Unresolved local var: int64 ~R0@[???] */
  while (&local_130 <= *(uint64 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  LOCK();
  runtime_gcphase = 2;
  UNLOCK();
  runtime_writeBarrier.needed = true;
  runtime_writeBarrier.enabled = true;
  runtime_work.heap1 = runtime_gcController.heapLive;
  runtime_nanotime1();
                    /* Unresolved local var: runtime.g * _g_@[???] */
  lVar8 = *(long *)(in_FS_OFFSET + -8);
  piVar1 = (int *)(*(long *)(lVar8 + 0x30) + 0x110);
  *piVar1 = *piVar1 + 1;
  local_30 = *(long *)(lVar8 + 0x30);
  *(undefined8 *)(local_30 + 0x108) = 5;
  ns = local_30 + 0x100;
  local_10 = ns;
  if (runtime_writeBarrier._0_4_ == 0) {
    *(undefined **)(local_30 + 0x100) = &DAT_00288d8b;
  }
  else {
    runtime_gcWriteBarrier();
  }
  local_20 = *(runtime_g **)(in_FS_OFFSET + -8);
  local_20->m->traceback = 2;
  local_28 = local_20->m->curg;
  runtime_casgstatus(local_20,(uint32)unaff_RBX,(uint32)local_28);
  local_28->waitreason = 6;
  local_f8 = runtime_gcMarkTermination_func1;
  ppcVar10 = &local_f8;
  runtime_systemstack();
  runtime_systemstack();
  local_20->m->traceback = 0;
  runtime_casgstatus((runtime_g *)0x200000004,(uint32)unaff_RBX,(uint32)ppcVar10);
  if (runtime_trace.enabled != false) {
    lStack_198 = 0;
    local_190 = (runtime_tmpBuf *)0x0;
    args.len = ns;
    args.array = (uint64 *)ppcVar10;
    args.cap = in_RSI;
    runtime_traceEvent(ev,unaff_RBX,args);
  }
  *(undefined8 *)(local_30 + 0x108) = 0;
  if (runtime_writeBarrier._0_4_ == 0) {
    *(undefined8 *)(local_30 + 0x100) = 0;
  }
  else {
    ns = local_10;
    runtime_gcWriteBarrierCX();
  }
  if (runtime_gcphase != 0) {
    sVar17.len = unaff_RBX;
    sVar17.str = (uint8 *)0x2a0d0b;
                    /* WARNING: Subroutine does not return */
    runtime_throw(sVar17);
  }
  runtime_gcController.lastHeapGoal = runtime_gcController.heapGoal;
  runtime_memstats.last_heap_inuse = runtime_memstats.heap_inuse;
  runtime___gcControllerState__commit(&runtime_gcController,nextTriggerRatio_spill);
  runtime_nanotime1();
  time_now();
  local_1a8 = SUB84(nextTriggerRatio_spill,0);
  runtime_work.pauseNS =
       (long)&runtime_gcController + (runtime_work.pauseNS - runtime_work.pauseStart);
  runtime_work.tEnd = (int64)&runtime_gcController;
  uVar15 = (long)&runtime_gcController - runtime_work.pauseStart;
                    /* Unresolved local var: uint superBucket@[???]
                       Unresolved local var: uint subBucket@[???] */
  if ((long)uVar15 < 0) {
    LOCK();
    runtime_memstats.gcPauseDist.underflow = runtime_memstats.gcPauseDist.underflow + 1;
    UNLOCK();
  }
  else {
    if ((long)uVar15 < 0x10) {
      lVar8 = 0;
    }
    else {
      lVar13 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      if (uVar15 == 0) {
        lVar13 = -1;
      }
      lVar8 = lVar13 + -3;
      ns = lVar8 * 0x10;
      if (ns < 0x2d0) {
        lVar13 = (long)uVar15 >> (((byte)(lVar13 - 4U) | ~-(lVar13 - 4U < 0x40)) & 0x3f);
        uVar15 = lVar13 + ((long)(((ulong)(lVar13 >> 0x3f) >> 0x3c) + lVar13) >> 4) * -0x10;
      }
      else {
        lVar8 = 0x2c;
        uVar15 = 0xf;
      }
    }
    uVar15 = uVar15 + lVar8 * 0x10;
    if (0x2cf < uVar15) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
    puVar2 = runtime_memstats.gcPauseDist.counts + uVar15;
    LOCK();
    *puVar2 = *puVar2 + 1;
    UNLOCK();
  }
  LOCK();
  UNLOCK();
  LOCK();
  runtime_memstats.last_gc_nanotime = (uint64)&runtime_gcController;
  UNLOCK();
  runtime_memstats.last_gc_unix = (long)local_1a8 + 0x30594e5de94000U;
  runtime_memstats.pause_ns[runtime_memstats.numgc & 0xff] = runtime_work.pauseNS;
  runtime_memstats.pause_end[runtime_memstats.numgc & 0xff] = (long)local_1a8 + 0x30594e5de94000U;
  runtime_memstats.pause_total_ns = runtime_memstats.pause_total_ns + runtime_work.pauseNS;
  lVar8 = (runtime_work.tMark - runtime_work.tSweepTerm) * (long)runtime_work.stwprocs;
  lVar13 = (long)runtime_work.stwprocs * (runtime_work.tEnd - runtime_work.tMarkTerm);
  s.len = runtime_gcController.dedicatedMarkTime + runtime_gcController.assistTime +
          runtime_gcController.fractionalMarkTime + lVar8 + lVar13 + runtime_work.totaltime;
  runtime_memstats.gc_cpu_fraction =
       (float64)((double)s.len /
                (double)((long)runtime_gomaxprocs *
                         ((long)&runtime_gcController - runtime_sched.procresizetime) +
                        runtime_sched.totaltime));
  runtime_sweep.nbgsweep = 0;
  runtime_sweep.npausesweep = 0;
  if (runtime_work.userForced != false) {
    runtime_memstats.numforcedgc = runtime_memstats.numforcedgc + 1;
  }
  runtime_work.totaltime = s.len;
  runtime_lock2(&runtime_work.sweepWaiters.lock);
  runtime_memstats.numgc = runtime_memstats.numgc + 1;
  runtime_injectglist(&runtime_work.sweepWaiters.list);
  runtime_unlock2(&runtime_work.sweepWaiters.lock);
  runtime_mProf_NextCycle();
  LOCK();
  runtime_mheap_.sweepers = runtime_mheap_.sweepers + 1;
  UNLOCK();
  runtime_systemstack();
  runtime_mProf_Flush();
  runtime_prepareFreeWorkbufs();
  runtime_systemstack();
  runtime_systemstack();
  uVar11 = 0x7f2c70;
  LOCK();
  uVar6 = runtime_mheap_.sweepers - 1;
  UNLOCK();
  bVar16 = runtime_mheap_.sweepers == 1;
  runtime_mheap_.sweepers = uVar6;
  if ((bVar16 && runtime_mheap_.sweepDrained != 0) && (0 < runtime_debug.gcpacertrace)) {
    local_100 = runtime_gcController.heapLive;
    local_108 = runtime_mheap_.sweepHeapLiveBasis;
    local_110 = runtime_mheap_.pagesSwept;
    local_118 = runtime_mheap_.sweepPagesPerByte;
    runtime_printlock();
    s.str = (uint8 *)0x2a1fe3;
    runtime_printstring(s);
    runtime_printuint(local_100 >> 0x14);
    s_00.len = s.len;
    s_00.str = &DAT_00296703;
    runtime_printstring(s_00);
    uVar11 = local_108;
    runtime_printuint(local_100 - local_108 >> 0x14);
    s_01.len = s.len;
    s_01.str = &DAT_0029d8ec;
    runtime_printstring(s_01);
    runtime_printuint(local_110);
    s_02.len = s.len;
    s_02.str = &DAT_0028ebf2;
    runtime_printstring(s_02);
    runtime_printfloat(local_118);
    s_03.len = s.len;
    s_03.str = &DAT_002927ca;
    runtime_printstring(s_03);
    runtime_printunlock();
  }
  handoff = (undefined1)s.len;
  if (0 < runtime_debug.gctrace) {
                    /* Unresolved local var: int util@[???]
                       Unresolved local var: int64 prev@[???]
                       Unresolved local var: uint8[24] sbuf@[???] */
    local_118 = (float64)((double)runtime_memstats.gc_cpu_fraction * 100.0);
    local_e8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    runtime_printlock();
    uVar14 = (ulong)(runtime_work.tSweepTerm - runtime_runtimeInitTime) / 1000000;
    uVar15 = 0x17;
                    /* Unresolved local var: int i@[???] */
    while ((cVar7 = (char)uVar14, 9 < uVar14 || (0x13 < (long)uVar15))) {
      uVar14 = uVar14 / 10;
      if (0x17 < uVar15) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      *(char *)((long)&local_e8 + uVar15) = cVar7 + (char)uVar14 * -10 + '0';
      bVar16 = uVar15 == 0x15;
      uVar15 = uVar15 - 1;
      if (bVar16) {
                    /* WARNING: Ignoring partial resolution of indirect */
        uStack_d8._4_1_ = 0x2e;
        uVar15 = 0x13;
      }
    }
    if (0x17 < uVar15) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    *(char *)((long)&local_e8 + uVar15) = cVar7 + '0';
    local_100 = (uint64)runtime_memstats.numgc;
    sVar17 = runtime_slicebytetostring
                       ((runtime_tmpBuf *)
                        ((long)&local_e8 + (uVar15 & (long)(uVar15 - 0x18) >> 0x3f)),
                        (uint8 *)-(uVar15 - 0x18),local_100);
    s_04.len = sVar17.len;
    local_18 = lStack_198;
    local_120 = local_190;
    runtime_printlock();
    s_04.str = &DAT_00287b3a;
    runtime_printstring(s_04);
    runtime_printuint(local_100);
    s_05.len = s_04.len;
    s_05.str = (uint8 *)((long)&DAT_0028776c + 3);
    runtime_printstring(s_05);
    s_06.len = s_04.len;
    s_06.str = *local_120;
    runtime_printstring(s_06);
    s_07.len = s_04.len;
    s_07.str = (uint8 *)((long)&DAT_0028785f + 2);
    runtime_printstring(s_07);
    runtime_printint((long)(double)local_118);
    s_08.len = s_04.len;
    s_08.str = &DAT_00287891;
    runtime_printstring(s_08);
    runtime_printunlock();
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int64 ns@[???] */
    local_d0[0] = runtime_work.tMark;
    local_d0[1] = runtime_work.tMarkTerm;
    local_d0[2] = runtime_work.tEnd;
    lVar9 = runtime_work.tSweepTerm;
    s_12.len = s_04.len;
    for (lVar12 = 0; lVar12 < 3; lVar12 = lVar12 + 1) {
      lVar5 = local_d0[lVar12];
      if (lVar12 != 0) {
        local_128 = lVar9;
        runtime_printlock();
        s_10.len = s_12.len;
        s_10.str = (uint8 *)&net__stmp_20;
        runtime_printstring(s_10);
        runtime_printunlock();
        lVar9 = local_128;
      }
      _Var18.len = s_12.len;
      _Var18.array = (uint8 *)lVar9;
      _Var18.cap = (int)&local_e8;
      _Var18 = runtime_fmtNSAsMS(_Var18,ns);
      sVar17 = runtime_slicebytetostring(local_190,(uint8 *)_Var18.len,local_188);
      s_09.len = sVar17.len;
      local_120 = local_190;
      local_18 = lVar5 - lVar9;
      runtime_printlock();
      s_09.str = *local_120;
      runtime_printstring(s_09);
      runtime_printunlock();
      lVar9 = lVar5;
      s_12.len = s_09.len;
    }
    runtime_printlock();
    s_11.len = s_12.len;
    s_11.str = &DAT_0029093d;
    runtime_printstring(s_11);
    runtime_printunlock();
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int64 ns@[???] */
    local_58 = lVar8;
    local_50 = runtime_gcController.assistTime;
    lStack_48 = runtime_gcController.fractionalMarkTime + runtime_gcController.dedicatedMarkTime;
    local_40 = runtime_gcController.idleMarkTime;
    lStack_38 = lVar13;
    for (lVar8 = 0; uVar11 = runtime_work.heapGoal, lVar8 < 5; lVar8 = lVar8 + 1) {
      lVar13 = (&local_58)[lVar8];
      if ((lVar8 == 2) || (lVar8 == 3)) {
        runtime_printlock();
        s_13.len = s_12.len;
        s_13.str = &net__stmp_87;
        runtime_printstring(s_13);
        runtime_printunlock();
      }
      else if (lVar8 != 0) {
        runtime_printlock();
        s_14.len = s_12.len;
        s_14.str = (uint8 *)&net__stmp_20;
        runtime_printstring(s_14);
        runtime_printunlock();
      }
      buf.len = s_12.len;
      buf.array = (uint8 *)&local_e8;
      buf.cap = lVar13;
      _Var18 = runtime_fmtNSAsMS(buf,ns);
      sVar17 = runtime_slicebytetostring(local_190,(uint8 *)_Var18.len,local_188);
      s_12.len = sVar17.len;
      local_120 = local_190;
      local_18 = lVar13;
      runtime_printlock();
      s_12.str = *local_120;
      runtime_printstring(s_12);
      runtime_printunlock();
    }
    local_100 = runtime_work.heap0;
    local_108 = runtime_work.heap1;
    local_110 = runtime_work.heap2;
    local_130 = runtime_work.heapGoal;
    local_128 = (long)runtime_work.maxprocs;
    runtime_printlock();
    s_15.len = uVar11;
    s_15.str = &DAT_0028d1f3;
    runtime_printstring(s_15);
    runtime_printuint(local_100 >> 0x14);
    s_16.len = uVar11;
    s_16.str = &DAT_00287789;
    runtime_printstring(s_16);
    runtime_printuint(local_108 >> 0x14);
    s_17.len = uVar11;
    s_17.str = &DAT_00287789;
    runtime_printstring(s_17);
    runtime_printuint(local_110 >> 0x14);
    s_18.len = uVar11;
    s_18.str = &DAT_002888d6;
    runtime_printstring(s_18);
    runtime_printuint(local_130 >> 0x14);
    s_19.len = uVar11;
    s_19.str = &DAT_0028ebca;
    runtime_printstring(s_19);
    runtime_printint(local_128);
    s_20.len = uVar11;
    s_20.str = (uint8 *)((long)&DAT_0028776c + 5);
    runtime_printstring(s_20);
    runtime_printunlock();
    if (runtime_work.userForced != false) {
      runtime_printlock();
      s_21.len = uVar11;
      s_21.str = &DAT_0028d1a2;
      runtime_printstring(s_21);
      runtime_printunlock();
    }
    handoff = (undefined1)uVar11;
    runtime_printlock();
    runtime_printnl();
    runtime_printunlock();
                    /* Unresolved local var: runtime.m * mp@[???] */
    lVar8 = *(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30);
    bVar3 = *(byte *)(lVar8 + 0x11f);
    uVar11 = (uint64)bVar3;
    *(byte *)(lVar8 + 0x11f) = bVar3 - 1;
    if (bVar3 == 1) {
      runtime_unlock2(&runtime_debuglock);
    }
  }
  runtime_semrelease1(&runtime_worldsema,(bool)handoff,uVar11);
  runtime_semrelease1(&runtime_gcsema,(bool)handoff,uVar11);
                    /* Unresolved local var: runtime.g * _g_@[???] */
  lVar8 = *(long *)(in_FS_OFFSET + -8);
  iVar4 = *(int *)(local_30 + 0x110);
  *(int *)(local_30 + 0x110) = iVar4 + -1;
  if ((iVar4 == 1) && (*(char *)(lVar8 + 0xb1) != '\0')) {
    *(undefined8 *)(lVar8 + 0x10) = 0xfffffffffffffade;
  }
  return;
}

