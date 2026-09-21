
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void sync_poolCleanup(void)

{
  sync_Pool **extraout_RAX;
  sync_Pool **ppsVar1;
  sync_Pool **extraout_RAX_00;
  sync_Pool **extraout_RAX_01;
  int iVar2;
  long lVar3;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  sync_Pool *psVar4;
  long in_FS_OFFSET;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  ppsVar1 = sync_oldPools.array;
  iVar2 = sync_oldPools.len;
                    /* Unresolved local var: sync.Pool * p@[???] */
  for (lVar3 = 0; lVar3 < iVar2; lVar3 = lVar3 + 1) {
    psVar4 = ppsVar1[lVar3];
    if (runtime_writeBarrier._0_4_ == 0) {
      psVar4->victim = (void *)0x0;
    }
    else {
      runtime_gcWriteBarrierSI();
      ppsVar1 = extraout_RAX;
      lVar3 = extraout_RDX;
    }
    psVar4->victimSize = 0;
  }
  ppsVar1 = sync_allPools.array;
  iVar2 = sync_allPools.len;
                    /* Unresolved local var: sync.Pool * p@[???] */
  for (lVar3 = 0; lVar3 < iVar2; lVar3 = lVar3 + 1) {
    psVar4 = ppsVar1[lVar3];
    if (runtime_writeBarrier._0_4_ == 0) {
      psVar4->victim = psVar4->local;
    }
    else {
      runtime_gcWriteBarrierBX();
      ppsVar1 = extraout_RAX_00;
      lVar3 = extraout_RDX_00;
    }
    psVar4->victimSize = psVar4->localSize;
    if (runtime_writeBarrier._0_4_ == 0) {
      psVar4->local = (void *)0x0;
    }
    else {
      runtime_gcWriteBarrierBX();
      ppsVar1 = extraout_RAX_01;
      lVar3 = extraout_RDX_01;
    }
    psVar4->localSize = 0;
  }
  sync_oldPools.len = sync_allPools.len;
  sync_oldPools.cap = sync_allPools.cap;
  if (runtime_writeBarrier._0_4_ == 0) {
    sync_oldPools.array = sync_allPools.array;
  }
  else {
    runtime_gcWriteBarrier();
  }
  sync_allPools.len = 0;
  sync_allPools.cap = 0;
  if (runtime_writeBarrier._0_4_ == 0) {
    sync_allPools.array = (sync_Pool **)0x0;
  }
  else {
    runtime_gcWriteBarrier();
  }
  return;
}

