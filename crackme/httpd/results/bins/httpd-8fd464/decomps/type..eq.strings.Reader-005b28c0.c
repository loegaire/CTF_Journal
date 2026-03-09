
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.strings.Reader(strings.Reader * p, strings.Reader * q,
   bool r) */

bool type__eq_strings_Reader(strings_Reader *p,strings_Reader *q)

{
  long in_FS_OFFSET;
  strings_Reader *p_spill;
  strings_Reader *q_spill;
  undefined1 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((((q_spill->s).len == (p_spill->s).len) && (q_spill->i == p_spill->i)) &&
     (q_spill->prevRune == p_spill->prevRune)) {
    runtime_memequal();
  }
  else {
    local_10 = 0;
  }
  return (bool)local_10;
}

