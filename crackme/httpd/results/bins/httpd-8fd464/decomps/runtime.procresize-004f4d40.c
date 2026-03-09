
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.procresize(int32 nprocs, runtime.p * ~r1) */

runtime_p * runtime_procresize(int32 nprocs)

{
  runtime__defer *prVar1;
  runtime_p *prVar2;
  runtime_muintptr rVar3;
  int32 iVar4;
  uint uVar5;
  runtime_p *prVar6;
  uint32 *extraout_RAX;
  runtime_p *prVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  void *dstPtr;
  runtime_p **pprVar13;
  int unaff_RBX;
  int in_RSI;
  undefined8 in_RDI;
  void *srcPtr;
  runtime_pMask *from;
  ulong uVar14;
  uint32 *puVar15;
  long in_FS_OFFSET;
  string s;
  runtime_slice old;
  __uint64 args;
  __uint64 args_00;
  int32 i;
  runtime_p *local_a8;
  runtime_p *local_a0;
  runtime_p *prStack_90;
  uint32 *local_88;
  uint32 *local_80;
  long local_78;
  int local_70;
  long local_38;
  runtime_p *local_30;
  runtime_p *local_28;
  runtime_p *local_20;
  runtime_p **local_18;
  runtime_p *local_10;
  
                    /* Unresolved local var: int32 old@[DW_OP_reg0(RAX)]
                       Unresolved local var: int64 now@[???]
                       Unresolved local var: int32 maskWords@[???]
                       Unresolved local var: runtime.g * _g_@[???]
                       Unresolved local var: runtime.p * runnablePs@[???] */
  while (iVar4 = runtime_gomaxprocs,
        &local_28 <= *(runtime_p ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((runtime_gomaxprocs < 0) || (args.array = (ulong)(uint)i, i < 1)) {
    s.len = unaff_RBX;
    s.str = &DAT_0029deda;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
  if (runtime_trace.enabled != false) {
    local_38 = (long)i;
    local_a8 = (runtime_p *)CONCAT71(local_a8._1_7_,4);
    local_a0 = (runtime_p *)0x1;
    prStack_90 = (runtime_p *)0x1;
    local_88 = (uint32 *)0x1;
    args.len = in_RDI;
    args.cap = in_RSI;
    runtime_traceEvent((uint8)&local_38,unaff_RBX,args);
  }
  runtime_nanotime1();
  prVar7 = local_a8;
  if (runtime_sched.procresizetime != 0) {
    runtime_sched.totaltime =
         runtime_sched.totaltime + (long)iVar4 * ((long)local_a8 - runtime_sched.procresizetime);
    prVar7 = (runtime_p *)((long)local_a8 - runtime_sched.procresizetime);
  }
  runtime_sched.procresizetime = (int64)local_a8;
  args_00.cap._0_4_ = (int)(((uint)(i + 0x1f >> 0x1f) >> 0x1b) + i + 0x1f) >> 5;
  uVar14 = (ulong)(uint)args_00.cap;
  iVar10 = iVar4;
  if ((int)runtime_allp.len < i) {
    srcPtr = (void *)runtime_allp.len;
    runtime_lock2(&runtime_allpLock);
    if ((int)runtime_allp.cap < i) {
                    /* Unresolved local var: []*runtime.p nallp@[???] */
      dstPtr = (void *)(long)i;
      runtime_makeslice((runtime__type *)(ulong)(uint)i,(ulong)(uint)i,0x23b400);
      local_10 = prStack_90;
      local_a0 = prStack_90;
      local_88 = (uint32 *)runtime_allp.cap;
      runtime_typedslicecopy
                ((runtime__type *)prStack_90,dstPtr,(int)runtime_allp.array,srcPtr,uVar14);
      runtime_allp.cap = (int)dstPtr;
      if (runtime_writeBarrier._0_4_ == 0) {
        runtime_allp.array = (runtime_p **)local_10;
      }
      else {
        runtime_allp.len = (int)dstPtr;
        runtime_gcWriteBarrier();
        dstPtr = (void *)runtime_allp.len;
      }
    }
    else {
      dstPtr = (void *)(long)i;
      if ((ulong)runtime_allp.cap < (ulong)(long)i) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAcap();
      }
    }
    runtime_allp.len = (int)dstPtr;
    from = (runtime_pMask *)(ulong)(uint)args_00.cap;
    if ((int)runtime_idlepMask.cap < (int)(uint)args_00.cap) {
                    /* Unresolved local var: []uint32 nidlepMask@[???]
                       Unresolved local var: []uint32 ntimerpMask@[???] */
      prVar7 = (runtime_p *)(long)(int)(uint)args_00.cap;
      runtime_makeslicecopy
                ((runtime__type *)&DAT_002256a0,(int)runtime_idlepMask.array,(int)prVar7,from);
      local_a0 = prVar7;
      runtime_idlepMask.len = (int)prVar7;
      runtime_idlepMask.cap = (int)prVar7;
      if (runtime_writeBarrier._0_4_ == 0) {
        runtime_idlepMask.array = local_88;
      }
      else {
        from = &runtime_idlepMask;
        runtime_gcWriteBarrier();
      }
      runtime_makeslicecopy((runtime__type *)runtime_timerpMask.array,0x2256a0,(int)local_a0,from);
      runtime_timerpMask.cap = (int)prVar7;
      if (runtime_writeBarrier._0_4_ == 0) {
        runtime_timerpMask.array = local_88;
        prVar6 = prVar7;
      }
      else {
        runtime_timerpMask.len = (int)prVar7;
        runtime_gcWriteBarrier();
        prVar6 = (runtime_p *)runtime_timerpMask.len;
      }
    }
    else {
      prVar7 = (runtime_p *)(long)(int)(uint)args_00.cap;
      if ((ulong)runtime_idlepMask.cap < prVar7) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAcap();
      }
      runtime_idlepMask.len = (int)prVar7;
      prVar6 = prVar7;
      if ((ulong)runtime_timerpMask.cap < prVar7) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAcap();
      }
    }
    runtime_timerpMask.len = (int)prVar6;
    runtime_unlock2(&runtime_allpLock);
  }
  while( true ) {
    prVar6 = (runtime_p *)(ulong)(uint)iVar4;
    if (i <= iVar10) break;
                    /* Unresolved local var: runtime.p * pp@[???] */
    uVar14 = (ulong)iVar10;
    if ((ulong)runtime_allp.len <= uVar14) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    prVar7 = runtime_allp.array[uVar14];
    if (runtime_allp.array[uVar14] == (runtime_p *)0x0) {
      prVar6 = runtime_newobject((runtime__type *)&DAT_002857a0);
      prVar7 = local_a0;
    }
    local_a0 = (runtime_p *)CONCAT44(local_a0._4_4_,iVar10);
    local_28 = prVar7;
    runtime___p__init(prVar6,i);
    if ((ulong)runtime_allp.len <= uVar14) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    prVar7 = (runtime_p *)runtime_allp.len;
    pprVar13 = runtime_allp.array + uVar14;
    if (runtime_writeBarrier.enabled != false) {
      local_a0 = local_28;
      local_18 = runtime_allp.array + uVar14;
      runtime_atomicwb((void **)local_28,(void *)(ulong)(uint)i);
      pprVar13 = local_18;
    }
    LOCK();
    *pprVar13 = local_28;
    UNLOCK();
    iVar10 = iVar10 + 1;
  }
  local_20 = *(runtime_p **)(in_FS_OFFSET + -8);
  prVar1 = *(runtime__defer **)((local_20->sysmontick).syscallwhen + 0xd8);
  if (prVar1 != (runtime__defer *)0x0) {
    if (prVar1->siz < i) {
      prVar1->started = true;
      prVar1->heap = false;
      prVar1->openDefer = false;
      prVar1->field_0x7 = 0;
      runtime___mcache__prepareForSweep
                (*(runtime_mcache **)(*(long *)((local_20->sysmontick).syscallwhen + 0xd8) + 0x40));
      goto LAB_004f5273;
    }
                    /* Unresolved local var: runtime.p * p@[???] */
    if (prVar1 != (runtime__defer *)0x0) {
      if (runtime_trace.enabled != false) {
        local_20->deferpoolbuf[0][0] = prVar1;
        args_00.len = (int)prVar1;
        args_00.array = (uint64 *)prVar7;
        args_00.cap._4_4_ = 0;
        runtime_traceEvent((uint8)iVar4,(int)(ulong)(uint)i,args_00);
        runtime_traceProcStop(local_20);
      }
      *(undefined8 *)(*(long *)((local_20->sysmontick).syscallwhen + 0xd8) + 0x38) = 0;
    }
  }
  *(undefined8 *)((local_20->sysmontick).syscallwhen + 0xd8) = 0;
  if (runtime_allp.len == 0) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  prVar7 = *runtime_allp.array;
  prVar7->m = 0;
  prVar7->status = 0;
  runtime_acquirep(prVar7);
  if (runtime_trace.enabled != false) {
    runtime_traceGoStart();
  }
LAB_004f5273:
  runtime_mcache0 = (runtime_mcache *)0x0;
  for (iVar10 = i; iVar10 < iVar4; iVar10 = iVar10 + 1) {
    if ((ulong)runtime_allp.len <= (ulong)(long)iVar10) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
                    /* Unresolved local var: runtime.p * p@[???] */
    runtime___p__destroy(runtime_allp.array[iVar10]);
  }
  if (i != (int)runtime_allp.len) {
    runtime_lock2(&runtime_allpLock);
    uVar14 = (ulong)i;
    if ((ulong)runtime_allp.cap < uVar14) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAcap();
    }
    uVar8 = (ulong)(int)(uint)args_00.cap;
    runtime_allp.len = uVar14;
    if ((ulong)runtime_idlepMask.cap < uVar8) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAcap();
    }
    runtime_idlepMask.len = uVar8;
    if ((ulong)runtime_timerpMask.cap < uVar8) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAcap();
    }
    runtime_timerpMask.len = uVar8;
    runtime_unlock2(&runtime_allpLock);
                    /* Unresolved local var: int32 i@[???] */
  }
  prVar7 = (runtime_p *)0x0;
  prVar6 = local_20;
  iVar10 = i;
  while( true ) {
    iVar10 = iVar10 + -1;
    local_30 = prVar7;
    if (iVar10 < 0) {
      runtime_stealOrder.count = i;
      runtime_stealOrder.coprimes.len = 0;
      for (uVar11 = 1; iVar4 = runtime_gomaxprocs, uVar11 <= (uint)i; uVar11 = uVar11 + 1) {
        old.array = (ulong)uVar11;
        uVar14 = (ulong)(uint)i;
        uVar12 = uVar11;
        while (uVar5 = (uint)uVar14, uVar5 != 0) {
          uVar14 = (ulong)uVar12 % uVar14;
          uVar12 = uVar5;
        }
        if (uVar12 == 1) {
          iVar9 = runtime_stealOrder.coprimes.len;
          puVar15 = runtime_stealOrder.coprimes.array;
          if ((ulong)runtime_stealOrder.coprimes.cap < runtime_stealOrder.coprimes.len + 1U) {
            old.len = (int)prVar7;
            old.cap = runtime_stealOrder.coprimes.len + 1U;
            runtime_growslice((runtime__type *)&DAT_002256a0,old,(ulong)(uint)i);
            runtime_stealOrder.coprimes.cap = local_70;
            iVar9 = local_78;
            if (runtime_writeBarrier._0_4_ == 0) {
              runtime_stealOrder.coprimes.array = local_80;
              prVar7 = local_30;
              puVar15 = local_80;
            }
            else {
              runtime_gcWriteBarrier();
              prVar7 = local_30;
              puVar15 = extraout_RAX;
            }
          }
          runtime_stealOrder.coprimes.len = iVar9 + 1;
          puVar15[iVar9] = uVar11;
        }
      }
      LOCK();
      runtime_gomaxprocs = i;
      UNLOCK();
      return (runtime_p *)(ulong)(uint)iVar4;
    }
                    /* Unresolved local var: runtime.p * p@[???] */
    if ((ulong)runtime_allp.len <= (ulong)(long)iVar10) break;
    prVar2 = runtime_allp.array[iVar10];
    if (*(runtime_p **)((prVar6->sysmontick).syscallwhen + 0xd8) != prVar2) {
      prVar2->status = 0;
      rVar3 = runtime_sched.midle;
                    /* Unresolved local var: uint32 head@[???]
                       Unresolved local var: uint32 tail@[???]
                       Unresolved local var: uintptr runnext@[???] */
      do {
      } while (prVar2->runqtail != prVar2->runqtail);
      if ((prVar2->runqtail == prVar2->runqhead) && (prVar2->runnext == 0)) {
        runtime_pidleput((runtime_p *)(ulong)(uint)i);
        prVar7 = local_30;
        prVar6 = local_20;
                    /* Unresolved local var: uint32 i@[???] */
      }
      else {
                    /* Unresolved local var: runtime.m * mp@[???] */
        if (runtime_sched.midle != 0) {
          runtime_sched.midle = *(runtime_muintptr *)(runtime_sched.midle + 0x168);
          runtime_sched.nmidle = runtime_sched.nmidle + -1;
        }
        prVar2->m = rVar3;
        prVar2->link = (runtime_puintptr)prVar7;
        prVar7 = prVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

