
/* WARNING: Unknown calling convention */

void runtime___gcWork__put(runtime_gcWork *w,uintptr obj)

{
  int *piVar1;
  runtime_workbuf *prVar2;
  long lVar3;
  ulong uVar4;
  runtime_workbuf *extraout_RAX;
  runtime_workbuf *prVar5;
  long in_FS_OFFSET;
  bool bVar6;
  runtime_gcWork *w_spill;
  uintptr obj_spill;
  
                    /* Unresolved local var: bool flushed@[???]
                       Unresolved local var: runtime.workbuf * wbuf@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    w = (runtime_gcWork *)extraout_RAX;
  }
  prVar5 = w_spill->wbuf1;
  if (prVar5 == (runtime_workbuf *)0x0) {
    runtime___gcWork__init(w);
    prVar5 = w_spill->wbuf1;
    bVar6 = false;
  }
  else if ((prVar5->workbufhdr).nobj == 0xfd) {
    prVar2 = w_spill->wbuf2;
    w_spill->wbuf1 = prVar2;
    w_spill->wbuf2 = prVar5;
    lVar3 = (prVar2->workbufhdr).nobj;
    if (lVar3 == 0xfd) {
      runtime_putfull((runtime_workbuf *)w);
      w_spill->flushedWork = true;
      runtime_getempty();
      w_spill->wbuf1 = prVar2;
    }
    bVar6 = lVar3 == 0xfd;
    prVar5 = prVar2;
  }
  else {
    bVar6 = false;
  }
  uVar4 = (prVar5->workbufhdr).nobj;
  if (uVar4 < 0xfd) {
    prVar5->obj[uVar4] = obj_spill;
    piVar1 = &(prVar5->workbufhdr).nobj;
    *piVar1 = *piVar1 + 1;
    if ((bVar6) && (runtime_gcphase == 1)) {
      runtime___gcControllerState__enlistWorker(&runtime_gcController);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

