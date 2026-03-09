
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.ReadDir(string name, []io/fs.DirEntry ~r1, error ~r2) */

multireturn___io_fs_DirEntry_error_ os_ReadDir(string name)

{
  int in_RCX;
  int iVar1;
  void *in_RSI;
  undefined *puVar2;
  runtime_itab *in_RDI;
  long in_FS_OFFSET;
  multireturn_os_File___error_ mVar3;
  string name_00;
  interface___ x;
  multireturn___io_fs_DirEntry_error_ mVar4;
  multireturn___io_fs_DirEntry_error_ mVar5;
  string name_spill;
  undefined8 uStack0000000000000018;
  long lStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  uint uStack_84;
  os_File *local_80;
  long local_78;
  runtime_itab *local_70;
  undefined1 local_38 [40];
  undefined8 uStack_10;
  
  name_00.len = name.len;
                    /* Unresolved local var: os.File * f@[???]
                       Unresolved local var: error err@[???]
                       Unresolved local var: []io/fs.DirEntry dirs@[???] */
  while (local_38 + 0x18 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_38._32_8_ = (uint8 *)0x0;
  uStack_10._0_4_ = 0;
  uStack_10._4_4_ = 0;
  uStack0000000000000018 = 0;
  lStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000038 = 0;
  name_00.str = (uint8 *)name_spill.len;
  mVar3 = os_OpenFile(name_00,in_RCX,(io_fs_FileMode)in_RDI);
  mVar4.~r1.len = mVar3.~r4.tab;
  if (local_78 != 0) {
    mVar4.~r1.array = (io_fs_DirEntry *)local_78;
    mVar4.~r1.cap = (int)local_70;
    mVar4.~r2.data = in_RSI;
    mVar4.~r2.tab = in_RDI;
    return mVar4;
  }
  uStack_10 = &PTR_os___File__Close_002b36e0;
  local_38._32_8_ = local_80;
  os___File__ReadDir((os_File *)&PTR_os___File__Close_002b36e0,(int)mVar4.~r1.len);
  runtime_convTslice((__uint8)(ZEXT424(uStack_84) << 0x60));
  local_38._0_8_ = os_ReadDir_func1;
  iVar1 = 0;
  local_38._8_8_ = 0;
  puVar2 = &DAT_002215a0;
  x.data = local_80;
  x._type = (runtime__type *)local_38;
  local_38._16_8_ = (ulong)uStack_84 << 0x20;
  sort_Slice(x,(func_int__int__bool **)0x0);
  uStack0000000000000018 = 0;
  lStack0000000000000020 = (ulong)uStack_84 << 0x20;
  mVar5.~r1._0_16_ = os___File__Close((os_File *)local_38._32_8_);
  mVar5.~r1.cap = iVar1;
  mVar5.~r2.data = puVar2;
  mVar5.~r2.tab = local_70;
  return mVar5;
}

