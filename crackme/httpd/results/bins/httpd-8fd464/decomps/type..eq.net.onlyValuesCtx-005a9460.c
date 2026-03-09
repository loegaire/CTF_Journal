
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.net.onlyValuesCtx(net.onlyValuesCtx * p,
   net.onlyValuesCtx * q, bool r) */

bool type__eq_net_onlyValuesCtx(net_onlyValuesCtx *p,net_onlyValuesCtx *q)

{
  runtime_itab *prVar1;
  long in_FS_OFFSET;
  net_onlyValuesCtx *p_spill;
  net_onlyValuesCtx *q_spill;
  char local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  prVar1 = (p_spill->Context).tab;
  if (((q_spill->Context).tab == prVar1) &&
     (runtime_ifaceeq((runtime_itab *)p_spill,q_spill,prVar1), local_10 != '\0')) {
    prVar1 = (p_spill->lookupValues).tab;
    if ((q_spill->lookupValues).tab != prVar1) {
      return false;
    }
    runtime_ifaceeq((p_spill->lookupValues).data,(q_spill->lookupValues).data,prVar1);
    return (bool)local_10;
  }
  return false;
}

