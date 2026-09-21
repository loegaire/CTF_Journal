
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.net.netFD(net.netFD * p, net.netFD * q, bool r) */

bool type__eq_net_netFD(net_netFD *p,net_netFD *q)

{
  runtime_itab *prVar1;
  long in_FS_OFFSET;
  net_netFD *p_spill;
  net_netFD *q_spill;
  char local_18;
  char local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  type__eq_internal_poll_FD(&p_spill->pfd,&q->pfd);
  if ((((local_18 != '\0') && ((p_spill->net).len == (q_spill->net).len)) &&
      (runtime_memequal(), local_10 != '\0')) &&
     (((runtime_memequal(), local_10 != '\0' &&
       (prVar1 = (p_spill->laddr).tab, (q_spill->laddr).tab == prVar1)) &&
      (runtime_ifaceeq((runtime_itab *)p_spill,q_spill,prVar1), local_10 != '\0')))) {
    prVar1 = (p_spill->raddr).tab;
    if ((q_spill->raddr).tab != prVar1) {
      return false;
    }
    runtime_ifaceeq((p_spill->raddr).data,(q_spill->raddr).data,prVar1);
    return (bool)local_10;
  }
  return false;
}

