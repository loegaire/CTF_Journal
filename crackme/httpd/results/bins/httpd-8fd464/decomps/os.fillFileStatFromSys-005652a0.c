
/* WARNING: Unknown calling convention */

void os_fillFileStatFromSys(os_fileStat *fs,string name)

{
  long lVar1;
  time_Location *ptVar2;
  uint uVar3;
  ushort uVar4;
  ulong uVar5;
  os_fileStat *extraout_RDX;
  ulong uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  os_fileStat *fs_spill;
  string name_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  do {
    uVar5 = name_spill.len;
    name_spill.len = uVar5 - 1;
    if (name_spill.len < 1) break;
    if (uVar5 <= (ulong)name_spill.len) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
  } while (name_spill.str[name_spill.len] == 0x2f);
  do {
    uVar6 = name_spill.len;
    name_spill.len = uVar6 - 1;
    if (name_spill.len < 0) goto LAB_0056533b;
    if (uVar5 <= (ulong)name_spill.len) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
  } while (name_spill.str[name_spill.len] != 0x2f);
  uVar5 = (uVar5 - name_spill.len) - 1;
  name_spill.str = name_spill.str + (uVar6 & (long)-uVar5 >> 0x3f);
LAB_0056533b:
  (fs_spill->name).len = uVar5;
  if (runtime_writeBarrier._0_4_ == 0) {
    (fs_spill->name).str = name_spill.str;
  }
  else {
    runtime_gcWriteBarrierBX();
  }
  fs_spill->size = (fs_spill->sys).Size;
  ptVar2 = time_Local;
  uVar5 = (fs_spill->sys).Mtimespec.Nsec;
  lVar9 = (fs_spill->sys).Mtimespec.Sec;
                    /* Unresolved local var: int64 n@[???] */
  if (uVar5 < 1000000000) {
    iVar7 = (int)uVar5;
  }
  else {
    lVar8 = (long)uVar5 % 1000000000;
    lVar1 = (long)uVar5 / 1000000000 + lVar9;
    lVar9 = lVar9 + (long)uVar5 / 1000000000;
    if (lVar8 < 0) {
      lVar8 = lVar8 + 1000000000;
      lVar9 = lVar1 + -1;
    }
    iVar7 = (int)lVar8;
  }
  (fs_spill->modTime).wall = (long)iVar7;
  (fs_spill->modTime).ext = lVar9 + 0xe7791f700;
  if (runtime_writeBarrier._0_4_ == 0) {
    (fs_spill->modTime).loc = ptVar2;
  }
  else {
    runtime_gcWriteBarrierCX();
    fs_spill = extraout_RDX;
  }
  uVar3 = (fs_spill->sys).Mode & 0x1ff;
  fs_spill->mode = uVar3;
  uVar4 = (fs_spill->sys).Mode & 0xf000;
  if (uVar4 < 0x4001) {
    if (uVar4 == 0x1000) {
      fs_spill->mode = uVar3 | 0x2000000;
    }
    else if (uVar4 == 0x2000) {
      fs_spill->mode = uVar3 | 0x4200000;
    }
    else if (uVar4 == 0x4000) {
      fs_spill->mode = uVar3 | 0x80000000;
    }
  }
  else if (uVar4 < 0x8001) {
    if (uVar4 == 0x6000) {
      fs_spill->mode = uVar3 | 0x4000000;
    }
  }
  else if (uVar4 == 0xa000) {
    fs_spill->mode = uVar3 | 0x8000000;
  }
  else if (uVar4 == 0xc000) {
    fs_spill->mode = uVar3 | 0x1000000;
  }
  if (((fs_spill->sys).Mode & 0x400) != 0) {
    fs_spill->mode = fs_spill->mode | 0x400000;
  }
  if (((fs_spill->sys).Mode & 0x800) != 0) {
    fs_spill->mode = fs_spill->mode | 0x800000;
  }
  if (((fs_spill->sys).Mode & 0x200) != 0) {
    fs_spill->mode = fs_spill->mode | 0x100000;
  }
  return;
}

