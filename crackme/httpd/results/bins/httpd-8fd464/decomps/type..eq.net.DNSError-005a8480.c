
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.net.DNSError(net.DNSError * p, net.DNSError * q, bool r)
    */

bool type__eq_net_DNSError(net_DNSError *p,net_DNSError *q)

{
  long in_FS_OFFSET;
  net_DNSError *p_spill;
  net_DNSError *q_spill;
  char local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (((((q_spill->Err).len == (p_spill->Err).len) && ((p_spill->Name).len == (q_spill->Name).len))
      && ((q_spill->Server).len == (p_spill->Server).len)) &&
     (((runtime_memequal(), local_10 != '\0' && (runtime_memequal(), local_10 != '\0')) &&
      (runtime_memequal(), local_10 != '\0')))) {
    runtime_memequal();
    return (bool)local_10;
  }
  return false;
}

