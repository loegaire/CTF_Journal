
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.runtime._defer(runtime._defer * p, runtime._defer * q,
   bool r) */

bool type__eq_runtime__defer(runtime__defer *p,runtime__defer *q)

{
  long in_FS_OFFSET;
  runtime__defer *p_spill;
  runtime__defer *q_spill;
  undefined1 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_memequal();
  if (local_10 == '\0') {
    local_10 = '\0';
  }
  else {
    runtime_memequal();
  }
  return (bool)local_10;
}

