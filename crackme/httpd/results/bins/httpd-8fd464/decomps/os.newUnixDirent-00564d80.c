
/* WARNING: Removing unreachable block (ram,0x00564edd) */
/* WARNING: Removing unreachable block (ram,0x00564f1f) */
/* WARNING: Removing unreachable block (ram,0x00564f14) */
/* WARNING: Removing unreachable block (ram,0x00564f2d) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.newUnixDirent(string parent, string name, io/fs.FileMode typ,
   io/fs.DirEntry ~r3, error ~r4) */

multireturn_io_fs_DirEntry_error_ os_newUnixDirent(string parent,string name,io_fs_FileMode typ)

{
  void *extraout_RAX;
  void *extraout_RAX_00;
  runtime_itab *in_R8;
  int in_R9;
  long in_FS_OFFSET;
  string a1;
  string sVar2;
  string a0;
  multireturn_io_fs_DirEntry_error_ mVar3;
  multireturn_io_fs_DirEntry_error_ mVar4;
  string a2;
  string parent_spill;
  string name_spill;
  io_fs_FileMode typ_spill;
  uint8 *local_60;
  error *local_30;
  ulong uVar1;
  
                    /* Unresolved local var: os.unixDirent * ude@[???]
                       Unresolved local var: io/fs.FileInfo info@[???]
                       Unresolved local var: error err@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_newobject((runtime__type *)&DAT_00263be0);
  *(int *)(local_60 + 8) = parent_spill.len;
  if (runtime_writeBarrier._0_4_ == 0) {
    *(uint8 **)local_60 = parent_spill.str;
  }
  else {
    runtime_gcWriteBarrierCX();
    parent_spill.len = (int)extraout_RAX;
  }
  *(int *)(local_60 + 0x18) = name_spill.len;
  if (runtime_writeBarrier._0_4_ == 0) {
    *(uint8 **)(local_60 + 0x10) = name_spill.str;
  }
  else {
    runtime_gcWriteBarrierR8();
    parent_spill.len = (int)extraout_RAX_00;
    in_R8 = (runtime_itab *)name_spill.str;
  }
  *(io_fs_FileMode *)(local_60 + 0x20) = typ_spill;
  if ((typ_spill != 0xffffffff) && (os_testingForceReadDirLstat == false)) {
    mVar3.~r3.data = name_spill.str;
    mVar3.~r3.tab = (runtime_itab *)go_itab__os_unixDirent_io_fs_DirEntry;
    mVar3.~r4.data = local_60;
    mVar3.~r4.tab = (runtime_itab *)parent_spill.str;
    return mVar3;
  }
  a1.len._0_4_ = typ_spill;
  a1.str = local_60;
  a1.len._4_4_ = 0;
  uVar1 = (ulong)typ_spill;
  a0.len = (int)parent_spill.str;
  a0.str = name_spill.str;
  a2.len = in_R9;
  a2.str = (uint8 *)in_R8;
  runtime_concatstring3((runtime_tmpBuf *)&net__stmp_87,a0,a1,a2);
  sVar2.len = uVar1;
  sVar2.str = local_60;
  (**os_lstat)(sVar2,(io_fs_FileInfo *)os_lstat,local_30);
  mVar4.~r3.data = (void *)parent_spill.len;
  mVar4.~r3.tab = (runtime_itab *)0x1;
  mVar4.~r4.data = local_60;
  mVar4.~r4.tab = (runtime_itab *)name_spill.str;
  return mVar4;
}

