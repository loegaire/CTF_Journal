
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.getsockname(int fd, syscall.RawSockaddrAny * rsa,
   syscall._Socklen * addrlen, error err) */

error syscall_getsockname(int fd,syscall_RawSockaddrAny *rsa,syscall__Socklen *addrlen)

{
  undefined1 *puVar1;
  long in_FS_OFFSET;
  error eVar2;
  int fd_spill;
  syscall_RawSockaddrAny *rsa_spill;
  syscall__Socklen *addrlen_spill;
  ulong local_20;
  
                    /* Unresolved local var: syscall.Errno e1@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  syscall_RawSyscall();
  if (local_20 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    if (local_20 < 3) {
      puVar1 = (undefined1 *)syscall_errENOENT.tab;
      if (local_20 == 2) goto LAB_00547fe7;
    }
    else {
      puVar1 = (undefined1 *)syscall_errEINVAL.tab;
      if ((local_20 == 0x16) || (puVar1 = (undefined1 *)syscall_errEAGAIN.tab, local_20 == 0x23))
      goto LAB_00547fe7;
    }
    runtime_convT64(local_20);
    puVar1 = go_itab_syscall_Errno_error;
  }
LAB_00547fe7:
  eVar2.data = rsa;
  eVar2.tab = (runtime_itab *)puVar1;
  return eVar2;
}

