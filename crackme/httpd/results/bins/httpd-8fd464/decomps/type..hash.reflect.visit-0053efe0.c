
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..hash.reflect.visit(reflect.visit * p, uintptr h, uintptr
   ~r2) */

uintptr type__hash_reflect_visit(reflect_visit *p,uintptr h)

{
  long in_FS_OFFSET;
  reflect_visit *p_spill;
  uintptr h_spill;
  undefined8 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_memhash();
  runtime_interhash(local_10,h);
  return 0x10;
}

