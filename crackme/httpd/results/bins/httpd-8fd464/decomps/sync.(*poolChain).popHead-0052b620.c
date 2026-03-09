
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void sync.(*poolChain).popHead(sync.poolChain * c, interface_{} ~r0,
   bool ~r1) */

multireturn_interface____bool__conflict1 sync___poolChain__popHead(sync_poolChain *c)

{
  undefined1 auVar1 [17];
  sync_poolChainElt *d;
  sync_poolChainElt *in_RCX;
  void *unaff_RBX;
  long in_FS_OFFSET;
  multireturn_interface____bool__conflict1 mVar2;
  sync_poolChain *c_spill;
  bool local_28;
  byte local_18;
  
                    /* Unresolved local var: sync.poolChainElt * d@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  d = c_spill->head;
  while( true ) {
    if (d == (sync_poolChainElt *)0x0) {
      auVar1[8] = (char)in_RCX;
      auVar1._0_8_ = unaff_RBX;
      auVar1._9_8_ = 0;
      return (multireturn_interface____bool__conflict1)(auVar1 << 0x40);
    }
                    /* Unresolved local var: bool ok@[???]
                       Unresolved local var: interface_{} val@[???] */
    mVar2 = sync___poolDequeue__popHead(&d->poolDequeue);
    mVar2.~r0._type = (runtime__type *)(ulong)local_18;
    if (local_18 != 0) break;
    d = d->prev;
    in_RCX = d;
    unaff_RBX = mVar2.~r0.data;
  }
  mVar2.~r1 = local_28;
  return mVar2;
}

