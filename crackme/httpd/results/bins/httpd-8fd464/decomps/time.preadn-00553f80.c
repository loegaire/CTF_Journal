
/* WARNING: Removing unreachable block (ram,0x00554085) */
/* WARNING: Removing unreachable block (ram,0x0055408f) */
/* WARNING: Removing unreachable block (ram,0x0055400f) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.preadn(uintptr fd, []uint8 buf, int off, error ~r3) */

error time_preadn(uintptr fd,__uint8 buf,int off)

{
  int whence;
  int iVar1;
  long in_FS_OFFSET;
  error eVar2;
  error eVar3;
  error eVar4;
  error eVar5;
  multireturn_int64_error__conflict4 mVar6;
  __uint8 p;
  uintptr fd_spill;
  __uint8 buf_spill;
  int off_spill;
  runtime_itab *local_38;
  runtime_itab *local_30;
  
  iVar1 = buf.cap;
                    /* Unresolved local var: int whence@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: error err@[???] */
  whence = 0;
  if (off_spill < 0) {
    whence = 2;
  }
  mVar6 = syscall_Seek(fd_spill,(int64)buf.array,whence);
  eVar2.data = mVar6.err.tab;
  if (local_38 != (runtime_itab *)0x0) {
    eVar2.tab = local_38;
    return eVar2;
  }
  if (buf_spill.len < 1) {
    eVar5.data = eVar2.data;
    eVar5.tab = (runtime_itab *)buf_spill.len;
    return eVar5;
  }
  p.len = buf_spill.cap;
  p.array = (uint8 *)fd_spill;
  p.cap = iVar1;
  syscall_read(buf_spill.len,p);
  if (local_30 == (runtime_itab *)0x0) {
    runtime_newobject((runtime__type *)&DAT_00241ea0);
    buf_spill.array[8] = 10;
    buf_spill.array[9] = 0;
    buf_spill.array[10] = 0;
    buf_spill.array[0xb] = 0;
    buf_spill.array[0xc] = 0;
    buf_spill.array[0xd] = 0;
    buf_spill.array[0xe] = 0;
    buf_spill.array[0xf] = 0;
    *(undefined **)buf_spill.array = &DAT_002903c6;
    eVar4.data = (void *)0x0;
    eVar4.tab = (runtime_itab *)buf_spill.array;
    return eVar4;
  }
  eVar3.data = local_30;
  eVar3.tab = local_30;
  return eVar3;
}

