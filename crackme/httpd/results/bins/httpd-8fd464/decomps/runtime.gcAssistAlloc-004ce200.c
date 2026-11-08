
/* WARNING: Unknown calling convention */

void runtime_gcAssistAlloc(runtime_g *gp)

{
  runtime_m *prVar1;
  long lVar2;
  int64 iVar3;
  runtime_g *extraout_RAX;
  runtime_g *prVar4;
  undefined8 uVar5;
  void *pvVar6;
  long lVar7;
  long in_FS_OFFSET;
  __uint64 args;
  __uint64 args_00;
  __uint64 args_01;
  runtime_g *gp_spill;
  char local_58;
  code *local_20 [2];
  long local_10;
  long lVar8;
  void **ppvVar9;
  
                    /* Unresolved local var: bool traced@[???]
                       Unresolved local var: float64 assistWorkPerByte@[???]
                       Unresolved local var: float64 assistBytesPerWork@[???]
                       Unresolved local var: int64 debtBytes@[???]
                       Unresolved local var: int64 scanWork@[???]
                       Unresolved local var: int64 bgScanCredit@[???]
                       Unresolved local var: int64 stolen@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (gp_spill->m->g0 == *(runtime_g **)(in_FS_OFFSET + -8)) {
    return;
  }
                    /* Unresolved local var: runtime.m * mp@[???] */
  prVar1 = (*(runtime_g **)(in_FS_OFFSET + -8))->m;
  if ((0 < prVar1->locks) || ((prVar1->preemptoff).len != 0)) {
    return;
  }
  uVar5 = 0;
  do {
    while( true ) {
      iVar3 = runtime_gcController.bgScanCredit;
      lVar7 = (long)((double)-gp_spill->gcAssistBytes *
                    (double)runtime_gcController.assistWorkPerByte);
      lVar8 = -gp_spill->gcAssistBytes;
      if (lVar7 < 0x10000) {
        lVar7 = 0x10000;
        lVar8 = (long)((double)runtime_gcController.assistBytesPerWork * 65536.0);
      }
      ppvVar9 = (void **)runtime_gcController.bgScanCredit;
      lVar2 = runtime_gcController.bgScanCredit;
      if (0 < runtime_gcController.bgScanCredit) {
        if (runtime_gcController.bgScanCredit < lVar7) {
          gp_spill->gcAssistBytes =
               (long)((double)runtime_gcController.bgScanCredit *
                     (double)runtime_gcController.assistBytesPerWork) + gp_spill->gcAssistBytes + 1;
          lVar8 = iVar3;
        }
        else {
          gp_spill->gcAssistBytes = gp_spill->gcAssistBytes + lVar8;
          lVar8 = lVar7;
        }
        LOCK();
        lVar2 = runtime_gcController.bgScanCredit - lVar8;
        UNLOCK();
        lVar7 = lVar7 - lVar8;
        ppvVar9 = (void **)runtime_gcController.bgScanCredit;
        if (lVar7 == 0) {
          if ((char)uVar5 != '\0') {
            args_00.len = runtime_gcController.bgScanCredit;
            args_00.array = (uint64 *)uVar5;
            args_00.cap = lVar8;
            runtime_gcController.bgScanCredit = lVar2;
            runtime_traceEvent((uint8)gp_spill,0x10000,args_00);
            lVar2 = runtime_gcController.bgScanCredit;
          }
          runtime_gcController.bgScanCredit = lVar2;
          return;
        }
      }
      runtime_gcController.bgScanCredit = lVar2;
      if ((runtime_trace.enabled != false) && ((char)uVar5 == '\0')) {
        args.len = (int)ppvVar9;
        args.array = (uint64 *)uVar5;
        args.cap = lVar8;
        runtime_traceEvent((uint8)gp_spill,0x10000,args);
        uVar5 = 1;
      }
      local_20[0] = runtime_gcAssistAlloc_func1;
      local_10 = lVar7;
      runtime_systemstack();
      pvVar6 = gp_spill->param;
      if (runtime_writeBarrier._0_4_ == 0) {
        gp_spill->param = (void *)0x0;
        prVar4 = gp_spill;
      }
      else {
        ppvVar9 = &gp_spill->param;
        runtime_gcWriteBarrierDX();
        prVar4 = extraout_RAX;
      }
      if (pvVar6 != (void *)0x0) {
        runtime_gcMarkDone();
        prVar4 = gp_spill;
      }
      if (-1 < prVar4->gcAssistBytes) goto LAB_004ce46f;
      if (prVar4->preempt == false) break;
      runtime_mcall();
    }
    runtime_gcParkAssist();
    local_58 = (char)local_20;
  } while (local_58 == '\0');
LAB_004ce46f:
  if ((uint8)uVar5 != 0) {
    args_01.len = (int)ppvVar9;
    args_01.array = pvVar6;
    args_01.cap = lVar8;
    runtime_traceEvent((uint8)uVar5,0x4ce4c0,args_01);
  }
  return;
}

