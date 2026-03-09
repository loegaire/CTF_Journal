
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.Lstat(string name, io/fs.FileInfo ~r1, error ~r2) */

multireturn_io_fs_FileInfo_error_ os_Lstat(string name)

{
  long in_FS_OFFSET;
  string name_00;
  string name_01;
  multireturn_io_fs_FileInfo_error_ mVar1;
  string name_spill;
  undefined8 local_28;
  undefined8 local_18;
  undefined8 local_10;
  
  name_00.len = name.len;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  name_00.str = name_spill.str;
  internal_testlog_Stat(name_00);
  name_01.len = name_00.len;
  name_01.str = (uint8 *)name_spill.len;
  mVar1 = os_lstatNolog(name_01);
  mVar1.~r1.data = local_10;
  mVar1.~r1.tab = local_28;
  mVar1.~r2.tab = local_18;
  return mVar1;
}

