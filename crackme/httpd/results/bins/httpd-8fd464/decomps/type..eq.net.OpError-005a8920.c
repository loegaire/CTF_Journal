
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.net.OpError(net.OpError * p, net.OpError * q, bool r) */

bool type__eq_net_OpError(net_OpError *p,net_OpError *q)

{
  runtime_itab *prVar1;
  long in_FS_OFFSET;
  net_OpError *p_spill;
  net_OpError *q_spill;
  char local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((((((q_spill->Op).len == (p_spill->Op).len) && ((p_spill->Net).len == (q_spill->Net).len)) &&
       (runtime_memequal(), local_10 != '\0')) &&
      ((runtime_memequal(), local_10 != '\0' &&
       (prVar1 = (p_spill->Source).tab, (q_spill->Source).tab == prVar1)))) &&
     ((runtime_ifaceeq((runtime_itab *)p_spill,q_spill,prVar1), local_10 != '\0' &&
      ((prVar1 = (p_spill->Addr).tab, (q_spill->Addr).tab == prVar1 &&
       (runtime_ifaceeq((runtime_itab *)p_spill,q_spill,prVar1), local_10 != '\0')))))) {
    prVar1 = (p_spill->Err).tab;
    if ((q_spill->Err).tab != prVar1) {
      return false;
    }
    runtime_ifaceeq((p_spill->Err).data,(q_spill->Err).data,prVar1);
    return (bool)local_10;
  }
  return false;
}

