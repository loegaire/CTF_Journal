
/* WARNING: Unknown calling convention */

void runtime_cgoCheckUsingType(runtime__type *typ,void *src,uintptr off,uintptr size)

{
  uintptr off_00;
  ulong *puVar1;
  runtime__type *typ_00;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uintptr size_00;
  long in_FS_OFFSET;
  string s;
  runtime_arraytype *at;
  void *src_spill;
  uintptr off_spill;
  uintptr size_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x18)) {
    runtime_morestackc();
  }
  uVar5 = (at->typ).ptrdata;
  if (uVar5 == 0) {
    return;
  }
  if (uVar5 <= off_spill) {
    return;
  }
                    /* Unresolved local var: uintptr ptrdataSize@[???] */
                    /* Unresolved local var: uintptr skipped@[???]
                       Unresolved local var: uintptr checked@[???] */
  if ((uint8 *)(uVar5 - off_spill) < size_spill) {
    size_spill = (uintptr)(uVar5 - off_spill);
  }
  bVar2 = (at->typ).kind;
  if ((bVar2 & 0x40) == 0) {
    runtime_cgoCheckBits((at->typ).gcdata,(uint8 *)size_spill,(uintptr)src_spill,size);
    return;
  }
  bVar2 = bVar2 & 0x1f;
  if (bVar2 == 0x11) {
                    /* Unresolved local var: uintptr i@[???] */
    for (uVar5 = 0; uVar5 < at->len; uVar5 = uVar5 + 1) {
      if (off_spill < at->elem->size) {
        runtime_cgoCheckUsingType(&at->typ,(void *)size_spill,(uintptr)src_spill,(uintptr)at->elem);
      }
      uVar3 = at->elem->size;
      uVar4 = off_spill;
      if (uVar3 < off_spill) {
        uVar4 = uVar3;
      }
      off_spill = off_spill - uVar4;
      src_spill = (void *)((long)src_spill + uVar3);
      if (size_spill <= (uint8 *)(uVar3 - uVar4)) {
        return;
      }
                    /* Unresolved local var: uintptr skipped@[???]
                       Unresolved local var: uintptr checked@[???] */
      size_spill = size_spill + -(long)(uVar3 - uVar4);
    }
  }
  else {
    if (bVar2 != 0x19) {
      s.len = size_spill;
      s.str = &DAT_002930a6;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s);
    }
    off_00 = at->len;
    typ_00 = at->slice;
    if (0 < (long)off_00) {
      size_00 = 0;
      while( true ) {
        puVar1 = (ulong *)typ_00->ptrdata;
        if (off_spill < *puVar1) {
          runtime_cgoCheckUsingType(typ_00,(void *)size_spill,off_00,size_00);
        }
        uVar5 = *puVar1;
        uVar3 = off_spill;
        if (uVar5 < off_spill) {
          uVar3 = uVar5;
        }
        off_spill = off_spill - uVar3;
        if (size_spill <= (uint8 *)(uVar5 - uVar3)) {
          return;
        }
        size_00 = size_00 + 1;
        size_spill = size_spill + -(long)(uVar5 - uVar3);
        if ((long)off_00 <= (long)size_00) break;
        typ_00 = (runtime__type *)&typ_00->equal;
      }
    }
  }
  return;
}

