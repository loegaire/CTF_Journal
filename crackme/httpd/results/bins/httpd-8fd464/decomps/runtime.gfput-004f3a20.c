
/* WARNING: Unknown calling convention */

void runtime_gfput(runtime_p *_p_,runtime_g *gp)

{
  int32 *piVar1;
  uintptr uVar2;
  long *plVar3;
  int iVar4;
  long in_FS_OFFSET;
  runtime_stack stk;
  string s;
  runtime_p *_p__spill;
  runtime_g *gp_spill;
  long *local_48;
  long *plStack_40;
  long *local_18;
  long *plStack_10;
  
                    /* Unresolved local var: uintptr stksize@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (gp_spill->atomicstatus == 6) {
    uVar2 = (gp_spill->stack).hi;
    if (uVar2 - (gp_spill->stack).lo != 0x800) {
      stk.hi = uVar2;
      stk.lo = (uintptr)gp_spill;
      runtime_stackfree(stk);
      (gp_spill->stack).lo = 0;
      (gp_spill->stack).hi = 0;
      gp_spill->stackguard0 = 0;
    }
    gp_spill->schedlink = (_p__spill->gFree).gList.head;
    (_p__spill->gFree).gList.head = (runtime_guintptr)gp_spill;
    iVar4 = (_p__spill->gFree).n + 1;
    (_p__spill->gFree).n = iVar4;
    if (0x3f < iVar4) {
                    /* Unresolved local var: int32 inc@[???]
                       Unresolved local var: runtime.gQueue stackQ@[???]
                       Unresolved local var: runtime.gQueue noStackQ@[???] */
      local_48 = (long *)0x0;
      plStack_40 = (long *)0x0;
      local_18 = (long *)0x0;
      plStack_10 = (long *)0x0;
      iVar4 = 0;
      while (0x1f < (_p__spill->gFree).n) {
                    /* Unresolved local var: runtime.g * gp@[???] */
        plVar3 = (long *)(_p__spill->gFree).gList.head;
        if (plVar3 != (long *)0x0) {
          (_p__spill->gFree).gList.head = plVar3[0x14];
        }
        piVar1 = &(_p__spill->gFree).n;
        *piVar1 = *piVar1 + -1;
        if (*plVar3 == 0) {
          plVar3[0x14] = (long)local_18;
          local_18 = plVar3;
          if (plStack_10 == (long *)0x0) {
            plStack_10 = plVar3;
          }
        }
        else {
          plVar3[0x14] = (long)local_48;
          local_48 = plVar3;
          if (plStack_40 == (long *)0x0) {
            plStack_40 = plVar3;
          }
        }
        iVar4 = iVar4 + 1;
      }
      runtime_lock2(&runtime_sched.gFree.lock);
      if (local_18 != (long *)0x0) {
        plStack_10[0x14] = runtime_sched.gFree.noStack.head;
        runtime_sched.gFree.noStack.head = (runtime_guintptr)local_18;
      }
      if (local_48 != (long *)0x0) {
        plStack_40[0x14] = runtime_sched.gFree.stack.head;
        runtime_sched.gFree.stack.head = (runtime_guintptr)local_48;
      }
      runtime_sched.gFree.n = runtime_sched.gFree.n + iVar4;
      runtime_unlock2(&runtime_sched.gFree.lock);
    }
    return;
  }
  s.len = (int)gp;
  s.str = (uint8 *)0x2a0d28;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}

