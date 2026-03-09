
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_clearpools(void)

{
  runtime_sudog *prVar1;
  runtime__defer *prVar2;
  runtime_sudog *prVar3;
  long lVar4;
  long extraout_RAX;
  long extraout_RAX_00;
  long lVar5;
  runtime__defer *prVar6;
  long in_FS_OFFSET;
  
                    /* Unresolved local var: runtime.sudog * sg@[???]
                       Unresolved local var: runtime.sudog * sgnext@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (runtime_poolcleanup != (func__ **)0x0) {
    (**runtime_poolcleanup)();
  }
  runtime_lock2(&runtime_sched.sudoglock);
  prVar3 = runtime_sched.sudogcache;
  while (prVar3 != (runtime_sudog *)0x0) {
    prVar1 = prVar3->next;
    if (runtime_writeBarrier._0_4_ == 0) {
      prVar3->next = (runtime_sudog *)0x0;
      prVar3 = prVar1;
    }
    else {
      prVar3 = prVar1;
      runtime_gcWriteBarrier();
    }
  }
  if (runtime_writeBarrier._0_4_ == 0) {
    runtime_sched.sudogcache = (runtime_sudog *)0x0;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_unlock2(&runtime_sched.sudoglock);
  runtime_lock2(&runtime_sched.deferlock);
  for (lVar4 = 0; lVar4 < 5; lVar4 = lVar4 + 1) {
                    /* Unresolved local var: runtime._defer * d@[???]
                       Unresolved local var: runtime._defer * dlink@[???] */
    lVar5 = 0x7a1470;
    prVar6 = runtime_sched.deferpool[lVar4];
    while (prVar6 != (runtime__defer *)0x0) {
      prVar2 = prVar6->link;
      if (runtime_writeBarrier._0_4_ == 0) {
        prVar6->link = (runtime__defer *)0x0;
        prVar6 = prVar2;
      }
      else {
        runtime_gcWriteBarrierDX();
        lVar4 = extraout_RAX_00;
        prVar6 = prVar2;
      }
    }
    if (runtime_writeBarrier._0_4_ == 0) {
      *(undefined8 *)(lVar5 + lVar4 * 8) = 0;
    }
    else {
      runtime_gcWriteBarrierCX();
      lVar4 = extraout_RAX;
    }
                    /* Unresolved local var: int i@[???] */
  }
  runtime_unlock2(&runtime_sched.deferlock);
  return;
}

