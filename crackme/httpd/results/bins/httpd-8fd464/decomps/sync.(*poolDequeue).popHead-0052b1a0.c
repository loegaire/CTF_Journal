
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void sync.(*poolDequeue).popHead(sync.poolDequeue * d, interface_{}
   ~r0, bool ~r1) */

multireturn_interface____bool__conflict1 sync___poolDequeue__popHead(sync_poolDequeue *d)

{
  ulong uVar1;
  sync_eface *psVar2;
  ulong uVar3;
  runtime__type *prVar4;
  runtime__type *extraout_RAX;
  undefined1 uVar5;
  undefined8 in_RCX;
  long lVar6;
  int iVar7;
  uint uVar8;
  undefined *puVar9;
  long in_FS_OFFSET;
  bool bVar10;
  multireturn_interface____bool__conflict1 mVar11;
  multireturn_interface____bool__conflict1 mVar12;
  sync_poolDequeue *d_spill;
  
                    /* Unresolved local var: interface_{} val@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  do {
                    /* Unresolved local var: uint64 ptrs@[???]
                       Unresolved local var: uint32 head@[???]
                       Unresolved local var: uint64 ptrs2@[???] */
    prVar4 = (runtime__type *)d_spill->headTail;
    mVar12.~r0.data = (void *)((ulong)prVar4 >> 0x20);
    iVar7 = (int)((ulong)prVar4 >> 0x20);
    if ((int)prVar4 == iVar7) {
      mVar12.~r0._type = prVar4;
      mVar12.~r1 = SUB81(in_RCX,0);
      return mVar12;
    }
    uVar8 = iVar7 - 1;
    LOCK();
    bVar10 = prVar4 == (runtime__type *)d_spill->headTail;
    if (bVar10) {
      d_spill->headTail = (ulong)uVar8 << 0x20 | (ulong)prVar4 & 0xffffffff;
    }
    UNLOCK();
  } while (!bVar10);
  uVar1 = (d_spill->vals).len;
  uVar3 = (ulong)((int)uVar1 - 1U & uVar8);
  psVar2 = (d_spill->vals).array;
  if (uVar1 <= uVar3) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  prVar4 = (runtime__type *)(uVar3 * 0x10);
  lVar6 = *(long *)((long)&prVar4->ptrdata + (long)psVar2);
  puVar9 = *(undefined **)((long)&prVar4->size + (long)psVar2);
  if ((puVar9 == &DAT_0022b660) && (lVar6 == 0)) {
    puVar9 = (undefined *)0x0;
    lVar6 = 0;
  }
  uVar5 = (undefined1)lVar6;
  if (runtime_writeBarrier._0_4_ == 0) {
    *(undefined8 *)((long)&prVar4->size + (long)psVar2) = 0;
    *(undefined8 *)((long)&prVar4->ptrdata + (long)psVar2) = 0;
  }
  else {
    runtime_gcWriteBarrier();
    runtime_gcWriteBarrier();
    prVar4 = extraout_RAX;
  }
  mVar11.~r0.data = puVar9;
  mVar11.~r0._type = prVar4;
  mVar11.~r1 = (bool)uVar5;
  return mVar11;
}

