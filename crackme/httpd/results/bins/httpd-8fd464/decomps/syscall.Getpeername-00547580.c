
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.Getpeername(int fd, syscall.Sockaddr sa, error err) */

multireturn_syscall_Sockaddr_error__conflict syscall_Getpeername(int fd)

{
  syscall_RawSockaddrAny *unaff_RBX;
  runtime_itab **pprVar1;
  long in_FS_OFFSET;
  error eVar2;
  multireturn_syscall_Sockaddr_error__conflict mVar3;
  multireturn_syscall_Sockaddr_error_ mVar4;
  multireturn_syscall_Sockaddr_error__conflict mVar5;
  int fd_spill;
  runtime_itab *local_88;
  runtime_itab *local_80;
  syscall__Socklen local_78;
  syscall_RawSockaddrAny rsa;
  
                    /* Unresolved local var: syscall._Socklen len@[???] */
  while (rsa.Pad + 0x44 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
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
  pprVar1 = &local_88;
  mVar5.sa.tab = (runtime_itab *)FUN_0051a18b();
  local_78 = 0x6c;
  eVar2 = syscall_getpeername((int)mVar5.sa.tab,unaff_RBX,&local_78);
  mVar3.sa.data = eVar2.data;
  if (local_88 != (runtime_itab *)0x0) {
    mVar3.sa.tab = local_88;
    mVar3.err.data = pprVar1;
    mVar3.err.tab = local_80;
    return mVar3;
  }
  mVar4 = syscall_anyToSockaddr(&rsa);
  mVar5.err.data = mVar4.~r2.data;
  mVar5.sa.data = local_80;
  mVar5.err.tab = local_88;
  return mVar5;
}

