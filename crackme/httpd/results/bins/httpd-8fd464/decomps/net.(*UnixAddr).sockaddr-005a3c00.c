
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*UnixAddr).sockaddr(net.UnixAddr * a, int family,
   syscall.Sockaddr ~r1, error ~r2) */

multireturn_syscall_Sockaddr_error_ net___UnixAddr__sockaddr(net_UnixAddr *a,int family)

{
  undefined1 auVar1 [32];
  undefined8 in_RCX;
  runtime_itab *prVar2;
  undefined8 in_RDI;
  long in_FS_OFFSET;
  multireturn_syscall_Sockaddr_error_ mVar3;
  net_UnixAddr *a_spill;
  int family_spill;
  undefined8 *local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (a_spill != (net_UnixAddr *)0x0) {
    runtime_newobject((runtime__type *)&DAT_0024ea80);
    prVar2 = (runtime_itab *)(a_spill->Name).str;
    local_10[1] = (a_spill->Name).len;
    if (runtime_writeBarrier._0_4_ == 0) {
      *local_10 = prVar2;
    }
    else {
      runtime_gcWriteBarrierCX();
    }
    mVar3.~r1.data = (void *)family;
    mVar3.~r1.tab = (runtime_itab *)go_itab__syscall_SockaddrUnix_syscall_Sockaddr;
    mVar3.~r2.data = local_10;
    mVar3.~r2.tab = prVar2;
    return mVar3;
  }
  auVar1._16_8_ = in_RDI;
  auVar1._8_8_ = in_RCX;
  auVar1._0_8_ = family;
  auVar1._24_8_ = 0;
  return (multireturn_syscall_Sockaddr_error_)(auVar1 << 0x40);
}

