
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.setsockopt(int s, int level, int name, void * val, uintptr
   vallen, error err) */

error syscall_setsockopt(int s,int level,int name,void *val,uintptr vallen)

{
  undefined1 *puVar1;
  long in_FS_OFFSET;
  error eVar2;
  int s_spill;
  int level_spill;
  int name_spill;
  void *val_spill;
  uintptr vallen_spill;
  ulong local_18;
  
                    /* Unresolved local var: syscall.Errno e1@[???] */
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
      if (local_18 == 2) goto LAB_00547ddf;
    }
    else {
      puVar1 = (undefined1 *)syscall_errEINVAL.tab;
      if ((local_18 == 0x16) || (puVar1 = (undefined1 *)syscall_errEAGAIN.tab, local_18 == 0x23))
      goto LAB_00547ddf;
    }
    runtime_convT64(local_18);
    puVar1 = go_itab_syscall_Errno_error;
  }
LAB_00547ddf:
  eVar2.data = (void *)level;
  eVar2.tab = (runtime_itab *)puVar1;
  return eVar2;
}

