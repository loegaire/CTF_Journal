
/* WARNING: Unknown calling convention */

void runtime_typedmemmove(runtime__type *typ,void *dst,void *src)

{
  void *dst_00;
  uintptr in_RSI;
  uintptr in_RDI;
  runtime__type *typ_spill;
  void *dst_spill;
  void *src_spill;
  
  if (src_spill == dst_spill) {
    return;
  }
  if ((runtime_writeBarrier.needed) && (typ_spill->ptrdata != 0)) {
    runtime_bulkBarrierPreWrite((uintptr)src_spill,typ_spill->ptrdata,(uintptr)dst_spill);
  }
  dst_00 = (void *)typ_spill->size;
  runtime_memmove();
  if (runtime_writeBarrier.cgo != false) {
    runtime_cgoCheckMemmove(src_spill,dst_00,(void *)typ_spill->size,in_RDI,in_RSI);
  }
  return;
}

