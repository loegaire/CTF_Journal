
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.open(string name, net.file * ~r1, error ~r2) */

multireturn_net_file___error_ net_open(string name)

{
  runtime__type *extraout_RAX;
  runtime__type *typ;
  int in_RCX;
  undefined *puVar1;
  undefined *puVar2;
  undefined8 in_RDI;
  long in_FS_OFFSET;
  string name_00;
  multireturn_os_File___error_ mVar3;
  multireturn_net_file___error_ mVar4;
  multireturn_net_file___error_ mVar5;
  string name_spill;
  uint uStack_34;
  undefined8 local_30;
  long local_28;
  void *local_20;
  
  name_00.len = name.len;
                    /* Unresolved local var: os.File * fd@[???]
                       Unresolved local var: error err@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  name_00.str = (uint8 *)name_spill.len;
  mVar3 = os_OpenFile(name_00,in_RCX,(io_fs_FileMode)in_RDI);
  mVar4.~r2.tab = mVar3.~r4.tab;
  if (local_28 == 0) {
    runtime_makeslice((runtime__type *)&DAT_00225720,(int)mVar4.~r2.tab,(int)local_20);
    typ = (runtime__type *)((ulong)uStack_34 << 0x20);
    puVar1 = &DAT_002576a0;
    runtime_newobject(typ);
    puVar2 = (undefined *)0x0;
    if (runtime_writeBarrier._0_4_ == 0) {
      _DAT_00000000 = local_30;
    }
    else {
      runtime_gcWriteBarrier();
    }
    *(undefined8 *)(puVar2 + 0x10) = 0;
    *(undefined8 *)(puVar2 + 0x18) = 0x10000;
    if (runtime_writeBarrier._0_4_ == 0) {
      *(runtime__type **)(puVar2 + 8) = typ;
    }
    else {
      runtime_gcWriteBarrierDX();
      typ = extraout_RAX;
      puVar1 = puVar2;
    }
    puVar2[0x20] = 0;
    mVar4.~r1 = (net_file *)typ;
    mVar4.~r2.data = puVar1;
    return mVar4;
  }
  mVar5.~r2.tab = mVar4.~r2.tab;
  mVar5.~r1 = (net_file *)local_28;
  mVar5.~r2.data = local_20;
  return mVar5;
}

