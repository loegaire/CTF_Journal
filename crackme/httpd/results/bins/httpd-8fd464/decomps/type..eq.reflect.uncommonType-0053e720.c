
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.reflect.uncommonType(reflect.uncommonType * p,
   reflect.uncommonType * q, bool r) */

bool type__eq_reflect_uncommonType(reflect_uncommonType *p,reflect_uncommonType *q)

{
  long in_FS_OFFSET;
  reflect_uncommonType *p_spill;
  reflect_uncommonType *q_spill;
  undefined1 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_memequal();
  return (bool)local_10;
}

