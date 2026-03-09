
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void type..eq.runtime.special(runtime.special * p, runtime.special * q,
   bool r) */

bool type__eq_runtime_special(runtime_special *p,runtime_special *q)

{
  long in_FS_OFFSET;
  runtime_special *p_spill;
  runtime_special *q_spill;
  undefined1 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_memequal();
  return (bool)local_10;
}

