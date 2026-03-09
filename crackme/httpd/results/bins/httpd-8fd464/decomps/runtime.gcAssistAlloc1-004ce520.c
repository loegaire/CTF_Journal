
/* WARNING: Unknown calling convention */

void runtime_gcAssistAlloc1(runtime_g *gp,int64 scanWork)

{
  runtime_puintptr rVar1;
  uint32 uVar2;
  bool bVar3;
  uint32 oldval;
  uint32 uVar4;
  runtime_g *extraout_RAX;
  runtime_g *prVar5;
  uint uVar6;
  long lVar7;
  ulong scanWork_00;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  runtime_g *gp_spill;
  int64 scanWork_spill;
  long local_48;
  runtime_g *local_38;
  
                    /* Unresolved local var: int64 startTime@[???]
                       Unresolved local var: uint32 decnwait@[???]
                       Unresolved local var: runtime.gcWork * gcw@[???]
                       Unresolved local var: int64 workDone@[???]
                       Unresolved local var: uint32 incnwait@[???]
                       Unresolved local var: int64 duration@[???]
                       Unresolved local var: runtime.p * _p_@[???]
                       Unresolved local var: int64 ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x18)) {
    runtime_morestackc();
  }
  if (runtime_writeBarrier._0_4_ == 0) {
    gp_spill->param = (void *)0x0;
    prVar5 = gp_spill;
  }
  else {
    runtime_gcWriteBarrierCX();
    prVar5 = extraout_RAX;
  }
  if (runtime_gcBlackenEnabled == 0) {
    prVar5->gcAssistBytes = 0;
    return;
  }
  runtime_nanotime1();
  oldval = runtime_work.nproc;
  LOCK();
  UNLOCK();
  uVar6 = runtime_work.nwait - 1;
  scanWork_00 = (ulong)runtime_work.nproc;
  if (runtime_work.nproc == uVar6) {
    runtime_work.nwait = runtime_work.nwait - 1;
    runtime_printlock();
    s_02.len._0_4_ = oldval;
    s_02.str = &DAT_0029d481;
    s_02.len._4_4_ = 0;
    runtime_printstring(s_02);
    runtime_printuint((ulong)uVar6);
    s_03.len._0_4_ = oldval;
    s_03.str = &DAT_00294578;
    s_03.len._4_4_ = 0;
    runtime_printstring(s_03);
    runtime_printuint((ulong)oldval);
    runtime_printnl();
    runtime_printunlock();
    s_04.len._0_4_ = oldval;
    s_04.str = &DAT_0029b66e;
    s_04.len._4_4_ = 0;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_04);
  }
  runtime_work.nwait = runtime_work.nwait - 1;
  runtime_casgstatus(gp_spill,runtime_work.nproc,2);
  gp_spill->waitreason = 1;
  runtime_gcDrainN((runtime_gcWork *)gp_spill,scanWork_00);
  runtime_casgstatus(local_38,oldval,(uint32)gp_spill);
  gp_spill->gcAssistBytes =
       (long)((double)(long)local_38 * (double)runtime_gcController.assistBytesPerWork) +
       gp_spill->gcAssistBytes + 1;
  uVar4 = runtime_work.nproc;
  LOCK();
  uVar2 = runtime_work.nwait + 1;
  UNLOCK();
  uVar6 = runtime_work.nwait + 1;
  runtime_work.nwait = uVar2;
  if (uVar6 <= runtime_work.nproc) {
    if (runtime_work.nproc == uVar6) {
      if (runtime_work.full == 0) {
        if (runtime_work.markrootNext < runtime_work.markrootJobs) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) {
        if (runtime_writeBarrier._0_4_ == 0) {
          gp_spill->param = gp_spill;
        }
        else {
          runtime_gcWriteBarrierCX();
        }
      }
    }
    runtime_nanotime1();
    rVar1 = gp_spill->m->p;
    lVar7 = (long)gp_spill + (*(long *)(rVar1 + 0x1678) - local_48);
    *(long *)(rVar1 + 0x1678) = lVar7;
    if (5000 < lVar7) {
      LOCK();
      runtime_gcController.assistTime = runtime_gcController.assistTime + lVar7;
      UNLOCK();
      *(undefined8 *)(rVar1 + 0x1678) = 0;
    }
    return;
  }
  runtime_printlock();
  s.len._0_4_ = oldval;
  s.str = &DAT_0029caae;
  s.len._4_4_ = 0;
  runtime_printstring(s);
  runtime_printuint((ulong)uVar6);
  s_00.len._0_4_ = oldval;
  s_00.str = &DAT_00294578;
  s_00.len._4_4_ = 0;
  runtime_printstring(s_00);
  runtime_printuint((ulong)uVar4);
  runtime_printnl();
  runtime_printunlock();
  s_01.len._0_4_ = oldval;
  s_01.str = &DAT_0029e1a3;
  s_01.len._4_4_ = 0;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_01);
}

