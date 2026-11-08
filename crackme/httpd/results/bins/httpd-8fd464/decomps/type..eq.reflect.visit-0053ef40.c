
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.reflect.visit(reflect.visit * p, reflect.visit * q, bool
   r) */

bool type__eq_reflect_visit(reflect_visit *p,reflect_visit *q)

{
  runtime_itab *y;
  long in_FS_OFFSET;
  reflect_visit *p_spill;
  reflect_visit *q_spill;
  undefined1 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((q_spill->a1 == p_spill->a1) && (q_spill->a2 == p_spill->a2)) {
    y = (p_spill->typ).tab;
    if ((q_spill->typ).tab == y) {
      runtime_ifaceeq((p_spill->typ).data,(q_spill->typ).data,y);
    }
    else {
      local_10 = 0;
    }
  }
  else {
    local_10 = 0;
  }
  return (bool)local_10;
}

