
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.Shutdown(int s, int how, error err) */

error syscall_Shutdown(int s,int how)

{
  undefined1 *puVar1;
  long in_FS_OFFSET;
  error eVar2;
  int s_spill;
  int how_spill;
  ulong local_10;
  
                    /* Unresolved local var: syscall.Errno e1@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  syscall_Syscall();
  if (local_10 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    if (local_10 < 3) {
      puVar1 = (undefined1 *)syscall_errENOENT.tab;
      if (local_10 == 2) goto LAB_005480d7;
    }
    else {
      puVar1 = (undefined1 *)syscall_errEINVAL.tab;
      if ((local_10 == 0x16) || (puVar1 = (undefined1 *)syscall_errEAGAIN.tab, local_10 == 0x23))
      goto LAB_005480d7;
    }
    runtime_convT64(local_10);
    puVar1 = go_itab_syscall_Errno_error;
  }
LAB_005480d7:
  eVar2.data = (void *)how;
  eVar2.tab = (runtime_itab *)puVar1;
  return eVar2;
}

