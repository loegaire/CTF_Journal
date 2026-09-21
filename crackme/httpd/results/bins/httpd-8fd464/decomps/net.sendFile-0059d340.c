
/* WARNING: Removing unreachable block (ram,0x0059d5fb) */
/* WARNING: Removing unreachable block (ram,0x0059d6c5) */
/* WARNING: Removing unreachable block (ram,0x0059d6c0) */
/* WARNING: Removing unreachable block (ram,0x0059d70f) */
/* WARNING: Removing unreachable block (ram,0x0059d704) */
/* WARNING: Removing unreachable block (ram,0x0059d71d) */
/* WARNING: Removing unreachable block (ram,0x0059d667) */
/* WARNING: Removing unreachable block (ram,0x0059d671) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.sendFile(net.netFD * c, io.Reader r, int64 written, error err,
   bool handled) */

multireturn_int64_error_bool_ net_sendFile(net_netFD *c,io_Reader r)

{
  os_File *f;
  long extraout_RAX;
  long lVar1;
  long extraout_RAX_00;
  void *pvVar2;
  void *pvVar3;
  os_File *poVar4;
  runtime_itab *prVar5;
  undefined1 *puVar6;
  void *whence;
  undefined8 in_RDI;
  long lVar7;
  long in_FS_OFFSET;
  multireturn_int64_error__conflict7 mVar8;
  multireturn_io_fs_FileInfo_error__conflict mVar9;
  multireturn_int64_error_bool_ mVar10;
  multireturn_int64_error_bool_ mVar11;
  multireturn_int64_error_bool_ mVar12;
  multireturn_int64_error_bool_ mVar13;
  multireturn_int64_error_bool_ mVar14;
  multireturn_int64_error_bool_ mVar15;
  net_netFD *c_spill;
  io_Reader r_spill;
  os_File *local_80;
  undefined1 *local_78;
  long local_70;
  void *local_68;
  
                    /* Unresolved local var: int64 * &written@[???]
                       Unresolved local var: int64 remain@[???]
                       Unresolved local var: io.LimitedReader * lr@[???]
                       Unresolved local var: int64 pos@[???]
                       Unresolved local var: error * &werr@[???]
                       Unresolved local var: syscall.RawConn sc@[???]
                       Unresolved local var: error err1@[???]
                       Unresolved local var: uint8 * ~R0.data@[???]
                       Unresolved local var: uintptr ~R0.itab@[???] */
  while (mVar14.handled = (undefined1)in_RDI,
        &stack0xfffffffffffffff8 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_newobject((runtime__type *)&DAT_00224d60);
  if (r_spill.tab == (runtime_itab *)go_itab__io_LimitedReader_io_Reader) {
    poVar4 = *(os_File **)((long)r_spill.data + 0x10);
    r_spill.tab = *(runtime_itab **)r_spill.data;
    whence = *(void **)((long)r_spill.data + 8);
    pvVar2 = r_spill.data;
    if ((long)poVar4 < 1) {
      mVar10.err.tab = r_spill.tab;
      mVar10.written = (int64)local_80->file;
      mVar10.handled = (bool)mVar14.handled;
      mVar10.err.data = r_spill.data;
      return mVar10;
    }
  }
  else {
    pvVar2 = (void *)0x0;
    poVar4 = (os_File *)0x0;
    whence = r_spill.data;
  }
  mVar14.handled = 0xa0;
  if (r_spill.tab != (runtime_itab *)go_itab__os_File_io_Reader) {
    mVar15.err.tab = r_spill.tab;
    mVar15.written = (int64)local_80->file;
    mVar15.handled = true;
    mVar15.err.data = pvVar2;
    return mVar15;
  }
  f = local_80;
  pvVar3 = pvVar2;
  puVar6 = go_itab__os_File_io_Reader;
  if (poVar4 == (os_File *)0x0) {
                    /* Unresolved local var: io/fs.FileInfo fi@[???]
                       Unresolved local var: error err@[???] */
    mVar9 = os___File__Stat(local_80);
    mVar14.handled = mVar9.~r1.data._0_1_;
    if (local_70 != 0) {
      local_80->file = (os_file *)0x0;
      mVar14.err.tab = (runtime_itab *)local_78;
      mVar14.written = local_70;
      mVar14.err.data = local_68;
      return mVar14;
    }
    pvVar3 = local_68;
    f = (os_File *)(*(code *)local_80[7].file)();
    poVar4 = local_80;
    puVar6 = local_78;
  }
  mVar8 = os___File__Seek(f,(int64)puVar6,(int)pvVar3);
  mVar13.err.tab = mVar8.err.tab;
  if (local_68 == (void *)0x0) {
                    /* Unresolved local var: error err@[???] */
    prVar5 = os_ErrInvalid.tab;
    if (whence != (void *)0x0) {
      prVar5 = (runtime_itab *)0x0;
    }
    if (prVar5 == (runtime_itab *)0x0) {
      runtime_newobject((runtime__type *)&DAT_002442a0);
      lVar7 = 0;
      pvVar3 = whence;
      if (runtime_writeBarrier._0_4_ != 0) {
        runtime_gcWriteBarrier();
        pvVar3 = _DAT_00000000;
      }
      _DAT_00000000 = pvVar3;
      prVar5 = (runtime_itab *)0x0;
      puVar6 = go_itab__os_rawConn_syscall_RawConn;
    }
    else {
      puVar6 = (undefined1 *)0x0;
      lVar7 = 0;
    }
    if (prVar5 == (runtime_itab *)0x0) {
      runtime_newobject((runtime__type *)&DAT_0023c640);
      _DAT_00000000 = (code *)0x0;
      _DAT_00000008 = (net_netFD *)0x0;
      runtime_newobject((runtime__type *)0x0);
      lVar1 = 0;
      _DAT_00000000 = net_sendFile_func1;
      if (runtime_writeBarrier._0_4_ == 0) {
        _DAT_00000008 = c_spill;
      }
      else {
        lVar7 = 8;
        runtime_gcWriteBarrierCX();
        lVar1 = extraout_RAX;
      }
      *(long *)(lVar1 + 0x10) = local_70;
      *(os_File **)(lVar1 + 0x18) = poVar4;
      if (runtime_writeBarrier._0_4_ == 0) {
        *(os_File **)(lVar1 + 0x20) = local_80;
        *(undefined8 *)(lVar1 + 0x28) = 0;
      }
      else {
        runtime_gcWriteBarrierDX();
        lVar7 = extraout_RAX_00 + 0x28;
        runtime_gcWriteBarrierBX();
      }
      (**(code **)(puVar6 + 0x20))();
      if (pvVar2 != (void *)0x0) {
        lVar7 = (long)poVar4 - (long)local_80->file;
        *(long *)((long)pvVar2 + 0x10) = lVar7;
      }
      mVar14.handled = (undefined1)lVar7;
      mVar8 = os___File__Seek((os_File *)local_80->file,(int64)local_80,(int)whence);
      mVar11.err.tab = mVar8.err.tab;
      mVar11.written = 1;
      mVar11.handled = (bool)mVar14.handled;
      mVar11.err.data = (void *)local_70;
      return mVar11;
    }
    local_80->file = (os_file *)0x0;
    mVar12.err.tab = (runtime_itab *)puVar6;
    mVar12.written = (int64)local_80->file;
    mVar12.handled = (undefined1)lVar7;
    mVar12.err.data = whence;
    return mVar12;
  }
  local_80->file = (os_file *)0x0;
  mVar13.written = (int64)local_80->file;
  mVar13.handled = (bool)mVar14.handled;
  mVar13.err.data = local_68;
  return mVar13;
}

