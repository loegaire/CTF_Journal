
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.net.UnixAddr(net.UnixAddr * p, net.UnixAddr * q, bool r)
    */

bool type__eq_net_UnixAddr(net_UnixAddr *p,net_UnixAddr *q)

{
  long in_FS_OFFSET;
  net_UnixAddr *p_spill;
  net_UnixAddr *q_spill;
  char local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((((q_spill->Name).len == (p_spill->Name).len) && ((q_spill->Net).len == (p_spill->Net).len))
     && (runtime_memequal(), local_10 != '\0')) {
    runtime_memequal();
    return (bool)local_10;
  }
  return false;
}

