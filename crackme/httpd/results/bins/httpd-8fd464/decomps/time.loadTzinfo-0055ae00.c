
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.loadTzinfo(string name, string source, []uint8 ~r2, error
   ~r3) */

multireturn___uint8_error__conflict3 time_loadTzinfo(string name,string source)

{
  ulong uVar1;
  int in_RSI;
  uint8 *puVar2;
  __uint8 *in_R8;
  error *in_R9;
  long in_FS_OFFSET;
  string dir;
  string sVar3;
  string name_00;
  multireturn___uint8_error__conflict3 mVar4;
  multireturn___uint8_error__conflict3 mVar5;
  string sVar6;
  string name_spill;
  string source_spill;
  undefined8 local_30;
  undefined8 local_28;
  void *local_20;
  int local_18;
  runtime_itab *local_10;
  
  puVar2 = (uint8 *)source.len;
  uVar1 = name.len;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (((5 < source_spill.len) &&
      (uVar1 = (ulong)*(uint *)(source_spill.str + source_spill.len + -6),
      *(uint *)(source_spill.str + source_spill.len + -6) == 0x61647a74)) &&
     (uVar1 = (ulong)*(ushort *)(source_spill.str + source_spill.len + -2),
     *(ushort *)(source_spill.str + source_spill.len + -2) == 0x6174)) {
    sVar3.len = in_RSI;
    sVar3.str = puVar2;
    sVar6.len = (int)source_spill.str;
    sVar6.str = (uint8 *)time_loadTzinfoFromTzdata;
    (**time_loadTzinfoFromTzdata)(sVar3,sVar6,in_R8,in_R9);
    mVar4.~r2.len = local_28;
    mVar4.~r2.array = (uint8 *)local_30;
    mVar4.~r2.cap = local_18;
    mVar4.~r3.data = local_20;
    mVar4.~r3.tab = local_10;
    return mVar4;
  }
  dir.len = uVar1;
  dir.str = (uint8 *)name_spill.len;
  name_00.len = (int)puVar2;
  name_00.str = source_spill.str;
  mVar4 = time_loadTzinfoFromDirOrZip(dir,name_00);
  mVar5.~r3.tab = mVar4.~r3.tab;
  mVar5.~r2.len = (int)local_20;
  mVar5.~r2.array = (uint8 *)local_30;
  mVar5.~r2.cap = local_18;
  mVar5.~r3.data = local_10;
  return mVar5;
}

