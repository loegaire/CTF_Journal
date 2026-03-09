
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.mmap(uintptr addr, uintptr length, int prot, int flag, int
   fd, int64 pos, uintptr ret, error err) */

multireturn_uintptr_error_
syscall_mmap(uintptr addr,uintptr length,int prot,int flag,int fd,int64 pos)

{
  undefined1 *puVar1;
  long in_FS_OFFSET;
  multireturn_uintptr_error_ mVar2;
  uintptr addr_spill;
  uintptr length_spill;
  int prot_spill;
  int flag_spill;
  int fd_spill;
  int64 pos_spill;
  void *local_28;
  ulong local_18;
  
                    /* Unresolved local var: uintptr r0@[???]
                       Unresolved local var: syscall.Errno e1@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  syscall_Syscall6();
  if (local_18 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    if (local_18 < 3) {
      puVar1 = (undefined1 *)syscall_errENOENT.tab;
      if (local_18 == 2) goto LAB_00549c8e;
    }
    else {
      puVar1 = (undefined1 *)syscall_errEINVAL.tab;
      if ((local_18 == 0x16) || (puVar1 = (undefined1 *)syscall_errEAGAIN.tab, local_18 == 0x23))
      goto LAB_00549c8e;
    }
    runtime_convT64(local_18);
    puVar1 = go_itab_syscall_Errno_error;
  }
LAB_00549c8e:
  mVar2.err.tab = (runtime_itab *)length;
  mVar2.ret = (uintptr)puVar1;
  mVar2.err.data = local_28;
  return mVar2;
}

