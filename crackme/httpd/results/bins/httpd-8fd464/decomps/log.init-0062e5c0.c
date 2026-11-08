
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void log_init(void)

{
  os_File *poVar1;
  log_Logger *plVar2;
  log_Logger *extraout_RAX;
  long in_FS_OFFSET;
  log_Logger *local_18;
  
  while (poVar1 = os_Stderr,
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_newobject((runtime__type *)os_Stderr);
  (local_18->out).tab = (runtime_itab *)go_itab__os_File_io_Writer;
  if (runtime_writeBarrier._0_4_ == 0) {
    (local_18->out).data = poVar1;
  }
  else {
    runtime_gcWriteBarrierCX();
    local_18 = extraout_RAX;
  }
  (local_18->prefix).len = 0;
  (local_18->prefix).str = (uint8 *)0x0;
  local_18->flag = 3;
  plVar2 = local_18;
  if (runtime_writeBarrier._0_4_ != 0) {
    runtime_gcWriteBarrier();
    plVar2 = log_std;
  }
  log_std = plVar2;
  return;
}

