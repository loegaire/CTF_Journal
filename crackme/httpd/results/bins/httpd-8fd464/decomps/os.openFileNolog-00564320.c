
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void os.openFileNolog(string name, int flag, io/fs.FileMode perm,
   os.File * ~r3, error ~r4) */

multireturn_os_File___error_ os_openFileNolog(string name,int flag,io_fs_FileMode perm)

{
  long extraout_RAX;
  long extraout_RAX_00;
  uint uVar1;
  uint perm_00;
  void *pvVar2;
  byte bVar3;
  ulong kind;
  long in_FS_OFFSET;
  multireturn_os_File___error_ mVar4;
  multireturn_os_File___error_ mVar5;
  string name_00;
  string path;
  error eVar6;
  string name_02;
  error target;
  multireturn_io_fs_FileInfo_error_ mVar7;
  string name_spill;
  int flag_spill;
  io_fs_FileMode perm_spill;
  byte local_40;
  undefined7 uStack_3f;
  void *local_38;
  uint8 *local_30;
  string name_01;
  
  name_00.len = name.len;
                    /* Unresolved local var: bool setSticky@[???]
                       Unresolved local var: int r@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((((uint)flag_spill >> 9 & 1) == 0) || ((perm_spill >> 0x14 & 1) == 0)) {
    bVar3 = 0;
  }
  else {
    name_00.str = name_spill.str;
                    /* Unresolved local var: error err@[???] */
    mVar7 = os_Stat(name_00);
    target.data = mVar7.~r2.data;
    eVar6.data = local_38;
    eVar6.tab = os_ErrNotExist.tab;
    target.tab = os_ErrNotExist.data;
    os_underlyingErrorIs(eVar6,target);
    bVar3 = local_40;
                    /* Unresolved local var: error e@[???] */
  }
  while( true ) {
    path.str = (uint8 *)(ulong)perm_spill;
    uVar1 = perm_spill & 0x1ff;
    if ((perm_spill & 0x800000) != 0) {
      uVar1 = perm_spill & 0x1ff | 0x800;
    }
    if ((perm_spill & 0x400000) != 0) {
      uVar1 = uVar1 | 0x400;
    }
    perm_00 = uVar1;
    if ((perm_spill & 0x100000) != 0) {
      perm_00 = uVar1 | 0x200;
    }
    kind = (ulong)perm_00;
    path.len = name_spill.len;
    syscall_Open(path,(ulong)(uVar1 | 0x200),perm_00);
    if (local_38 == (void *)0x0) break;
    if (((local_38 == (void *)0x0) || (*(undefined **)((long)local_38 + 8) != &DAT_002463a0)) ||
       (*(long *)local_30 != 4)) {
      runtime_newobject((runtime__type *)&DAT_00257220);
      *(undefined8 *)(name_spill.len + 8) = 4;
      *(undefined **)name_spill.len = &DAT_00288561;
      *(int *)(name_spill.len + 0x18) = name_spill.len;
      if (runtime_writeBarrier._0_4_ == 0) {
        *(uint8 **)(name_spill.len + 0x10) = name_spill.str;
      }
      else {
        runtime_gcWriteBarrierCX();
        name_spill.len = extraout_RAX;
      }
      *(void **)(name_spill.len + 0x20) = local_38;
      if (runtime_writeBarrier._0_4_ == 0) {
        *(uint8 **)(name_spill.len + 0x28) = local_30;
      }
      else {
        runtime_gcWriteBarrierCX();
        name_spill.len = extraout_RAX_00;
      }
      mVar4.~r4.tab = (runtime_itab *)local_30;
      mVar4.~r3 = (os_File *)name_spill.len;
      mVar4.~r4.data = go_itab__io_fs_PathError_error;
      return mVar4;
    }
  }
  pvVar2 = (void *)(ulong)bVar3;
  if (bVar3 != 0) {
    name_01.len = (int)local_30;
    name_01.str = name_spill.str;
    pvVar2 = (void *)name_spill.len;
    eVar6 = os_setStickyBit(name_01);
    local_30 = eVar6.data;
  }
  name_02.len = (int)pvVar2;
  name_02.str = local_30;
  os_newFile(name_spill.len,name_02,kind);
  mVar5.~r3._1_7_ = uStack_3f;
  mVar5.~r3._0_1_ = local_40;
  mVar5.~r4.tab = (runtime_itab *)local_30;
  mVar5.~r4.data = pvVar2;
  return mVar5;
}

