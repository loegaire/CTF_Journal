
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void context_init(void)

{
  int unaff_RBX;
  long in_FS_OFFSET;
  context_emptyCtx *local_18;
  chan_struct___ local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  local_18[1] = 0x10;
  *local_18 = (context_emptyCtx)&DAT_002998c5;
  context_Canceled.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    context_Canceled.data = local_18;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00222fe0);
  if (runtime_writeBarrier._0_4_ == 0) {
    context_background = local_18;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00222fe0);
  if (runtime_writeBarrier._0_4_ == 0) {
    context_todo = local_18;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_makechan((runtime_chantype *)&DAT_00222ea0,unaff_RBX);
  if (runtime_writeBarrier._0_4_ == 0) {
    context_closedchan = local_10;
  }
  else {
    runtime_gcWriteBarrier();
  }
  return;
}

