
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.Bind(int fd, syscall.Sockaddr sa, error err) */

error syscall_Bind(int fd,syscall_Sockaddr sa)

{
  undefined1 auVar1 [16];
  long in_FS_OFFSET;
  error eVar2;
  int fd_spill;
  syscall_Sockaddr sa_spill;
  runtime_itab *local_18;
  syscall__Socklen local_10;
  
  eVar2.data = sa.tab;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  (*(code *)(sa_spill.tab)->fun[0])();
  if (local_18 != (runtime_itab *)0x0) {
    eVar2.tab = local_18;
    return eVar2;
  }
  eVar2 = syscall_bind(fd_spill,eVar2.data,local_10);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = eVar2.data;
  return (error)(auVar1 << 0x40);
}

