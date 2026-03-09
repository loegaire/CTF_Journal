
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.(*File).Read(os.File * f, []uint8 b, int n, error err) */

multireturn_int_error_ os___File__Read(os_File *f,__uint8 b)

{
  uint8 *puVar1;
  uint8 *extraout_RAX;
  runtime_itab *prVar2;
  uint8 *puVar3;
  char cVar4;
  int iVar5;
  long in_FS_OFFSET;
  multireturn_int_error_ mVar6;
  multireturn_int_error_ mVar7;
  __uint8 p;
  os_File *f_spill;
  __uint8 b_spill;
  uint8 *local_70;
  char local_60;
  runtime_itab *local_58;
  runtime_itab *local_50;
  uint8 *local_48;
  
  iVar5 = b.cap;
  p.array = b.array;
                    /* Unresolved local var: error e@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: error err@[???] */
  prVar2 = os_ErrInvalid.tab;
  if (f_spill != (os_File *)0x0) {
    prVar2 = (runtime_itab *)0x0;
  }
  if (prVar2 != (runtime_itab *)0x0) {
    mVar7.err.tab = (runtime_itab *)p.array;
    mVar7.n = (int)f_spill;
    mVar7.err.data = prVar2;
    return mVar7;
  }
  local_70 = b_spill.array;
  p.len = b_spill.cap;
  p.cap = iVar5;
  internal_poll___FD__Read((internal_poll_FD *)f_spill,p);
  local_60 = (char)b_spill.cap;
  if (local_50 == (runtime_itab *)0x0) {
    cVar4 = '\x01';
  }
  else if (io_EOF.tab == local_50) {
    local_70 = local_48;
    runtime_ifaceeq(local_58,local_48,local_50);
    cVar4 = local_60;
  }
  else {
    cVar4 = '\0';
  }
  if (cVar4 == '\0') {
    puVar3 = local_48;
    if (internal_poll_ErrFileClosing.tab == local_50) {
      local_70 = local_48;
      runtime_ifaceeq(local_58,local_48,local_50);
      if (local_60 != '\0') {
        local_50 = os_ErrClosed.tab;
        puVar3 = os_ErrClosed.data;
      }
    }
    runtime_newobject((runtime__type *)&DAT_00257220);
    local_70[8] = 4;
    local_70[9] = 0;
    local_70[10] = 0;
    local_70[0xb] = 0;
    local_70[0xc] = 0;
    local_70[0xd] = 0;
    local_70[0xe] = 0;
    local_70[0xf] = 0;
    *(undefined **)local_70 = &DAT_00288621;
    puVar1 = (f_spill->file->name).str;
    *(int *)(local_70 + 0x18) = (f_spill->file->name).len;
    if (runtime_writeBarrier._0_4_ == 0) {
      *(uint8 **)(local_70 + 0x10) = puVar1;
    }
    else {
      runtime_gcWriteBarrierDX();
      local_70 = extraout_RAX;
    }
    *(runtime_itab **)(local_70 + 0x20) = local_50;
    if (runtime_writeBarrier._0_4_ == 0) {
      *(uint8 **)(local_70 + 0x28) = puVar3;
    }
    else {
      runtime_gcWriteBarrierCX();
    }
    local_50 = (runtime_itab *)go_itab__io_fs_PathError_error;
  }
  mVar6.err.tab = (runtime_itab *)local_48;
  mVar6.n = (int)local_58;
  mVar6.err.data = local_50;
  return mVar6;
}

