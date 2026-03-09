
/* WARNING: Unknown calling convention */

void runtime___gcWork__putBatch(runtime_gcWork *w,__uintptr obj)

{
  int *piVar1;
  runtime_workbuf *prVar2;
  ulong uVar3;
  runtime_workbuf *b;
  runtime_gcWork *extraout_RAX;
  runtime_workbuf *prVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  runtime_gcWork *w_spill;
  __uintptr obj_spill;
  
                    /* Unresolved local var: bool flushed@[???]
                       Unresolved local var: runtime.workbuf * wbuf@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    w = extraout_RAX;
  }
  if (obj_spill.len == 0) {
    return;
  }
  prVar4 = w_spill->wbuf1;
  if (prVar4 == (runtime_workbuf *)0x0) {
    runtime___gcWork__init(w);
    prVar4 = w_spill->wbuf1;
                    /* Unresolved local var: int n@[???] */
  }
  b = (runtime_workbuf *)0x0;
  while( true ) {
    if (obj_spill.len < 1) {
      if (((char)b != '\0') && (runtime_gcphase == 1)) {
        runtime___gcControllerState__enlistWorker(&runtime_gcController);
      }
      return;
    }
    while (uVar3 = (prVar4->workbufhdr).nobj, uVar3 == 0xfd) {
      runtime_putfull(b);
      w_spill->flushedWork = true;
      runtime_getempty();
      prVar2 = w_spill->wbuf2;
      w_spill->wbuf1 = prVar2;
      w_spill->wbuf2 = prVar4;
      b = (runtime_workbuf *)0x1;
      prVar4 = prVar2;
    }
    if (0xfd < uVar3) break;
    uVar5 = -(uVar3 - 0xfd);
    if (obj_spill.len < (long)uVar5) {
      uVar5 = obj_spill.len;
    }
    if (obj_spill.array !=
        (uintptr *)((long)prVar4->obj + (uVar3 << 3 & (long)(uVar3 - 0xfd) >> 0x3f))) {
      runtime_memmove();
    }
    piVar1 = &(prVar4->workbufhdr).nobj;
    *piVar1 = *piVar1 + uVar5;
    if ((ulong)obj_spill.len < uVar5) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    obj_spill.cap = obj_spill.cap - uVar5;
    obj_spill.len = obj_spill.len - uVar5;
    obj_spill.array = (uintptr *)((long)obj_spill.array + (-obj_spill.cap >> 0x3f & uVar5 << 3));
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceB();
}

