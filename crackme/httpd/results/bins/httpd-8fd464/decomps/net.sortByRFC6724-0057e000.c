
/* WARNING: Unknown calling convention */

void net_sortByRFC6724(__net_IPAddr addrs)

{
  undefined8 in_RSI;
  undefined8 in_RDI;
  int in_R8;
  long in_FS_OFFSET;
  __net_IPAddr addrs_00;
  __net_IPAddr addrs_01;
  __net_IPAddr addrs_spill;
  __net_IP _Var1;
  
  addrs_00.len = addrs.len;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (addrs_spill.len < 2) {
    return;
  }
  addrs_00.array = (net_IPAddr *)addrs_spill.len;
  addrs_00.cap = (int)addrs_spill.array;
  _Var1 = net_srcAddrs(addrs_00);
  addrs_01.cap = _Var1.cap;
  addrs_01.len = _Var1.len;
  addrs_01.array = (net_IPAddr *)addrs_spill.cap;
  _Var1.len = in_RSI;
  _Var1.array = (net_IP *)in_RDI;
  _Var1.cap = in_R8;
  net_sortByRFC6724withSrcs(addrs_01,_Var1);
  return;
}

