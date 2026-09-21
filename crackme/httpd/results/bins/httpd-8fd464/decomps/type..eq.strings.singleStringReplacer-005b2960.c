
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.strings.singleStringReplacer(strings.singleStringReplacer
   * p, strings.singleStringReplacer * q, bool r) */

bool type__eq_strings_singleStringReplacer
               (strings_singleStringReplacer *p,strings_singleStringReplacer *q)

{
  long in_FS_OFFSET;
  strings_singleStringReplacer *p_spill;
  strings_singleStringReplacer *q_spill;
  undefined1 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((q_spill->finder == p_spill->finder) && ((q_spill->value).len == (p_spill->value).len)) {
    runtime_memequal();
    return (bool)local_10;
  }
  return false;
}

