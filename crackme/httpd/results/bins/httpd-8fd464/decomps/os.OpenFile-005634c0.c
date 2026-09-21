
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.OpenFile(string name, int flag, io/fs.FileMode perm, os.File *
   ~r3, error ~r4) */

multireturn_os_File___error_ os_OpenFile(string name,int flag,io_fs_FileMode perm)

{
  void *pvVar1;
  long in_FS_OFFSET;
  string name_00;
  string name_01;
  multireturn_os_File___error_ mVar2;
  multireturn_os_File___error_ mVar3;
  string name_spill;
  int flag_spill;
  io_fs_FileMode perm_spill;
  undefined8 local_20;
  undefined8 local_18;
  
  name_00.len = name.len;
                    /* Unresolved local var: os.File * f@[???]
                       Unresolved local var: error err@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  name_00.str = name_spill.str;
  internal_testlog_Open(name_00);
  name_01.len = name_00.len;
  name_01.str = (uint8 *)flag_spill;
  mVar2 = os_openFileNolog(name_01,(ulong)perm_spill,perm);
  if (local_18 != (void *)0x0) {
    mVar2.~r3 = (os_File *)local_20;
    mVar2.~r4.data = local_18;
    return mVar2;
  }
  pvVar1 = (void *)*local_20;
  *(bool *)((long)pvVar1 + 0x52) = ((uint)flag_spill >> 3 & 1) != 0;
  mVar3.~r4.tab = mVar2.~r4.tab;
  mVar3.~r3 = (os_File *)local_20;
  mVar3.~r4.data = pvVar1;
  return mVar3;
}

