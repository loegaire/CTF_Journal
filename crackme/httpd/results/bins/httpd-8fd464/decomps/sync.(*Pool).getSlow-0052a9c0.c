
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void sync.(*Pool).getSlow(sync.Pool * p, int pid, interface_{} ~r1) */

interface___ sync___Pool__getSlow(sync_Pool *p,int pid)

{
  long lVar1;
  uintptr uVar2;
  ulong uVar3;
  void *pvVar4;
  runtime__type *prVar5;
  sync_poolChain *psVar6;
  runtime__type *extraout_RAX;
  void *pvVar7;
  void *pvVar8;
  long in_FS_OFFSET;
  interface___ iVar9;
  interface___ iVar10;
  interface___ iVar11;
  multireturn_interface____bool__conflict1 mVar12;
  sync_Pool *p_spill;
  int pid_spill;
  long local_40;
  
                    /* Unresolved local var: uintptr size@[???]
                       Unresolved local var: void * locals@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uVar2 = p_spill->localSize;
                    /* Unresolved local var: int i@[???] */
  for (prVar5 = (runtime__type *)0x0; (long)prVar5 < (long)uVar2;
      prVar5 = (runtime__type *)((long)&prVar5->size + 1)) {
    lVar1 = (long)&prVar5->size + pid_spill + 1;
    if (uVar2 == 0xffffffffffffffff) {
      psVar6 = (sync_poolChain *)-lVar1;
    }
    else {
      psVar6 = (sync_poolChain *)(lVar1 / (long)uVar2);
    }
    mVar12 = sync___poolChain__popTail(psVar6);
    if (local_40 != 0) {
      return mVar12.~r0;
    }
                    /* Unresolved local var: interface_{} x@[???] */
  }
  uVar3 = p_spill->victimSize;
  if (uVar3 <= (ulong)pid_spill) {
    iVar10.data = (void *)pid_spill;
    iVar10._type = prVar5;
    return iVar10;
  }
  pvVar4 = p_spill->victim;
  iVar9.data = (void *)(pid_spill * 0x80);
                    /* Unresolved local var: interface_{} x@[???] */
  if (*(long *)((long)pvVar4 + (long)iVar9.data) != 0) {
    *(undefined8 *)((long)pvVar4 + (long)iVar9.data) = 0;
    if (runtime_writeBarrier._0_4_ == 0) {
      *(undefined8 *)((long)pvVar4 + 8 + (long)iVar9.data) = 0;
    }
    else {
      runtime_gcWriteBarrier();
      prVar5 = extraout_RAX;
    }
    iVar9._type = prVar5;
    return iVar9;
  }
  pvVar4 = (void *)0x0;
  pvVar8 = iVar9.data;
  while( true ) {
    pvVar7 = pvVar4;
    if ((long)uVar3 <= (long)pvVar7) {
      LOCK();
      prVar5 = (runtime__type *)p_spill->victimSize;
      p_spill->victimSize = 0;
      UNLOCK();
      iVar11.data = pvVar8;
      iVar11._type = prVar5;
      return iVar11;
    }
    if (uVar3 == 0xffffffffffffffff) {
      psVar6 = (sync_poolChain *)-((long)pvVar7 + pid_spill);
    }
    else {
      psVar6 = (sync_poolChain *)(((long)pvVar7 + pid_spill) / (long)uVar3);
    }
    mVar12 = sync___poolChain__popTail(psVar6);
    if (local_40 != 0) break;
                    /* Unresolved local var: int i@[???] */
                    /* Unresolved local var: interface_{} x@[???] */
    pvVar4 = (void *)((long)pvVar7 + 1);
    pvVar8 = pvVar7;
  }
  return mVar12.~r0;
}

