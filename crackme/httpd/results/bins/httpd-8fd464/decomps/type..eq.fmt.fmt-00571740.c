
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.fmt.fmt(fmt.fmt * p, fmt.fmt * q, bool r) */

bool type__eq_fmt_fmt(fmt_fmt *p,fmt_fmt *q)

{
  long in_FS_OFFSET;
  fmt_fmt *p_spill;
  fmt_fmt *q_spill;
  char local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((q_spill->buf == p_spill->buf) && (runtime_memequal(), local_10 != '\0')) {
    runtime_memequal();
    return (bool)local_10;
  }
  return false;
}

