
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.memhash8(void * p, uintptr h, uintptr ~r2) */

uintptr runtime_memhash8(void *p,uintptr h)

{
  long in_FS_OFFSET;
  void *p_spill;
  uintptr h_spill;
  undefined8 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_memhash();
  return local_10;
}

