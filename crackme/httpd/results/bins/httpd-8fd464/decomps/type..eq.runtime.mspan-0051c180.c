
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.runtime.mspan(runtime.mspan * p, runtime.mspan * q, bool
   r) */

bool type__eq_runtime_mspan(runtime_mspan *p,runtime_mspan *q)

{
  long in_FS_OFFSET;
  runtime_mspan *p_spill;
  runtime_mspan *q_spill;
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

