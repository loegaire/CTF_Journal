
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.gcParkAssist(bool ~r0) */

bool runtime_gcParkAssist(void)

{
  void *traceskip;
  runtime_guintptr rVar1;
  runtime_guintptr rVar2;
  void *pvVar3;
  undefined1 extraout_AL;
  undefined1 extraout_AL_00;
  undefined1 extraout_AL_01;
  void *lock;
  uint8 in_DIL;
  long in_FS_OFFSET;
  
                    /* Unresolved local var: runtime.g * gp@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_lock2(&runtime_work.assistQueue.lock);
  rVar2 = runtime_work.assistQueue.q.tail;
  rVar1 = runtime_work.assistQueue.q.head;
  if (runtime_gcBlackenEnabled == 0) {
    runtime_unlock2(&runtime_work.assistQueue.lock);
    return (bool)extraout_AL_01;
  }
  traceskip = *(void **)(in_FS_OFFSET + -8);
  *(undefined8 *)((long)traceskip + 0xa0) = 0;
  lock = traceskip;
  pvVar3 = traceskip;
  if (runtime_work.assistQueue.q.tail != 0) {
    *(void **)(runtime_work.assistQueue.q.tail + 0xa0) = traceskip;
    lock = (void *)runtime_work.assistQueue.q.tail;
    pvVar3 = (void *)runtime_work.assistQueue.q.head;
  }
  runtime_work.assistQueue.q.head = (runtime_guintptr)pvVar3;
  if (runtime_gcController.bgScanCredit < 1) {
    runtime_work.assistQueue.q.tail = (runtime_guintptr)traceskip;
    runtime_gopark((func__runtime_g__unsafe_Pointer__bool **)&runtime_work.assistQueue,lock,
                   (runtime_waitReason)rVar2,in_DIL,(int)traceskip);
    return (bool)extraout_AL_00;
  }
  runtime_work.assistQueue.q.head = rVar1;
  runtime_work.assistQueue.q.tail = rVar2;
  if (rVar2 != 0) {
    *(undefined8 *)(rVar2 + 0xa0) = 0;
  }
  runtime_unlock2(&runtime_work.assistQueue.lock);
  return (bool)extraout_AL;
}

