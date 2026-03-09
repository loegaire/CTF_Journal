
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.fstat(int fd, syscall.stat_freebsd11_t * stat, error err)
    */

error syscall_fstat(int fd,syscall_stat_freebsd11_t *stat)

{
  undefined1 *puVar1;
  long in_FS_OFFSET;
  error eVar2;
  int fd_spill;
  syscall_stat_freebsd11_t *stat_spill;
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
      if (local_18 == 2) goto LAB_0054869f;
    }
    else {
      puVar1 = (undefined1 *)syscall_errEINVAL.tab;
      if ((local_18 == 0x16) || (puVar1 = (undefined1 *)syscall_errEAGAIN.tab, local_18 == 0x23))
      goto LAB_0054869f;
    }
    runtime_convT64(local_18);
    puVar1 = go_itab_syscall_Errno_error;
  }
LAB_0054869f:
  eVar2.data = stat;
  eVar2.tab = (runtime_itab *)puVar1;
  return eVar2;
}

