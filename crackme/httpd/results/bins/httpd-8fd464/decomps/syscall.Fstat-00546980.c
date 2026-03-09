
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.Fstat(int fd, syscall.Stat_t * st, error err) */

error syscall_Fstat(int fd,syscall_Stat_t *st)

{
  uint32 ver;
  long in_FS_OFFSET;
  error eVar1;
  error eVar2;
  error eVar3;
  int fd_spill;
  syscall_Stat_t *st_spill;
  char local_178;
  runtime_itab *local_170;
  undefined1 local_168 [8];
  syscall_stat_freebsd11_t oldStat;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  uint16 local_d0;
  uint32 local_cc;
  uint32 local_c8;
  ulong local_c0;
  int64 local_b8;
  int64 local_b0;
  int64 local_a8;
  int64 local_a0;
  int64 local_98;
  int64 local_90;
  int64 local_88;
  int64 local_80;
  int64 local_78;
  int64 local_70;
  int32 local_68;
  uint32 local_64;
  ulong local_60;
  
  while (&oldStat.Gen <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  oldStat.Dev = 0;
  oldStat.Ino = 0;
  ver = FUN_0051a186(local_168);
  syscall_supportsABI(ver);
  if (local_178 == '\0') {
    eVar1 = syscall_fstat((int)&oldStat,(syscall_stat_freebsd11_t *)st);
    eVar2.data = eVar1.data;
    if (local_170 != (runtime_itab *)0x0) {
      eVar2.tab = local_170;
      return eVar2;
    }
    FUN_0051a15d(&oldStat.Blksize);
    local_e8 = oldStat._0_8_ & 0xffffffff;
    local_e0 = (ulong)oldStat._0_8_ >> 0x20;
    local_d8 = (ulong)oldStat.Nlink;
    local_d0 = oldStat.Mode;
    local_cc = oldStat.Uid;
    local_c8 = oldStat.Gid;
    local_c0 = (ulong)oldStat.Rdev;
    local_b8 = oldStat.Atimespec.Sec;
    local_b0 = oldStat.Atimespec.Nsec;
    local_a8 = oldStat.Mtimespec.Sec;
    local_a0 = oldStat.Mtimespec.Nsec;
    local_98 = oldStat.Ctimespec.Sec;
    local_90 = oldStat.Ctimespec.Nsec;
    local_88 = oldStat.Birthtimespec.Sec;
    local_80 = oldStat.Birthtimespec.Nsec;
    local_78 = oldStat.Size;
    local_70 = oldStat.Blocks;
    local_68 = oldStat.Blksize;
    local_64 = oldStat.Flags;
    local_60 = (ulong)oldStat.Gen;
    eVar3.tab = (runtime_itab *)FUN_0051a47c(st_spill,&local_e8);
    eVar3.data = eVar2.data;
    return eVar3;
  }
  eVar1 = syscall_fstat_freebsd12((int)st_spill,st);
  eVar1.tab = local_170;
  return eVar1;
}

