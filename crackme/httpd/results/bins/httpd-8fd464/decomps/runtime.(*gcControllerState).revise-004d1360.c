
/* WARNING: Unknown calling convention */

void runtime___gcControllerState__revise(runtime_gcControllerState *c)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  uint64 uVar4;
  long lVar5;
  runtime_gcControllerState *c_spill;
  
                    /* Unresolved local var: int32 gcPercent@[???]
                       Unresolved local var: uint64 live@[???]
                       Unresolved local var: uint64 scan@[???]
                       Unresolved local var: int64 work@[???]
                       Unresolved local var: int64 heapGoal@[???]
                       Unresolved local var: int64 scanWorkExpected@[???]
                       Unresolved local var: int64 scanWorkRemaining@[???]
                       Unresolved local var: int64 heapRemaining@[???]
                       Unresolved local var: float64 assistWorkPerByte@[???]
                       Unresolved local var: float64 assistBytesPerWork@[???] */
  iVar1 = c_spill->gcPercent;
  uVar4 = c_spill->heapGoal;
  if (iVar1 < 0) {
    iVar1 = 100000;
  }
  if (((long)uVar4 < (long)c_spill->heapLive) ||
     (uVar2 = (ulong)(((double)c_spill->heapScan * 100.0) / (double)(iVar1 + 100)),
     (long)uVar2 < c_spill->scanWork)) {
    uVar4 = (uint64)((double)(long)uVar4 * 1.1);
    uVar2 = c_spill->heapScan;
  }
  lVar3 = uVar2 - c_spill->scanWork;
  if (lVar3 < 1000) {
    lVar3 = 1000;
  }
  lVar5 = uVar4 - c_spill->heapLive;
  if (lVar5 < 1) {
    lVar5 = 1;
  }
  LOCK();
  c_spill->assistWorkPerByte = (uint64)((double)lVar3 / (double)lVar5);
  UNLOCK();
  LOCK();
  c_spill->assistBytesPerWork = (uint64)((double)lVar5 / (double)lVar3);
  UNLOCK();
  return;
}

