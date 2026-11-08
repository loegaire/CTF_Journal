
/* WARNING: Removing unreachable block (ram,0x004e9d6a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_main(void)

{
  int *piVar1;
  chan_bool phVar2;
  long lVar3;
  runtime_waitReason reason;
  runtime_m *prVar4;
  void *unaff_RBX;
  int in_RSI;
  uint8 traceEv;
  chan_bool *in_RDI;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  undefined2 local_40;
  undefined6 uStack_3e;
  bool local_2a [2];
  long local_28;
  long local_20;
  bool *local_18;
  undefined **ppuStack_10;
  
                    /* Unresolved local var: runtime.g * g@[???]
                       Unresolved local var: func() * * fn@[???]
                       Unresolved local var: bool needUnlock@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_18 = (bool *)0x0;
  ppuStack_10 = (undefined **)0x0;
  local_2a[1] = false;
  local_20 = *(long *)(in_FS_OFFSET + -8);
  *(undefined8 *)(**(long **)(local_20 + 0x30) + 0x140) = 0;
  runtime_maxstacksize = 1000000000;
  runtime_maxstackceiling = 2000000000;
  runtime_mainStarted = true;
  LOCK();
  runtime_sched.sysmonStarting = 1;
  UNLOCK();
  runtime_systemstack();
  piVar1 = (int *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0x27c);
  *piVar1 = *piVar1 + 1;
                    /* Unresolved local var: runtime.g * _g_@[???] */
  lVar3 = *(long *)(in_FS_OFFSET + -8);
  *(long *)(*(long *)(lVar3 + 0x30) + 0x170) = lVar3;
  *(undefined8 *)(lVar3 + 0xe8) = *(undefined8 *)(lVar3 + 0x30);
  prVar4 = &runtime_m0;
  if (*(runtime_m **)(local_20 + 0x30) != &runtime_m0) {
    s_03.len = (int)unaff_RBX;
    s_03.str = &DAT_0029d429;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_03);
  }
  runtime_m0.doesPark = true;
  runtime_nanotime1();
  runtime_runtimeInitTime = (int64)&PTR_runtime_main_func1_002b38d8;
  if (runtime_debug.inittrace != 0) {
    runtime_inittrace.id = *(int64 *)(*(long *)(in_FS_OFFSET + -8) + 0x98);
    runtime_inittrace.active = true;
  }
  runtime_doInit((runtime_initTask *)runtime__inittask);
  local_2a[0] = true;
  ppuStack_10 = &PTR_runtime_main_func2_002b38e0;
  local_18 = local_2a;
  local_2a[1] = true;
  runtime_gcenable();
  runtime_makechan((runtime_chantype *)&DAT_00222b20,(int)unaff_RBX);
  phVar2 = (chan_bool)CONCAT62(uStack_3e,local_40);
  if (runtime_writeBarrier._0_4_ != 0) {
    in_RDI = &runtime_main_init_done;
    runtime_gcWriteBarrier();
    phVar2 = runtime_main_init_done;
  }
  runtime_main_init_done = phVar2;
  if (runtime_iscgo != false) {
    if (_cgo_thread_start == (void *)0x0) {
      s_02.len = (int)unaff_RBX;
      s_02.str = &DAT_0029eb64;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_02);
    }
    if (runtime__cgo_setenv == (void *)0x0) {
      s_01.len = (int)unaff_RBX;
      s_01.str = &DAT_0029b389;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_01);
    }
    if (runtime__cgo_unsetenv == (void *)0x0) {
      s_00.len = (int)unaff_RBX;
      s_00.str = &DAT_0029c7a5;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_00);
    }
    if (_cgo_notify_runtime_init_done == (void *)0x0) {
      s.len = (int)unaff_RBX;
      s.str = &DAT_002a5176;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s);
    }
    runtime_startTemplateThread();
    runtime_cgocall(_cgo_notify_runtime_init_done,unaff_RBX);
  }
  runtime_doInit((runtime_initTask *)main__inittask);
  runtime_inittrace.active = false;
  runtime_closechan((runtime_hchan *)runtime_main_init_done);
  local_2a[0] = false;
  runtime_unlockOSThread();
  if ((runtime_isarchive != false) || (runtime_islibrary != false)) {
    local_2a[1] = false;
    runtime_main_func2(local_18);
    return;
  }
  main_main();
  reason = (runtime_waitReason)prVar4;
  traceEv = (uint8)in_RDI;
  if (runtime_runningPanicDefers != 0) {
    lVar3 = 0;
    while( true ) {
      reason = (runtime_waitReason)prVar4;
      traceEv = (uint8)in_RDI;
      if (999 < lVar3) break;
      prVar4 = (runtime_m *)(ulong)runtime_runningPanicDefers;
      if (runtime_runningPanicDefers == 0) {
        reason = 0;
        break;
      }
      local_28 = lVar3;
                    /* Unresolved local var: int c@[???] */
      runtime_mcall();
      lVar3 = local_28 + 1;
    }
  }
  if (runtime_panicking != 0) {
    runtime_gopark((func__runtime_g__unsafe_Pointer__bool **)(ulong)runtime_panicking,unaff_RBX,
                   reason,traceEv,in_RSI);
  }
  runtime_exit();
  do {
                    /* WARNING: Do nothing block with infinite loop */
                    /* Unresolved local var: int32 * x@[???] */
  } while( true );
}

