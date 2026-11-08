
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.reflect.ValueError(reflect.ValueError * p,
   reflect.ValueError * q, bool r) */

bool type__eq_reflect_ValueError(reflect_ValueError *p,reflect_ValueError *q)

{
  long in_FS_OFFSET;
  reflect_ValueError *p_spill;
  reflect_ValueError *q_spill;
  undefined1 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (((q_spill->Method).len == (p_spill->Method).len) && (q_spill->Kind == p_spill->Kind)) {
    runtime_memequal();
  }
  else {
    local_10 = 0;
  }
  return (bool)local_10;
}

