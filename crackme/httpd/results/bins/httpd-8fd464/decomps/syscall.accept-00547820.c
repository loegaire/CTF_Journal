
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.accept(int s, syscall.RawSockaddrAny * rsa,
   syscall._Socklen * addrlen, int fd, error err) */

multireturn_int_error__conflict5
syscall_accept(int s,syscall_RawSockaddrAny *rsa,syscall__Socklen *addrlen)

{
  undefined1 *puVar1;
  long in_FS_OFFSET;
  multireturn_int_error__conflict5 mVar2;
  int s_spill;
  syscall_RawSockaddrAny *rsa_spill;
  syscall__Socklen *addrlen_spill;
  void *local_38;
  ulong local_28;
  
                    /* Unresolved local var: uintptr r0@[???]
                       Unresolved local var: syscall.Errno e1@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  syscall_Syscall();
  if (local_28 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    if (local_28 < 3) {
      puVar1 = (undefined1 *)syscall_errENOENT.tab;
      if (local_28 == 2) goto LAB_005478f6;
    }
    else {
      puVar1 = (undefined1 *)syscall_errEINVAL.tab;
      if ((local_28 == 0x16) || (puVar1 = (undefined1 *)syscall_errEAGAIN.tab, local_28 == 0x23))
      goto LAB_005478f6;
    }
    runtime_convT64(local_28);
    puVar1 = go_itab_syscall_Errno_error;
  }
LAB_005478f6:
  mVar2.err.tab = (runtime_itab *)rsa;
  mVar2.fd = (int)puVar1;
  mVar2.err.data = local_38;
  return mVar2;
}

