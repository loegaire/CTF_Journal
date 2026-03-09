
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.(*File).Seek(os.File * f, int64 offset, int whence, int64 ret,
   error err) */

multireturn_int64_error__conflict7 os___File__Seek(os_File *f,int64 offset,int whence)

{
  uint8 *puVar1;
  char cVar2;
  undefined8 *extraout_RAX;
  undefined8 *extraout_RAX_00;
  runtime_itab *prVar3;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  multireturn_int64_error__conflict7 mVar5;
  multireturn_int64_error__conflict7 mVar6;
  multireturn_int64_error__conflict7 mVar7;
  os_File *f_spill;
  int64 offset_spill;
  int whence_spill;
  undefined8 *local_50;
  char local_40;
  undefined7 uStack_3f;
  runtime_itab *local_38;
  undefined8 *local_30;
  
                    /* Unresolved local var: int64 r@[???]
                       Unresolved local var: error e@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: error err@[???] */
  prVar3 = os_ErrInvalid.tab;
  if (f_spill != (os_File *)0x0) {
    prVar3 = (runtime_itab *)0x0;
  }
  if (prVar3 != (runtime_itab *)0x0) {
    mVar7.err.tab = (runtime_itab *)offset;
    mVar7.ret = (int64)f_spill;
    mVar7.err.data = prVar3;
    return mVar7;
  }
  local_50 = (undefined8 *)offset_spill;
  os___File__seek(f_spill,offset,whence_spill);
  if (((local_38 == (runtime_itab *)0x0) && (f_spill->file->dirinfo != (os_dirInfo *)0x0)) &&
     (CONCAT71(uStack_3f,local_40) != 0)) {
    local_38 = (runtime_itab *)go_itab_syscall_Errno_error;
    local_30 = &os__stmp_5;
  }
  if (local_38 == (runtime_itab *)0x0) {
    mVar6.err.tab = (runtime_itab *)f_spill;
    mVar6.ret = CONCAT71(uStack_3f,local_40);
    mVar6.err.data = (void *)0x0;
    return mVar6;
  }
  if (io_EOF.tab == local_38) {
    runtime_ifaceeq(io_EOF.data,f_spill,local_38);
    cVar2 = local_40;
    local_50 = local_30;
  }
  else {
    cVar2 = '\0';
  }
  if (cVar2 == '\0') {
    puVar4 = local_30;
    if ((internal_poll_ErrFileClosing.tab == local_38) &&
       (runtime_ifaceeq(internal_poll_ErrFileClosing.data,f_spill,local_38), local_50 = local_30,
       local_40 != '\0')) {
      local_38 = os_ErrClosed.tab;
      puVar4 = os_ErrClosed.data;
    }
    runtime_newobject((runtime__type *)&DAT_00257220);
    local_50[1] = 4;
    *local_50 = &DAT_002886ad;
    puVar1 = (f_spill->file->name).str;
    local_50[3] = (f_spill->file->name).len;
    if (runtime_writeBarrier._0_4_ == 0) {
      local_50[2] = puVar1;
      local_30 = local_50;
    }
    else {
      runtime_gcWriteBarrierDX();
      local_30 = extraout_RAX;
    }
    local_30[4] = local_38;
    if (runtime_writeBarrier._0_4_ == 0) {
      local_30[5] = puVar4;
    }
    else {
      runtime_gcWriteBarrierCX();
      local_30 = extraout_RAX_00;
    }
    local_38 = (runtime_itab *)go_itab__io_fs_PathError_error;
  }
  mVar5.err.tab = (runtime_itab *)f_spill;
  mVar5.ret = (int64)local_30;
  mVar5.err.data = local_38;
  return mVar5;
}

