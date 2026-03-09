
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.Getrlimit(int which, syscall.Rlimit * lim, error err) */

error syscall_Getrlimit(int which,syscall_Rlimit *lim)

{
  undefined1 *puVar1;
  long in_FS_OFFSET;
  error eVar2;
  int which_spill;
  syscall_Rlimit *lim_spill;
  ulong local_18;
  
                    /* Unresolved local var: syscall.Errno e1@[???] */
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
      if (local_18 == 2) goto LAB_00548cbf;
    }
    else {
      puVar1 = (undefined1 *)syscall_errEINVAL.tab;
      if ((local_18 == 0x16) || (puVar1 = (undefined1 *)syscall_errEAGAIN.tab, local_18 == 0x23))
      goto LAB_00548cbf;
    }
    runtime_convT64(local_18);
    puVar1 = go_itab_syscall_Errno_error;
  }
LAB_00548cbf:
  eVar2.data = lim;
  eVar2.tab = (runtime_itab *)puVar1;
  return eVar2;
}

