
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.srcAddrs([]net.IPAddr addrs, []net.IP ~r1) */

__net_IP net_srcAddrs(__net_IPAddr addrs)

{
  uint8 *puVar1;
  net_netFD *pnVar2;
  uintptr uVar3;
  uintptr uVar4;
  long lVar5;
  long extraout_RAX;
  net_conn *extraout_RAX_00;
  net_conn *c;
  int iVar6;
  net_UDPAddr *pnVar7;
  uintptr *puVar8;
  long extraout_RDX;
  long lVar9;
  runtime_itab *prVar10;
  net_UDPAddr *pnVar11;
  long in_FS_OFFSET;
  multireturn_net_UDPConn___error_ mVar12;
  __net_IP _Var13;
  string network;
  error eVar14;
  __net_IPAddr addrs_spill;
  runtime__type *local_40;
  net_conn *local_38;
  long local_30;
  
  iVar6 = addrs.cap;
  prVar10 = (runtime_itab *)addrs.len;
                    /* Unresolved local var: net.UDPAddr * &dst@[???]
                       Unresolved local var: []net.IP srcs@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: int i@[???] */
  runtime_makeslice((runtime__type *)addrs_spill.len,(int)prVar10,iVar6);
  runtime_newobject(local_40);
  *(undefined8 *)addrs_spill.len = 0;
  *(undefined8 *)(addrs_spill.len + 8) = 0;
  *(undefined8 *)(addrs_spill.len + 0x10) = 0;
  *(undefined8 *)(addrs_spill.len + 0x18) = 9;
  *(undefined8 *)(addrs_spill.len + 0x20) = 0;
  *(undefined8 *)(addrs_spill.len + 0x28) = 0;
  for (lVar5 = 0; lVar5 < addrs_spill.len; lVar5 = lVar5 + 1) {
    lVar9 = lVar5 * 5;
    puVar1 = addrs_spill.array[lVar5].IP.array;
    iVar6 = addrs_spill.array[lVar5].IP.cap;
    *(int *)(addrs_spill.len + 8) = addrs_spill.array[lVar5].IP.len;
    *(int *)(addrs_spill.len + 0x10) = iVar6;
    pnVar7 = (net_UDPAddr *)addrs_spill.len;
    pnVar11 = (net_UDPAddr *)addrs_spill.len;
    if (runtime_writeBarrier._0_4_ == 0) {
      *(uint8 **)addrs_spill.len = puVar1;
    }
    else {
      runtime_gcWriteBarrierSI();
      lVar5 = extraout_RAX;
      lVar9 = extraout_RDX;
    }
    puVar1 = (&((addrs_spill.array)->Zone).str)[lVar9];
    (pnVar11->Zone).len = (&((addrs_spill.array)->Zone).len)[lVar9];
    if (runtime_writeBarrier._0_4_ == 0) {
      (pnVar11->Zone).str = puVar1;
    }
    else {
      runtime_gcWriteBarrierSI();
    }
    network.len = (int)addrs_spill.array;
    network.str = &DAT_00287d2c;
    mVar12 = net_DialUDP(network,pnVar7,pnVar11);
    prVar10 = mVar12.~r4.tab;
    if (local_30 == 0) {
                    /* Unresolved local var: net.UDPAddr * src@[???] */
      pnVar2 = local_38->fd;
      if (pnVar2 == (net_netFD *)0x0) {
        prVar10 = (runtime_itab *)0x0;
        puVar8 = (uintptr *)0x0;
      }
      else {
        prVar10 = (pnVar2->laddr).tab;
        puVar8 = (pnVar2->laddr).data;
      }
      c = local_38;
      if (prVar10 == (runtime_itab *)go_itab__net_UDPAddr_net_Addr) {
        uVar3 = *puVar8;
        uVar4 = puVar8[2];
        (&local_40->ptrdata)[lVar5 * 3] = puVar8[1];
        *(uintptr *)(&local_40->hash + lVar5 * 6) = uVar4;
        if (runtime_writeBarrier._0_4_ == 0) {
          (&local_40->size)[lVar5 * 3] = uVar3;
        }
        else {
          runtime_gcWriteBarrierR8();
          c = extraout_RAX_00;
        }
      }
      eVar14 = net___conn__Close(c);
      prVar10 = eVar14.data;
    }
                    /* Unresolved local var: net.UDPConn * c@[???] */
  }
  _Var13.len = (int)prVar10;
  _Var13.array = (net_IP *)local_40;
  _Var13.cap = addrs_spill.len;
  return _Var13;
}

