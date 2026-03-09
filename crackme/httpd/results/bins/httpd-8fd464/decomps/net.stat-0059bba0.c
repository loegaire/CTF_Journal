
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.stat(string name, time.Time mtime, int64 size, error err) */

multireturn_time_Time_int64_error_ net_stat(string name)

{
  code *pcVar1;
  undefined8 in_RSI;
  time_Location *ptVar2;
  undefined8 in_R8;
  long in_FS_OFFSET;
  string name_00;
  multireturn_io_fs_FileInfo_error_ mVar3;
  multireturn_time_Time_int64_error_ mVar4;
  multireturn_time_Time_int64_error_ mVar5;
  string name_spill;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  name_00.len = name.len;
                    /* Unresolved local var: io/fs.FileInfo st@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  name_00.str = (uint8 *)name_spill.len;
  mVar3 = os_Stat(name_00);
  mVar4.size = mVar3.~r2.data;
  if (local_40 != 0) {
    mVar4.mtime.ext = (int64)local_48;
    mVar4.mtime.wall = local_40;
    mVar4.err.tab = (runtime_itab *)in_RSI;
    mVar4.mtime.loc = local_38;
    mVar4.err.data = (void *)in_R8;
    return mVar4;
  }
  (**(code **)(local_50 + 0x20))();
  pcVar1 = *(code **)(local_50 + 0x38);
  ptVar2 = local_48;
  (*pcVar1)();
  mVar5.mtime.ext = (int64)pcVar1;
  mVar5.mtime.wall = name_spill.len;
  mVar5.err.tab = (runtime_itab *)ptVar2;
  mVar5.size = (int64)mVar4.size;
  mVar5.mtime.loc = local_48;
  mVar5.err.data = (void *)in_R8;
  return mVar5;
}

