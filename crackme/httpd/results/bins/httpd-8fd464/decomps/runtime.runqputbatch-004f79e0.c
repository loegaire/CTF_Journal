
/* WARNING: Unknown calling convention */

void runtime_runqputbatch(runtime_p *pp,runtime_gQueue *q,int qsize)

{
  uint32 uVar1;
  runtime_guintptr rVar2;
  runtime_guintptr rVar3;
  runtime_guintptr rVar4;
  runtime_guintptr rVar5;
  uint32 uVar6;
  int iVar7;
  long in_FS_OFFSET;
  runtime_p *pp_spill;
  runtime_gQueue *q_spill;
  int qsize_spill;
  
                    /* Unresolved local var: uint32 h@[???]
                       Unresolved local var: uint32 t@[???]
                       Unresolved local var: uint32 n@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uVar1 = pp_spill->runqhead;
  iVar7 = 0;
  for (uVar6 = pp_spill->runqtail; (rVar2 = q_spill->head, rVar2 != 0 && (uVar6 - uVar1 < 0x100));
      uVar6 = uVar6 + 1) {
    if ((rVar2 != 0) &&
       (rVar3 = *(runtime_guintptr *)(rVar2 + 0xa0), q_spill->head = rVar3, rVar3 == 0)) {
      q_spill->tail = 0;
    }
                    /* Unresolved local var: runtime.g * gp@[???] */
    pp_spill->runq[(byte)uVar6] = rVar2;
    iVar7 = iVar7 + 1;
  }
  LOCK();
  pp_spill->runqtail = uVar6;
  UNLOCK();
  if (q_spill->head != 0) {
    runtime_lock2(&runtime_sched.lock);
    rVar2 = q_spill->tail;
    rVar3 = q_spill->head;
    rVar4 = runtime_sched.runq.head;
    rVar5 = runtime_sched.runq.tail;
    if ((rVar2 != 0) &&
       (*(undefined8 *)(rVar2 + 0xa0) = 0, rVar4 = rVar3, rVar5 = rVar2,
       runtime_sched.runq.tail != 0)) {
      *(runtime_guintptr *)(runtime_sched.runq.tail + 0xa0) = rVar3;
      rVar4 = runtime_sched.runq.head;
    }
    runtime_sched.runq.tail = rVar5;
    runtime_sched.runq.head = rVar4;
    runtime_sched.runqsize = runtime_sched.runqsize + ((int)qsize_spill - iVar7);
    q_spill->head = 0;
    q_spill->tail = 0;
    runtime_unlock2(&runtime_sched.lock);
  }
  return;
}

