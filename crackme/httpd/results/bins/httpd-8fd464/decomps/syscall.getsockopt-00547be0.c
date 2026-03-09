
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.getsockopt(int s, int level, int name, void * val,
   syscall._Socklen * vallen, error err) */

error syscall_getsockopt(int s,int level,int name,void *val,syscall__Socklen *vallen)

{
  undefined1 *puVar1;
  long in_FS_OFFSET;
  error eVar2;
  int s_spill;
  int level_spill;
  int name_spill;
  void *val_spill;
  syscall__Socklen *vallen_spill;
  ulong local_20;
  
                    /* Unresolved local var: syscall.Errno e1@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  syscall_Syscall6();
  if (local_20 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    if (local_20 < 3) {
      puVar1 = (undefined1 *)syscall_errENOENT.tab;
      if (local_20 == 2) goto LAB_00547cd1;
    }
    else {
      puVar1 = (undefined1 *)syscall_errEINVAL.tab;
      if ((local_20 == 0x16) || (puVar1 = (undefined1 *)syscall_errEAGAIN.tab, local_20 == 0x23))
      goto LAB_00547cd1;
    }
    runtime_convT64(local_20);
    puVar1 = go_itab_syscall_Errno_error;
  }
LAB_00547cd1:
  eVar2.data = (void *)level;
  eVar2.tab = (runtime_itab *)puVar1;
  return eVar2;
}

