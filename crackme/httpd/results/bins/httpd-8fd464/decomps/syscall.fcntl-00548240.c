
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.fcntl(int fd, int cmd, int arg, int val, error err) */

multireturn_int_error__conflict6 syscall_fcntl(int fd,int cmd,int arg)

{
  undefined1 *puVar1;
  long in_FS_OFFSET;
  multireturn_int_error__conflict6 mVar2;
  int fd_spill;
  int cmd_spill;
  int arg_spill;
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
      if (local_18 == 2) goto LAB_00548306;
    }
    else {
      puVar1 = (undefined1 *)syscall_errEINVAL.tab;
      if ((local_18 == 0x16) || (puVar1 = (undefined1 *)syscall_errEAGAIN.tab, local_18 == 0x23))
      goto LAB_00548306;
    }
    runtime_convT64(local_18);
    puVar1 = go_itab_syscall_Errno_error;
  }
LAB_00548306:
  mVar2.err.tab = (runtime_itab *)cmd;
  mVar2.val = (int)puVar1;
  mVar2.err.data = local_28;
  return mVar2;
}

