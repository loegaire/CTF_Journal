
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.strconv.NumError(strconv.NumError * p, strconv.NumError *
   q, bool r) */

bool type__eq_strconv_NumError(strconv_NumError *p,strconv_NumError *q)

{
  runtime_itab *y;
  long in_FS_OFFSET;
  strconv_NumError *p_spill;
  strconv_NumError *q_spill;
  char local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (((((q_spill->Func).len == (p_spill->Func).len) && ((p_spill->Num).len == (q_spill->Num).len))
      && (runtime_memequal(), local_10 != '\0')) && (runtime_memequal(), local_10 != '\0')) {
    y = (p_spill->Err).tab;
    if ((q_spill->Err).tab != y) {
      return false;
    }
    runtime_ifaceeq((p_spill->Err).data,(q_spill->Err).data,y);
    return (bool)local_10;
  }
  return false;
}

