
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.Readlink(string path, []uint8 buf, int n, error err) */

multireturn_int_error_ syscall_Readlink(string path,__uint8 buf)

{
  long lVar1;
  runtime__type *et;
  uint8 *fromlen;
  undefined1 *puVar2;
  undefined *puVar3;
  void *from;
  long in_FS_OFFSET;
  multireturn_int_error_ mVar4;
  multireturn_int_error_ mVar5;
  string path_spill;
  __uint8 buf_spill;
  void *local_50;
  ulong local_40;
  
  from = (void *)buf.len;
  fromlen = buf.array;
                    /* Unresolved local var: uint8 * _p0@[???]
                       Unresolved local var: syscall.Errno e1@[???]
                       Unresolved local var: void * _p1@[???]
                       Unresolved local var: uintptr r0@[???]
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
      goto LAB_00549316;
    }
  }
  et = (runtime__type *)(path_spill.len + 1);
  runtime_makeslicecopy(et,(int)path_spill.str,(int)fromlen,from);
  puVar2 = (undefined1 *)0x0;
  puVar3 = (undefined *)0x0;
LAB_00549316:
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
    mVar5.n = (int)et;
    mVar5.err.data = puVar2;
    return mVar5;
  }
  syscall_Syscall();
  if (local_40 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    if (local_40 < 3) {
      puVar2 = (undefined1 *)syscall_errENOENT.tab;
      if (local_40 == 2) goto LAB_0054940c;
    }
    else {
      puVar2 = (undefined1 *)syscall_errEINVAL.tab;
      if ((local_40 == 0x16) || (puVar2 = (undefined1 *)syscall_errEAGAIN.tab, local_40 == 0x23))
      goto LAB_0054940c;
    }
    runtime_convT64(local_40);
    puVar2 = go_itab_syscall_Errno_error;
  }
LAB_0054940c:
  mVar4.err.tab = (runtime_itab *)puVar3;
  mVar4.n = (int)puVar2;
  mVar4.err.data = local_50;
  return mVar4;
}

