
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.sysctl([]syscall._C_int mib, uint8 * old, uintptr *
   oldlen, uint8 * new, uintptr newlen, error err) */

error syscall_sysctl(__syscall__C_int mib,uint8 *old,uintptr *oldlen,uint8 *new,uintptr newlen)

{
  undefined1 *puVar1;
  long in_FS_OFFSET;
  error eVar2;
  __syscall__C_int mib_spill;
  uint8 *old_spill;
  uintptr *oldlen_spill;
  uint8 *new_spill;
  uintptr newlen_spill;
  ulong local_30;
  
                    /* Unresolved local var: void * _p0@[???]
                       Unresolved local var: syscall.Errno e1@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  syscall_Syscall6();
  if (local_30 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    if (local_30 < 3) {
      puVar1 = (undefined1 *)syscall_errENOENT.tab;
      if (local_30 == 2) goto LAB_00548217;
    }
    else {
      puVar1 = (undefined1 *)syscall_errEINVAL.tab;
      if ((local_30 == 0x16) || (puVar1 = (undefined1 *)syscall_errEAGAIN.tab, local_30 == 0x23))
      goto LAB_00548217;
    }
    runtime_convT64(local_30);
    puVar1 = go_itab_syscall_Errno_error;
  }
LAB_00548217:
  eVar2.data = old_spill;
  eVar2.tab = (runtime_itab *)puVar1;
  return eVar2;
}

