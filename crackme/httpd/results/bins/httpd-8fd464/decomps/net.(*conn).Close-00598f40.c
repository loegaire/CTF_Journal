
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*conn).Close(net.conn * c, error ~r0) */

error net___conn__Close(net_conn *c)

{
  uint8 *puVar1;
  void *pvVar2;
  runtime_itab *extraout_RAX;
  runtime_itab *extraout_RAX_00;
  runtime_itab *extraout_RAX_01;
  runtime_itab *extraout_RAX_02;
  runtime_itab *prVar3;
  void *unaff_RBX;
  long in_FS_OFFSET;
  error eVar5;
  error eVar6;
  net_conn *c_spill;
  runtime_itab *local_28;
  runtime__type *local_20;
  runtime__type *prVar4;
  
                    /* Unresolved local var: error err@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((c_spill != (net_conn *)0x0) && (c_spill->fd != (net_netFD *)0x0)) {
    eVar5 = net___netFD__Close((net_netFD *)c_spill);
    prVar4 = eVar5.data;
    prVar3 = local_28;
    if (local_28 != (runtime_itab *)0x0) {
      runtime_newobject((runtime__type *)&DAT_0026a420);
      local_28->_type = (runtime__type *)&DAT_00000005;
      local_28->inter = (runtime_interfacetype *)&DAT_00288c82;
      puVar1 = (c_spill->fd->net).str;
      local_28->fun[0] = (c_spill->fd->net).len;
      if (runtime_writeBarrier._0_4_ == 0) {
        *(uint8 **)&local_28->hash = puVar1;
      }
      else {
        runtime_gcWriteBarrierBX();
        prVar3 = extraout_RAX;
      }
      prVar4 = (c_spill->fd->laddr).data;
      prVar3[1].inter = (runtime_interfacetype *)(c_spill->fd->laddr).tab;
      if (runtime_writeBarrier._0_4_ == 0) {
        prVar3[1]._type = prVar4;
      }
      else {
        runtime_gcWriteBarrierBX();
        prVar3 = extraout_RAX_00;
      }
      pvVar2 = (c_spill->fd->raddr).data;
      *(runtime_itab **)&prVar3[1].hash = (c_spill->fd->raddr).tab;
      if (runtime_writeBarrier._0_4_ == 0) {
        prVar3[1].fun[0] = (uintptr)pvVar2;
      }
      else {
        runtime_gcWriteBarrierDX();
        prVar3 = extraout_RAX_01;
      }
      prVar3[2].inter = (runtime_interfacetype *)local_28;
      if (runtime_writeBarrier._0_4_ == 0) {
        prVar3[2]._type = local_20;
      }
      else {
        runtime_gcWriteBarrierCX();
        prVar3 = extraout_RAX_02;
      }
    }
    eVar5.data = prVar4;
    eVar5.tab = prVar3;
    return eVar5;
  }
  eVar6.data = unaff_RBX;
  eVar6.tab = (runtime_itab *)&DAT_002b2e10;
  return eVar6;
}

