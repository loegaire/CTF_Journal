
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*IPAddr).sockaddr(net.IPAddr * a, int family,
   syscall.Sockaddr ~r1, error ~r2) */

multireturn_syscall_Sockaddr_error_ net___IPAddr__sockaddr(net_IPAddr *a,int family)

{
  undefined1 auVar1 [32];
  undefined8 in_RCX;
  undefined8 in_RDI;
  uint8 *in_R8;
  int in_R9;
  long in_FS_OFFSET;
  net_IP ip;
  string zone;
  multireturn_syscall_Sockaddr_error__conflict2 mVar2;
  multireturn_syscall_Sockaddr_error_ mVar3;
  net_IPAddr *a_spill;
  int family_spill;
  runtime_itab *local_28;
  runtime_itab *local_18;
  void *local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (a_spill != (net_IPAddr *)0x0) {
    ip.len = (int)(a_spill->IP).array;
    ip.array = (uint8 *)(a_spill->IP).cap;
    ip.cap = family_spill;
    zone.len = in_R9;
    zone.str = in_R8;
    mVar2 = net_ipToSockaddr((a_spill->Zone).len,ip,(int)(a_spill->Zone).str,zone);
    mVar3.~r2.data = mVar2.~r5.data;
    mVar3.~r1.data = local_10;
    mVar3.~r1.tab = local_18;
    mVar3.~r2.tab = local_28;
    return mVar3;
  }
  auVar1._16_8_ = in_RDI;
  auVar1._8_8_ = in_RCX;
  auVar1._0_8_ = family;
  auVar1._24_8_ = 0;
  return (multireturn_syscall_Sockaddr_error_)(auVar1 << 0x40);
}

