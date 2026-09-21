
/* WARNING: Unknown calling convention */

void runtime_gcFlushBgCredit(int64 scanWork)

{
  uint64 uVar1;
  runtime_guintptr rVar2;
  runtime_guintptr rVar3;
  runtime_g *gp;
  int unaff_RBX;
  long in_FS_OFFSET;
  int64 scanWork_spill;
  
                    /* Unresolved local var: int64 scanBytes@[???] */
  while (uVar1 = runtime_gcController.assistBytesPerWork,
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (runtime_work.assistQueue.q.head == 0) {
    LOCK();
    runtime_gcController.bgScanCredit = runtime_gcController.bgScanCredit + scanWork_spill;
    UNLOCK();
    return;
  }
  runtime_lock2((runtime_mutex *)runtime_gcController.assistBytesPerWork);
  gp = (runtime_g *)(long)((double)uVar1 * (double)scanWork_spill);
  while( true ) {
    rVar2 = runtime_work.assistQueue.q.head;
    if ((runtime_work.assistQueue.q.head == 0) || ((long)gp < 1)) goto LAB_004ceb89;
    if ((runtime_work.assistQueue.q.head != 0) &&
       (runtime_work.assistQueue.q.head =
             *(runtime_guintptr *)(runtime_work.assistQueue.q.head + 0xa0),
       runtime_work.assistQueue.q.head == 0)) {
      runtime_work.assistQueue.q.tail = 0;
    }
    gp = (runtime_g *)((long)&(gp->stack).lo + *(long *)(rVar2 + 0x180));
    if ((long)gp < 0) break;
                    /* Unresolved local var: runtime.g * gp@[???] */
    *(undefined8 *)(rVar2 + 0x180) = 0;
    runtime_ready(gp,unaff_RBX,SUB81(rVar2,0));
  }
  *(runtime_g **)(rVar2 + 0x180) = gp;
  *(undefined8 *)(rVar2 + 0xa0) = 0;
  rVar3 = rVar2;
  if (runtime_work.assistQueue.q.tail != 0) {
    *(runtime_guintptr *)(runtime_work.assistQueue.q.tail + 0xa0) = rVar2;
    rVar3 = runtime_work.assistQueue.q.head;
  }
  runtime_work.assistQueue.q.head = rVar3;
  runtime_work.assistQueue.q.tail = rVar2;
  gp = (runtime_g *)0x0;
LAB_004ceb89:
  if (0 < (long)gp) {
    LOCK();
    runtime_gcController.bgScanCredit =
         runtime_gcController.bgScanCredit +
         (long)((double)(long)gp * (double)runtime_gcController.assistWorkPerByte);
    UNLOCK();
  }
  runtime_unlock2(&runtime_work.assistQueue.lock);
  return;
}

