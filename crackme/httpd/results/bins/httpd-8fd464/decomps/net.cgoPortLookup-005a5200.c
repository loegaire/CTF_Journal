
/* WARNING: Unknown calling convention */

void net_cgoPortLookup(chan<__net_portLookupResult result,net__Ctype_struct_addrinfo *hints,
                      string network,string service)

{
  uint8 *puVar1;
  uint8 *puVar2;
  uint8 *puVar3;
  long in_FS_OFFSET;
  string network_00;
  multireturn_int_error__conflict13 mVar4;
  string service_00;
  chan<__net_portLookupResult result_spill;
  net__Ctype_struct_addrinfo *hints_spill;
  string network_spill;
  string service_spill;
  
  puVar2 = service.str;
  puVar3 = (uint8 *)network.len;
  puVar1 = network.str;
                    /* Unresolved local var: int port@[???]
                       Unresolved local var: error err@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  network_00.len = (int)puVar1;
  network_00.str = (uint8 *)hints;
  service_00.len = (int)puVar2;
  service_00.str = puVar3;
  mVar4 = net_cgoLookupServicePort
                    ((net__Ctype_struct_addrinfo *)service_spill.len,network_00,service_00);
  runtime_chansend1((runtime_hchan *)&stack0xffffffffffffffe0,mVar4.err.tab);
  return;
}

