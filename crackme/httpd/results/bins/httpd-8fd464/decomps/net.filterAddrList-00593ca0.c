
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.filterAddrList(func(net.IPAddr)_bool * * filter, []net.IPAddr
   ips, func(net.IPAddr)_net.Addr * * inetaddr, string originalAddr, net.addrList ~r4, error ~r5) */

multireturn_net_addrList_error__conflict
net_filterAddrList(func_net_IPAddr__bool **filter,__net_IPAddr ips,
                  func_net_IPAddr__net_Addr **inetaddr,string originalAddr)

{
  uint8 *puVar1;
  net_IPAddr nVar2;
  runtime_interfacetype *prVar3;
  runtime_interfacetype *prVar4;
  runtime_interfacetype *extraout_RDX;
  net_IPAddr *pnVar5;
  runtime_interfacetype *prVar6;
  runtime_interfacetype *prVar7;
  char cVar8;
  long in_FS_OFFSET;
  runtime_slice old;
  multireturn_net_addrList_error__conflict mVar9;
  multireturn_net_addrList_error__conflict mVar10;
  func_net_IPAddr__bool **filter_spill;
  __net_IPAddr ips_spill;
  func_net_IPAddr__net_Addr **inetaddr_spill;
  string originalAddr_spill;
  runtime_interfacetype *in_stack_ffffffffffffff60;
  runtime_interfacetype *in_stack_ffffffffffffff68;
  runtime_interfacetype *prVar11;
  char local_80;
  undefined7 uStack_7f;
  uintptr local_78;
  runtime_interfacetype *local_70;
  runtime_interfacetype *local_28;
  runtime_interfacetype *prStack_20;
  uint8 *local_18;
  int iStack_10;
  
  prVar6 = (runtime_interfacetype *)ips.cap;
  pnVar5 = ips.array;
                    /* Unresolved local var: net.addrList addrs@[???] */
  while (&local_28 <= *(runtime_interfacetype ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: net.IPAddr ip@[???] */
  if (ips_spill.len < 1) {
    prVar3 = (runtime_interfacetype *)0x0;
    prVar4 = (runtime_interfacetype *)0x0;
  }
  else {
    pnVar5 = (net_IPAddr *)0x0;
    prVar4 = (runtime_interfacetype *)0x0;
    prVar7 = (runtime_interfacetype *)0x0;
    prVar6 = (runtime_interfacetype *)0x0;
    while( true ) {
      puVar1 = ((ips_spill.array)->IP).array;
      prVar3 = (runtime_interfacetype *)((ips_spill.array)->IP).len;
      prVar11 = (runtime_interfacetype *)((ips_spill.array)->IP).cap;
      local_18 = ((ips_spill.array)->Zone).str;
      iStack_10 = ((ips_spill.array)->Zone).len;
      local_28 = prVar3;
      prStack_20 = prVar11;
      if (filter_spill == (func_net_IPAddr__bool **)0x0) {
        cVar8 = '\x01';
      }
      else {
        (**filter_spill)(*ips_spill.array,(bool *)prVar4);
        cVar8 = local_80;
        in_stack_ffffffffffffff60 = prVar3;
        in_stack_ffffffffffffff68 = prVar11;
      }
      prVar3 = prVar6;
      if (cVar8 != '\0') {
        nVar2.IP.len = (int)local_28;
        nVar2.IP.array = puVar1;
        nVar2.IP.cap = (int)prStack_20;
        nVar2.Zone.str = local_18;
        nVar2.Zone.len = iStack_10;
        in_stack_ffffffffffffff60 = local_28;
        in_stack_ffffffffffffff68 = prStack_20;
        (**inetaddr_spill)(nVar2,(net_Addr *)prVar4);
        prVar3 = (runtime_interfacetype *)((long)&(prVar6->typ).size + 1);
        if (prVar4 < prVar3) {
          old.len = (int)prVar7;
          old.array = prVar6;
          old.cap = (int)prVar4;
          in_stack_ffffffffffffff60 = prVar7;
          in_stack_ffffffffffffff68 = prVar6;
          runtime_growslice((runtime__type *)&DAT_0023e7c0,old,(int)prVar3);
          prVar7 = (runtime_interfacetype *)CONCAT71(uStack_7f,local_80);
          prVar3 = (runtime_interfacetype *)(local_78 + 1);
          prVar4 = local_70;
        }
        (&(prVar7->typ).size)[(long)prVar6 * 2] = CONCAT71(uStack_7f,local_80);
        if (runtime_writeBarrier._0_4_ == 0) {
          (&(prVar7->typ).ptrdata)[(long)prVar6 * 2] = local_78;
        }
        else {
          runtime_gcWriteBarrier();
          prVar4 = extraout_RDX;
        }
      }
      pnVar5 = (net_IPAddr *)((long)&(pnVar5->IP).array + 1);
      inetaddr = (func_net_IPAddr__net_Addr **)prVar3;
      prVar6 = prVar4;
      if (ips_spill.len <= (long)pnVar5) break;
      ips_spill.array = ips_spill.array + 1;
      prVar6 = prVar3;
    }
  }
  if (prVar3 != (runtime_interfacetype *)0x0) {
    mVar10.~r4.len = (int)pnVar5;
    mVar10.~r4.array = (net_Addr *)prVar3;
    mVar10.~r4.cap = (int)prVar4;
    mVar10.~r5.data = inetaddr;
    mVar10.~r5.tab = (runtime_itab *)prVar6;
    return mVar10;
  }
  (*(code *)(net_errNoSuitableAddress.tab)->fun[0])();
  prVar6 = in_stack_ffffffffffffff68;
  prVar3 = in_stack_ffffffffffffff60;
  runtime_newobject(&in_stack_ffffffffffffff60->typ);
  (prVar3->typ).ptrdata = (uintptr)in_stack_ffffffffffffff68;
  if (runtime_writeBarrier._0_4_ == 0) {
    (prVar3->typ).size = (uintptr)in_stack_ffffffffffffff60;
  }
  else {
    runtime_gcWriteBarrier();
  }
  (prVar3->typ).equal = (func_unsafe_Pointer__unsafe_Pointer__bool **)originalAddr_spill.len;
  if (runtime_writeBarrier._0_4_ == 0) {
    *(uint8 **)&(prVar3->typ).hash = originalAddr_spill.str;
  }
  else {
    runtime_gcWriteBarrierDX();
    prVar6 = prVar3;
  }
  mVar9.~r4.len = (int)pnVar5;
  mVar9.~r4.array = (net_Addr *)go_itab__net_AddrError_error;
  mVar9.~r4.cap = (int)prVar6;
  mVar9.~r5.data = inetaddr;
  mVar9.~r5.tab = (runtime_itab *)prVar3;
  return mVar9;
}

