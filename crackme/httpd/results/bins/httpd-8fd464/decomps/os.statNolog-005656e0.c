
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.statNolog(string name, io/fs.FileInfo ~r1, error ~r2) */

multireturn_io_fs_FileInfo_error_ os_statNolog(string name)

{
  runtime_itab *extraout_RAX;
  runtime_itab *extraout_RAX_00;
  runtime__type **in_RDI;
  long in_FS_OFFSET;
  string path;
  string name_00;
  multireturn_io_fs_FileInfo_error_ mVar1;
  multireturn_io_fs_FileInfo_error_ mVar2;
  string name_spill;
  os_fileStat *local_40;
  runtime_interfacetype *local_30;
  runtime__type *local_28;
  
                    /* Unresolved local var: os.fileStat * &fs@[???]
                       Unresolved local var: error err@[???]
                       Unresolved local var: uint8 * ~R0.data@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_newobject((runtime__type *)&DAT_0026aa40);
                    /* Unresolved local var: error err@[???] */
  do {
    path.len = (int)&local_40->sys;
    path.str = (uint8 *)local_40;
    syscall_Stat(path,(syscall_Stat_t *)name_spill.str);
    if ((local_30 == (runtime_interfacetype *)0x0) ||
       (in_RDI = (runtime__type **)&DAT_002463a0,
       (undefined *)(local_30->typ).ptrdata != &DAT_002463a0)) break;
  } while (local_28->size == 4);
  if (local_30 == (runtime_interfacetype *)0x0) {
    name_00.len = name_spill.len;
    name_00.str = (uint8 *)local_28;
    os_fillFileStatFromSys(local_40,name_00);
    mVar2.~r1.data = local_28;
    mVar2.~r1.tab = (runtime_itab *)local_40;
    mVar2.~r2.data = in_RDI;
    mVar2.~r2.tab = (runtime_itab *)name_spill.len;
    return mVar2;
  }
  runtime_newobject((runtime__type *)&DAT_00257220);
  *(undefined8 *)(name_spill.len + 8) = 4;
  *(undefined **)name_spill.len = &DAT_00288755;
  *(int *)(name_spill.len + 0x18) = name_spill.len;
  if (runtime_writeBarrier._0_4_ == 0) {
    *(uint8 **)(name_spill.len + 0x10) = name_spill.str;
  }
  else {
    in_RDI = (runtime__type **)(name_spill.len + 0x10);
    runtime_gcWriteBarrierCX();
    name_spill.len = (int)extraout_RAX;
  }
  ((runtime_itab *)(name_spill.len + 0x20))->inter = local_30;
  if (runtime_writeBarrier._0_4_ == 0) {
    ((runtime_itab *)(name_spill.len + 0x20))->_type = local_28;
  }
  else {
    in_RDI = &((runtime_itab *)(name_spill.len + 0x20))->_type;
    runtime_gcWriteBarrierCX();
    name_spill.len = (int)extraout_RAX_00;
  }
  mVar1.~r1.data = local_28;
  mVar1.~r1.tab = (runtime_itab *)name_spill.len;
  mVar1.~r2.data = in_RDI;
  mVar1.~r2.tab = (runtime_itab *)go_itab__io_fs_PathError_error;
  return mVar1;
}

