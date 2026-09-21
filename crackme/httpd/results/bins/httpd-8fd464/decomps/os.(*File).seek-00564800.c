
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.(*File).seek(os.File * f, int64 offset, int whence, int64 ret,
   error err) */

multireturn_int64_error__conflict7 os___File__seek(os_File *f,int64 offset,int whence)

{
  os_dirInfo *poVar1;
  internal_poll_FD *extraout_RAX;
  long in_FS_OFFSET;
  interface___ x;
  multireturn_int64_error__conflict5 mVar2;
  multireturn_int64_error__conflict7 mVar3;
  os_File *f_spill;
  int64 offset_spill;
  int whence_spill;
  undefined8 local_28;
  void *local_20;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  poVar1 = f_spill->file->dirinfo;
  if (poVar1 != (os_dirInfo *)0x0) {
    if (poVar1->buf != (__uint8 *)0x0) {
      x.data = poVar1;
      x._type = (runtime__type *)offset;
      sync___Pool__Put((sync_Pool *)&DAT_00219520,x);
      if (runtime_writeBarrier._0_4_ == 0) {
        poVar1->buf = (__uint8 *)0x0;
      }
      else {
        runtime_gcWriteBarrier();
      }
    }
    if (runtime_writeBarrier._0_4_ == 0) {
      f_spill->file->dirinfo = (os_dirInfo *)0x0;
    }
    else {
      runtime_gcWriteBarrierCX();
      f_spill = (os_File *)extraout_RAX;
    }
  }
  mVar2 = internal_poll___FD__Seek((internal_poll_FD *)f_spill,offset,whence_spill);
  mVar3.err.tab = mVar2.~r3.tab;
  mVar3.ret = local_28;
  mVar3.err.data = local_20;
  return mVar3;
}

