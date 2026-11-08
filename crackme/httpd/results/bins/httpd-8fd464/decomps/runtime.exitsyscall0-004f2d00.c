
/* WARNING: Unknown calling convention */

void runtime_exitsyscall0(runtime_g *gp)

{
  long lVar1;
  runtime_g *unaff_RBX;
  long in_FS_OFFSET;
  bool bVar2;
  runtime_g *gp_spill;
  runtime_p *local_30;
  char local_20;
  
                    /* Unresolved local var: runtime.p * _p_@[???]
                       Unresolved local var: bool locked@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_casgstatus(gp_spill,(uint32)unaff_RBX,3);
                    /* Unresolved local var: runtime.g * _g_@[???] */
  lVar1 = *(long *)(in_FS_OFFSET + -8);
  *(undefined8 *)(*(long *)(*(long *)(lVar1 + 0x30) + 200) + 0x30) = 0;
  *(undefined8 *)(*(long *)(lVar1 + 0x30) + 200) = 0;
  local_30 = (runtime_p *)&runtime_sched.lock;
  runtime_lock2(&runtime_sched.lock);
  if (runtime_sched.disable.user != false) {
    local_30 = (runtime_p *)gp_spill;
    runtime_isSystemGoroutine(gp_spill,SUB81(unaff_RBX,0));
    if (local_20 == '\0') {
      local_30 = (runtime_p *)0x0;
      goto LAB_004f2dad;
    }
  }
  runtime_pidleget();
LAB_004f2dad:
  if (local_30 == (runtime_p *)0x0) {
    gp_spill->schedlink = 0;
    if (runtime_sched.runq.tail == 0) {
      runtime_sched.runq.head = (runtime_guintptr)gp_spill;
    }
    else {
      *(runtime_g **)(runtime_sched.runq.tail + 0xa0) = gp_spill;
    }
    runtime_sched.runq.tail = (runtime_guintptr)gp_spill;
    runtime_sched.runqsize = runtime_sched.runqsize + 1;
    bVar2 = gp_spill->lockedm != 0;
    unaff_RBX = gp_spill;
  }
  else {
    if (runtime_sched.sysmonwait != 0) {
      LOCK();
      runtime_sched.sysmonwait = 0;
      UNLOCK();
      runtime_notewakeup(&runtime_sched.sysmonnote);
    }
    bVar2 = false;
  }
  runtime_unlock2(&runtime_sched.lock);
  if (local_30 != (runtime_p *)0x0) {
    runtime_acquirep(local_30);
    runtime_execute(gp_spill,SUB81(unaff_RBX,0));
  }
  if (bVar2) {
    runtime_stoplockedm();
    runtime_execute(gp_spill,SUB81(unaff_RBX,0));
  }
  runtime_stopm();
  runtime_schedule();
  return;
}

