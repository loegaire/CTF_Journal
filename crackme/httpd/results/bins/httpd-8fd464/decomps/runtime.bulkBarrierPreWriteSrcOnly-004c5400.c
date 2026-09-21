
/* WARNING: Unknown calling convention */

void runtime_bulkBarrierPreWriteSrcOnly(uintptr dst,uintptr src,uintptr size)

{
  long lVar1;
  runtime_heapArena *prVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uintptr *dst_00;
  uint8 *puVar5;
  uint8 *src_00;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long in_FS_OFFSET;
  string s;
  runtime_heapBits h;
  uintptr dst_spill;
  uintptr src_spill;
  uintptr size_spill;
  uint8 *local_48;
  uint local_40;
  uint local_3c;
  uint8 *local_38;
  
                    /* Unresolved local var: runtime.heapBits h@[???] */
  if (((src_spill | dst_spill | size_spill) & 7) != 0) {
    s.len = dst_spill;
    s.str = &DAT_002a641f;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
  if (runtime_writeBarrier.needed) {
    lVar1 = *(long *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xd8);
                    /* Unresolved local var: runtime.heapArena * ha@[???] */
    dst_00 = (uintptr *)(dst_spill + 0x800000000000 >> 0x1a);
    if (dst_00 < &DAT_00400000) {
      prVar2 = (*runtime_mheap_.arenas[0])[(long)dst_00];
      if (prVar2 == (runtime_heapArena *)0x0) {
        dst_00 = (uintptr *)0x0;
        uVar7 = 0;
        puVar5 = (uint8 *)0x0;
        src_00 = (uint8 *)0x0;
      }
      else {
        src_00 = prVar2->bitmap + (dst_spill >> 5 & 0x1fffff);
        uVar7 = dst_spill >> 3 & 3;
        puVar5 = prVar2->bitmap + 0x1fffff;
      }
                    /* Unresolved local var: uintptr i@[???] */
      for (uVar8 = 0; uVar6 = (uint)uVar7, uVar8 < size_spill; uVar8 = uVar8 + 8) {
        if ((*src_00 >> (uVar6 & 0x1f) & 1) != 0) {
                    /* Unresolved local var: uintptr * srcx@[???] */
                    /* Unresolved local var: uintptr[2] * p@[???] */
          puVar3 = *(undefined8 **)(lVar1 + 0x16c0);
          uVar4 = *(undefined8 *)(uVar8 + src_spill);
          *puVar3 = 0;
          puVar3[1] = uVar4;
          lVar9 = *(long *)(lVar1 + 0x16c0) + 0x10;
          *(long *)(lVar1 + 0x16c0) = lVar9;
          if (*(long *)(lVar1 + 0x16c8) == lVar9) {
            runtime_wbBufFlush(dst_00,(uintptr)src_00);
            dst_00 = (uintptr *)((ulong)dst_00 & 0xffffffff);
          }
        }
        if (uVar6 < 3) {
          uVar7 = (ulong)(uVar6 + 1);
        }
        else if (puVar5 == src_00) {
          h.shift = SUB84(src_00,0);
          h.bitp = (uint8 *)dst_00;
          h.arena = SUB84(puVar5,0);
          h.last = (uint8 *)size_spill;
          runtime_heapBits_nextArena(h);
          uVar7 = (ulong)local_40;
          dst_00 = (uintptr *)(ulong)local_3c;
          puVar5 = local_38;
          src_00 = local_48;
        }
        else {
          uVar7 = 0;
          src_00 = src_00 + 1;
        }
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    runtime_panicIndexU();
  }
  return;
}

