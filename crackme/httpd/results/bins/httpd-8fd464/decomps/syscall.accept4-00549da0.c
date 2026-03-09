
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.accept4(int fd, syscall.RawSockaddrAny * rsa,
   syscall._Socklen * addrlen, int flags, int nfd, error err) */

multireturn_int_error__conflict7
syscall_accept4(int fd,syscall_RawSockaddrAny *rsa,syscall__Socklen *addrlen,int flags)

{
  undefined1 *puVar1;
  long in_FS_OFFSET;
  multireturn_int_error__conflict7 mVar2;
  int fd_spill;
  syscall_RawSockaddrAny *rsa_spill;
  syscall__Socklen *addrlen_spill;
  int flags_spill;
  void *local_38;
  ulong local_28;
  
                    /* Unresolved local var: uintptr r0@[???]
                       Unresolved local var: syscall.Errno e1@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  syscall_Syscall6();
  if (local_28 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    if (local_28 < 3) {
      puVar1 = (undefined1 *)syscall_errENOENT.tab;
      if (local_28 == 2) goto LAB_00549e96;
    }
    else {
      puVar1 = (undefined1 *)syscall_errEINVAL.tab;
      if ((local_28 == 0x16) || (puVar1 = (undefined1 *)syscall_errEAGAIN.tab, local_28 == 0x23))
      goto LAB_00549e96;
    }
    runtime_convT64(local_28);
    puVar1 = go_itab_syscall_Errno_error;
  }
LAB_00549e96:
  mVar2.err.tab = (runtime_itab *)rsa;
  mVar2.nfd = (int)puVar1;
  mVar2.err.data = local_38;
  return mVar2;
}

