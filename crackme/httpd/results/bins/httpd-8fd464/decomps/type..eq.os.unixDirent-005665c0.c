
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.os.unixDirent(os.unixDirent * p, os.unixDirent * q, bool
   r) */

bool type__eq_os_unixDirent(os_unixDirent *p,os_unixDirent *q)

{
  runtime_itab *y;
  long in_FS_OFFSET;
  os_unixDirent *p_spill;
  os_unixDirent *q_spill;
  char local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (((((q_spill->parent).len == (p_spill->parent).len) &&
       ((p_spill->name).len == (q_spill->name).len)) && (q_spill->typ == p_spill->typ)) &&
     ((runtime_memequal(), local_10 != '\0' && (runtime_memequal(), local_10 != '\0')))) {
    y = (p_spill->info).tab;
    if ((q_spill->info).tab != y) {
      return false;
    }
    runtime_ifaceeq((p_spill->info).data,(q_spill->info).data,y);
    return (bool)local_10;
  }
  return false;
}

