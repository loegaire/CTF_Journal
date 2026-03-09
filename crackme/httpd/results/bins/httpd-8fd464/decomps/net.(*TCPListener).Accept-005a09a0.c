
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*TCPListener).Accept(net.TCPListener * l, net.Conn ~r0, error
   ~r1) */

multireturn_net_Conn_error__conflict net___TCPListener__Accept(net_TCPListener *l)

{
  uint8 *puVar1;
  void *pvVar2;
  runtime_itab *extraout_RAX;
  runtime_itab *extraout_RAX_00;
  runtime_itab *extraout_RAX_01;
  runtime_itab *in_RCX;
  void *unaff_RBX;
  runtime__type **in_RDI;
  long in_FS_OFFSET;
  multireturn_net_TCPConn___error__conflict mVar3;
  multireturn_net_Conn_error__conflict mVar4;
  multireturn_net_Conn_error__conflict mVar5;
  multireturn_net_Conn_error__conflict mVar6;
  net_TCPListener *l_spill;
  runtime_itab *local_30;
  runtime_interfacetype *local_28;
  runtime__type *local_20;
  
                    /* Unresolved local var: net.TCPConn * c@[???]
                       Unresolved local var: error err@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((l_spill != (net_TCPListener *)0x0) && (l_spill->fd != (net_netFD *)0x0)) {
    mVar3 = net___TCPListener__accept(l_spill);
    mVar5.~r0.data = mVar3.~r1.tab;
    if (local_28 != (runtime_interfacetype *)0x0) {
      runtime_newobject((runtime__type *)&DAT_0026a420);
      local_30->_type = (runtime__type *)&DAT_00000006;
      local_30->inter = (runtime_interfacetype *)&DAT_002896c0;
      puVar1 = (l_spill->fd->net).str;
      local_30->fun[0] = (l_spill->fd->net).len;
      if (runtime_writeBarrier._0_4_ == 0) {
        *(uint8 **)&local_30->hash = puVar1;
      }
      else {
        in_RDI = (runtime__type **)&local_30->hash;
        runtime_gcWriteBarrierBX();
        local_30 = extraout_RAX;
      }
      local_30[1].inter = (runtime_interfacetype *)0x0;
      local_30[1]._type = (runtime__type *)0x0;
      pvVar2 = (l_spill->fd->laddr).data;
      *(runtime_itab **)&local_30[1].hash = (l_spill->fd->laddr).tab;
      if (runtime_writeBarrier._0_4_ == 0) {
        local_30[1].fun[0] = (uintptr)pvVar2;
      }
      else {
        in_RDI = (runtime__type **)local_30[1].fun;
        runtime_gcWriteBarrierDX();
        local_30 = extraout_RAX_00;
      }
      local_30[2].inter = local_28;
      if (runtime_writeBarrier._0_4_ == 0) {
        local_30[2]._type = local_20;
      }
      else {
        in_RDI = &local_30[2]._type;
        runtime_gcWriteBarrierCX();
        local_30 = extraout_RAX_01;
      }
      mVar4.~r0.data = puVar1;
      mVar4.~r0.tab = local_30;
      mVar4.~r1.data = in_RDI;
      mVar4.~r1.tab = (runtime_itab *)&go_itab__net_OpError_error;
      return mVar4;
    }
    mVar5.~r0.tab = local_30;
    mVar5.~r1.data = in_RDI;
    mVar5.~r1.tab = (runtime_itab *)go_itab__net_TCPConn_net_Conn;
    return mVar5;
  }
  mVar6.~r0.data = unaff_RBX;
  mVar6.~r0.tab = (runtime_itab *)&DAT_002b2e10;
  mVar6.~r1.data = in_RDI;
  mVar6.~r1.tab = in_RCX;
  return mVar6;
}

