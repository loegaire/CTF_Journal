
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.time.zoneTrans(time.zoneTrans * p, time.zoneTrans * q,
   bool r) */

bool type__eq_time_zoneTrans(time_zoneTrans *p,time_zoneTrans *q)

{
  long in_FS_OFFSET;
  time_zoneTrans *p_spill;
  time_zoneTrans *q_spill;
  undefined1 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_memequal();
  return (bool)local_10;
}

