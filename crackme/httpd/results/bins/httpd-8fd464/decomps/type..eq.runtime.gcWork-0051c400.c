
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.runtime.gcWork(runtime.gcWork * p, runtime.gcWork * q,
   bool r) */

bool type__eq_runtime_gcWork(runtime_gcWork *p,runtime_gcWork *q)

{
  long in_FS_OFFSET;
  runtime_gcWork *p_spill;
  runtime_gcWork *q_spill;
  undefined1 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_memequal();
  return (bool)local_10;
}

