
/* WARNING: Unknown calling convention */

void runtime_gfpurge(runtime_p *_p_)

{
  int32 *piVar1;
  long *plVar2;
  int iVar3;
  long in_FS_OFFSET;
  runtime_p *_p__spill;
  runtime_gQueue stackQ;
  long *local_18;
  long *plStack_10;
  
                    /* Unresolved local var: int32 inc@[???]
                       Unresolved local var: runtime.gQueue noStackQ@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  stackQ.head = 0;
  stackQ.tail = 0;
  local_18 = (long *)0x0;
  plStack_10 = (long *)0x0;
  iVar3 = 0;
  while (plVar2 = (long *)(_p__spill->gFree).gList.head, plVar2 != (long *)0x0) {
    if (plVar2 != (long *)0x0) {
      (_p__spill->gFree).gList.head = plVar2[0x14];
    }
    piVar1 = &(_p__spill->gFree).n;
    *piVar1 = *piVar1 + -1;
    if (*plVar2 == 0) {
      plVar2[0x14] = (long)local_18;
      local_18 = plVar2;
      if (plStack_10 == (long *)0x0) {
        plStack_10 = plVar2;
      }
    }
    else {
      plVar2[0x14] = stackQ.head;
      stackQ.head = (runtime_guintptr)plVar2;
      if (stackQ.tail == 0) {
        stackQ.tail = (runtime_guintptr)plVar2;
      }
    }
                    /* Unresolved local var: runtime.g * gp@[???] */
    iVar3 = iVar3 + 1;
  }
  runtime_lock2(&runtime_sched.gFree.lock);
  if (local_18 != (long *)0x0) {
    plStack_10[0x14] = runtime_sched.gFree.noStack.head;
    runtime_sched.gFree.noStack.head = (runtime_guintptr)local_18;
  }
  if (stackQ.head != 0) {
    *(runtime_guintptr *)(stackQ.tail + 0xa0) = runtime_sched.gFree.stack.head;
    runtime_sched.gFree.stack.head = stackQ.head;
  }
  runtime_sched.gFree.n = runtime_sched.gFree.n + iVar3;
  runtime_unlock2(&runtime_sched.gFree.lock);
  return;
}

