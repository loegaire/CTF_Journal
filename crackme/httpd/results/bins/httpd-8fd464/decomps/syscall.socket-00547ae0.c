
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.socket(int domain, int typ, int proto, int fd, error err)
    */

multireturn_int_error__conflict5 syscall_socket(int domain,int typ,int proto)

{
  undefined1 *puVar1;
  long in_FS_OFFSET;
  multireturn_int_error__conflict5 mVar2;
  int domain_spill;
  int typ_spill;
  int proto_spill;
  void *local_28;
  ulong local_18;
  
                    /* Unresolved local var: uintptr r0@[???]
                       Unresolved local var: syscall.Errno e1@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  syscall_RawSyscall();
  if (local_18 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    if (local_18 < 3) {
      puVar1 = (undefined1 *)syscall_errENOENT.tab;
      if (local_18 == 2) goto LAB_00547ba6;
    }
    else {
      puVar1 = (undefined1 *)syscall_errEINVAL.tab;
      if ((local_18 == 0x16) || (puVar1 = (undefined1 *)syscall_errEAGAIN.tab, local_18 == 0x23))
      goto LAB_00547ba6;
    }
    runtime_convT64(local_18);
    puVar1 = go_itab_syscall_Errno_error;
  }
LAB_00547ba6:
  mVar2.err.tab = (runtime_itab *)typ;
  mVar2.fd = (int)puVar1;
  mVar2.err.data = local_28;
  return mVar2;
}

