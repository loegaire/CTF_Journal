
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.net.policyTableEntry(net.policyTableEntry * p,
   net.policyTableEntry * q, bool r) */

bool type__eq_net_policyTableEntry(net_policyTableEntry *p,net_policyTableEntry *q)

{
  long in_FS_OFFSET;
  net_policyTableEntry *p_spill;
  net_policyTableEntry *q_spill;
  undefined1 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_memequal();
  return (bool)local_10;
}

