
/* WARNING: Unknown calling convention */

void runtime_markroot(runtime_gcWork *gcw,uint32 i)

{
  runtime_g *prVar1;
  uintptr uVar2;
  runtime_finblock *b0;
  int iVar3;
  runtime_moduledata **pprVar4;
  undefined4 unaff_0000001c;
  uintptr uVar5;
  runtime_stackScanState *in_RSI;
  runtime_gcWork *in_RDI;
  long in_FS_OFFSET;
  string s;
  runtime_gcWork *gcw_spill;
  uint32 i_spill;
  
  s.len = CONCAT44(unaff_0000001c,i);
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((i_spill < runtime_work.baseData) || (runtime_work.baseBSS <= i_spill)) {
    if ((i_spill < runtime_work.baseBSS) || (runtime_work.baseSpans <= i_spill)) {
      b0 = runtime_allfin;
      if (i_spill == 0) {
        for (; b0 != (runtime_finblock *)0x0; b0 = b0->alllink) {
                    /* Unresolved local var: uintptr cnt@[???] */
          runtime_scanblock((uintptr)b0,s.len,(uint8 *)gcw_spill,in_RDI,in_RSI);
        }
      }
      else if (i_spill == 1) {
        runtime_systemstack();
      }
      else if ((i_spill < runtime_work.baseSpans) || (runtime_work.baseStacks <= i_spill)) {
                    /* Unresolved local var: uint32 status@[???]
                       Unresolved local var: runtime.g * gp@[???] */
        if ((i_spill < runtime_work.baseStacks) || (runtime_work.baseEnd <= i_spill)) {
          s.str = &DAT_0029b5fc;
                    /* WARNING: Subroutine does not return */
          runtime_throw(s);
        }
        if ((ulong)runtime_allgs.len <= (ulong)(i_spill - runtime_work.baseStacks)) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        prVar1 = runtime_allgs.array[i_spill - runtime_work.baseStacks];
        if (((prVar1->atomicstatus == 4) || (prVar1->atomicstatus == 3)) && (prVar1->waitsince == 0)
           ) {
          prVar1->waitsince = runtime_work.tstart;
        }
        runtime_systemstack();
      }
      else {
        runtime_markrootSpans((runtime_gcWork *)(ulong)(i_spill - runtime_work.baseSpans),s.len);
      }
    }
    else {
                    /* Unresolved local var: []*runtime.moduledata * p@[???] */
      if (runtime_modulesSlice == (___runtime_moduledata *)0x0) {
        iVar3 = 0;
        pprVar4 = (runtime_moduledata **)0x0;
      }
      else {
        pprVar4 = runtime_modulesSlice->array;
        iVar3 = runtime_modulesSlice->len;
                    /* Unresolved local var: runtime.moduledata * datap@[???]
                       Unresolved local var: runtime.moduledata * * ~R0.ptr@[???]
                       Unresolved local var: int ~R0.len@[???] */
      }
      for (uVar5 = 0; (long)uVar5 < iVar3; uVar5 = uVar5 + 1) {
        uVar2 = pprVar4[uVar5]->bss;
        runtime_markrootBlock
                  ((ulong)(i_spill - runtime_work.baseBSS),uVar5,(uint8 *)gcw_spill,
                   (runtime_gcWork *)(pprVar4[uVar5]->ebss - uVar2),uVar2);
      }
    }
  }
  else {
                    /* Unresolved local var: []*runtime.moduledata * p@[???] */
    if (runtime_modulesSlice == (___runtime_moduledata *)0x0) {
      iVar3 = 0;
      pprVar4 = (runtime_moduledata **)0x0;
    }
    else {
      pprVar4 = runtime_modulesSlice->array;
      iVar3 = runtime_modulesSlice->len;
                    /* Unresolved local var: runtime.moduledata * datap@[???]
                       Unresolved local var: runtime.moduledata * * ~R0.ptr@[???]
                       Unresolved local var: int ~R0.len@[???] */
    }
    for (uVar5 = 0; (long)uVar5 < iVar3; uVar5 = uVar5 + 1) {
      uVar2 = pprVar4[uVar5]->data;
      runtime_markrootBlock
                ((ulong)(i_spill - runtime_work.baseData),uVar5,(uint8 *)gcw_spill,
                 (runtime_gcWork *)(pprVar4[uVar5]->edata - uVar2),uVar2);
    }
  }
  return;
}

