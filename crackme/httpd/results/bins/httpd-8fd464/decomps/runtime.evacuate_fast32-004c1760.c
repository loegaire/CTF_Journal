
/* WARNING: Unknown calling convention */

void runtime_evacuate_fast32(runtime_maptype *t,runtime_hmap *h,uintptr oldbucket)

{
  byte bVar1;
  runtime_bmap *b;
  runtime_maptype *extraout_RAX;
  long lVar2;
  runtime_maptype *extraout_RAX_00;
  byte bVar3;
  ulong uVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  long in_FS_OFFSET;
  bool bVar9;
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
  bVar3 = (byte)uVar6;
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
    auStack_40[2] = (long)local_48 + 0x28;
    if ((h_spill->flags & 8) == 0) {
      local_28 = (void *)(((1L << (bVar3 & 0x3f)) + oldbucket_spill) * (ulong)t_spill->bucketsize +
                         (long)h_spill->buckets);
      local_18 = (long)local_28 + 8;
      lStack_10 = (long)local_28 + 0x28;
    }
    for (; pcVar5 != (char *)0x0; pcVar5 = *(char **)(pcVar5 + ((ulong)t_spill->bucketsize - 8))) {
                    /* Unresolved local var: void * k@[???]
                       Unresolved local var: void * e@[???] */
      pcVar7 = pcVar5 + 8;
      pcVar8 = pcVar5 + 0x28;
                    /* Unresolved local var: int i@[???] */
      for (lVar2 = 0; lVar2 < 8; lVar2 = lVar2 + 1) {
                    /* Unresolved local var: uint8 top@[???]
                       Unresolved local var: uint8 useY@[???] */
        bVar1 = pcVar5[lVar2];
        if (bVar1 < 2) {
          pcVar5[lVar2] = '\x04';
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
            (**t_spill->hasher)((void *)oldbucket_spill,(uintptr)pcVar5,(uintptr *)t_spill->hasher);
            b = (runtime_bmap *)(ulong)bVar3;
            bVar9 = ((ulong)local_90 >> ((ulong)b & 0x3f) & 1) != 0;
          }
          else {
            bVar9 = false;
          }
          pcVar5[lVar2] = bVar9 + 2;
          uVar4 = (ulong)bVar9;
          if (1 < uVar4) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          if (auStack_40[uVar4 * 4] == 8) {
            runtime___hmap__newoverflow((&local_48)[uVar4 * 4],t_spill,b);
            (&local_48)[uVar4 * 4] = local_88;
            auStack_40[uVar4 * 4] = 0;
            auStack_40[uVar4 * 4 + 1] = (long)local_88 + 8;
            auStack_40[uVar4 * 4 + 2] = (long)local_88 + 0x28;
          }
          *(byte *)((long)(&local_48)[uVar4 * 4] + (auStack_40[uVar4 * 4] & 7)) = bVar1;
          *(undefined4 *)auStack_40[uVar4 * 4 + 1] = *(undefined4 *)pcVar7;
          runtime_typedmemmove(t_spill->elem,t_spill,(void *)auStack_40[uVar4 * 4 + 2]);
          auStack_40[uVar4 * 4] = auStack_40[uVar4 * 4] + 1;
          auStack_40[uVar4 * 4 + 1] = auStack_40[uVar4 * 4 + 1] + 4;
          auStack_40[uVar4 * 4 + 2] = auStack_40[uVar4 * 4 + 2] + (ulong)t_spill->elemsize;
          b = (runtime_bmap *)(ulong)bVar3;
          local_90 = pcVar8;
        }
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + t_spill->elemsize;
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

