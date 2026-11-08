
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.loadTzinfoFromDirOrZip(string dir, string name, []uint8 ~r2,
   error ~r3) */

multireturn___uint8_error__conflict3 time_loadTzinfoFromDirOrZip(string dir,string name)

{
  int in_RSI;
  uint8 *puVar1;
  uint8 *in_R8;
  int in_R9;
  long in_FS_OFFSET;
  string sVar2;
  string name_00;
  string a0;
  string a1;
  string name_01;
  multireturn___uint8_error__conflict3 mVar3;
  multireturn___uint8_error_ mVar4;
  multireturn___uint8_error__conflict3 mVar5;
  string a2;
  string dir_spill;
  string name_spill;
  int local_40;
  undefined8 local_30;
  uint8 *local_28;
  void *local_20;
  uint8 *local_18;
  void *local_10;
  
  puVar1 = (uint8 *)name.len;
  sVar2.len = (uint8 *)dir.len;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((4 < dir_spill.len) && (*(int *)(dir_spill.str + dir_spill.len + -4) == 0x70697a2e)) {
    sVar2.str = (uint8 *)name_spill.len;
    name_01.len = (int)puVar1;
    name_01.str = dir_spill.str;
    mVar3 = time_loadTzinfoFromZip(sVar2,name_01);
    mVar3.~r2.len = (int)local_20;
    mVar3.~r2.array = (uint8 *)local_30;
    mVar3.~r2.cap = (int)local_18;
    mVar3.~r3.data = local_10;
    return mVar3;
  }
  if (dir_spill.len != 0) {
    local_40 = dir_spill.len;
    local_30 = 1;
    local_28 = name_spill.str;
    local_20 = (void *)name_spill.len;
    a0.len = (int)dir_spill.str;
    a0.str = sVar2.len;
    a1.len = in_RSI;
    a1.str = puVar1;
    a2.len = in_R9;
    a2.str = in_R8;
    sVar2 = runtime_concatstring3((runtime_tmpBuf *)name_spill.len,a0,a1,a2);
    name_spill.str = local_18;
  }
  name_00.len = (int)sVar2.len;
  name_00.str = name_spill.str;
  mVar4 = time_readFile(name_00);
  mVar5.~r3.tab = mVar4.~r2.tab;
  mVar5.~r2.len = local_30;
  mVar5.~r2.array = (uint8 *)local_40;
  mVar5.~r2.cap = (int)local_28;
  mVar5.~r3.data = local_20;
  return mVar5;
}

