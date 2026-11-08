
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.sendfile(int outfd, int infd, int64 * offset, int count,
   int written, error err) */

multireturn_int_error__conflict3 syscall_sendfile(int outfd,int infd,int64 *offset,int count)

{
  undefined1 *puVar1;
  long in_FS_OFFSET;
  multireturn_int_error__conflict3 mVar2;
  int outfd_spill;
  int infd_spill;
  int64 *offset_spill;
  int count_spill;
  uint64 local_28;
  uint64 writtenOut;
  void *local_18;
  uint64 *local_10;
  
                    /* Unresolved local var: syscall.Errno e1@[???] */
  while (&stack0xfffffffffffffff8 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  writtenOut = 0;
  local_10 = &writtenOut;
  syscall_Syscall9();
  if (local_28 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    local_18 = (void *)writtenOut;
    runtime_convT64(local_28);
    puVar1 = go_itab_syscall_Errno_error;
    writtenOut = (uint64)local_18;
  }
  mVar2.err.tab = (runtime_itab *)infd;
  mVar2.written = (int)puVar1;
  mVar2.err.data = (void *)writtenOut;
  return mVar2;
}

