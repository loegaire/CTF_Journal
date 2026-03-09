
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.Open(string path, int mode, uint32 perm, int fd, error
   err) */

multireturn_int_error__conflict5 syscall_Open(string path,int mode,uint32 perm)

{
  long lVar1;
  runtime__type *et;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  multireturn_int_error__conflict5 mVar4;
  multireturn_int_error__conflict5 mVar5;
  string path_spill;
  int mode_spill;
  uint32 perm_spill;
  void *local_48;
  ulong local_38;
  
                    /* Unresolved local var: uint8 * _p0@[???]
                       Unresolved local var: uintptr r0@[???]
                       Unresolved local var: syscall.Errno e1@[???]
                       Unresolved local var: uint8 * ~R1.data@[???]
                       Unresolved local var: int ~R0.len@[???]
                       Unresolved local var: uintptr ~R1.itab@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: []uint8 a@[???]
                       Unresolved local var: error err@[???]
                       Unresolved local var: int i@[???] */
  for (lVar1 = 0; lVar1 < path_spill.len; lVar1 = lVar1 + 1) {
    if (path_spill.str[lVar1] == 0) {
      et = (runtime__type *)0x0;
      puVar2 = go_itab_syscall_Errno_error;
      puVar3 = &DAT_002b2e10;
      goto LAB_00549016;
    }
  }
  et = (runtime__type *)(path_spill.len + 1);
  runtime_makeslicecopy(et,(int)path_spill.str,mode,(void *)CONCAT44(in_register_0000003c,perm));
  puVar2 = (undefined1 *)0x0;
  puVar3 = (undefined *)0x0;
LAB_00549016:
  if (puVar2 == (undefined1 *)0x0) {
    if (et == (runtime__type *)0x0) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    puVar2 = (undefined1 *)0x0;
    puVar3 = (undefined *)0x0;
  }
  if (puVar2 != (undefined1 *)0x0) {
    mVar5.err.tab = (runtime_itab *)puVar3;
    mVar5.fd = (int)et;
    mVar5.err.data = puVar2;
    return mVar5;
  }
  syscall_Syscall();
  if (local_38 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    if (local_38 < 3) {
      puVar2 = (undefined1 *)syscall_errENOENT.tab;
      if (local_38 == 2) goto LAB_005490f2;
    }
    else {
      puVar2 = (undefined1 *)syscall_errEINVAL.tab;
      if ((local_38 == 0x16) || (puVar2 = (undefined1 *)syscall_errEAGAIN.tab, local_38 == 0x23))
      goto LAB_005490f2;
    }
    runtime_convT64(local_38);
    puVar2 = go_itab_syscall_Errno_error;
  }
LAB_005490f2:
  mVar4.err.tab = (runtime_itab *)puVar3;
  mVar4.fd = (int)puVar2;
  mVar4.err.data = local_48;
  return mVar4;
}

