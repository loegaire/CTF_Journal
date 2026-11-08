
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.fmt.wrapError(fmt.wrapError * p, fmt.wrapError * q, bool
   r) */

bool type__eq_fmt_wrapError(fmt_wrapError *p,fmt_wrapError *q)

{
  runtime_itab *y;
  long in_FS_OFFSET;
  fmt_wrapError *p_spill;
  fmt_wrapError *q_spill;
  char local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (((q_spill->msg).len == (p_spill->msg).len) && (runtime_memequal(), local_10 != '\0')) {
    y = (p_spill->err).tab;
    if ((q_spill->err).tab != y) {
      return false;
    }
    runtime_ifaceeq((p_spill->err).data,(q_spill->err).data,y);
    return (bool)local_10;
  }
  return false;
}

