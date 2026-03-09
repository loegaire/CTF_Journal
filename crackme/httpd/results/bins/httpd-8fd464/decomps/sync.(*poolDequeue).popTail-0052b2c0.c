
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void sync.(*poolDequeue).popTail(sync.poolDequeue * d, interface_{}
   ~r0, bool ~r1) */

multireturn_interface____bool__conflict1 sync___poolDequeue__popTail(sync_poolDequeue *d)

{
  ulong uVar1;
  sync_eface *psVar2;
  uint uVar3;
  ulong uVar4;
  void **ptr;
  void **extraout_RAX;
  undefined1 uVar5;
  undefined8 in_RCX;
  runtime__type *prVar6;
  runtime__type *prVar7;
  undefined *new;
  long in_FS_OFFSET;
  bool bVar8;
  multireturn_interface____bool__conflict1 mVar9;
  multireturn_interface____bool__conflict1 mVar10;
  sync_poolDequeue *d_spill;
  
                    /* Unresolved local var: interface_{} val@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  do {
                    /* Unresolved local var: uint64 ptrs@[???]
                       Unresolved local var: uint64 ptrs2@[???] */
    prVar6 = (runtime__type *)d_spill->headTail;
    mVar10.~r0.data = (void *)((ulong)prVar6 >> 0x20);
    uVar3 = (uint)prVar6;
    if (uVar3 == (uint)((ulong)prVar6 >> 0x20)) {
      mVar10.~r0._type = prVar6;
      mVar10.~r1 = SUB81(in_RCX,0);
      return mVar10;
    }
    LOCK();
    bVar8 = prVar6 == (runtime__type *)d_spill->headTail;
    if (bVar8) {
      d_spill->headTail = (long)mVar10.~r0.data << 0x20 | (ulong)(uVar3 + 1);
    }
    UNLOCK();
  } while (!bVar8);
  uVar1 = (d_spill->vals).len;
  uVar4 = (ulong)((int)uVar1 - 1U & uVar3);
  psVar2 = (d_spill->vals).array;
  if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  ptr = (void **)(uVar4 * 0x10);
  prVar6 = psVar2[uVar4].val;
  new = psVar2[uVar4].typ;
  if ((new == &DAT_0022b660) && (prVar6 == (runtime__type *)0x0)) {
    new = (undefined *)0x0;
    prVar6 = (runtime__type *)0x0;
  }
  prVar7 = prVar6;
  if (runtime_writeBarrier._0_4_ == 0) {
    psVar2[uVar4].val = (void *)0x0;
  }
  else {
    runtime_gcWriteBarrier();
    ptr = extraout_RAX;
  }
  uVar5 = SUB81(prVar7,0);
  sync_atomic_StorePointer(ptr,new);
  mVar9.~r0.data = new;
  mVar9.~r0._type = prVar6;
  mVar9.~r1 = (bool)uVar5;
  return mVar9;
}

