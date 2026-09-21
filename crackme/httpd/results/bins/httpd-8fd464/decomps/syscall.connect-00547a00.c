
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.connect(int s, void * addr, syscall._Socklen addrlen,
   error err) */

error syscall_connect(int s,void *addr,syscall__Socklen addrlen)

{
  undefined1 *puVar1;
  long in_FS_OFFSET;
  error eVar2;
  int s_spill;
  void *addr_spill;
  syscall__Socklen addrlen_spill;
  ulong local_18;
  
                    /* Unresolved local var: syscall.Errno e1@[???] */
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
      if (local_18 == 2) goto LAB_00547abf;
    }
    else {
      puVar1 = (undefined1 *)syscall_errEINVAL.tab;
      if ((local_18 == 0x16) || (puVar1 = (undefined1 *)syscall_errEAGAIN.tab, local_18 == 0x23))
      goto LAB_00547abf;
    }
    runtime_convT64(local_18);
    puVar1 = go_itab_syscall_Errno_error;
  }
LAB_00547abf:
  eVar2.data = addr;
  eVar2.tab = (runtime_itab *)puVar1;
  return eVar2;
}

