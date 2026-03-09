
/* WARNING: Unknown calling convention */

void runtime_wbBufFlush(uintptr *dst,uintptr src)

{
  long lVar1;
  long in_FS_OFFSET;
  uintptr *dst_spill;
  uintptr src_spill;
  
  lVar1 = *(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30);
  if (0 < *(int *)(lVar1 + 0x114)) {
    lVar1 = *(long *)(lVar1 + 0xd8);
    *(long *)(lVar1 + 0x16c0) = lVar1 + 0x16d0;
    return;
  }
  if ((runtime_writeBarrier.cgo) && (dst_spill != (uintptr *)0x0)) {
    runtime_cgoCheckWriteBarrier((uintptr *)src_spill,src);
    if (runtime_writeBarrier.needed == false) {
      lVar1 = *(long *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xd8);
      *(long *)(lVar1 + 0x16c0) = lVar1 + 0x16d0;
      return;
    }
  }
  runtime_systemstack();
  return;
}

