
/* WARNING: Unknown calling convention */

void reflect_ifaceE2I(runtime_interfacetype *inter,runtime_eface e,runtime_iface *dst)

{
  long in_FS_OFFSET;
  runtime_interfacetype *inter_spill;
  runtime_eface e_spill;
  runtime_iface *dst_spill;
  runtime_itab *local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_assertE2I((runtime_interfacetype *)e_spill._type,e._type);
  if (runtime_writeBarrier._0_4_ == 0) {
    dst_spill->tab = local_10;
    dst_spill->data = e_spill.data;
  }
  else {
    runtime_gcWriteBarrier();
    runtime_gcWriteBarrier();
  }
  return;
}

