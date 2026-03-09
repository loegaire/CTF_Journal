
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.net.portLookupResult(net.portLookupResult * p,
   net.portLookupResult * q, bool r) */

bool type__eq_net_portLookupResult(net_portLookupResult *p,net_portLookupResult *q)

{
  runtime_itab *y;
  long in_FS_OFFSET;
  net_portLookupResult *p_spill;
  net_portLookupResult *q_spill;
  undefined1 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (q_spill->port == p_spill->port) {
    y = (p_spill->err).tab;
    if ((q_spill->err).tab == y) {
      runtime_ifaceeq((p_spill->err).data,(q_spill->err).data,y);
    }
    else {
      local_10 = 0;
    }
  }
  else {
    local_10 = 0;
  }
  return (bool)local_10;
}

