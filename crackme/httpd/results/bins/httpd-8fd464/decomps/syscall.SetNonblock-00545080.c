
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.SetNonblock(int fd, bool nonblocking, error err) */

error syscall_SetNonblock(int fd,bool nonblocking)

{
  undefined1 auVar1 [16];
  int in_RCX;
  ulong arg;
  undefined7 unaff_00000019;
  long in_FS_OFFSET;
  error eVar2;
  multireturn_int_error__conflict6 mVar3;
  int fd_spill;
  bool nonblocking_spill;
  undefined8 local_20;
  undefined8 local_18;
  
                    /* Unresolved local var: int flag@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  mVar3 = syscall_fcntl(fd_spill,CONCAT71(unaff_00000019,nonblocking),in_RCX);
  eVar2.data = mVar3.err.tab;
  if (local_18 != 0) {
    eVar2.tab = local_20;
    return eVar2;
  }
  arg = (ulong)local_20 & 0xfffffffffffffffb;
  if (nonblocking_spill) {
    arg = (ulong)local_20 | 4;
  }
  mVar3 = syscall_fcntl((ulong)local_20 | 4,(int)eVar2.data,arg);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = mVar3.err.tab;
  return (error)(auVar1 << 0x40);
}

