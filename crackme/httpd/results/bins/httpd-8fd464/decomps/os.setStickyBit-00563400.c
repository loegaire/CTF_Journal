
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.setStickyBit(string name, error ~r1) */

error os_setStickyBit(string name)

{
  long in_FS_OFFSET;
  string name_00;
  error eVar1;
  string name_01;
  multireturn_io_fs_FileInfo_error_ mVar3;
  string name_spill;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 local_20;
  undefined8 local_18;
  error eVar2;
  
  name_00.len = name.len;
                    /* Unresolved local var: io/fs.FileInfo fi@[???]
                       Unresolved local var: error err@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  name_00.str = name_spill.str;
  mVar3 = os_Stat(name_00);
  if (local_18 != (runtime_itab *)0x0) {
    eVar1.data = local_20;
    eVar1.tab = local_18;
    return eVar1;
  }
  (**(code **)(CONCAT44(uStack_24,local_28) + 0x28))(mVar3.~r2.data);
  local_30 = (uint)name_spill.len;
  name_01.str = (uint8 *)(ulong)(local_30 | 0x100000);
  name_01.len = (int)local_20;
  eVar2 = os_chmod(name_01,local_30);
  eVar2.tab = local_20;
  return eVar2;
}

