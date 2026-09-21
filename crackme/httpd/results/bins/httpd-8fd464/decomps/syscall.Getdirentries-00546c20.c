
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.Getdirentries(int fd, []uint8 buf, uintptr * basep, int n,
   error err) */

multireturn_int_error_ syscall_Getdirentries(int fd,__uint8 buf,uintptr *basep)

{
  runtime__type *et;
  int extraout_RAX;
  int cap;
  runtime__type *prVar1;
  int iVar2;
  int in_R8;
  long in_FS_OFFSET;
  __uint8 buf_00;
  __uint8 buf_01;
  multireturn_int_error_ mVar3;
  __uint8 buf_02;
  multireturn_int_error_ mVar4;
  __uint8 old;
  int fd_spill;
  __uint8 buf_spill;
  uintptr *basep_spill;
  undefined1 local_60;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 local_38;
  
  iVar2 = buf.cap;
  cap = buf.len;
  buf_00.array = buf.array;
                    /* Unresolved local var: []uint8 oldBuf@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    fd = extraout_RAX;
  }
  syscall_supportsABI((uint32)fd);
  if (local_60 == '\0') {
    et = (runtime__type *)(((long)(((ulong)buf_spill.len >> 2) + 0x3ff) >> 10) << 10);
    runtime_makeslice(et,(int)buf_00.array,cap);
    buf_00.len = (int)et;
    buf_00.cap = iVar2;
    mVar3 = syscall_getdirentries(local_50,buf_00,basep);
    prVar1 = mVar3.err.tab;
    if ((local_38 == (void *)0x0) && (0 < (long)local_40)) {
      if (et < local_40) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAcap();
      }
      buf_02.len = (int)et;
      buf_02.array = (uint8 *)local_50;
      buf_02.cap = (int)local_40;
      old.len = (int)basep;
      old.array = (uint8 *)iVar2;
      old.cap = in_R8;
      syscall_convertFromDirents11(buf_02,old);
      local_40 = (runtime__type *)0x0;
      prVar1 = et;
    }
    mVar4.err.tab = (runtime_itab *)prVar1;
    mVar4.n = (int)local_38;
    mVar4.err.data = local_40;
    return mVar4;
  }
  buf_01.len = cap;
  buf_01.array = buf_00.array;
  buf_01.cap = iVar2;
  mVar3 = syscall_getdirentries_freebsd12((int)basep_spill,buf_01,basep);
  mVar3.n = (int)local_40;
  mVar3.err.data = local_38;
  return mVar3;
}

