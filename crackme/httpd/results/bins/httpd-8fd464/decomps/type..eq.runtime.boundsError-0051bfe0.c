
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.runtime.boundsError(runtime.boundsError * p,
   runtime.boundsError * q, bool r) */

bool type__eq_runtime_boundsError(runtime_boundsError *p,runtime_boundsError *q)

{
  long in_FS_OFFSET;
  runtime_boundsError *p_spill;
  runtime_boundsError *q_spill;
  undefined1 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_memequal();
  return (bool)local_10;
}

