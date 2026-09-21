
/* WARNING: Unknown calling convention */
/* DWARF original name: type..eq.net.dialResult·1
   DWARF original prototype: void type..eq.net.dialResult.1(net.dialResult.1 * p, net.dialResult.1 *
   q, bool r) */

bool type__eq_net_dialResult_1(net_dialResult_1 *p,net_dialResult_1 *q)

{
  runtime_itab *prVar1;
  long in_FS_OFFSET;
  net_dialResult_1 *p_spill;
  net_dialResult_1 *q_spill;
  char local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  prVar1 = (p_spill->Conn).tab;
  if (((((q_spill->Conn).tab == prVar1) &&
       (runtime_ifaceeq((runtime_itab *)p_spill,q_spill,prVar1), local_10 != '\0')) &&
      (prVar1 = (p_spill->error).tab, (q_spill->error).tab == prVar1)) &&
     ((runtime_ifaceeq((runtime_itab *)p_spill,q_spill,prVar1), local_10 != '\0' &&
      (q_spill->primary == p_spill->primary)))) {
    return q_spill->done == p_spill->done;
  }
  return false;
}

