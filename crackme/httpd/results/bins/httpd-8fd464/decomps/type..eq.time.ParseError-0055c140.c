
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.time.ParseError(time.ParseError * p, time.ParseError * q,
   bool r) */

bool type__eq_time_ParseError(time_ParseError *p,time_ParseError *q)

{
  long in_FS_OFFSET;
  time_ParseError *p_spill;
  time_ParseError *q_spill;
  char local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (((((((q_spill->Layout).len == (p_spill->Layout).len) &&
         ((p_spill->Value).len == (q_spill->Value).len)) &&
        ((p_spill->LayoutElem).len == (q_spill->LayoutElem).len)) &&
       (((q_spill->ValueElem).len == (p_spill->ValueElem).len &&
        ((p_spill->Message).len == (q_spill->Message).len)))) &&
      ((runtime_memequal(), local_10 != '\0' &&
       ((runtime_memequal(), local_10 != '\0' && (runtime_memequal(), local_10 != '\0')))))) &&
     (runtime_memequal(), local_10 != '\0')) {
    runtime_memequal();
    return (bool)local_10;
  }
  return false;
}

