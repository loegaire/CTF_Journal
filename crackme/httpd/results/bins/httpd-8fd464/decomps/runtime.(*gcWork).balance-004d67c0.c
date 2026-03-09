
/* WARNING: Unknown calling convention */

void runtime___gcWork__balance(runtime_gcWork *w)

{
  runtime_workbuf *prVar1;
  long in_FS_OFFSET;
  runtime_gcWork *w_spill;
  runtime_workbuf *local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (w_spill->wbuf1 != (runtime_workbuf *)0x0) {
                    /* Unresolved local var: runtime.workbuf * wbuf@[???] */
    prVar1 = w_spill->wbuf2;
    if ((prVar1->workbufhdr).nobj == 0) {
      if ((w_spill->wbuf1->workbufhdr).nobj < 5) {
        return;
      }
      runtime_handoff((runtime_workbuf *)w_spill);
      w_spill->wbuf1 = local_10;
      w_spill->flushedWork = true;
    }
    else {
      runtime_putfull((runtime_workbuf *)w_spill);
      w_spill->flushedWork = true;
      runtime_getempty();
      w_spill->wbuf2 = prVar1;
    }
    if (runtime_gcphase == 1) {
      runtime___gcControllerState__enlistWorker(&runtime_gcController);
    }
    return;
  }
  return;
}

