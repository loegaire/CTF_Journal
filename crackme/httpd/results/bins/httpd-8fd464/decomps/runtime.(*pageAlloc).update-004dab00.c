
/* WARNING: Unknown calling convention */

void runtime___pageAlloc__update
               (runtime_pageAlloc *p,uintptr base,uintptr npages,bool contig,bool alloc)

{
  runtime_pallocSum rVar1;
  ulong uVar2;
  runtime_pallocSum *prVar3;
  ulong uVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  byte bVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  __runtime_pallocSum sums;
  runtime_pageAlloc *p_spill;
  uintptr base_spill;
  uintptr npages_spill;
  bool contig_spill;
  bool alloc_spill;
  runtime_pallocSum local_b8;
  runtime_pallocSum local_a0;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  runtime_pallocSum *local_18;
  runtime_pallocSum *local_10;
  
                    /* Unresolved local var: bool changed@[???] */
  while (&local_40 <= *(ulong **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_20 = base_spill + 0x800000000000;
  uVar6 = local_20 >> 0x16;
  local_30 = npages_spill * 0x2000 + base_spill + 0x7fffffffffff;
  uVar10 = local_30 >> 0x16;
  local_28 = uVar6;
  if (uVar10 == uVar6) {
                    /* Unresolved local var: runtime.pallocSum x@[???]
                       Unresolved local var: runtime.pallocSum y@[???] */
    if ((ulong)p_spill->summary[4].len <= uVar6) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
    rVar1 = p_spill->summary[4].array[uVar6];
    if (0x1fff < local_20 >> 0x23) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
    runtime___pallocBits__summarize((*p_spill->chunks[local_20 >> 0x23])[uVar6 & 0x1fff].pallocBits)
    ;
    if (local_b8 == rVar1) {
      return;
    }
    if ((ulong)p_spill->summary[4].len <= local_28) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
    p_spill->summary[4].array[local_28] = local_b8;
  }
  else {
    local_38 = uVar10;
    if (contig_spill) {
                    /* Unresolved local var: []runtime.pallocSum summary@[???]
                       Unresolved local var: []runtime.pallocSum whole@[???] */
      uVar10 = p_spill->summary[4].len;
      local_18 = p_spill->summary[4].array;
      if (0x1fff < local_20 >> 0x23) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndexU();
      }
      runtime___pallocBits__summarize
                ((*p_spill->chunks[local_20 >> 0x23])[uVar6 & 0x1fff].pallocBits);
      if (local_28 < uVar10) {
        local_18[local_28] = local_b8;
        uVar6 = p_spill->summary[4].cap;
        prVar3 = p_spill->summary[4].array;
        if (local_38 <= uVar6) {
          if (local_28 + 1 <= local_38) {
            lVar7 = (local_38 - local_28) + -1;
            if (alloc_spill) {
              if (lVar7 != 0) {
                local_b8 = lVar7 * 8;
                runtime_memclrNoHeapPointers();
              }
            }
            else {
                    /* Unresolved local var: int i@[???] */
              for (lVar8 = 0; lVar8 < lVar7; lVar8 = lVar8 + 1) {
                *(undefined8 *)
                 ((long)prVar3 +
                 lVar8 * 8 + ((local_28 + 1) * 8 & (long)-((uVar6 - local_28) + -1) >> 0x3f)) =
                     0x8000040000200;
              }
            }
            if (0x1fff < local_30 >> 0x23) {
                    /* WARNING: Subroutine does not return */
              runtime_panicIndexU();
            }
            runtime___pallocBits__summarize
                      ((*p_spill->chunks[local_30 >> 0x23])[local_38 & 0x1fff].pallocBits);
            if (uVar10 <= local_38) {
                    /* WARNING: Subroutine does not return */
              runtime_panicIndexU();
            }
            local_18[local_38] = local_b8;
            goto LAB_004dad75;
          }
          runtime_panicSliceBU();
        }
        runtime_panicSliceAcapU();
      }
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
                    /* Unresolved local var: []runtime.pallocSum summary@[???] */
    uVar10 = p_spill->summary[4].len;
    local_10 = p_spill->summary[4].array;
                    /* Unresolved local var: runtime.chunkIdx c@[???] */
    for (; uVar6 <= local_38; uVar6 = uVar6 + 1) {
      if (0x1fff < uVar6 >> 0xd) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndexU();
      }
      runtime___pallocBits__summarize((*p_spill->chunks[uVar6 >> 0xd])[uVar6 & 0x1fff].pallocBits);
      if (uVar10 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndexU();
      }
      local_10[uVar6] = local_b8;
    }
  }
LAB_004dad75:
  lVar7 = 3;
  bVar5 = true;
  uVar10 = local_20;
  uVar6 = local_30;
  do {
    if ((lVar7 < 0) || (!bVar5)) {
      return;
    }
    uVar4 = -(ulong)(runtime_levelShift[lVar7] < 0x40);
                    /* Unresolved local var: uint logEntriesPerBlock@[???]
                       Unresolved local var: uint logMaxPages@[???]
                       Unresolved local var: int lo@[???]
                       Unresolved local var: int hi@[???] */
    uVar2 = runtime_levelBits[lVar7 + 1];
    bVar9 = (byte)runtime_levelShift[lVar7];
    uVar13 = uVar6 >> (bVar9 & 0x3f);
    bVar5 = false;
    local_40 = uVar10 >> (bVar9 & 0x3f) & uVar4;
                    /* Unresolved local var: int i@[???] */
    while (uVar11 = local_40, (long)uVar11 < (long)((uVar13 & uVar4) + 1)) {
      uVar10 = -(ulong)(uVar2 < 0x40);
      uVar6 = p_spill->summary[lVar7 + 1].cap;
      bVar9 = (byte)uVar2;
      uVar12 = uVar11 << (bVar9 & 0x3f) & uVar10;
      local_40 = uVar11 + 1;
      uVar10 = local_40 << (bVar9 & 0x3f) & uVar10;
      if (uVar6 < uVar10) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAcap();
      }
      if (uVar10 < uVar12) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceB();
      }
      sums.len = (int)p_spill;
      sums.array = (runtime_pallocSum *)(uVar6 - uVar12);
      sums.cap = uVar12;
      runtime_mergeSummaries(sums,uVar10 - uVar12);
      prVar3 = p_spill->summary[lVar7].array;
      if ((ulong)p_spill->summary[lVar7].len <= uVar11) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      uVar6 = local_30;
      uVar10 = local_20;
      if (prVar3[uVar11] != local_a0) {
        prVar3[uVar11] = local_a0;
        bVar5 = true;
      }
    }
                    /* Unresolved local var: int l@[???] */
    lVar7 = lVar7 + -1;
  } while( true );
}

