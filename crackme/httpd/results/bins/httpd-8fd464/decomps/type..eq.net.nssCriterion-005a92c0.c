
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.net.nssCriterion(net.nssCriterion * p, net.nssCriterion *
   q, bool r) */

bool type__eq_net_nssCriterion(net_nssCriterion *p,net_nssCriterion *q)

{
  long in_FS_OFFSET;
  net_nssCriterion *p_spill;
  net_nssCriterion *q_spill;
  char local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((((q_spill->negate == p_spill->negate) && ((q_spill->status).len == (p_spill->status).len)) &&
      ((q_spill->action).len == (p_spill->action).len)) && (runtime_memequal(), local_10 != '\0')) {
    runtime_memequal();
    return (bool)local_10;
  }
  return false;
}

