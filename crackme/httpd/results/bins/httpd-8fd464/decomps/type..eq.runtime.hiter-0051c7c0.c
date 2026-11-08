
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.runtime.hiter(runtime.hiter * p, runtime.hiter * q, bool
   r) */

bool type__eq_runtime_hiter(runtime_hiter *p,runtime_hiter *q)

{
  long in_FS_OFFSET;
  runtime_hiter *p_spill;
  runtime_hiter *q_spill;
  undefined1 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((q_spill->bucket == p_spill->bucket) && (q_spill->checkBucket == p_spill->checkBucket)) {
    runtime_memequal();
  }
  else {
    local_10 = 0;
  }
  return (bool)local_10;
}

