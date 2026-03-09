
/* WARNING: Unknown calling convention */

void runtime_cgoCheckMemmove(runtime__type *typ,void *dst,void *src,uintptr off,uintptr size)

{
  runtime__type *typ_spill;
  void *dst_spill;
  void *src_spill;
  uintptr off_spill;
  uintptr size_spill;
  char local_20;
  
  if (typ_spill->ptrdata == 0) {
    return;
  }
  runtime_cgoIsGoPointer(src_spill);
  if (local_20 != '\0') {
    runtime_cgoIsGoPointer(dst_spill);
    if (local_20 != '\0') {
      return;
    }
    runtime_cgoCheckTypedBlock((runtime__type *)size_spill,dst,(uintptr)src,off);
    return;
  }
  return;
}

