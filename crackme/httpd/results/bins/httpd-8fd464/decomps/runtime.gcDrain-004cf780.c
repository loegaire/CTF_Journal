
/* WARNING: Unknown calling convention */

void runtime_gcDrain(runtime_gcWork *gcw,runtime_gcDrainFlags flags)

{
  long lVar1;
  runtime_workbuf *prVar2;
  long lVar3;
  uint32 uVar4;
  runtime_gcWork *extraout_RAX;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined **ppuVar8;
  long in_FS_OFFSET;
  bool bVar9;
  string s;
  runtime_gcWork *gcw_spill;
  runtime_gcDrainFlags flags_spill;
  runtime_gcWork *local_50;
  runtime_gcWork *prStack_48;
  
                    /* Unresolved local var: runtime.g * gp@[???]
                       Unresolved local var: int64 initScanWork@[???]
                       Unresolved local var: int64 checkWork@[???]
                       Unresolved local var: func()_bool * * check@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    gcw = extraout_RAX;
  }
  if (runtime_writeBarrier.needed == false) {
    s.len = flags;
    s.str = &DAT_0029dc84;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
  lVar1 = *(long *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 200);
  lVar5 = gcw_spill->scanWork;
  uVar6 = (uint)flags_spill;
  if ((flags_spill & 0xcU) == 0) {
    lVar7 = 0x7fffffffffffffff;
    ppuVar8 = (undefined **)0x0;
  }
  else {
    if ((uVar6 >> 2 & 1) == 0) {
                    /* Unresolved local var: uintptr b@[???] */
      ppuVar8 = (undefined **)0x0;
      if ((flags_spill & 8U) != 0) {
        ppuVar8 = &PTR_runtime_pollFractionalWorkerExit_002b39a8;
      }
    }
    else {
      ppuVar8 = &PTR_runtime_pollWork_002b39b0;
    }
    lVar7 = lVar5 + 100000;
  }
  uVar4 = runtime_work.markrootNext;
  if (runtime_work.markrootNext < runtime_work.markrootJobs) {
    do {
      if (*(char *)(lVar1 + 0xb1) == '\0') {
        bVar9 = false;
      }
      else if ((flags_spill & 1U) == 0) {
        bVar9 = runtime_sched.gcwaiting != 0;
      }
      else {
        bVar9 = true;
      }
      uVar4 = runtime_work.markrootNext;
      if (bVar9) goto LAB_004cf85a;
      LOCK();
      UNLOCK();
      uVar4 = runtime_work.markrootNext + 1;
      if (runtime_work.markrootJobs <= runtime_work.markrootNext) goto LAB_004cf85a;
      prStack_48 = (runtime_gcWork *)CONCAT44(prStack_48._4_4_,runtime_work.markrootNext);
      runtime_work.markrootNext = runtime_work.markrootNext + 1;
      runtime_markroot(gcw,(uint32)gcw_spill);
      if (ppuVar8 == (undefined **)0x0) {
        gcw = (runtime_gcWork *)0x0;
      }
      else {
        (*(code *)*ppuVar8)();
        gcw = (runtime_gcWork *)((ulong)gcw_spill & 0xff);
      }
    } while ((char)gcw == '\0');
  }
  else {
LAB_004cf85a:
    runtime_work.markrootNext = uVar4;
    if (*(char *)(lVar1 + 0xb1) == '\0') {
      bVar9 = false;
    }
    else if ((flags_spill & 1U) == 0) {
      bVar9 = runtime_sched.gcwaiting != 0;
    }
    else {
      bVar9 = true;
    }
    if (!bVar9) {
      if (runtime_work.full == 0) {
        runtime___gcWork__balance(gcw);
      }
      prVar2 = gcw_spill->wbuf1;
      if (prVar2 == (runtime_workbuf *)0x0) {
        local_50 = (runtime_gcWork *)0x0;
      }
      else {
        lVar3 = (prVar2->workbufhdr).nobj;
        if (lVar3 == 0) {
          local_50 = (runtime_gcWork *)0x0;
        }
        else {
          (prVar2->workbufhdr).nobj = lVar3 - 1U;
          if (0xfc < lVar3 - 1U) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          local_50 = (runtime_gcWork *)prVar2->obj[lVar3 + -1];
        }
      }
      if ((local_50 == (runtime_gcWork *)0x0) &&
         (runtime___gcWork__tryGet((runtime_gcWork *)0x0), local_50 = prStack_48,
         prStack_48 == (runtime_gcWork *)0x0)) {
        runtime_wbBufFlush((uintptr *)0x0,(uintptr)gcw_spill);
        runtime___gcWork__tryGet(gcw_spill);
        local_50 = (runtime_gcWork *)0x0;
      }
      if (local_50 == (runtime_gcWork *)0x0) goto LAB_004cfa72;
      runtime_scanobject((uintptr)local_50,gcw_spill);
      gcw = gcw_spill;
      uVar4 = runtime_work.markrootNext;
      prStack_48 = gcw_spill;
      if (1999 < gcw_spill->scanWork) {
        LOCK();
        runtime_gcController.scanWork = runtime_gcController.scanWork + gcw_spill->scanWork;
        UNLOCK();
        if ((uVar6 >> 1 & 1) != 0) {
          local_50 = (runtime_gcWork *)(gcw_spill->scanWork - lVar5);
          runtime_gcFlushBgCredit((int64)gcw_spill);
          lVar5 = 0;
        }
        lVar3 = gcw_spill->scanWork;
        gcw_spill->scanWork = 0;
        lVar7 = lVar7 - lVar3;
        uVar4 = runtime_work.markrootNext;
        if (lVar7 < 1) {
          if (ppuVar8 == (undefined **)0x0) {
            local_50._0_1_ = '\0';
          }
          else {
            (*(code *)*ppuVar8)();
          }
          if ((char)local_50 != '\0') goto LAB_004cfa72;
          lVar7 = lVar7 + 100000;
          uVar4 = runtime_work.markrootNext;
        }
      }
      goto LAB_004cf85a;
    }
  }
LAB_004cfa72:
  if (0 < gcw_spill->scanWork) {
    LOCK();
    runtime_gcController.scanWork = runtime_gcController.scanWork + gcw_spill->scanWork;
    UNLOCK();
    if ((uVar6 >> 1 & 1) != 0) {
      runtime_gcFlushBgCredit((int64)gcw_spill);
    }
    gcw_spill->scanWork = 0;
  }
  return;
}

