
/* WARNING: Unknown calling convention */

void runtime_typedmemclr(runtime__type *typ,void *ptr)

{
  runtime__type *typ_spill;
  void *ptr_spill;
  
  if ((runtime_writeBarrier.needed) && (typ_spill->ptrdata != 0)) {
    runtime_bulkBarrierPreWrite((uintptr)ptr_spill,(uintptr)ptr,typ_spill->ptrdata);
  }
  runtime_memclrNoHeapPointers();
  return;
}

