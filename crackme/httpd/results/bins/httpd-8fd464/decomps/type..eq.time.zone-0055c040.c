
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.time.zone(time.zone * p, time.zone * q, bool r) */

bool type__eq_time_zone(time_zone *p,time_zone *q)

{
  long in_FS_OFFSET;
  time_zone *p_spill;
  time_zone *q_spill;
  undefined1 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((((q_spill->name).len == (p_spill->name).len) && (q_spill->offset == p_spill->offset)) &&
     (q_spill->isDST == p_spill->isDST)) {
    runtime_memequal();
  }
  else {
    local_10 = 0;
  }
  return (bool)local_10;
}

