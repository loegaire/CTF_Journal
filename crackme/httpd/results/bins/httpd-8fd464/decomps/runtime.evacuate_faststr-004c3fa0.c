
/* WARNING: Unknown calling convention */

void runtime_evacuate_faststr(runtime_maptype *t,runtime_hmap *h,uintptr oldbucket)

{
  byte bVar1;
  undefined8 uVar2;
  runtime_bmap *b;
  runtime_maptype *extraout_RAX;
  long lVar3;
  runtime_maptype *extraout_RAX_00;
  byte bVar4;
  char *pcVar5;
  undefined8 *in_RDI;
  uint uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  char *pcVar10;
  char *pcVar11;
  long in_FS_OFFSET;
  bool bVar12;
  string s;
  runtime_maptype *t_spill;
  runtime_hmap *h_spill;
  uintptr oldbucket_spill;
  char *local_90;
  void *local_88;
  void *local_48;
  ulong auStack_40 [3];
  void *local_28;
  undefined8 uStack_20;
  long local_18;
  long lStack_10;
  
                    /* Unresolved local var: runtime.bmap * b@[???] */
  while (&uStack_20 <= *(undefined8 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    t = extraout_RAX_00;
  }
  pcVar5 = (char *)(t_spill->bucketsize * oldbucket_spill + (long)h_spill->oldbuckets);
                    /* Unresolved local var: uint8 oldB@[???] */
  uVar6 = (uint)h_spill->B;
  if ((h_spill->flags & 8) == 0) {
    uVar6 = h_spill->B - 1;
  }
  b = (runtime_bmap *)(ulong)uVar6;
  bVar4 = (byte)uVar6;
  puVar7 = (undefined8 *)(1L << (bVar4 & 0x3f));
                    /* Unresolved local var: uint8 h@[???] */
  if (2 < (byte)(*pcVar5 - 2U)) {
                    /* Unresolved local var: runtime.evacDst[2] xy@[???] */
    auStack_40[0] = 0;
    local_28 = (void *)0x0;
    uStack_20 = 0;
    local_18 = 0;
    lStack_10 = 0;
    local_48 = (void *)(t_spill->bucketsize * oldbucket_spill + (long)h_spill->buckets);
    auStack_40[1] = (long)local_48 + 8;
    auStack_40[2] = (long)local_48 + 0x88;
    if ((h_spill->flags & 8) == 0) {
      local_28 = (void *)(((long)puVar7 + oldbucket_spill) * (ulong)t_spill->bucketsize +
                         (long)h_spill->buckets);
      local_18 = (long)local_28 + 8;
      lStack_10 = (long)local_28 + 0x88;
    }
    for (; pcVar5 != (char *)0x0; pcVar5 = *(char **)(pcVar5 + ((ulong)t_spill->bucketsize - 8))) {
                    /* Unresolved local var: void * k@[???]
                       Unresolved local var: void * e@[???] */
      pcVar10 = pcVar5 + 8;
      pcVar11 = pcVar5 + 0x88;
                    /* Unresolved local var: int i@[???] */
      for (lVar3 = 0; lVar3 < 8; lVar3 = lVar3 + 1) {
                    /* Unresolved local var: uint8 top@[???]
                       Unresolved local var: uint8 useY@[???] */
        bVar1 = pcVar5[lVar3];
        if (bVar1 < 2) {
          pcVar5[lVar3] = '\x04';
        }
        else {
          if (bVar1 < 5) {
            s.len = (int)t_spill;
            s.str = &DAT_00294de6;
                    /* WARNING: Subroutine does not return */
            runtime_throw(s);
          }
          if ((h_spill->flags & 8) == 0) {
                    /* Unresolved local var: uintptr hash@[???] */
            (**t_spill->hasher)(in_RDI,(uintptr)pcVar5,(uintptr *)t_spill->hasher);
            b = (runtime_bmap *)(ulong)bVar4;
            bVar12 = ((ulong)local_90 >> ((ulong)b & 0x3f) & 1) != 0;
          }
          else {
            bVar12 = false;
          }
          pcVar5[lVar3] = bVar12 + 2;
          uVar8 = (ulong)bVar12;
          if (1 < uVar8) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          lVar9 = uVar8 * 0x20;
          if (auStack_40[uVar8 * 4] == 8) {
            runtime___hmap__newoverflow((&local_48)[uVar8 * 4],t_spill,b);
            (&local_48)[uVar8 * 4] = local_88;
            auStack_40[uVar8 * 4] = 0;
            auStack_40[uVar8 * 4 + 1] = (long)local_88 + 8;
            auStack_40[uVar8 * 4 + 2] = (long)local_88 + 0x88;
          }
          *(byte *)((long)(&local_48)[uVar8 * 4] + (auStack_40[uVar8 * 4] & 7)) = bVar1;
          in_RDI = (undefined8 *)auStack_40[uVar8 * 4 + 1];
          uVar2 = *(undefined8 *)pcVar10;
          in_RDI[1] = *(undefined8 *)(pcVar10 + 8);
          if (runtime_writeBarrier._0_4_ == 0) {
            *in_RDI = uVar2;
            in_RDI = puVar7;
          }
          else {
            runtime_gcWriteBarrierDX();
          }
          runtime_typedmemmove(t_spill->elem,t_spill,*(void **)((long)auStack_40 + lVar9 + 0x10));
          auStack_40[uVar8 * 4] = auStack_40[uVar8 * 4] + 1;
          auStack_40[uVar8 * 4 + 1] = auStack_40[uVar8 * 4 + 1] + 0x10;
          auStack_40[uVar8 * 4 + 2] = auStack_40[uVar8 * 4 + 2] + (ulong)t_spill->elemsize;
          b = (runtime_bmap *)(ulong)bVar4;
          local_90 = pcVar11;
        }
        pcVar10 = pcVar10 + 0x10;
        pcVar11 = pcVar11 + t_spill->elemsize;
      }
    }
    t = (runtime_maptype *)(ulong)h_spill->flags;
    if (((h_spill->flags & 2) == 0) &&
       (t = (runtime_maptype *)t_spill->bucket, (t->typ).ptrdata != 0)) {
                    /* Unresolved local var: void * b@[???]
                       Unresolved local var: void * ptr@[???]
                       Unresolved local var: uintptr n@[???] */
      b = (runtime_bmap *)(ulong)t_spill->bucketsize;
      runtime_memclrHasPointers(b + -1,(uintptr)t_spill);
      t = extraout_RAX;
    }
  }
  if (h_spill->nevacuate == oldbucket_spill) {
    runtime_advanceEvacuationMark((runtime_hmap *)t,t_spill,(uintptr)b);
  }
  return;
}

