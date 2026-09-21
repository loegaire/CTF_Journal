
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.(*UnixListener).Close(net.UnixListener * l, error ~r0) */

error net___UnixListener__Close(net_UnixListener *l)

{
  uint8 *puVar1;
  void *pvVar2;
  runtime_itab *extraout_RAX;
  runtime_itab *extraout_RAX_00;
  runtime_itab *extraout_RAX_01;
  runtime_itab *prVar3;
  void *unaff_RBX;
  long in_FS_OFFSET;
  error eVar4;
  error eVar5;
  error eVar6;
  net_UnixListener *l_spill;
  runtime_itab *local_28;
  runtime__type *local_20;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((l_spill != (net_UnixListener *)0x0) && (l_spill->fd != (net_netFD *)0x0)) {
                    /* Unresolved local var: error err@[???] */
    eVar4 = net___UnixListener__close(l_spill);
    eVar6.data = eVar4.data;
    if (local_28 != (runtime_itab *)0x0) {
      runtime_newobject((runtime__type *)&DAT_0026a420);
      local_28->_type = (runtime__type *)&DAT_00000005;
      local_28->inter = (runtime_interfacetype *)&DAT_00288c82;
      puVar1 = (l_spill->fd->net).str;
      local_28->fun[0] = (l_spill->fd->net).len;
      if (runtime_writeBarrier._0_4_ == 0) {
        *(uint8 **)&local_28->hash = puVar1;
        prVar3 = local_28;
      }
      else {
        runtime_gcWriteBarrierBX();
        prVar3 = extraout_RAX;
      }
      prVar3[1].inter = (runtime_interfacetype *)0x0;
      prVar3[1]._type = (runtime__type *)0x0;
      pvVar2 = (l_spill->fd->laddr).data;
      *(runtime_itab **)&prVar3[1].hash = (l_spill->fd->laddr).tab;
      if (runtime_writeBarrier._0_4_ == 0) {
        prVar3[1].fun[0] = (uintptr)pvVar2;
      }
      else {
        runtime_gcWriteBarrierDX();
        prVar3 = extraout_RAX_00;
      }
      prVar3[2].inter = (runtime_interfacetype *)local_28;
      if (runtime_writeBarrier._0_4_ == 0) {
        prVar3[2]._type = local_20;
      }
      else {
        runtime_gcWriteBarrierCX();
        prVar3 = extraout_RAX_01;
      }
      eVar5.data = puVar1;
      eVar5.tab = prVar3;
      return eVar5;
    }
    eVar6.tab = (runtime_itab *)local_20;
    return eVar6;
  }
  eVar4.data = unaff_RBX;
  eVar4.tab = (runtime_itab *)&DAT_002b2e10;
  return eVar4;
}

