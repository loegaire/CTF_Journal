
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*traceStackTable).newStack(runtime.traceStackTable * tab,
   int n, runtime.traceStack * ~r1) */

runtime_traceStack * runtime___traceStackTable__newStack(runtime_traceStackTable *tab,int n)

{
  long in_FS_OFFSET;
  runtime_traceStackTable *tab_spill;
  int n_spill;
  undefined8 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime___traceAlloc__alloc((runtime_traceAlloc *)(n_spill * 8 + 0x28),n);
  return local_10;
}

