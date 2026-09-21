
/* WARNING: Unknown calling convention */

void runtime_cgoCheckSliceCopy(runtime__type *typ,void *dst,void *src,int n)

{
  long lVar1;
  void *off;
  runtime__type *typ_spill;
  void *dst_spill;
  void *p;
  int n_spill;
  char local_30;
  
  if (typ_spill->ptrdata == 0) {
    return;
  }
  runtime_cgoIsGoPointer(p);
  if (local_30 != '\0') {
    runtime_cgoIsGoPointer(dst_spill);
    if (local_30 == '\0') {
                    /* Unresolved local var: int i@[???] */
      for (lVar1 = 0; off = p, lVar1 < n_spill; lVar1 = lVar1 + 1) {
        runtime_cgoCheckTypedBlock(typ_spill,dst,(uintptr)off,n);
        p = (void *)(typ_spill->size + (long)off);
        dst = off;
      }
      return;
    }
    return;
  }
  return;
}

