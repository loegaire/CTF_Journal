
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void strconv_init(void)

{
  long in_FS_OFFSET;
  undefined8 *local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  local_10[1] = 0x12;
  *local_10 = &DAT_0029ae0c;
  strconv_ErrRange.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    strconv_ErrRange.data = local_10;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  local_10[1] = 0xe;
  *local_10 = &DAT_0029745b;
  strconv_ErrSyntax.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    strconv_ErrSyntax.data = local_10;
  }
  else {
    runtime_gcWriteBarrier();
  }
  return;
}

