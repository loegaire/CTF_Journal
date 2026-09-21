
/* WARNING: Unknown calling convention */

void runtime_reflectcallmove
               (runtime__type *typ,void *dst,void *src,uintptr size,internal_abi_RegArgs *regs)

{
  runtime__type *typ_spill;
  void *dst_spill;
  void *src_spill;
  uintptr size_spill;
  internal_abi_RegArgs *regs_spill;
  
  if ((((runtime_writeBarrier.needed) && (typ_spill != (runtime__type *)0x0)) &&
      (typ_spill->ptrdata != 0)) && (7 < size_spill)) {
    runtime_bulkBarrierPreWrite(size_spill,(uintptr)src_spill,(uintptr)dst_spill);
  }
  runtime_memmove();
  return;
}

