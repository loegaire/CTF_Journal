
/* WARNING: Unknown calling convention */

void runtime___gcWork__init(runtime_gcWork *w)

{
  long in_FS_OFFSET;
  runtime_gcWork *w_spill;
  runtime_workbuf *local_10;
  
                    /* Unresolved local var: runtime.workbuf * wbuf2@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_getempty();
  w_spill->wbuf1 = local_10;
  runtime_trygetfull();
  if (local_10 == (runtime_workbuf *)0x0) {
    runtime_getempty();
  }
  w_spill->wbuf2 = local_10;
  return;
}

