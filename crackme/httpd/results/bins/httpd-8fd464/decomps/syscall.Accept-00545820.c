
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.Accept(int fd, int nfd, syscall.Sockaddr sa, error err) */

multireturn_int_syscall_Sockaddr_error_ syscall_Accept(int fd)

{
  syscall_RawSockaddrAny *unaff_RBX;
  void *in_RSI;
  runtime_itab *prVar1;
  long in_FS_OFFSET;
  multireturn_int_error__conflict5 mVar2;
  multireturn_int_syscall_Sockaddr_error_ mVar3;
  multireturn_int_syscall_Sockaddr_error_ mVar4;
  multireturn_syscall_Sockaddr_error_ mVar5;
  int fd_spill;
  runtime__type *local_c0;
  long local_b8;
  undefined1 local_a8 [20];
  syscall_RawSockaddrAny rsa;
  
                    /* Unresolved local var: syscall._Socklen len@[???] */
  while (rsa.Pad + 0x2c <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  rsa.Addr.Len = 0;
  rsa.Addr.Family = 0;
  rsa.Addr.Data[0] = 0;
  rsa.Addr.Data[1] = 0;
  rsa.Addr.Data[2] = 0;
  rsa.Addr.Data[3] = 0;
  rsa.Addr.Data[4] = 0;
  rsa.Addr.Data[5] = 0;
  rsa.Addr.Data[6] = 0;
  rsa.Addr.Data[7] = 0;
  rsa.Addr.Data[8] = 0;
  rsa.Addr.Data[9] = 0;
  rsa.Addr.Data[10] = 0;
  rsa.Addr.Data[0xb] = 0;
  rsa.Addr.Data[0xc] = 0;
  rsa.Addr.Data[0xd] = 0;
  prVar1 = (runtime_itab *)local_a8;
  mVar3.nfd = FUN_0051a18b();
  local_a8._4_4_ = 0x6c;
  mVar2 = syscall_accept(mVar3.nfd,unaff_RBX,(syscall__Socklen *)(local_a8 + 4));
  mVar4.sa.tab = mVar2.err.tab;
  if (local_b8 != 0) {
    mVar4.nfd = (int)local_c0;
    mVar4.sa.data = (void *)local_b8;
    mVar4.err.data = in_RSI;
    mVar4.err.tab = prVar1;
    return mVar4;
  }
  local_a8._8_8_ = local_c0;
  mVar5 = syscall_anyToSockaddr(&rsa);
  prVar1 = mVar5.~r2.data;
  if (local_c0 != (runtime__type *)0x0) {
    syscall_Close(local_a8._8_8_);
    local_a8._8_8_ = (runtime__type *)0x0;
  }
  mVar3.sa.tab = (runtime_itab *)0x0;
  mVar3.sa.data = local_c0;
  mVar3.err.data = (void *)local_a8._8_8_;
  mVar3.err.tab = prVar1;
  return mVar3;
}

