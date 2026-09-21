
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.runtime.itab(runtime.itab * p, runtime.itab * q, bool r)
    */

bool type__eq_runtime_itab(runtime_itab *p,runtime_itab *q)

{
  long in_FS_OFFSET;
  runtime_itab *p_spill;
  runtime_itab *q_spill;
  undefined1 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (p_spill->fun[0] == q_spill->fun[0]) {
    runtime_memequal();
  }
  else {
    local_10 = 0;
  }
  return (bool)local_10;
}

