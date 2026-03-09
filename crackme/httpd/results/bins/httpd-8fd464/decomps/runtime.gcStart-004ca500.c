
/* WARNING: Removing unreachable block (ram,0x004ca9ec) */
/* WARNING: Removing unreachable block (ram,0x004caa03) */
/* WARNING: Unknown calling convention */

void runtime_gcStart(ulong param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  uint32 uVar6;
  runtime_gcTriggerKind rVar7;
  int skipframes;
  uint32 *profile;
  ulong uVar8;
  code **skipframes_00;
  long lVar9;
  bool bVar10;
  int iVar11;
  runtime_p *prVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  string s_02;
  __uint64 args;
  __uint64 args_00;
  runtime_gcTrigger trigger_spill;
  long local_70;
  undefined **local_40;
  uint32 *local_38;
  long local_30;
  uint64 local_28;
  long local_20;
  code *local_18;
  undefined ***pppuStack_10;
  
                    /* Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: runtime.gcMode mode@[???]
                       Unresolved local var: int64 now@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: runtime.g * _g_@[???] */
  lVar9 = *(long *)(in_FS_OFFSET + -8);
  piVar1 = (int *)(*(long *)(lVar9 + 0x30) + 0x110);
  *piVar1 = *piVar1 + 1;
  plVar4 = *(long **)(lVar9 + 0x30);
                    /* Unresolved local var: runtime.g * gp@[???] */
  lVar9 = *(long *)(in_FS_OFFSET + -8);
  if (((*plVar4 == lVar9) || (iVar3 = (int)plVar4[0x22], 1 < iVar3)) || (plVar4[0x21] != 0)) {
    lVar5 = plVar4[0x22];
    *(int *)(plVar4 + 0x22) = (int)lVar5 + -1;
    if (((int)lVar5 == 1) && (*(char *)(lVar9 + 0xb1) != '\0')) {
      *(undefined8 *)(lVar9 + 0x10) = 0xfffffffffffffade;
    }
    return;
  }
  prVar12 = (runtime_p *)(ulong)(iVar3 - 1U);
  *(uint *)(plVar4 + 0x22) = iVar3 - 1U;
  if ((iVar3 == 1) && (*(char *)(lVar9 + 0xb1) != '\0')) {
    *(undefined8 *)(lVar9 + 0x10) = 0xfffffffffffffade;
  }
  while( true ) {
    if (((runtime_memstats.enablegc == false) || (runtime_panicking != 0)) || (runtime_gcphase != 0)
       ) {
      bVar10 = false;
    }
    else if (trigger_spill.kind == 0) {
      bVar10 = runtime_gcController.trigger <= runtime_gcController.heapLive;
      prVar12 = (runtime_p *)CONCAT71((int7)(runtime_gcController.heapLive >> 8),bVar10);
    }
    else if (trigger_spill.kind == 1) {
      if (runtime_gcController.gcPercent < 0) {
        bVar10 = false;
      }
      else {
        prVar12 = (runtime_p *)runtime_memstats.last_gc_nanotime;
        if (runtime_memstats.last_gc_nanotime == 0) {
          bVar10 = false;
        }
        else {
          bVar10 = runtime_forcegcperiod <
                   (long)(trigger_spill.now - runtime_memstats.last_gc_nanotime);
        }
      }
    }
    else if (trigger_spill.kind == 2) {
      param_1 = (ulong)trigger_spill.n;
      bVar10 = 0 < (int)(trigger_spill.n - runtime_work.cycles);
      prVar12 = (runtime_p *)CONCAT71((int7)((ulong)prVar12 >> 8),bVar10);
    }
    else {
      bVar10 = true;
    }
    if (bVar10) {
      runtime_sweepone();
    }
    if (!bVar10 || local_70 == -1) break;
    runtime_sweep.nbgsweep = runtime_sweep.nbgsweep + 1;
                    /* Unresolved local var: int64 lastgc@[???] */
  }
  rVar7 = trigger_spill.kind;
  uVar13 = trigger_spill.now;
  runtime_semacquire1(&runtime_work.startSema,SUB81(prVar12,0),trigger_spill.kind,param_1);
                    /* Unresolved local var: int64 lastgc@[???] */
  if (((runtime_memstats.enablegc == false) || (runtime_panicking != 0)) || (runtime_gcphase != 0))
  {
    skipframes = 0;
  }
  else if (trigger_spill.kind == 0) {
    skipframes = CONCAT71((int7)(runtime_gcController.heapLive >> 8),
                          runtime_gcController.trigger <= runtime_gcController.heapLive);
  }
  else if (trigger_spill.kind == 1) {
    if (runtime_gcController.gcPercent < 0) {
      skipframes = 0;
    }
    else if (runtime_memstats.last_gc_nanotime == 0) {
      skipframes = 0;
    }
    else {
      skipframes = CONCAT71((int7)(runtime_memstats.last_gc_nanotime >> 8),
                            runtime_forcegcperiod <
                            (long)(trigger_spill.now - runtime_memstats.last_gc_nanotime));
    }
  }
  else if (trigger_spill.kind == 2) {
    prVar12 = (runtime_p *)(ulong)(trigger_spill.n - runtime_work.cycles);
    skipframes = CONCAT71((int7)((ulong)rVar7 >> 8),0 < (int)(trigger_spill.n - runtime_work.cycles)
                         );
  }
  else {
    skipframes = 1;
  }
  bVar10 = SUB81(prVar12,0);
  if ((char)skipframes != '\0') {
    runtime_work.userForced = trigger_spill.kind == 2;
    if (runtime_debug.gcstoptheworld == 1) {
      local_38 = (uint32 *)0x1;
    }
    else {
      local_38 = (uint32 *)0x0;
      if (runtime_debug.gcstoptheworld == 2) {
        local_38 = (uint32 *)0x2;
      }
    }
    profile = &runtime_gcsema;
    runtime_semacquire1(local_38,bVar10,0x757990,param_1);
    runtime_semacquire1(&runtime_worldsema,bVar10,(runtime_semaProfileFlags)profile,param_1);
    if (runtime_trace.enabled != false) {
      local_28 = runtime_trace.seqGC;
      args.len = param_1;
      args.array = (uint64 *)profile;
      args.cap = uVar13;
      runtime_traceEvent((uint8)&local_28,(int)prVar12,args);
      runtime_trace.seqGC = runtime_trace.seqGC + 1;
    }
                    /* Unresolved local var: runtime.p * p@[???] */
    uVar6 = runtime_mheap_.sweepgen;
    lVar9 = 0;
    while( true ) {
      if (runtime_allp.len <= lVar9) {
        runtime_gcBgMarkStartWorkers();
        runtime_systemstack();
        runtime_work.stwprocs = runtime_gomaxprocs;
        runtime_work.maxprocs = runtime_gomaxprocs;
        uVar8 = (ulong)(uint)runtime_ncpu;
        if (runtime_ncpu < runtime_gomaxprocs) {
          runtime_work.stwprocs = runtime_ncpu;
        }
        runtime_work.heap0 = runtime_gcController.heapLive;
        runtime_work.pauseNS = 0;
        runtime_work.mode = (runtime_gcMode)local_38;
        runtime_nanotime1();
        local_40 = &PTR_runtime_gcResetMarkState_002b3888;
        runtime_work.tSweepTerm = (int64)&PTR_runtime_gcResetMarkState_002b3888;
        runtime_work.pauseStart = (int64)&PTR_runtime_gcResetMarkState_002b3888;
        if (runtime_trace.enabled != false) {
          local_28 = 1;
          args_00.len = param_1;
          args_00.array = (uint64 *)uVar8;
          args_00.cap = uVar13;
          runtime_traceEvent((uint8)&local_28,(int)prVar12,args_00);
        }
        runtime_systemstack();
        runtime_systemstack();
        runtime_clearpools();
        runtime_work.cycles = runtime_work.cycles + 1;
        runtime___gcControllerState__startCycle(&runtime_gcController);
        runtime_work.heapGoal = runtime_gcController.heapGoal;
        if (local_38 != (uint32 *)0x0) {
          runtime_schedEnableUser(SUB81(local_38,0));
        }
        LOCK();
        runtime_gcphase = 1;
        UNLOCK();
        runtime_writeBarrier.needed = true;
        runtime_writeBarrier.enabled = true;
        runtime_work.nproc = 0xffffffff;
        runtime_work.nwait = 0xffffffff;
        runtime_gcMarkRootPrepare();
        runtime_gcMarkTinyAllocs();
        LOCK();
        runtime_gcBlackenEnabled = 1;
        UNLOCK();
        runtime_gcController.markStartTime = (int64)local_40;
                    /* Unresolved local var: runtime.g * _g_@[???] */
        lVar9 = *(long *)(in_FS_OFFSET + -8);
        piVar1 = (int *)(*(long *)(lVar9 + 0x30) + 0x110);
        *piVar1 = *piVar1 + 1;
        local_20 = *(long *)(lVar9 + 0x30);
        local_18 = runtime_gcStart_func2;
        pppuStack_10 = &local_40;
        skipframes_00 = &local_18;
        runtime_systemstack();
        runtime_semrelease1(&runtime_worldsema,SUB81(prVar12,0),(int)skipframes_00);
                    /* Unresolved local var: runtime.g * _g_@[???] */
        lVar9 = *(long *)(in_FS_OFFSET + -8);
        iVar3 = *(int *)(local_20 + 0x110);
        iVar11 = iVar3 + -1;
        *(int *)(local_20 + 0x110) = iVar11;
        if ((iVar3 == 1) && (*(char *)(lVar9 + 0xb1) != '\0')) {
          *(undefined8 *)(lVar9 + 0x10) = 0xfffffffffffffade;
        }
        lVar9 = local_20;
        if (local_38 != (uint32 *)0x0) {
          runtime_mcall();
        }
        runtime_semrelease1(&runtime_work.startSema,SUB41(iVar11,0),lVar9);
        return;
      }
      prVar12 = runtime_allp.array[lVar9];
                    /* Unresolved local var: uint32 fg@[???] */
      uVar2 = prVar12->mcache->flushGen;
      uVar13 = (ulong)uVar2;
      param_1 = (ulong)runtime_mheap_.sweepgen;
      if (uVar2 != runtime_mheap_.sweepgen) break;
      lVar9 = lVar9 + 1;
    }
    local_30 = (long)prVar12->id;
    runtime_printlock();
    s.len = (int)prVar12;
    s.str = &DAT_00292158;
    runtime_printstring(s);
    runtime_printint(local_30);
    s_00.len = (int)prVar12;
    s_00.str = &DAT_0028ebde;
    runtime_printstring(s_00);
    runtime_printuint((ulong)uVar2);
    s_01.len = (int)prVar12;
    s_01.str = &DAT_002944c2;
    runtime_printstring(s_01);
    runtime_printuint((ulong)uVar6);
    runtime_printnl();
    runtime_printunlock();
    s_02.len = (int)prVar12;
    s_02.str = &DAT_0029c0c2;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_02);
  }
  runtime_semrelease1(&runtime_work.startSema,bVar10,skipframes);
  return;
}

