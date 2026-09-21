
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.goLookupPort(string network, string service, int port, error
   err) */

multireturn_int_error__conflict13 net_goLookupPort(string network,string service)

{
  uint8 *puVar1;
  int iVar2;
  long in_FS_OFFSET;
  string network_00;
  multireturn_int_error__conflict12 mVar3;
  multireturn_int_error__conflict13 mVar4;
  string service_00;
  string network_spill;
  string service_spill;
  undefined8 local_20;
  void *local_18;
  
  iVar2 = service.len;
  puVar1 = service.str;
  network_00.len = (func__ **)network.len;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (net_onceReadServices.done == 0) {
    sync___Once__doSlow((sync_Once *)&PTR_net_readServices_002b3508,network_00.len);
  }
  network_00.str = (uint8 *)service_spill.len;
  service_00.len = iVar2;
  service_00.str = puVar1;
  mVar3 = net_lookupPortMap(network_00,service_00);
  mVar4.err.tab = mVar3.error.tab;
  mVar4.port = local_20;
  mVar4.err.data = local_18;
  return mVar4;
}

