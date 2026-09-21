
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.gcDrainN(runtime.gcWork * gcw, int64 scanWork, int64 ~r2)
    */

int64 runtime_gcDrainN(runtime_gcWork *gcw,int64 scanWork)

{
  long lVar1;
  runtime_workbuf *prVar2;
  long lVar3;
  uint32 uVar4;
  runtime_gcWork *prVar5;
  runtime_gcWork *extraout_RAX;
  long lVar6;
  long in_FS_OFFSET;
  string s;
  runtime_gcWork *gcw_spill;
  int64 scanWork_spill;
  runtime_gcWork *prStack_20;
  
                    /* Unresolved local var: int64 workFlushed@[???]
                       Unresolved local var: runtime.g * gp@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x18)) {
    runtime_morestackc();
    gcw = extraout_RAX;
  }
  if (runtime_writeBarrier.needed == false) {
    s.len = scanWork;
    s.str = &DAT_0029e667;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
  lVar6 = -gcw_spill->scanWork;
  lVar1 = *(long *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 200);
  while ((uVar4 = runtime_work.markrootNext, *(char *)(lVar1 + 0xb1) == '\0' &&
         (gcw_spill->scanWork + lVar6 < scanWork_spill))) {
                    /* Unresolved local var: uintptr b@[???] */
    if (runtime_work.full == 0) {
      runtime___gcWork__balance(gcw);
                    /* Unresolved local var: runtime.workbuf * wbuf@[???] */
    }
    prVar2 = gcw_spill->wbuf1;
    if (prVar2 == (runtime_workbuf *)0x0) {
      prVar5 = (runtime_gcWork *)0x0;
    }
    else {
      lVar3 = (prVar2->workbufhdr).nobj;
      if (lVar3 == 0) {
        prVar5 = (runtime_gcWork *)0x0;
      }
      else {
        (prVar2->workbufhdr).nobj = lVar3 - 1U;
        if (0xfc < lVar3 - 1U) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        prVar5 = (runtime_gcWork *)prVar2->obj[lVar3 + -1];
      }
    }
    if ((prVar5 == (runtime_gcWork *)0x0) &&
       (runtime___gcWork__tryGet((runtime_gcWork *)0x0), prVar5 = prStack_20,
       prStack_20 == (runtime_gcWork *)0x0)) {
      prStack_20 = (runtime_gcWork *)0x0;
      runtime_wbBufFlush((uintptr *)0x0,(uintptr)gcw_spill);
      runtime___gcWork__tryGet(gcw_spill);
      prVar5 = prStack_20;
    }
    gcw = gcw_spill;
    if (prVar5 == (runtime_gcWork *)0x0) {
      uVar4 = runtime_work.markrootNext;
      if (runtime_work.markrootJobs <= runtime_work.markrootNext) break;
      LOCK();
      prVar5 = (runtime_gcWork *)(ulong)runtime_work.markrootNext;
      UNLOCK();
      uVar4 = runtime_work.markrootNext + 1;
      if (runtime_work.markrootJobs <= runtime_work.markrootNext) break;
      prStack_20 = (runtime_gcWork *)CONCAT44(prStack_20._4_4_,runtime_work.markrootNext);
      runtime_work.markrootNext = runtime_work.markrootNext + 1;
      runtime_markroot(prVar5,(uint32)gcw_spill);
    }
    else {
      runtime_scanobject((uintptr)prVar5,gcw_spill);
      prStack_20 = gcw_spill;
      if (1999 < gcw_spill->scanWork) {
        LOCK();
        runtime_gcController.scanWork = runtime_gcController.scanWork + gcw_spill->scanWork;
        UNLOCK();
        lVar3 = gcw_spill->scanWork;
        gcw_spill->scanWork = 0;
        lVar6 = lVar6 + lVar3;
      }
    }
  }
  runtime_work.markrootNext = uVar4;
  return gcw_spill->scanWork + lVar6;
}

