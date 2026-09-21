
/* WARNING: Removing unreachable block (ram,0x0056399e) */
/* WARNING: Removing unreachable block (ram,0x005639ae) */
/* WARNING: Removing unreachable block (ram,0x005639e7) */
/* WARNING: Removing unreachable block (ram,0x005639d7) */
/* WARNING: Removing unreachable block (ram,0x005639fb) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.ReadFile(string name, []uint8 ~r1, error ~r2) */

multireturn___uint8_error_ os_ReadFile(string name)

{
  runtime__type *cap;
  runtime__type *et;
  int in_RCX;
  runtime__type *prVar1;
  runtime__type *prVar2;
  void *in_RSI;
  runtime_itab *in_RDI;
  runtime__type *prVar3;
  long in_FS_OFFSET;
  string name_00;
  multireturn_os_File___error_ mVar4;
  runtime_slice old;
  __uint8 b;
  multireturn___uint8_error_ mVar5;
  multireturn_io_fs_FileInfo_error__conflict mVar6;
  string name_spill;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  runtime__type *local_90;
  runtime__type *local_88;
  long local_80;
  int local_78;
  runtime__type *local_70;
  runtime__type *local_28;
  runtime__type *local_20;
  undefined8 local_18;
  undefined **ppuStack_10;
  
  name_00.len = name.len;
                    /* Unresolved local var: os.File * f@[???]
                       Unresolved local var: int size@[???]
                       Unresolved local var: error err@[???]
                       Unresolved local var: []uint8 data@[???] */
  while (&local_28 <= *(runtime__type ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_18 = 0;
  ppuStack_10 = (undefined **)0x0;
  uStack0000000000000018 = 0;
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000038 = 0;
  local_90 = (runtime__type *)((ulong)local_90 & 0xffffffff00000000);
  name_00.str = (uint8 *)name_spill.len;
  mVar4 = os_OpenFile(name_00,in_RCX,(io_fs_FileMode)in_RDI);
  mVar5.~r1.len = mVar4.~r4.tab;
  if (local_80 != 0) {
    mVar5.~r1.array = (uint8 *)local_80;
    mVar5.~r1.cap = local_78;
    mVar5.~r2.data = in_RSI;
    mVar5.~r2.tab = in_RDI;
    return mVar5;
  }
  local_20 = local_88;
  ppuStack_10 = &PTR_os___File__Close_002b36e0;
                    /* Unresolved local var: io/fs.FileInfo info@[???] */
  mVar6 = os___File__Stat((os_File *)&PTR_os___File__Close_002b36e0);
  prVar3 = mVar6.~r1.data;
                    /* Unresolved local var: int64 size64@[???] */
  if (local_90 == (runtime__type *)0x0) {
    (**(code **)(name_spill.len + 0x38))();
  }
  else {
    name_spill.len = 0;
  }
  et = (runtime__type *)(name_spill.len + 1);
  if ((long)et < 0x200) {
    et = (runtime__type *)0x200;
  }
  runtime_makeslice(et,(int)mVar6.~r0.data,0x225720);
  prVar2 = (runtime__type *)0x0;
  do {
    if ((long)et <= (long)prVar2) {
                    /* Unresolved local var: []uint8 d@[???] */
      cap = (runtime__type *)((long)&et->size + 1);
      prVar1 = et;
      if (et < cap) {
        old.len = (int)&DAT_00225720;
        old.array = prVar2;
        old.cap = (int)prVar3;
        runtime_growslice(local_90,old,(int)cap);
        local_90 = (runtime__type *)0x0;
        prVar1 = local_70;
        local_88 = cap;
      }
      *(undefined1 *)((long)&et->size + (long)&local_90->size) = 0;
      et = prVar1;
      if (prVar1 < prVar2) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAcap();
      }
    }
    b.len = (int)local_20;
    b.array = (uint8 *)prVar2;
    b.cap = (long)et - (long)prVar2;
    local_28 = local_90;
    os___File__Read((os_File *)local_90,b);
    prVar2 = (runtime__type *)((long)&local_88->size + (long)&prVar2->size);
    local_90 = local_28;
    prVar3 = et;
    if (et < prVar2) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAcap();
    }
  } while( true );
}

