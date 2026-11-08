
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.reflect.makeFuncCtxt(reflect.makeFuncCtxt * p,
   reflect.makeFuncCtxt * q, bool r) */

bool type__eq_reflect_makeFuncCtxt(reflect_makeFuncCtxt *p,reflect_makeFuncCtxt *q)

{
  long in_FS_OFFSET;
  reflect_makeFuncCtxt *p_spill;
  reflect_makeFuncCtxt *q_spill;
  undefined1 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_memequal();
  return (bool)local_10;
}

