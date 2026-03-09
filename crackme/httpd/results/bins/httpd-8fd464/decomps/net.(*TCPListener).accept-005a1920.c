
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*TCPListener).accept(net.TCPListener * ln, net.TCPConn * ~r0,
   error ~r1) */

multireturn_net_TCPConn___error__conflict net___TCPListener__accept(net_TCPListener *ln)

{
  net_netFD *extraout_RAX;
  net_netFD *pnVar1;
  void *pvVar2;
  long in_FS_OFFSET;
  multireturn_net_netFD___error_ mVar3;
  multireturn_net_TCPConn___error__conflict mVar4;
  multireturn_net_TCPConn___error__conflict mVar5;
  error eVar6;
  net_TCPListener *ln_spill;
  net_netFD *local_30;
  void *local_28;
  
                    /* Unresolved local var: net.netFD * fd@[???]
                       Unresolved local var: net.TCPConn * tc@[???]
                       Unresolved local var: error err@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  mVar3 = net___netFD__accept((net_netFD *)ln_spill);
  mVar5.~r1.tab = mVar3.err.tab;
  if (local_28 == (void *)0x0) {
                    /* Unresolved local var: net.TCPConn * c@[???] */
    runtime_newobject((runtime__type *)&DAT_00243920);
    if (runtime_writeBarrier._0_4_ == 0) {
      (local_30->pfd).fdmu.state = (uint64)local_30;
      pnVar1 = local_30;
    }
    else {
      runtime_gcWriteBarrier();
      pnVar1 = extraout_RAX;
    }
    eVar6 = net_setNoDelay(pnVar1,mVar3.err.tab._0_1_);
    pvVar2 = eVar6.data;
    if (-1 < (ln_spill->lc).KeepAlive) {
                    /* Unresolved local var: time.Duration ka@[???] */
      eVar6 = net_setKeepAlive(local_30,eVar6.data._0_1_);
      pnVar1 = (net_netFD *)(ln_spill->lc).KeepAlive;
      local_28 = (void *)0x37e11d600;
      if (pnVar1 == (net_netFD *)0x0) {
        pnVar1 = (net_netFD *)0x37e11d600;
      }
      eVar6 = net_setKeepAlivePeriod(pnVar1,(time_Duration)eVar6.data);
      pvVar2 = eVar6.data;
    }
    mVar4.~r1.tab = pvVar2;
    mVar4.~r0 = (net_TCPConn *)local_30;
    mVar4.~r1.data = local_28;
    return mVar4;
  }
  mVar5.~r0 = (net_TCPConn *)local_30;
  mVar5.~r1.data = local_28;
  return mVar5;
}

