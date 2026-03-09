
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.c128hash(void * p, uintptr h, uintptr ~r2) */

uintptr runtime_c128hash(void *p,uintptr h)

{
  long in_FS_OFFSET;
  float64 (*x) [2];
  uintptr h_spill;
  uintptr local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_f64hash(x,h);
  runtime_f64hash(*x + 1,h);
  return local_10;
}

