
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.(*File).Stat(os.File * f, io/fs.FileInfo ~r0, error ~r1) */

multireturn_io_fs_FileInfo_error__conflict os___File__Stat(os_File *f)

{
  os_file *poVar1;
  runtime__type *prVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  runtime_itab *extraout_RAX;
  runtime_itab *extraout_RAX_00;
  runtime_itab *prVar7;
  syscall_Stat_t *unaff_RBX;
  runtime__type **in_RDI;
  long in_FS_OFFSET;
  error eVar8;
  string name;
  multireturn_io_fs_FileInfo_error__conflict mVar9;
  multireturn_io_fs_FileInfo_error__conflict mVar10;
  multireturn_io_fs_FileInfo_error__conflict mVar11;
  os_File *f_spill;
  runtime_itab *local_38;
  runtime_interfacetype *local_30;
  runtime__type *local_28;
  
                    /* Unresolved local var: os.fileStat * &fs@[???]
                       Unresolved local var: error err@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (f_spill != (os_File *)0x0) {
    runtime_newobject((runtime__type *)&DAT_0026aa40);
    prVar7 = (runtime_itab *)local_38[1].fun;
    eVar8 = internal_poll___FD__Fstat((internal_poll_FD *)f_spill,unaff_RBX);
    mVar9.~r0.data = eVar8.data;
    if (local_30 != (runtime_interfacetype *)0x0) {
      runtime_newobject((runtime__type *)&DAT_00257220);
      local_38[2].inter = (runtime_interfacetype *)0x4;
      *(undefined **)prVar7 = &DAT_00288755;
      poVar1 = f_spill->file;
      prVar2 = (runtime__type *)(poVar1->name).str;
      uVar3 = *(undefined1 *)((long)&(poVar1->name).len + 4);
      uVar4 = *(undefined1 *)((long)&(poVar1->name).len + 5);
      uVar5 = *(undefined1 *)((long)&(poVar1->name).len + 6);
      uVar6 = *(undefined1 *)((long)&(poVar1->name).len + 7);
      local_38[2].hash = *(undefined4 *)&(poVar1->name).len;
      local_38[2]._[0] = uVar3;
      local_38[2]._[1] = uVar4;
      local_38[2]._[2] = uVar5;
      local_38[2]._[3] = uVar6;
      if (runtime_writeBarrier._0_4_ == 0) {
        local_38[2]._type = prVar2;
      }
      else {
        in_RDI = &local_38[2]._type;
        runtime_gcWriteBarrierDX();
        prVar7 = extraout_RAX;
      }
      prVar7[1].inter = local_30;
      if (runtime_writeBarrier._0_4_ == 0) {
        prVar7[1]._type = local_28;
      }
      else {
        in_RDI = &prVar7[1]._type;
        runtime_gcWriteBarrierCX();
        prVar7 = extraout_RAX_00;
      }
      mVar9.~r0.tab = prVar7;
      mVar9.~r1.data = in_RDI;
      mVar9.~r1.tab = (runtime_itab *)go_itab__io_fs_PathError_error;
      return mVar9;
    }
    prVar7 = (runtime_itab *)(f_spill->file->name).str;
    name.len = (int)prVar7;
    name.str = mVar9.~r0.data;
    os_fillFileStatFromSys((os_fileStat *)(f_spill->file->name).len,name);
    mVar10.~r0.data = mVar9.~r0.data;
    mVar10.~r0.tab = local_38;
    mVar10.~r1.data = in_RDI;
    mVar10.~r1.tab = prVar7;
    return mVar10;
  }
  mVar11.~r0.data = unaff_RBX;
  mVar11.~r0.tab = os_ErrInvalid.tab;
  mVar11.~r1.data = in_RDI;
  mVar11.~r1.tab = os_ErrInvalid.data;
  return mVar11;
}

