
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.gfget(runtime.p * _p_, runtime.g * ~r1) */

runtime_g * runtime_gfget(runtime_p *_p_)

{
  int32 *piVar1;
  runtime_p *prVar2;
  long lVar3;
  runtime_gList rVar4;
  long in_FS_OFFSET;
  runtime_p *_p__spill;
  
                    /* Unresolved local var: runtime.g * gp@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  do {
    prVar2 = (runtime_p *)(_p__spill->gFree).gList.head;
    if ((prVar2 != (runtime_p *)0x0) ||
       ((runtime_sched.gFree.stack.head == 0 && (runtime_sched.gFree.noStack.head == 0)))) {
      if (prVar2 != (runtime_p *)0x0) {
        (_p__spill->gFree).gList.head = prVar2->deferpool[2].len;
        piVar1 = &(_p__spill->gFree).n;
        *piVar1 = *piVar1 + -1;
        lVar3._0_4_ = prVar2->id;
        lVar3._4_4_ = prVar2->status;
        if (lVar3 == 0) {
          runtime_systemstack();
          *(uintptr *)&prVar2->schedtick = *(long *)prVar2 + 0x3a0;
          _p__spill = prVar2;
        }
        return (runtime_g *)_p__spill;
      }
      return (runtime_g *)_p__spill;
    }
    runtime_lock2(&runtime_sched.gFree.lock);
    while ((_p__spill->gFree).n < 0x20) {
                    /* Unresolved local var: runtime.g * gp@[???] */
      if (runtime_sched.gFree.stack.head == 0) {
                    /* Unresolved local var: runtime.g * gp@[???] */
        if (runtime_sched.gFree.noStack.head == 0) break;
        rVar4.head = runtime_sched.gFree.noStack.head;
        runtime_sched.gFree.noStack.head =
             *(runtime_guintptr *)(runtime_sched.gFree.noStack.head + 0xa0);
      }
      else {
        rVar4.head = runtime_sched.gFree.stack.head;
        runtime_sched.gFree.stack.head =
             *(runtime_guintptr *)(runtime_sched.gFree.stack.head + 0xa0);
      }
                    /* Unresolved local var: runtime.g * gp@[???] */
      runtime_sched.gFree.n = runtime_sched.gFree.n + -1;
      *(runtime_guintptr *)(rVar4.head + 0xa0) = (_p__spill->gFree).gList.head;
      (_p__spill->gFree).gList.head = rVar4.head;
      piVar1 = &(_p__spill->gFree).n;
      *piVar1 = *piVar1 + 1;
    }
    runtime_unlock2(&runtime_sched.gFree.lock);
  } while( true );
}

