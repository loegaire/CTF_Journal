
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.typedslicecopy(runtime._type * typ, void * dstPtr, int
   dstLen, void * srcPtr, int srcLen, int ~r5) */

int runtime_typedslicecopy(runtime__type *typ,void *dstPtr,int dstLen,void *srcPtr,int srcLen)

{
  runtime__type *typ_spill;
  void *dstPtr_spill;
  int dstLen_spill;
  void *srcPtr_spill;
  int n;
  
                    /* Unresolved local var: uintptr size@[???] */
  if (n < dstLen_spill) {
    dstLen_spill = n;
  }
  if ((void *)dstLen_spill == (void *)0x0) {
    return n;
  }
  if (runtime_writeBarrier.cgo) {
    runtime_cgoCheckSliceCopy(typ_spill,srcPtr_spill,(void *)dstLen_spill,(int)srcPtr);
  }
  if (srcPtr_spill != dstPtr_spill) {
    if (runtime_writeBarrier.needed != false) {
                    /* Unresolved local var: uintptr pwsize@[???] */
      runtime_bulkBarrierPreWrite
                ((uintptr)srcPtr_spill,(uintptr)typ_spill,
                 (dstLen_spill * typ_spill->size - typ_spill->size) + typ_spill->ptrdata);
    }
    runtime_memmove();
    return (int)(void *)dstLen_spill;
  }
  return (int)srcPtr_spill;
}

