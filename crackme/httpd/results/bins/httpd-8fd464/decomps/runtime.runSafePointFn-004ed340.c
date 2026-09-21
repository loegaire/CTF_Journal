
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_runSafePointFn(void)

{
  int iVar1;
  int *piVar2;
  runtime_p *in_RDI;
  long in_FS_OFFSET;
  bool bVar3;
  
                    /* Unresolved local var: runtime.p * p@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  piVar2 = (int *)(*(long *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xd8) + 0x26d0);
  LOCK();
  bVar3 = *piVar2 == 1;
  if (bVar3) {
    *piVar2 = 0;
  }
  UNLOCK();
  if (!bVar3) {
    return;
  }
  (**runtime_sched.safePointFn)(in_RDI);
  runtime_lock2(&runtime_sched.lock);
  iVar1 = runtime_sched.safePointWait + -1;
  bVar3 = runtime_sched.safePointWait == 1;
  runtime_sched.safePointWait = iVar1;
  if (bVar3) {
    runtime_notewakeup(&runtime_sched.safePointNote);
  }
  runtime_unlock2(&runtime_sched.lock);
  return;
}

