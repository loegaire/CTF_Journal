
/* WARNING: Unknown calling convention */

void runtime_injectglist(runtime_gList *glist)

{
  runtime_gQueue *prVar1;
  runtime_p *prVar2;
  runtime_p *_p_;
  runtime_gQueue *prVar3;
  runtime_guintptr rVar4;
  runtime_p *l;
  int unaff_RBX;
  runtime_gQueue *prVar5;
  long in_FS_OFFSET;
  runtime_gList *glist_spill;
  runtime_gQueue *local_40;
  runtime_gQueue *prStack_38;
  runtime_gQueue *local_30;
  runtime_gQueue *prStack_28;
  runtime_gQueue *local_20;
  runtime_guintptr local_18;
  runtime_gQueue *local_10;
  
                    /* Unresolved local var: runtime.g * head@[???]
                       Unresolved local var: runtime.g * tail@[???]
                       Unresolved local var: int qsize@[???]
                       Unresolved local var: runtime.p * pp@[???]
                       Unresolved local var: int npidle@[???]
                       Unresolved local var: int n@[???]
                       Unresolved local var: runtime.gQueue q@[???]
                       Unresolved local var: runtime.gQueue globq@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  rVar4 = glist_spill->head;
  if (rVar4 == 0) {
    return;
  }
  if (runtime_trace.enabled != false) {
    while (rVar4 != 0) {
      local_18 = rVar4;
      runtime_traceGoUnpark((runtime_g *)glist_spill,unaff_RBX);
      rVar4 = *(runtime_guintptr *)(local_18 + 0xa0);
    }
  }
  prVar2 = (runtime_p *)0x0;
  prVar3 = (runtime_gQueue *)glist_spill->head;
  prVar5 = (runtime_gQueue *)0x0;
  local_10 = prVar3;
                    /* Unresolved local var: runtime.g * gp@[???] */
  while (prVar3 != (runtime_gQueue *)0x0) {
    local_20 = prVar3;
    runtime_casgstatus((runtime_g *)0x100000004,(uint32)prVar5,(uint32)prVar3);
    prVar2 = (runtime_p *)((long)&prVar2->id + 1);
    prVar5 = local_20;
    prVar3 = (runtime_gQueue *)local_20[10].head;
  }
  glist_spill->head = 0;
  prVar3 = *(runtime_gQueue **)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xd8);
  local_40 = local_10;
  prStack_38 = prVar5;
  if (prVar3 == (runtime_gQueue *)0x0) {
    runtime_lock2(&runtime_sched.lock);
    if (prStack_38 != (runtime_gQueue *)0x0) {
      prStack_38[10].head = 0;
      if (runtime_sched.runq.tail == 0) {
        runtime_sched.runq.head = (runtime_guintptr)local_40;
      }
      else {
        *(runtime_gQueue **)(runtime_sched.runq.tail + 0xa0) = local_40;
      }
      runtime_sched.runq.tail = (runtime_guintptr)prStack_38;
    }
    runtime_sched.runqsize = runtime_sched.runqsize + (int)prVar2;
    local_40 = (runtime_gQueue *)0x0;
    prStack_38 = (runtime_gQueue *)0x0;
    runtime_unlock2((runtime_mutex *)prVar2);
    while ((prVar2 != (runtime_p *)0x0 && (runtime_sched.npidle != 0))) {
      runtime_startm(prVar2,SUB81(prVar5,0));
      prVar2 = (runtime_p *)&prVar2[-1].field_0x270f;
    }
    return;
  }
  local_30 = (runtime_gQueue *)0x0;
  prStack_28 = (runtime_gQueue *)0x0;
  prVar2 = (runtime_p *)(ulong)runtime_sched.npidle;
  l = (runtime_p *)0x0;
  while ((prVar1 = local_40, (long)l < (long)prVar2 &&
         (prVar5 = local_40, local_40 != (runtime_gQueue *)0x0))) {
    if ((local_40 != (runtime_gQueue *)0x0) &&
       (local_40 = (runtime_gQueue *)local_40[10].head, local_40 == (runtime_gQueue *)0x0)) {
      prStack_38 = (runtime_gQueue *)0x0;
    }
    prVar1[10].head = 0;
    if (prStack_28 != (runtime_gQueue *)0x0) {
      prStack_28[10].head = (runtime_guintptr)prVar1;
      prVar5 = local_30;
    }
    local_30 = prVar5;
    prStack_28 = prVar1;
    l = (runtime_p *)((long)&l->id + 1);
    prVar5 = prVar1;
  }
  if (0 < (long)l) {
    local_10 = prVar3;
    runtime_lock2(&runtime_sched.lock);
    if (prStack_28 != (runtime_gQueue *)0x0) {
      prStack_28[10].head = 0;
      if (runtime_sched.runq.tail == 0) {
        runtime_sched.runq.head = (runtime_guintptr)local_30;
      }
      else {
        *(runtime_gQueue **)(runtime_sched.runq.tail + 0xa0) = local_30;
      }
      runtime_sched.runq.tail = (runtime_guintptr)prStack_28;
    }
    runtime_sched.runqsize = runtime_sched.runqsize + (int)l;
    local_30 = (runtime_gQueue *)0x0;
    prStack_28 = (runtime_gQueue *)0x0;
    runtime_unlock2((runtime_mutex *)l);
    _p_ = l;
    while ((prVar2 = l, _p_ != (runtime_p *)0x0 && (runtime_sched.npidle != 0))) {
      runtime_startm(_p_,SUB81(prVar5,0));
      _p_ = (runtime_p *)&_p_[-1].field_0x270f;
    }
  }
  if (local_40 != (runtime_gQueue *)0x0) {
    runtime_runqputbatch((runtime_p *)&local_40,prVar5,(int)prVar2);
  }
  return;
}

