
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.runtime.mcache(runtime.mcache * p, runtime.mcache * q,
   bool r) */

bool type__eq_runtime_mcache(runtime_mcache *p,runtime_mcache *q)

{
  long in_FS_OFFSET;
  runtime_mcache *p_spill;
  runtime_mcache *q_spill;
  undefined1 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_memequal();
  return (bool)local_10;
}

