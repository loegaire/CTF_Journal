
/* WARNING: Unknown calling convention */

void runtime_evacuate(runtime_maptype *t,runtime_hmap *h,uintptr oldbucket)

{
  long *plVar1;
  func_unsafe_Pointer__unsafe_Pointer__bool **ppfVar2;
  byte bVar3;
  runtime_bmap *b;
  runtime_maptype *extraout_RAX;
  long lVar4;
  long extraout_RAX_00;
  long lVar5;
  long extraout_RAX_01;
  runtime_maptype *extraout_RAX_02;
  byte bVar6;
  char *pcVar7;
  void *pvVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  runtime_hmap *prVar13;
  runtime_hmap *prVar14;
  runtime_hmap *prVar15;
  byte bVar16;
  long in_FS_OFFSET;
  bool bVar17;
  string s;
  runtime_maptype *t_spill;
  runtime_hmap *h_spill;
  uintptr oldbucket_spill;
  runtime_hmap *local_a0;
  void *local_98;
  void *local_48;
  ulong auStack_40 [3];
  void *local_28;
  undefined8 uStack_20;
  long local_18;
  long lStack_10;
  
                    /* Unresolved local var: runtime.bmap * b@[???] */
  while (auStack_40 + 2 <= *(ulong **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    t = extraout_RAX_02;
  }
  pcVar7 = (char *)(t_spill->bucketsize * oldbucket_spill + (long)h_spill->oldbuckets);
                    /* Unresolved local var: uint8 oldB@[???] */
  uVar12 = (uint)h_spill->B;
  if ((h_spill->flags & 8) == 0) {
    uVar12 = h_spill->B - 1;
  }
  b = (runtime_bmap *)(ulong)uVar12;
  bVar6 = (byte)uVar12;
                    /* Unresolved local var: uint8 h@[???] */
  pvVar8 = (void *)oldbucket_spill;
  if (2 < (byte)(*pcVar7 - 2U)) {
                    /* Unresolved local var: runtime.evacDst[2] xy@[???] */
    auStack_40[0] = 0;
    local_28 = (void *)0x0;
    uStack_20 = 0;
    local_18 = 0;
    lStack_10 = 0;
    local_48 = (void *)(t_spill->bucketsize * oldbucket_spill + (long)h_spill->buckets);
    auStack_40[1] = (long)local_48 + 8;
    auStack_40[2] = (long)local_48 + (ulong)t_spill->keysize * 8 + 8;
    if ((h_spill->flags & 8) == 0) {
      local_28 = (void *)(((1L << (bVar6 & 0x3f)) + oldbucket_spill) * (ulong)t_spill->bucketsize +
                         (long)h_spill->buckets);
      local_18 = (long)local_28 + 8;
      lStack_10 = (long)local_28 + (ulong)t_spill->keysize * 8 + 8;
    }
    for (; pcVar7 != (char *)0x0; pcVar7 = *(char **)(pcVar7 + ((ulong)t_spill->bucketsize - 8))) {
                    /* Unresolved local var: void * k@[???]
                       Unresolved local var: void * e@[???] */
      prVar15 = (runtime_hmap *)(pcVar7 + 8);
      prVar14 = (runtime_hmap *)(pcVar7 + (ulong)t_spill->keysize * 8 + 8);
                    /* Unresolved local var: int i@[???] */
      for (lVar4 = 0; lVar4 < 8; lVar4 = lVar4 + 1) {
                    /* Unresolved local var: uint8 top@[???]
                       Unresolved local var: void * k2@[???]
                       Unresolved local var: uint8 useY@[???] */
        bVar16 = pcVar7[lVar4];
        if (bVar16 < 2) {
          pcVar7[lVar4] = '\x04';
        }
        else {
          if (bVar16 < 5) {
            s.len = (int)t_spill;
            s.str = &DAT_00294de6;
                    /* WARNING: Subroutine does not return */
            runtime_throw(s);
          }
          prVar13 = prVar15;
          if ((t_spill->flags & 1) != 0) {
            prVar13 = (runtime_hmap *)prVar15->count;
          }
          if ((h_spill->flags & 8) == 0) {
                    /* Unresolved local var: uintptr hash@[???] */
            (**t_spill->hasher)(pvVar8,(uintptr)pcVar7,(uintptr *)t_spill->hasher);
            if ((h_spill->flags & 1) == 0) {
              bVar3 = 0;
            }
            else if ((t_spill->flags >> 2 & 1) == 0) {
              ppfVar2 = t_spill->key->equal;
              (**ppfVar2)(pvVar8,(void *)(ulong)t_spill->flags,(bool *)ppfVar2);
              bVar3 = (byte)local_a0 ^ 1;
            }
            else {
              bVar3 = 0;
            }
            if (bVar3 == 0) {
              bVar17 = ((ulong)local_a0 >> ((ulong)bVar6 & 0x3f) & 1) != 0;
            }
            else {
                    /* Unresolved local var: uint8 top@[???] */
              bVar3 = (byte)((ulong)local_a0 >> 0x38);
              if (bVar3 < 5) {
                bVar3 = bVar3 + 5;
              }
              bVar17 = (bool)(bVar16 & 1);
              bVar16 = bVar3;
            }
            b = (runtime_bmap *)(ulong)bVar6;
            pvVar8 = (void *)oldbucket_spill;
          }
          else {
            bVar17 = false;
          }
          pcVar7[lVar4] = bVar17 + 2;
          uVar9 = (ulong)bVar17;
          if (1 < uVar9) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          lVar10 = uVar9 * 0x20;
          if (auStack_40[uVar9 * 4] == 8) {
            local_a0 = (&local_48)[uVar9 * 4];
            runtime___hmap__newoverflow(local_a0,t_spill,b);
            (&local_48)[uVar9 * 4] = local_98;
            auStack_40[uVar9 * 4] = 0;
            auStack_40[uVar9 * 4 + 1] = (long)local_98 + 8;
            auStack_40[uVar9 * 4 + 2] = (long)local_98 + (ulong)t_spill->keysize * 8 + 8;
            b = (runtime_bmap *)(ulong)bVar6;
            pvVar8 = (void *)oldbucket_spill;
          }
          *(byte *)((long)(&local_48)[uVar9 * 4] + (auStack_40[uVar9 * 4] & 7)) = bVar16;
          lVar5 = lVar4;
          lVar11 = lVar10;
          if ((t_spill->flags & 1) == 0) {
            runtime_typedmemmove(t_spill->key,t_spill,(void *)auStack_40[uVar9 * 4 + 1]);
            b = (runtime_bmap *)(ulong)bVar6;
            pvVar8 = (void *)oldbucket_spill;
            local_a0 = prVar15;
          }
          else if (runtime_writeBarrier._0_4_ == 0) {
            *(runtime_hmap **)auStack_40[uVar9 * 4 + 1] = prVar13;
          }
          else {
            runtime_gcWriteBarrierSI();
            lVar5 = extraout_RAX_00;
          }
          if ((t_spill->flags >> 1 & 1) == 0) {
            runtime_typedmemmove(t_spill->elem,t_spill,*(void **)((long)auStack_40 + lVar11 + 0x10))
            ;
            b = (runtime_bmap *)(ulong)bVar6;
            pvVar8 = (void *)oldbucket_spill;
            local_a0 = prVar14;
          }
          else if (runtime_writeBarrier._0_4_ == 0) {
            **(int **)((long)auStack_40 + lVar11 + 0x10) = prVar14->count;
            lVar4 = lVar5;
            lVar10 = lVar11;
          }
          else {
            runtime_gcWriteBarrierSI();
            lVar4 = extraout_RAX_01;
            lVar10 = lVar11;
          }
          *(long *)((long)auStack_40 + lVar10) = *(long *)((long)auStack_40 + lVar10) + 1;
          plVar1 = (long *)((long)auStack_40 + lVar10 + 8);
          *plVar1 = *plVar1 + (ulong)t_spill->keysize;
          plVar1 = (long *)((long)auStack_40 + lVar10 + 0x10);
          *plVar1 = *plVar1 + (ulong)t_spill->elemsize;
        }
        prVar15 = (runtime_hmap *)((long)&prVar15->count + (ulong)t_spill->keysize);
        prVar14 = (runtime_hmap *)((long)&prVar14->count + (ulong)t_spill->elemsize);
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
      pvVar8 = (void *)oldbucket_spill;
    }
  }
  if ((void *)h_spill->nevacuate == pvVar8) {
    runtime_advanceEvacuationMark((runtime_hmap *)t,t_spill,(uintptr)b);
  }
  return;
}

