
/* WARNING: Removing unreachable block (ram,0x0052b772) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void sync.(*poolChain).popTail(sync.poolChain * c, interface_{} ~r0,
   bool ~r1) */

multireturn_interface____bool__conflict1 sync___poolChain__popTail(sync_poolChain *c)

{
  sync_poolChainElt *d;
  undefined1 auVar1 [17];
  sync_poolChainElt *psVar2;
  undefined8 unaff_RBX;
  long in_FS_OFFSET;
  multireturn_interface____bool__conflict1 mVar3;
  multireturn_interface____bool__conflict1 mVar4;
  sync_poolChain *c_spill;
  sync_poolChainElt *local_38;
  byte local_28;
  
                    /* Unresolved local var: sync.poolChainElt * d@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (c_spill->tail == (sync_poolChainElt *)0x0) {
    mVar3.~r0.data = (void *)unaff_RBX;
    mVar3.~r0._type = (runtime__type *)c_spill;
    mVar3.~r1 = false;
    return mVar3;
  }
  d = c_spill->tail;
  while( true ) {
    psVar2 = d;
    d = psVar2->next;
                    /* Unresolved local var: bool ok@[???]
                       Unresolved local var: interface_{} val@[???] */
    mVar4 = sync___poolDequeue__popTail(&d->poolDequeue);
    mVar4.~r0._type = (runtime__type *)(ulong)local_28;
    mVar4.~r1 = SUB81(local_38,0);
    if (local_28 != 0) {
      return mVar4;
    }
    if (d == (sync_poolChainElt *)0x0) break;
    sync_atomic_CompareAndSwapPointer((void **)d,mVar4.~r0.data,&c_spill->tail);
    local_38 = psVar2;
  }
  auVar1[8] = mVar4.~r1;
  auVar1._0_8_ = mVar4.~r0.data;
  auVar1._9_8_ = 0;
  return (multireturn_interface____bool__conflict1)(auVar1 << 0x40);
}

