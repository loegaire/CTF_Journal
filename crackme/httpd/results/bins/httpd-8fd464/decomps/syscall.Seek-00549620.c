
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.Seek(int fd, int64 offset, int whence, int64 newoffset,
   error err) */

multireturn_int64_error__conflict4 syscall_Seek(int fd,int64 offset,int whence)

{
  undefined1 *puVar1;
  long in_FS_OFFSET;
  multireturn_int64_error__conflict4 mVar2;
  int fd_spill;
  int64 offset_spill;
  int whence_spill;
  void *local_28;
  ulong local_18;
  
                    /* Unresolved local var: uintptr r0@[???]
                       Unresolved local var: syscall.Errno e1@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  syscall_Syscall();
  if (local_18 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    if (local_18 < 3) {
      puVar1 = (undefined1 *)syscall_errENOENT.tab;
      if (local_18 == 2) goto LAB_005496e6;
    }
    else {
      puVar1 = (undefined1 *)syscall_errEINVAL.tab;
      if ((local_18 == 0x16) || (puVar1 = (undefined1 *)syscall_errEAGAIN.tab, local_18 == 0x23))
      goto LAB_005496e6;
    }
    runtime_convT64(local_18);
    puVar1 = go_itab_syscall_Errno_error;
  }
LAB_005496e6:
  mVar2.err.tab = (runtime_itab *)offset;
  mVar2.newoffset = (int64)puVar1;
  mVar2.err.data = local_28;
  return mVar2;
}

