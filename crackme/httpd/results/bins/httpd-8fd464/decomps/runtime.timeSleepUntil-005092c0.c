
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.timeSleepUntil(int64 ~r0, runtime.p * ~r1) */

multireturn_int64_runtime_p___ runtime_timeSleepUntil(void)

{
  runtime_p *prVar1;
  runtime_p *prVar2;
  long lVar3;
  runtime_p *prVar4;
  runtime_p *prVar5;
  long in_FS_OFFSET;
  multireturn_int64_runtime_p___ mVar6;
  
                    /* Unresolved local var: int64 next@[???]
                       Unresolved local var: runtime.p * pret@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_lock2(&runtime_allpLock);
  prVar4 = (runtime_p *)0x7fffffffffffffff;
  prVar5 = (runtime_p *)0x0;
                    /* Unresolved local var: runtime.p * pp@[???] */
  for (lVar3 = 0; lVar3 < runtime_allp.len; lVar3 = lVar3 + 1) {
    prVar1 = runtime_allp.array[lVar3];
                    /* Unresolved local var: int64 w@[???] */
    if (prVar1 != (runtime_p *)0x0) {
      prVar2 = (runtime_p *)prVar1->timer0When;
      if ((prVar2 != (runtime_p *)0x0) && ((long)prVar2 < (long)prVar4)) {
        prVar4 = prVar2;
        prVar5 = prVar1;
      }
      prVar2 = (runtime_p *)prVar1->timerModifiedEarliest;
      if ((prVar2 != (runtime_p *)0x0) && ((long)prVar2 < (long)prVar4)) {
        prVar4 = prVar2;
        prVar5 = prVar1;
      }
    }
  }
  runtime_unlock2(&runtime_allpLock);
  mVar6.~r1 = prVar4;
  mVar6.~r0 = (int64)prVar5;
  return mVar6;
}

