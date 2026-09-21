
/* WARNING: Unknown calling convention */

void runtime_memclrHasPointers(void *ptr,uintptr n)

{
  uintptr in_RCX;
  void *ptr_spill;
  uintptr n_spill;
  
  runtime_bulkBarrierPreWrite(n_spill,n,in_RCX);
  runtime_memclrNoHeapPointers();
  return;
}

