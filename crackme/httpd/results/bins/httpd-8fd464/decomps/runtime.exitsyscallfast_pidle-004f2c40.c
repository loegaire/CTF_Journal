
/* WARNING: Removing unreachable block (ram,0x004f2cde) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.exitsyscallfast_pidle(bool ~r0) */

bool runtime_exitsyscallfast_pidle(void)

{
  undefined1 extraout_AL;
  long in_FS_OFFSET;
  
                    /* Unresolved local var: runtime.p * _p_@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_lock2(&runtime_sched.lock);
  runtime_pidleget();
  if (runtime_sched.sysmonwait != 0) {
    LOCK();
    runtime_sched.sysmonwait = 0;
    UNLOCK();
    runtime_notewakeup(&runtime_sched.sysmonnote);
  }
  runtime_unlock2(&runtime_sched.lock);
  runtime_acquirep((runtime_p *)&runtime_sched.lock);
  return (bool)extraout_AL;
}

