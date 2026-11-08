
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.runtime.sudog(runtime.sudog * p, runtime.sudog * q, bool
   r) */

bool type__eq_runtime_sudog(runtime_sudog *p,runtime_sudog *q)

{
  long in_FS_OFFSET;
  runtime_sudog *p_spill;
  runtime_sudog *q_spill;
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

