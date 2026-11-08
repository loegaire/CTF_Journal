
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void context.(*cancelCtx).Err(context.cancelCtx * c, error ~r0) */

error context___cancelCtx__Err(context_cancelCtx *c)

{
  uint uVar1;
  int iVar2;
  runtime_itab *m;
  sync_Mutex *psVar3;
  long in_FS_OFFSET;
  error eVar4;
  context_cancelCtx *c_spill;
  
                    /* Unresolved local var: error err@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  psVar3 = (sync_Mutex *)0x0;
  LOCK();
  uVar1 = (c_spill->mu).state;
  if (uVar1 == 0) {
    (c_spill->mu).state = 1;
  }
  else {
    psVar3 = (sync_Mutex *)(ulong)uVar1;
  }
  UNLOCK();
  if (uVar1 != 0) {
    sync___Mutex__lockSlow(psVar3);
                    /* Unresolved local var: int32 new@[???] */
  }
  m = (c_spill->err).tab;
  LOCK();
  psVar3 = &c_spill->mu;
  iVar2 = psVar3->state;
  psVar3->state = psVar3->state + -1;
  UNLOCK();
  if (iVar2 != 1) {
    sync___Mutex__unlockSlow((sync_Mutex *)m,(int32)&c_spill->mu);
  }
  eVar4.data = &c_spill->mu;
  eVar4.tab = m;
  return eVar4;
}

