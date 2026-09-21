
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.checkRunqsNoP([]*runtime.p allpSnapshot, runtime.pMask
   idlepMaskSnapshot, runtime.p * ~r2) */

runtime_p * runtime_checkRunqsNoP(___runtime_p allpSnapshot,runtime_pMask idlepMaskSnapshot)

{
  runtime_p *prVar1;
  runtime_p *prVar2;
  ulong uVar3;
  bool bVar4;
  long in_FS_OFFSET;
  ___runtime_p allpSnapshot_spill;
  runtime_pMask idlepMaskSnapshot_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: int id@[???]
                       Unresolved local var: runtime.p * p2@[???] */
  prVar2 = (runtime_p *)0x0;
  while( true ) {
    if (allpSnapshot_spill.len <= (long)prVar2) {
      return prVar2;
    }
    prVar1 = allpSnapshot_spill.array[(long)prVar2];
    uVar3 = (ulong)prVar2 >> 5 & 0x7ffffff;
    if ((ulong)idlepMaskSnapshot_spill.len <= uVar3) break;
    if ((idlepMaskSnapshot_spill.array[uVar3] >> ((uint)prVar2 & 0x1f) & 1) == 0) {
      do {
      } while (prVar1->runqtail != prVar1->runqtail);
      bVar4 = prVar1->runqtail != prVar1->runqhead || prVar1->runnext != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      runtime_lock2(&runtime_sched.lock);
      runtime_pidleget();
      runtime_unlock2(&runtime_sched.lock);
      return (runtime_p *)&runtime_sched.lock;
    }
    prVar2 = (runtime_p *)((long)&prVar2->id + 1);
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

