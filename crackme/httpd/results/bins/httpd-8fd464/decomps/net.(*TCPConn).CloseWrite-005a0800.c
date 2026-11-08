
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*TCPConn).CloseWrite(net.TCPConn * c, error ~r0) */

error net___TCPConn__CloseWrite(net_TCPConn *c)

{
  net_netFD *pnVar1;
  runtime__type *prVar2;
  void *pvVar3;
  uint8 *puVar4;
  runtime_itab *extraout_RAX;
  runtime_itab *extraout_RAX_00;
  runtime_itab *extraout_RAX_01;
  runtime_itab *extraout_RAX_02;
  runtime_itab *prVar5;
  void *unaff_RBX;
  long in_FS_OFFSET;
  error eVar6;
  error eVar7;
  error eVar8;
  net_TCPConn *c_spill;
  runtime_interfacetype *local_28;
  runtime__type *local_20;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((c_spill->conn).fd == (net_netFD *)0x0) {
    eVar8.data = unaff_RBX;
    eVar8.tab = (runtime_itab *)&DAT_002b2e10;
    return eVar8;
  }
  eVar6 = net___netFD__shutdown((net_netFD *)c_spill,(int)unaff_RBX);
                    /* Unresolved local var: error err@[???]
                       Unresolved local var: uint8 * ~R0.data@[???] */
  if (local_28 == (runtime_interfacetype *)0x0) {
    eVar6.tab = (runtime_itab *)local_20;
    return eVar6;
  }
  runtime_newobject((runtime__type *)&DAT_0026a420);
  prVar5 = (runtime_itab *)0x1;
  _DAT_00000009 = 5;
  puRam0000000000000001 = &DAT_00288c82;
  pnVar1 = (c_spill->conn).fd;
  _DAT_00000019 = (pnVar1->net).len;
  puVar4 = (pnVar1->net).str;
  if (runtime_writeBarrier._0_4_ != 0) {
    runtime_gcWriteBarrierBX();
    prVar5 = extraout_RAX;
    puVar4 = _DAT_00000011;
  }
  _DAT_00000011 = puVar4;
  pnVar1 = (c_spill->conn).fd;
  prVar2 = (pnVar1->laddr).data;
  prVar5[1].inter = (runtime_interfacetype *)(pnVar1->laddr).tab;
  if (runtime_writeBarrier._0_4_ == 0) {
    prVar5[1]._type = prVar2;
  }
  else {
    runtime_gcWriteBarrierBX();
    prVar5 = extraout_RAX_00;
  }
  pnVar1 = (c_spill->conn).fd;
  pvVar3 = (pnVar1->raddr).data;
  *(runtime_itab **)&prVar5[1].hash = (pnVar1->raddr).tab;
  if (runtime_writeBarrier._0_4_ == 0) {
    prVar5[1].fun[0] = (uintptr)pvVar3;
  }
  else {
    runtime_gcWriteBarrierDX();
    prVar5 = extraout_RAX_01;
  }
  prVar5[2].inter = local_28;
  if (runtime_writeBarrier._0_4_ == 0) {
    prVar5[2]._type = local_20;
  }
  else {
    runtime_gcWriteBarrierCX();
    prVar5 = extraout_RAX_02;
  }
  eVar7.data = prVar2;
  eVar7.tab = prVar5;
  return eVar7;
}

