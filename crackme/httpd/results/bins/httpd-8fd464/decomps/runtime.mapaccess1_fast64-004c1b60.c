
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.mapaccess1_fast64(runtime.maptype * t, runtime.hmap * h,
   uint64 key, void * ~r3) */

void * runtime_mapaccess1_fast64(runtime_maptype *t,runtime_hmap *h,uint64 key)

{
  void *pvVar1;
  uint64 *puVar2;
  uint64 *puVar3;
  ulong uVar4;
  long lVar5;
  long in_FS_OFFSET;
  string s;
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
      puVar3 = h_spill->buckets;
    }
    else {
                    /* Unresolved local var: uintptr hash@[???]
                       Unresolved local var: uintptr m@[???] */
      (**t_spill->hasher)(&key_spill,(ulong)h_spill->hash0,(uintptr *)t_spill->hasher);
      uVar4 = (1L << (h_spill->B & 0x3f)) - 1;
                    /* Unresolved local var: void * c@[???] */
      pvVar1 = h_spill->oldbuckets;
      puVar3 = (uint64 *)((uVar4 & local_10) * (ulong)t_spill->bucketsize + (long)h_spill->buckets);
      if (pvVar1 != (void *)0x0) {
                    /* Unresolved local var: runtime.bmap * oldb@[???] */
        if ((h_spill->flags & 8) == 0) {
          uVar4 = uVar4 >> 1;
        }
        lVar5 = (ulong)t_spill->bucketsize * (uVar4 & local_10);
                    /* Unresolved local var: uint8 h@[???] */
        if (2 < (byte)(*(char *)((long)pvVar1 + lVar5) - 2U)) {
          puVar3 = (uint64 *)((long)pvVar1 + lVar5);
        }
      }
    }
    do {
      if (puVar3 == (uint64 *)0x0) {
        return runtime_zeroVal;
      }
      puVar2 = puVar3;
                    /* Unresolved local var: uintptr i@[???]
                       Unresolved local var: void * k@[???] */
      for (uVar4 = 0; puVar2 = puVar2 + 1, uVar4 < 8; uVar4 = uVar4 + 1) {
        if ((key_spill == *puVar2) && (1 < *(byte *)(uVar4 + (long)puVar3))) {
          return (void *)((long)puVar3 + uVar4 * t_spill->elemsize + 0x48);
        }
      }
      puVar3 = *(uint64 **)((long)puVar3 + ((ulong)t_spill->bucketsize - 8));
    } while( true );
  }
  return runtime_zeroVal;
}

