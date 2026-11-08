
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.net.AddrError(net.AddrError * p, net.AddrError * q, bool
   r) */

bool type__eq_net_AddrError(net_AddrError *p,net_AddrError *q)

{
  long in_FS_OFFSET;
  net_AddrError *p_spill;
  net_AddrError *q_spill;
  char local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((((q_spill->Err).len == (p_spill->Err).len) && ((q_spill->Addr).len == (p_spill->Addr).len))
     && (runtime_memequal(), local_10 != '\0')) {
    runtime_memequal();
    return (bool)local_10;
  }
  return false;
}

