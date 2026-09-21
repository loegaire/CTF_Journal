
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.mapaccess2_fast64(runtime.maptype * t, runtime.hmap * h,
   uint64 key, void * ~r3, bool ~r4) */

multireturn_void___bool_ runtime_mapaccess2_fast64(runtime_maptype *t,runtime_hmap *h,uint64 key)

{
  bool bVar1;
  void *pvVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  long in_FS_OFFSET;
  string s;
  multireturn_void___bool_ mVar7;
  multireturn_void___bool_ mVar8;
  multireturn_void___bool_ mVar9;
  runtime_maptype *t_spill;
  runtime_hmap *h_spill;
  uint64 key_spill;
  ulong local_10;
  
                    /* Unresolved local var: runtime.bmap * b@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((h_spill != (runtime_hmap *)0x0) && (h_spill->count != 0)) {
    if ((h_spill->flags & 4) != 0) {
      s.len = (int)h;
      s.str = (uint8 *)0x2a2f68;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s);
    }
    if (h_spill->B == 0) {
      puVar4 = h_spill->buckets;
    }
    else {
                    /* Unresolved local var: uintptr hash@[???]
                       Unresolved local var: uintptr m@[???] */
      (**t_spill->hasher)(&key_spill,(ulong)h_spill->hash0,(uintptr *)t_spill->hasher);
      h = (runtime_hmap *)((1L << (h_spill->B & 0x3f)) - 1);
                    /* Unresolved local var: void * c@[???] */
      pvVar2 = h_spill->oldbuckets;
      puVar4 = (ulong *)(((ulong)h & local_10) * (ulong)t_spill->bucketsize + (long)h_spill->buckets
                        );
      if (pvVar2 != (void *)0x0) {
                    /* Unresolved local var: runtime.bmap * oldb@[???] */
        if ((h_spill->flags & 8) == 0) {
          h = (runtime_hmap *)((ulong)h >> 1);
        }
        h = (runtime_hmap *)((ulong)h & local_10);
        lVar6 = (ulong)t_spill->bucketsize * (long)h;
                    /* Unresolved local var: uint8 h@[???] */
        if (2 < (byte)(*(char *)((long)pvVar2 + lVar6) - 2U)) {
          puVar4 = (ulong *)((long)pvVar2 + lVar6);
        }
      }
    }
    do {
      if (puVar4 == (ulong *)0x0) {
        mVar8.~r4 = SUB81(h,0);
        mVar8.~r3 = runtime_zeroVal;
        return mVar8;
      }
      puVar3 = puVar4;
                    /* Unresolved local var: uintptr i@[???]
                       Unresolved local var: void * k@[???] */
      for (uVar5 = 0; puVar3 = puVar3 + 1, uVar5 < 8; uVar5 = uVar5 + 1) {
        h = (runtime_hmap *)*puVar3;
        if ((runtime_hmap *)key_spill == h) {
          bVar1 = *(bool *)(uVar5 + (long)puVar4);
          h = (runtime_hmap *)(ulong)bVar1;
          if (true < bVar1) {
            mVar9.~r4 = bVar1;
            mVar9.~r3 = (void *)((long)puVar4 + t_spill->elemsize * uVar5 + 0x48);
            return mVar9;
          }
        }
      }
      puVar4 = *(ulong **)((long)puVar4 + ((ulong)t_spill->bucketsize - 8));
    } while( true );
  }
  mVar7.~r4 = SUB81(h,0);
  mVar7.~r3 = runtime_zeroVal;
  return mVar7;
}

