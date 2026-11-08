
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.strhashFallback(void * a, uintptr h, uintptr ~r2) */

uintptr runtime_strhashFallback(void *a,uintptr h)

{
  long in_FS_OFFSET;
  runtime_stringStruct *x;
  uintptr h_spill;
  uintptr local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_memhashFallback((void *)x->len,h,h_spill);
  return local_10;
}

