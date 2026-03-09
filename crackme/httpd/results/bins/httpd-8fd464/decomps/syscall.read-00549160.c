
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.read(int fd, []uint8 p, int n, error err) */

multireturn_int_error_ syscall_read(int fd,__uint8 p)

{
  undefined1 *puVar1;
  long in_FS_OFFSET;
  multireturn_int_error_ mVar2;
  int fd_spill;
  __uint8 p_spill;
  void *local_30;
  ulong local_20;
  
  mVar2.err.tab = p.array;
                    /* Unresolved local var: void * _p0@[???]
                       Unresolved local var: uintptr r0@[???]
                       Unresolved local var: syscall.Errno e1@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  syscall_Syscall();
  if (local_20 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    if (local_20 < 3) {
      puVar1 = (undefined1 *)syscall_errENOENT.tab;
      if (local_20 == 2) goto LAB_0054923c;
    }
    else {
      puVar1 = (undefined1 *)syscall_errEINVAL.tab;
      if ((local_20 == 0x16) || (puVar1 = (undefined1 *)syscall_errEAGAIN.tab, local_20 == 0x23))
      goto LAB_0054923c;
    }
    runtime_convT64(local_20);
    puVar1 = go_itab_syscall_Errno_error;
  }
LAB_0054923c:
  mVar2.n = (int)puVar1;
  mVar2.err.data = local_30;
  return mVar2;
}

