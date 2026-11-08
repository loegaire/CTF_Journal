
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_gcBgMarkWorker(void)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  int64 iVar5;
  bool bVar6;
  byte bVar7;
  uint32 uVar8;
  long extraout_RAX;
  long lVar9;
  uint uVar10;
  long extraout_RDX;
  code **lock;
  ulong in_RSI;
  long in_RDI;
  long in_FS_OFFSET;
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
  long local_70;
  code *local_20;
  long lStack_18;
  long local_10;
  
                    /* Unresolved local var: runtime.g * gp@[???]
                       Unresolved local var: runtime.gcBgMarkWorkerNode * node@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  lVar3 = *(long *)(in_FS_OFFSET + -8);
  lVar9 = *(long *)(lVar3 + 0x30);
  *(undefined8 *)(lVar9 + 0x108) = 0xe;
  if (runtime_writeBarrier._0_4_ == 0) {
    *(undefined **)(lVar9 + 0x100) = &DAT_00296669;
  }
  else {
    in_RDI = lVar9 + 0x100;
    runtime_gcWriteBarrierCX();
  }
  runtime_newobject((runtime__type *)&DAT_00258660);
  lVar9 = *(long *)(lVar3 + 0x30);
  *(undefined8 *)(lVar9 + 0x108) = 0;
  if (runtime_writeBarrier._0_4_ == 0) {
    *(undefined8 *)(lVar9 + 0x100) = 0;
    lVar9 = lVar3;
  }
  else {
    in_RDI = lVar9 + 0x100;
    runtime_gcWriteBarrierCX();
    lVar9 = extraout_RAX;
    local_70 = extraout_RDX;
  }
  *(long *)(local_70 + 0x10) = lVar9;
                    /* Unresolved local var: runtime.g * _g_@[???] */
  lVar9 = *(long *)(in_FS_OFFSET + -8);
  lock = *(code ***)(lVar9 + 0x30);
  *(int *)(lock + 0x22) = *(int *)(lock + 0x22) + 1;
  *(undefined8 *)(local_70 + 0x18) = *(undefined8 *)(lVar9 + 0x30);
  runtime_notewakeup(&runtime_work.bgMarkReady);
  while( true ) {
                    /* Unresolved local var: runtime.p * pp@[???]
                       Unresolved local var: int64 startTime@[???]
                       Unresolved local var: uint32 decnwait@[???]
                       Unresolved local var: int64 duration@[???]
                       Unresolved local var: uint32 incnwait@[???]
                       Unresolved local var: int64 ~R0@[???] */
    runtime_gopark((func__runtime_g__unsafe_Pointer__bool **)
                   &PTR_runtime_gcBgMarkWorker_func1_002b3838,lock,(runtime_waitReason)local_70,
                   (uint8)in_RDI,in_RSI);
                    /* Unresolved local var: runtime.g * _g_@[???] */
    lVar9 = *(long *)(in_FS_OFFSET + -8);
    piVar1 = (int *)(*(long *)(lVar9 + 0x30) + 0x110);
    *piVar1 = *piVar1 + 1;
    *(undefined8 *)(local_70 + 0x18) = *(undefined8 *)(lVar9 + 0x30);
    lVar9 = *(long *)(*(long *)(lVar3 + 0x30) + 0xd8);
    if (runtime_gcBlackenEnabled == 0) {
      iVar5 = *(int64 *)(lVar9 + 0x1688);
      runtime_printlock();
      s_07.len = (int)lock;
      s_07.str = &DAT_00294456;
      runtime_printstring(s_07);
      runtime_printint(iVar5);
      runtime_printnl();
      runtime_printunlock();
      s_08.len = (int)lock;
      s_08.str = &DAT_002a590d;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_08);
    }
    if (*(long *)(lVar9 + 0x1688) == 0) {
      s_06.len = (int)lock;
      s_06.str = (uint8 *)0x2a04d0;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_06);
    }
    runtime_nanotime1();
    *(undefined ***)(lVar9 + 0x1690) = &PTR_runtime_gcBgMarkWorker_func1_002b3838;
    uVar8 = runtime_work.nproc;
    LOCK();
    UNLOCK();
    uVar10 = runtime_work.nwait - 1;
    in_RSI = (ulong)runtime_work.nproc;
    if (runtime_work.nproc == uVar10) {
      runtime_work.nwait = runtime_work.nwait - 1;
      runtime_printlock();
      s_03.len = 0xcfadc0;
      s_03.str = &DAT_0029caae;
      runtime_printstring(s_03);
      runtime_printuint((ulong)uVar10);
      s_04.len = 0xcfadc0;
      s_04.str = &DAT_00294578;
      runtime_printstring(s_04);
      runtime_printuint((ulong)uVar8);
      runtime_printnl();
      runtime_printunlock();
      s_05.len = 0xcfadc0;
      s_05.str = (uint8 *)0x2a0056;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_05);
    }
    local_20 = runtime_gcBgMarkWorker_func2;
    lock = &local_20;
    runtime_work.nwait = runtime_work.nwait - 1;
    lStack_18 = lVar3;
    local_10 = lVar9;
    runtime_systemstack();
    runtime_nanotime1();
    lVar4 = *(long *)(lVar9 + 0x1688);
    if (lVar4 == 1) {
      LOCK();
      runtime_gcController.dedicatedMarkTime =
           (int64)(&stack0xffffffffffd4c7a8 + runtime_gcController.dedicatedMarkTime);
      UNLOCK();
      LOCK();
      runtime_gcController.dedicatedMarkWorkersNeeded =
           runtime_gcController.dedicatedMarkWorkersNeeded + 1;
      UNLOCK();
    }
    else if (lVar4 == 2) {
      LOCK();
      runtime_gcController.fractionalMarkTime =
           (int64)(&stack0xffffffffffd4c7a8 + runtime_gcController.fractionalMarkTime);
      UNLOCK();
      LOCK();
      plVar2 = (long *)(lVar9 + 0x1680);
      lock = (code **)*plVar2;
      *plVar2 = (long)(&stack0xffffffffffd4c7a8 + *plVar2);
      UNLOCK();
    }
    else if (lVar4 == 3) {
      LOCK();
      runtime_gcController.idleMarkTime =
           (int64)(&stack0xffffffffffd4c7a8 + runtime_gcController.idleMarkTime);
      UNLOCK();
    }
    uVar8 = runtime_work.nproc;
    LOCK();
    UNLOCK();
    uVar10 = runtime_work.nwait + 1;
    if (runtime_work.nproc < uVar10) break;
    runtime_work.nwait = runtime_work.nwait + 1;
    *(undefined8 *)(lVar9 + 0x1688) = 0;
    if (runtime_work.nproc == uVar10) {
      if (runtime_work.full == 0) {
        if (runtime_work.markrootNext < runtime_work.markrootJobs) {
          bVar7 = 1;
        }
        else {
          bVar7 = 0;
        }
      }
      else {
        bVar7 = 1;
      }
      bVar6 = (bool)(bVar7 ^ 1);
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
                    /* Unresolved local var: runtime.g * _g_@[???] */
      lVar9 = *(long *)(in_FS_OFFSET + -8);
      uVar10 = *(uint *)(*(long *)(local_70 + 0x18) + 0x110);
      lock = (code **)(ulong)uVar10;
      in_RSI = (ulong)(uVar10 - 1);
      *(uint *)(*(long *)(local_70 + 0x18) + 0x110) = uVar10 - 1;
      if ((uVar10 == 1) && (*(char *)(lVar9 + 0xb1) != '\0')) {
        *(undefined8 *)(lVar9 + 0x10) = 0xfffffffffffffade;
      }
      *(undefined8 *)(local_70 + 0x18) = 0;
      runtime_gcMarkDone();
    }
  }
  iVar5 = *(int64 *)(lVar9 + 0x1688);
  runtime_work.nwait = runtime_work.nwait + 1;
  runtime_printlock();
  s.len = (int)lock;
  s.str = (uint8 *)0x2a0f89;
  runtime_printstring(s);
  runtime_printint(iVar5);
  s_00.len = (int)lock;
  s_00.str = &DAT_00294585;
  runtime_printstring(s_00);
  runtime_printuint((ulong)uVar10);
  s_01.len = (int)lock;
  s_01.str = &DAT_00294578;
  runtime_printstring(s_01);
  runtime_printuint((ulong)uVar8);
  runtime_printnl();
  runtime_printunlock();
  s_02.len = (int)lock;
  s_02.str = &DAT_0029e1a3;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_02);
}

