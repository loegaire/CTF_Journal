
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.runtime.modulehash(runtime.modulehash * p,
   runtime.modulehash * q, bool r) */

bool type__eq_runtime_modulehash(runtime_modulehash *p,runtime_modulehash *q)

{
  long in_FS_OFFSET;
  runtime_modulehash *p_spill;
  runtime_modulehash *q_spill;
  char local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (((((q_spill->modulename).len == (p_spill->modulename).len) &&
       ((q_spill->linktimehash).len == (p_spill->linktimehash).len)) &&
      (q_spill->runtimehash == p_spill->runtimehash)) && (runtime_memequal(), local_10 != '\0')) {
    runtime_memequal();
    return (bool)local_10;
  }
  return false;
}

