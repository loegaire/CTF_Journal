
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.net.ParseError(net.ParseError * p, net.ParseError * q,
   bool r) */

bool type__eq_net_ParseError(net_ParseError *p,net_ParseError *q)

{
  long in_FS_OFFSET;
  net_ParseError *p_spill;
  net_ParseError *q_spill;
  char local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((((q_spill->Type).len == (p_spill->Type).len) && ((q_spill->Text).len == (p_spill->Text).len))
     && (runtime_memequal(), local_10 != '\0')) {
    runtime_memequal();
    return (bool)local_10;
  }
  return false;
}

