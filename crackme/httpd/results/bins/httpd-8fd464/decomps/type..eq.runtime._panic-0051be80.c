
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.runtime._panic(runtime._panic * p, runtime._panic * q,
   bool r) */

bool type__eq_runtime__panic(runtime__panic *p,runtime__panic *q)

{
  runtime__type *y;
  long in_FS_OFFSET;
  runtime__panic *p_spill;
  runtime__panic *q_spill;
  char local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (q_spill->argp == p_spill->argp) {
    y = (p_spill->arg)._type;
    if (((q_spill->arg)._type == y) &&
       (runtime_efaceeq((runtime__type *)p_spill,(q_spill->arg).data,y), local_10 != '\0')) {
      runtime_memequal();
      return (bool)local_10;
    }
  }
  return false;
}

