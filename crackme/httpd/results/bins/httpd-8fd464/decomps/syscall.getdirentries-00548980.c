
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.getdirentries(int fd, []uint8 buf, uintptr * basep, int n,
   error err) */

multireturn_int_error_ syscall_getdirentries(int fd,__uint8 buf,uintptr *basep)

{
  undefined1 *puVar1;
  long in_FS_OFFSET;
  multireturn_int_error_ mVar2;
  int fd_spill;
  __uint8 buf_spill;
  uintptr *basep_spill;
  void *local_38;
  ulong local_28;
  
                    /* Unresolved local var: void * _p0@[???]
                       Unresolved local var: uintptr r0@[???]
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
      if (local_28 == 2) goto LAB_00548a86;
    }
    else {
      puVar1 = (undefined1 *)syscall_errEINVAL.tab;
      if ((local_28 == 0x16) || (puVar1 = (undefined1 *)syscall_errEAGAIN.tab, local_28 == 0x23))
      goto LAB_00548a86;
    }
    runtime_convT64(local_28);
    puVar1 = go_itab_syscall_Errno_error;
  }
LAB_00548a86:
  mVar2.err.tab = (runtime_itab *)fd_spill;
  mVar2.n = (int)puVar1;
  mVar2.err.data = local_38;
  return mVar2;
}

