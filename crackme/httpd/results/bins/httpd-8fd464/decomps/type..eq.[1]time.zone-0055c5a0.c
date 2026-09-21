
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.[1]time.zone(time.zone[1] * p, time.zone[1] * q, bool r)
    */

bool type__eq__1_time_zone(time_zone (*p) [1],time_zone (*q) [1])

{
  long in_FS_OFFSET;
  bool bVar1;
  time_zone (*p_spill) [1];
  time_zone (*q_spill) [1];
  char local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((*q_spill)[0].name.len == (*p_spill)[0].name.len) {
    runtime_memequal();
  }
  else {
    local_10 = '\0';
  }
  if ((local_10 == '\0') || ((*q_spill)[0].offset != (*p_spill)[0].offset)) {
    bVar1 = false;
  }
  else {
    bVar1 = (*q_spill)[0].isDST == (*p_spill)[0].isDST;
  }
  return bVar1;
}

