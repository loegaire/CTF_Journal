
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_gcMarkDone(void)

{
  long lVar1;
  bool bVar2;
  bool enable;
  code **in_RCX;
  uint32 *skipframes;
  bool unaff_BL;
  undefined7 unaff_00000019;
  int in_RSI;
  long in_RDI;
  long in_FS_OFFSET;
  __uint64 args;
  char local_21;
  undefined8 local_20;
  code *local_18;
  char *pcStack_10;
  
                    /* Unresolved local var: int64 now@[???]
                       Unresolved local var: float64 nextTriggerRatio@[???]
                       Unresolved local var: bool restart@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_semacquire1(&runtime_work.markDoneSema,unaff_BL,(runtime_semaProfileFlags)in_RCX,in_RDI);
  while ((runtime_gcphase == 1 && (runtime_work.nproc == runtime_work.nwait))) {
    if (runtime_work.full == 0) {
      if (runtime_work.markrootNext < runtime_work.markrootJobs) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
    }
    else {
      bVar2 = true;
    }
    if (bVar2) break;
    runtime_semacquire1(&runtime_worldsema,unaff_BL,(runtime_semaProfileFlags)in_RCX,in_RDI);
    runtime_gcMarkDoneFlushed = 0;
    runtime_systemstack();
    if (runtime_gcMarkDoneFlushed == 0) {
      runtime_nanotime1();
      runtime_work.tMarkTerm = (int64)&PTR_runtime_gcMarkDone_func1_002b3850;
      runtime_work.pauseStart = (int64)&PTR_runtime_gcMarkDone_func1_002b3850;
      lVar1 = *(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30);
      *(undefined8 *)(lVar1 + 0x108) = 5;
      if (runtime_writeBarrier._0_4_ == 0) {
        in_RCX = (code **)&DAT_00288d8b;
        *(undefined **)(lVar1 + 0x100) = &DAT_00288d8b;
      }
      else {
        in_RDI = lVar1 + 0x100;
        runtime_gcWriteBarrier();
      }
      if (runtime_trace.enabled != false) {
        local_20 = 0;
        args.len = in_RDI;
        args.array = (uint64 *)in_RCX;
        args.cap = in_RSI;
        runtime_traceEvent((uint8)&local_20,CONCAT71(unaff_00000019,unaff_BL),args);
      }
      runtime_systemstack();
      local_21 = '\0';
      local_18 = runtime_gcMarkDone_func2;
      pcStack_10 = &local_21;
      in_RCX = &local_18;
      runtime_systemstack();
      if (local_21 == '\0') {
        skipframes = &runtime_gcBlackenEnabled;
        LOCK();
        runtime_gcBlackenEnabled = 0;
        UNLOCK();
        runtime_gcWakeAllAssists();
        runtime_semrelease1(&runtime_work.markDoneSema,unaff_BL,(int)skipframes);
        runtime_schedEnableUser(enable);
        runtime___gcControllerState__endCycle
                  ((runtime_gcControllerState *)(ulong)runtime_work.userForced,unaff_BL);
        runtime_gcMarkTermination(0.0);
        return;
      }
      lVar1 = *(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30);
      *(undefined8 *)(lVar1 + 0x108) = 0;
      if (runtime_writeBarrier._0_4_ == 0) {
        *(undefined8 *)(lVar1 + 0x100) = 0;
      }
      else {
        in_RDI = lVar1 + 0x100;
        runtime_gcWriteBarrier();
      }
      runtime_systemstack();
      runtime_semrelease1(&runtime_worldsema,unaff_BL,(int)in_RCX);
    }
    else {
      runtime_semrelease1(&runtime_worldsema,unaff_BL,(int)in_RCX);
    }
  }
  runtime_semrelease1(&runtime_work.markDoneSema,unaff_BL,(int)in_RCX);
  return;
}

