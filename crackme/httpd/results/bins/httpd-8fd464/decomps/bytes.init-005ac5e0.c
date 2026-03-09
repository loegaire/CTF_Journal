
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void bytes_init(void)

{
  long in_FS_OFFSET;
  undefined8 *local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  local_10[1] = 0x17;
  *local_10 = &DAT_0029dc11;
  bytes_ErrTooLarge.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    bytes_ErrTooLarge.data = local_10;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  local_10[1] = 0x36;
  *local_10 = &DAT_002aa08c;
  bytes_errNegativeRead.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    bytes_errNegativeRead.data = local_10;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  local_10[1] = 0x46;
  *local_10 = &DAT_002ac138;
  bytes_errUnreadByte.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    bytes_errUnreadByte.data = local_10;
  }
  else {
    runtime_gcWriteBarrier();
  }
  return;
}

