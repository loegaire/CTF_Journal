
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.os.LinkError(os.LinkError * p, os.LinkError * q, bool r)
    */

bool type__eq_os_LinkError(os_LinkError *p,os_LinkError *q)

{
  runtime_itab *y;
  long in_FS_OFFSET;
  os_LinkError *p_spill;
  os_LinkError *q_spill;
  char local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (((((q_spill->Op).len == (p_spill->Op).len) && ((p_spill->Old).len == (q_spill->Old).len)) &&
      ((q_spill->New).len == (p_spill->New).len)) &&
     (((runtime_memequal(), local_10 != '\0' && (runtime_memequal(), local_10 != '\0')) &&
      (runtime_memequal(), local_10 != '\0')))) {
    y = (p_spill->Err).tab;
    if ((q_spill->Err).tab != y) {
      return false;
    }
    runtime_ifaceeq((p_spill->Err).data,(q_spill->Err).data,y);
    return (bool)local_10;
  }
  return false;
}

