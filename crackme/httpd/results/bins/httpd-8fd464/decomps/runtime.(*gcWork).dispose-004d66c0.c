
/* WARNING: Unknown calling convention */

void runtime___gcWork__dispose(runtime_gcWork *w)

{
  long in_FS_OFFSET;
  runtime_gcWork *w_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: runtime.workbuf * wbuf@[???] */
  if (w_spill->wbuf1 != (runtime_workbuf *)0x0) {
    if ((w_spill->wbuf1->workbufhdr).nobj == 0) {
      runtime_putempty((runtime_workbuf *)w_spill);
    }
    else {
      runtime_putfull((runtime_workbuf *)w_spill);
      w_spill->flushedWork = true;
    }
    w_spill->wbuf1 = (runtime_workbuf *)0x0;
    if ((w_spill->wbuf2->workbufhdr).nobj == 0) {
      runtime_putempty((runtime_workbuf *)w_spill);
    }
    else {
      runtime_putfull((runtime_workbuf *)w_spill);
      w_spill->flushedWork = true;
    }
    w_spill->wbuf2 = (runtime_workbuf *)0x0;
  }
  if (w_spill->bytesMarked != 0) {
    LOCK();
    runtime_work.bytesMarked = runtime_work.bytesMarked + w_spill->bytesMarked;
    UNLOCK();
    w_spill->bytesMarked = 0;
  }
  if (w_spill->scanWork != 0) {
    LOCK();
    runtime_gcController.scanWork = runtime_gcController.scanWork + w_spill->scanWork;
    UNLOCK();
    w_spill->scanWork = 0;
  }
  return;
}

