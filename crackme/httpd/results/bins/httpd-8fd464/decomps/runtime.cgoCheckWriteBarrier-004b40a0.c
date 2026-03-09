
/* WARNING: Unknown calling convention */

void runtime_cgoCheckWriteBarrier(uintptr *dst,uintptr src)

{
  long lVar1;
  long *plVar2;
  runtime_notInHeap *prVar3;
  long in_FS_OFFSET;
  uintptr *dst_spill;
  uintptr src_spill;
  char local_28;
  
                    /* Unresolved local var: runtime.g * g@[???] */
  runtime_cgoIsGoPointer((void *)src_spill);
  if (local_28 == '\0') {
    return;
  }
  runtime_cgoIsGoPointer(dst_spill);
  if (local_28 != '\0') {
    return;
  }
  lVar1 = *(long *)(in_FS_OFFSET + -8);
  plVar2 = *(long **)(lVar1 + 0x30);
  if ((*plVar2 != lVar1) && (plVar2[10] != lVar1)) {
    prVar3 = runtime_persistentChunks;
    if ((int)plVar2[0x1f] != 0) {
      return;
    }
    while( true ) {
      if (prVar3 == (runtime_notInHeap *)0x0) {
        runtime_systemstack();
        return;
      }
      if ((prVar3 <= dst_spill) && (dst_spill < prVar3 + 0x40000)) break;
      prVar3 = *(runtime_notInHeap **)prVar3;
    }
    return;
  }
  return;
}

