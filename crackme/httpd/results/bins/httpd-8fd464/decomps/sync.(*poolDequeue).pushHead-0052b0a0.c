
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void sync.(*poolDequeue).pushHead(sync.poolDequeue * d, interface_{}
   val, bool ~r1) */

bool sync___poolDequeue__pushHead(sync_poolDequeue *d,interface___ val)

{
  uint64 uVar1;
  ulong uVar2;
  sync_eface *psVar3;
  int iVar4;
  uint uVar5;
  sync_poolDequeue *extraout_RAX;
  void *pvVar7;
  sync_poolDequeue *extraout_RDX;
  runtime__type *prVar8;
  long in_FS_OFFSET;
  sync_poolDequeue *d_spill;
  interface___ val_spill;
  ulong uVar6;
  
                    /* Unresolved local var: uint64 ptrs@[???]
                       Unresolved local var: void * typ@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    d = extraout_RAX;
  }
  uVar2 = (d_spill->vals).len;
  iVar4 = (int)uVar2;
  psVar3 = (d_spill->vals).array;
  uVar5 = (uint)(d_spill->headTail >> 0x20);
  if (uVar5 == (int)d_spill->headTail + iVar4) {
    return SUB81(d,0);
  }
  uVar5 = iVar4 - 1U & uVar5;
  uVar6 = (ulong)uVar5;
  if (uVar2 <= uVar6) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  if (psVar3[uVar6].typ == (void *)0x0) {
    prVar8 = (runtime__type *)&DAT_0022b660;
    if (val_spill._type != (runtime__type *)0x0) {
      prVar8 = val_spill._type;
    }
    psVar3[uVar6].typ = prVar8;
    pvVar7 = (void *)0x0;
    if (val_spill._type != (runtime__type *)0x0) {
      pvVar7 = val_spill.data;
    }
    if (runtime_writeBarrier._0_4_ == 0) {
      psVar3[uVar6].val = pvVar7;
    }
    else {
      runtime_gcWriteBarrierCX();
      d_spill = extraout_RDX;
    }
    LOCK();
    uVar1 = d_spill->headTail;
    d_spill->headTail = d_spill->headTail + 0x100000000;
    UNLOCK();
    return SUB81(uVar1,0);
  }
  return (bool)((char)uVar5 * '\x10');
}

