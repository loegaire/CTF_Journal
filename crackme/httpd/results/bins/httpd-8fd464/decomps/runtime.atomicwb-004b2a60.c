
/* WARNING: Unknown calling convention */

void runtime_atomicwb(void **ptr,void *new)

{
  uintptr *dst;
  uintptr *puVar1;
  uintptr src;
  uintptr uVar2;
  long in_FS_OFFSET;
  uintptr *slot;
  void *new_spill;
  
  dst = *(uintptr **)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xd8);
                    /* Unresolved local var: uintptr[2] * p@[???] */
  puVar1 = (uintptr *)dst[0x2d8];
  src = *slot;
  *puVar1 = src;
  puVar1[1] = (uintptr)new_spill;
  uVar2 = dst[0x2d8];
  dst[0x2d8] = uVar2 + 0x10;
  if (dst[0x2d9] == uVar2 + 0x10) {
    runtime_wbBufFlush(dst,src);
  }
  return;
}

