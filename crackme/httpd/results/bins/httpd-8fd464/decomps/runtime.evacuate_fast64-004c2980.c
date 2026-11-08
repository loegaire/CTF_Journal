
/* WARNING: Unknown calling convention */

void runtime_evacuate_fast64(runtime_maptype *t,runtime_hmap *h,uintptr oldbucket)

{
  byte bVar1;
  runtime_bmap *b;
  runtime_maptype *extraout_RAX;
  long lVar2;
  runtime_maptype *extraout_RAX_00;
  byte bVar3;
  char *pcVar4;
  void *in_RDI;
  uint uVar5;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  long in_FS_OFFSET;
  bool bVar11;
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
  pcVar4 = (char *)(t_spill->bucketsize * oldbucket_spill + (long)h_spill->oldbuckets);
                    /* Unresolved local var: uint8 oldB@[???] */
  uVar5 = (uint)h_spill->B;
  if ((h_spill->flags & 8) == 0) {
    uVar5 = h_spill->B - 1;
  }
  b = (runtime_bmap *)(ulong)uVar5;
  bVar3 = (byte)uVar5;
  pvVar6 = (void *)(1L << (bVar3 & 0x3f));
                    /* Unresolved local var: uint8 h@[???] */
  if (2 < (byte)(*pcVar4 - 2U)) {
                    /* Unresolved local var: runtime.evacDst[2] xy@[???] */
    auStack_40[0] = 0;
    local_28 = (void *)0x0;
    uStack_20 = 0;
    local_18 = 0;
    lStack_10 = 0;
    local_48 = (void *)(t_spill->bucketsize * oldbucket_spill + (long)h_spill->buckets);
    auStack_40[1] = (long)local_48 + 8;
    auStack_40[2] = (long)local_48 + 0x48;
    if ((h_spill->flags & 8) == 0) {
      local_28 = (void *)(((long)pvVar6 + oldbucket_spill) * (ulong)t_spill->bucketsize +
                         (long)h_spill->buckets);
      local_18 = (long)local_28 + 8;
      lStack_10 = (long)local_28 + 0x48;
    }
    for (; pcVar4 != (char *)0x0; pcVar4 = *(char **)(pcVar4 + ((ulong)t_spill->bucketsize - 8))) {
      pcVar10 = pcVar4 + 0x48;
      pcVar9 = pcVar4;
                    /* Unresolved local var: int i@[???] */
      for (lVar2 = 0; pcVar9 = pcVar9 + 8, lVar2 < 8; lVar2 = lVar2 + 1) {
                    /* Unresolved local var: uint8 top@[???]
                       Unresolved local var: uint8 useY@[???] */
        bVar1 = pcVar4[lVar2];
        if (bVar1 < 2) {
          pcVar4[lVar2] = '\x04';
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
            (**t_spill->hasher)(in_RDI,(uintptr)pcVar4,(uintptr *)t_spill->hasher);
            b = (runtime_bmap *)(ulong)bVar3;
            bVar11 = ((ulong)local_90 >> ((ulong)b & 0x3f) & 1) != 0;
          }
          else {
            bVar11 = false;
          }
          pcVar4[lVar2] = bVar11 + 2;
          uVar7 = (ulong)bVar11;
          if (1 < uVar7) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          lVar8 = uVar7 * 0x20;
          if (auStack_40[uVar7 * 4] == 8) {
            runtime___hmap__newoverflow((&local_48)[uVar7 * 4],t_spill,b);
            (&local_48)[uVar7 * 4] = local_88;
            auStack_40[uVar7 * 4] = 0;
            auStack_40[uVar7 * 4 + 1] = (long)local_88 + 8;
            auStack_40[uVar7 * 4 + 2] = (long)local_88 + 0x48;
          }
          *(byte *)((long)(&local_48)[uVar7 * 4] + (auStack_40[uVar7 * 4] & 7)) = bVar1;
          if ((t_spill->key->ptrdata == 0) || (runtime_writeBarrier.enabled == false)) {
            *(undefined8 *)auStack_40[uVar7 * 4 + 1] = *(undefined8 *)pcVar9;
          }
          else if (runtime_writeBarrier._0_4_ == 0) {
            *(undefined8 *)auStack_40[uVar7 * 4 + 1] = *(undefined8 *)pcVar9;
          }
          else {
            runtime_gcWriteBarrierDX();
          }
          in_RDI = pvVar6;
          runtime_typedmemmove(t_spill->elem,t_spill,*(void **)((long)auStack_40 + lVar8 + 0x10));
          auStack_40[uVar7 * 4] = auStack_40[uVar7 * 4] + 1;
          auStack_40[uVar7 * 4 + 1] = auStack_40[uVar7 * 4 + 1] + 8;
          auStack_40[uVar7 * 4 + 2] = auStack_40[uVar7 * 4 + 2] + (ulong)t_spill->elemsize;
          b = (runtime_bmap *)(ulong)bVar3;
          local_90 = pcVar10;
        }
        pcVar10 = pcVar10 + t_spill->elemsize;
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

