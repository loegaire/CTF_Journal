
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.runtime.TypeAssertionError(runtime.TypeAssertionError *
   p, runtime.TypeAssertionError * q, bool r) */

bool type__eq_runtime_TypeAssertionError
               (runtime_TypeAssertionError *p,runtime_TypeAssertionError *q)

{
  long in_FS_OFFSET;
  runtime_TypeAssertionError *p_spill;
  runtime_TypeAssertionError *q_spill;
  char local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (((q_spill->missingMethod).len == (p_spill->missingMethod).len) &&
     (runtime_memequal(), local_10 != '\0')) {
    runtime_memequal();
    return (bool)local_10;
  }
  return false;
}

