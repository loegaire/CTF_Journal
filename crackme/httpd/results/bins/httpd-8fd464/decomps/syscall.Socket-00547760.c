
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void syscall.Socket(int domain, int typ, int proto, int fd, error err)
    */

multireturn_int_error__conflict5 syscall_Socket(int domain,int typ,int proto)

{
  long in_FS_OFFSET;
  multireturn_int_error__conflict5 mVar1;
  multireturn_int_error__conflict5 mVar2;
  int domain_spill;
  int typ_spill;
  int proto_spill;
  undefined8 local_20;
  void *local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((domain_spill == 0x1c) && (syscall_SocketDisableIPv6 != false)) {
    mVar1.err.tab = (runtime_itab *)typ;
    mVar1.fd = (int)&net__stmp_87;
    mVar1.err.data = (void *)proto;
    return mVar1;
  }
  mVar2 = syscall_socket(proto_spill,typ,proto);
  mVar2.fd = local_20;
  mVar2.err.data = local_18;
  return mVar2;
}

