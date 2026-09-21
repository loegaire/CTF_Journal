
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.addrList.first(net.addrList addrs, func(net.Addr)_bool * *
   strategy, net.Addr ~r1) */

net_Addr net_addrList_first(net_addrList addrs,func_net_Addr__bool **strategy)

{
  runtime_itab *prVar1;
  net_Addr *pnVar2;
  void *pvVar3;
  long in_FS_OFFSET;
  net_Addr nVar4;
  net_Addr nVar5;
  net_Addr nVar6;
  net_addrList addrs_spill;
  func_net_Addr__bool **strategy_spill;
  char local_30;
  
  pvVar3 = (void *)addrs.len;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (0 < addrs_spill.len) {
    pvVar3 = (void *)0x0;
    pnVar2 = addrs_spill.array;
    while( true ) {
      prVar1 = pnVar2->data;
      nVar6.data = strategy_spill;
      nVar6.tab = (runtime_itab *)*strategy_spill;
      (*(code *)*strategy_spill)(nVar6,(bool *)strategy_spill);
      if (local_30 != '\0') {
        nVar5.data = prVar1;
        nVar5.tab = prVar1;
        return nVar5;
      }
      pvVar3 = (void *)((long)pvVar3 + 1);
      if (addrs_spill.len <= (long)pvVar3) break;
      pnVar2 = pnVar2 + 1;
    }
  }
  if (addrs_spill.len == 0) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  nVar4.data = pvVar3;
  nVar4.tab = (addrs_spill.array)->data;
  return nVar4;
}

