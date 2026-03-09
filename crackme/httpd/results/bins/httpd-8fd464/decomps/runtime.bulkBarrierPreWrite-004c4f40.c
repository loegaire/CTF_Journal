
/* WARNING: Unknown calling convention */

void runtime_bulkBarrierPreWrite(uintptr dst,uintptr src,uintptr size)

{
  runtime_heapArena *prVar1;
  runtime_moduledata *prVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uintptr *dst_00;
  int iVar5;
  uint8 *puVar6;
  runtime_moduledata **pprVar7;
  runtime_mspan *prVar8;
  long lVar9;
  uint8 *src_00;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  long in_FS_OFFSET;
  string s;
  runtime_heapBits h;
  runtime_heapBits h_00;
  uintptr dst_spill;
  uintptr src_spill;
  uintptr size_spill;
  uint8 *local_50;
  ulong local_48;
  uint8 *local_40;
  
                    /* Unresolved local var: runtime.heapBits h@[???] */
  if (((src_spill | dst_spill | size_spill) & 7) != 0) {
    s.len = dst_spill;
    s.str = &DAT_002a641f;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
  if (runtime_writeBarrier.needed) {
    dst_00 = (uintptr *)(dst_spill + 0x800000000000 >> 0x1a);
    if (dst_00 < &DAT_00400000) {
      if ((*runtime_mheap_.arenas[0])[(long)dst_00] == (runtime_heapArena *)0x0) {
        prVar8 = (runtime_mspan *)0x0;
      }
      else {
        prVar8 = (*runtime_mheap_.arenas[0])[(long)dst_00]->spans[dst_spill >> 0xd & 0x1fff];
      }
    }
    else {
      prVar8 = (runtime_mspan *)0x0;
                    /* Unresolved local var: runtime.mspan * s@[???] */
    }
    if (prVar8 != (runtime_mspan *)0x0) {
      if ((((prVar8->state).s == 1) && (prVar8->startAddr <= dst_spill)) &&
         (dst_spill < prVar8->limit)) {
        lVar9 = *(long *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xd8);
                    /* Unresolved local var: runtime.heapArena * ha@[???] */
        if (dst_00 < &DAT_00400000) {
          prVar1 = (*runtime_mheap_.arenas[0])[(long)dst_00];
          if (prVar1 == (runtime_heapArena *)0x0) {
                    /* Unresolved local var: uintptr i@[???]
                       Unresolved local var: uintptr * dstx@[???] */
            dst_00 = (uintptr *)0x0;
            uVar12 = 0;
            puVar6 = (uint8 *)0x0;
            src_00 = (uint8 *)0x0;
          }
          else {
            src_00 = prVar1->bitmap + (dst_spill >> 5 & 0x1fffff);
            uVar12 = dst_spill >> 3 & 3;
            puVar6 = prVar1->bitmap + 0x1fffff;
          }
          if (src_spill == 0) {
            for (uVar10 = 0; uVar11 = (uint)uVar12, uVar10 < size_spill; uVar10 = uVar10 + 8) {
              if ((*src_00 >> (uVar11 & 0x1f) & 1) != 0) {
                    /* Unresolved local var: uintptr[2] * p@[???] */
                puVar4 = *(undefined8 **)(lVar9 + 0x16c0);
                *puVar4 = *(undefined8 *)(uVar10 + dst_spill);
                puVar4[1] = 0;
                lVar13 = *(long *)(lVar9 + 0x16c0) + 0x10;
                *(long *)(lVar9 + 0x16c0) = lVar13;
                if (*(long *)(lVar9 + 0x16c8) == lVar13) {
                  runtime_wbBufFlush(dst_00,(uintptr)src_00);
                  dst_00 = (uintptr *)((ulong)dst_00 & 0xffffffff);
                }
              }
              if (uVar11 < 3) {
                uVar12 = (ulong)(uVar11 + 1);
              }
              else if (puVar6 == src_00) {
                h_00.shift = SUB84(src_00,0);
                h_00.bitp = (uint8 *)dst_00;
                h_00.arena = SUB84(puVar6,0);
                h_00.last = (uint8 *)size_spill;
                runtime_heapBits_nextArena(h_00);
                uVar12 = local_48 & 0xffffffff;
                dst_00 = (uintptr *)(local_48 >> 0x20);
                puVar6 = local_40;
                src_00 = local_50;
              }
              else {
                uVar12 = 0;
                src_00 = src_00 + 1;
              }
            }
          }
          else {
            for (uVar10 = 0; uVar11 = (uint)uVar12, uVar10 < size_spill; uVar10 = uVar10 + 8) {
              if ((*src_00 >> (uVar11 & 0x1f) & 1) != 0) {
                    /* Unresolved local var: uintptr * dstx@[???]
                       Unresolved local var: uintptr * srcx@[???] */
                    /* Unresolved local var: uintptr[2] * p@[???] */
                puVar4 = *(undefined8 **)(lVar9 + 0x16c0);
                uVar3 = *(undefined8 *)(uVar10 + src_spill);
                *puVar4 = *(undefined8 *)(uVar10 + dst_spill);
                puVar4[1] = uVar3;
                lVar13 = *(long *)(lVar9 + 0x16c0) + 0x10;
                *(long *)(lVar9 + 0x16c0) = lVar13;
                if (*(long *)(lVar9 + 0x16c8) == lVar13) {
                  runtime_wbBufFlush(dst_00,(uintptr)src_00);
                  dst_00 = (uintptr *)((ulong)dst_00 & 0xffffffff);
                }
              }
              if (uVar11 < 3) {
                uVar12 = (ulong)(uVar11 + 1);
              }
              else if (puVar6 == src_00) {
                h.shift = SUB84(src_00,0);
                h.bitp = (uint8 *)dst_00;
                h.arena = SUB84(puVar6,0);
                h.last = (uint8 *)size_spill;
                runtime_heapBits_nextArena(h);
                uVar12 = local_48 & 0xffffffff;
                dst_00 = (uintptr *)(local_48 >> 0x20);
                puVar6 = local_40;
                src_00 = local_50;
              }
              else {
                uVar12 = 0;
                src_00 = src_00 + 1;
              }
                    /* Unresolved local var: uintptr i@[???] */
            }
          }
          return;
        }
                    /* WARNING: Subroutine does not return */
        runtime_panicIndexU();
      }
      return;
    }
                    /* Unresolved local var: []*runtime.moduledata * p@[???] */
    if (runtime_modulesSlice == (___runtime_moduledata *)0x0) {
      iVar5 = 0;
      pprVar7 = (runtime_moduledata **)0x0;
    }
    else {
      pprVar7 = runtime_modulesSlice->array;
      iVar5 = runtime_modulesSlice->len;
                    /* Unresolved local var: runtime.moduledata * datap@[???] */
    }
    lVar9 = 0;
    while( true ) {
      if (iVar5 <= lVar9) {
                    /* Unresolved local var: []*runtime.moduledata * p@[???] */
        if (runtime_modulesSlice == (___runtime_moduledata *)0x0) {
          iVar5 = 0;
          pprVar7 = (runtime_moduledata **)0x0;
        }
        else {
          pprVar7 = runtime_modulesSlice->array;
          iVar5 = runtime_modulesSlice->len;
                    /* Unresolved local var: runtime.moduledata * datap@[???] */
        }
        lVar9 = 0;
        while( true ) {
          if (iVar5 <= lVar9) {
            return;
          }
          prVar2 = pprVar7[lVar9];
          if ((prVar2->bss <= dst_spill) && (dst_spill < prVar2->ebss)) break;
          lVar9 = lVar9 + 1;
        }
        runtime_bulkBarrierBitmap
                  ((uintptr)(prVar2->gcbssmask).bytedata,dst_spill - prVar2->bss,(uintptr)pprVar7,
                   size_spill,(uint8 *)src_spill);
        return;
      }
      prVar2 = pprVar7[lVar9];
      if ((prVar2->data <= dst_spill) && (dst_spill < prVar2->edata)) break;
      lVar9 = lVar9 + 1;
    }
    runtime_bulkBarrierBitmap
              ((uintptr)(prVar2->gcdatamask).bytedata,dst_spill - prVar2->data,(uintptr)pprVar7,
               size_spill,(uint8 *)src_spill);
    return;
  }
  return;
}

