
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_markrootFreeGStacks(void)

{
  runtime_gList rVar1;
  runtime_gList rVar2;
  undefined8 *puVar3;
  uintptr unaff_RBX;
  long in_FS_OFFSET;
  runtime_stack stk;
  undefined8 *puStack_18;
  
                    /* Unresolved local var: runtime.gList list@[???]
                       Unresolved local var: runtime.gQueue q@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_lock2(&runtime_sched.gFree.lock);
  rVar1 = runtime_sched.gFree.stack;
  runtime_sched.gFree.stack.head = 0;
  runtime_unlock2(&runtime_sched.gFree.lock);
  if (rVar1.head != 0) {
    puStack_18 = (undefined8 *)rVar1.head;
    rVar2 = rVar1;
                    /* Unresolved local var: runtime.g * gp@[???] */
    while (puVar3 = (undefined8 *)rVar2.head, puVar3 != (undefined8 *)0x0) {
      stk.hi = unaff_RBX;
      stk.lo = (uintptr)puVar3;
      runtime_stackfree(stk);
      *puVar3 = 0;
      puVar3[1] = 0;
      puStack_18 = puVar3;
      rVar2.head = (runtime_guintptr)puVar3[0x14];
    }
    runtime_lock2(&runtime_sched.gFree.lock);
    if (rVar1.head != 0) {
      puStack_18[0x14] = runtime_sched.gFree.noStack.head;
      runtime_sched.gFree.noStack = rVar1;
    }
    runtime_unlock2(&runtime_sched.gFree.lock);
    return;
  }
  return;
}

