
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.Chmod(string path, uint32 mode, error err) */

error syscall_Chmod(string path,uint32 mode)

{
  long lVar1;
  runtime__type *et;
  undefined4 in_register_0000000c;
  int fromlen;
  undefined1 *puVar2;
  undefined *puVar3;
  void *in_RDI;
  long in_FS_OFFSET;
  error eVar4;
  error eVar5;
  string path_spill;
  uint32 mode_spill;
  ulong local_30;
  
  fromlen = CONCAT44(in_register_0000000c,mode);
                    /* Unresolved local var: uint8 * _p0@[???]
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
      goto LAB_005483d6;
    }
  }
  et = (runtime__type *)(path_spill.len + 1);
  runtime_makeslicecopy(et,(int)path_spill.str,fromlen,in_RDI);
  puVar2 = (undefined1 *)0x0;
  puVar3 = (undefined *)0x0;
LAB_005483d6:
  if (puVar2 == (undefined1 *)0x0) {
    if (et == (runtime__type *)0x0) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    puVar2 = (undefined1 *)0x0;
    puVar3 = (undefined *)0x0;
  }
  if (puVar2 != (undefined1 *)0x0) {
    eVar5.data = puVar3;
    eVar5.tab = (runtime_itab *)et;
    return eVar5;
  }
  syscall_Syscall();
  if (local_30 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    if (local_30 < 3) {
      puVar2 = (undefined1 *)syscall_errENOENT.tab;
      if (local_30 == 2) goto LAB_0054849d;
    }
    else {
      puVar2 = (undefined1 *)syscall_errEINVAL.tab;
      if ((local_30 == 0x16) || (puVar2 = (undefined1 *)syscall_errEAGAIN.tab, local_30 == 0x23))
      goto LAB_0054849d;
    }
    runtime_convT64(local_30);
    puVar2 = go_itab_syscall_Errno_error;
  }
LAB_0054849d:
  eVar4.data = puVar3;
  eVar4.tab = (runtime_itab *)puVar2;
  return eVar4;
}

