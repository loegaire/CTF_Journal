
/* WARNING: Unknown calling convention */

void net_cgoIPLookup(chan<__net_ipLookupResult result,string network,string name)

{
  uint8 *puVar1;
  uint8 *puVar2;
  long in_FS_OFFSET;
  string network_00;
  string name_00;
  chan<__net_ipLookupResult result_spill;
  string network_spill;
  string name_spill;
  void *local_60;
  
  puVar1 = (uint8 *)network.len;
  network_00.len = network.str;
  puVar2 = name.str;
                    /* Unresolved local var: []net.IPAddr addrs@[???]
                       Unresolved local var: string cname@[???]
                       Unresolved local var: error err@[???] */
  while (&stack0xffffffffffffffe8 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  network_00.str = (uint8 *)name_spill.len;
  name_00.len = (int)puVar2;
  name_00.str = puVar1;
  net_cgoLookupIPCNAME(network_00,name_00);
  runtime_chansend1((runtime_hchan *)&stack0xffffffffffffffc0,local_60);
  return;
}

