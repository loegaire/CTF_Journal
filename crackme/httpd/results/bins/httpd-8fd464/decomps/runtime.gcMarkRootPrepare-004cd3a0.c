
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_gcMarkRootPrepare(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long extraout_RAX;
  runtime_moduledata **pprVar5;
  long lVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_work.nDataRoots = 0;
  runtime_work.nBSSRoots = 0;
                    /* Unresolved local var: []*runtime.moduledata * p@[???] */
  if (runtime_modulesSlice == (___runtime_moduledata *)0x0) {
    iVar4 = 0;
    pprVar5 = (runtime_moduledata **)0x0;
  }
  else {
    pprVar5 = runtime_modulesSlice->array;
    iVar4 = runtime_modulesSlice->len;
                    /* Unresolved local var: runtime.moduledata * datap@[???] */
  }
  for (lVar6 = 0; lVar6 < iVar4; lVar6 = lVar6 + 1) {
    uVar7 = (pprVar5[lVar6]->edata - pprVar5[lVar6]->data) + 0x3ffff >> 0x12;
    if ((ulong)runtime_work.nDataRoots < uVar7) {
      runtime_work.nDataRoots = uVar7;
    }
  }
                    /* Unresolved local var: []*runtime.moduledata * p@[???] */
  if (runtime_modulesSlice == (___runtime_moduledata *)0x0) {
    iVar4 = 0;
    pprVar5 = (runtime_moduledata **)0x0;
  }
  else {
    pprVar5 = runtime_modulesSlice->array;
    iVar4 = runtime_modulesSlice->len;
                    /* Unresolved local var: runtime.moduledata * datap@[???] */
  }
  for (lVar6 = 0; lVar6 < iVar4; lVar6 = lVar6 + 1) {
    uVar7 = (pprVar5[lVar6]->ebss - pprVar5[lVar6]->bss) + 0x3ffff >> 0x12;
    if ((ulong)runtime_work.nBSSRoots < uVar7) {
      runtime_work.nBSSRoots = uVar7;
    }
  }
  runtime_mheap_.markArenas.len = runtime_mheap_.allArenas.len;
  runtime_mheap_.markArenas.cap = runtime_mheap_.allArenas.len;
  if (runtime_writeBarrier._0_4_ == 0) {
    runtime_mheap_.markArenas.array = runtime_mheap_.allArenas.array;
    lVar6 = runtime_mheap_.allArenas.len;
  }
  else {
    runtime_gcWriteBarrierCX();
    lVar6 = extraout_RAX;
  }
  runtime_work.nSpanRoots = lVar6 << 4;
  runtime_work.nStackRoots = runtime_allglen;
  runtime_work.markrootNext = 0;
  iVar2 = (int)runtime_work.nDataRoots;
  iVar3 = (int)runtime_work.nBSSRoots;
  iVar1 = (int)(lVar6 << 4);
  runtime_work.markrootJobs = iVar2 + iVar3 + iVar1 + (int)runtime_allglen + 2;
  runtime_work.baseData = 2;
  runtime_work.baseBSS = iVar2 + 2;
  runtime_work.baseSpans = iVar3 + iVar2 + 2;
  runtime_work.baseStacks = iVar1 + iVar2 + iVar3 + 2;
  runtime_work.baseEnd = (int)runtime_allglen + iVar2 + iVar3 + iVar1 + 2;
  return;
}

