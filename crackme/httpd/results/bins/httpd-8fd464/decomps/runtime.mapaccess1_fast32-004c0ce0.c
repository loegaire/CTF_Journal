
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.mapaccess1_fast32(runtime.maptype * t, runtime.hmap * h,
   uint32 key, void * ~r3) */

void * runtime_mapaccess1_fast32(runtime_maptype *t,runtime_hmap *h,uint32 key)

{
  void *pvVar1;
  uint32 *puVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  long in_FS_OFFSET;
  string s;
  runtime_maptype *t_spill;
  runtime_hmap *h_spill;
  uint32 key_spill;
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
      pvVar3 = h_spill->buckets;
    }
    else {
                    /* Unresolved local var: uintptr hash@[???]
                       Unresolved local var: uintptr m@[???] */
      (**t_spill->hasher)(&key_spill,(ulong)h_spill->hash0,(uintptr *)t_spill->hasher);
      uVar4 = (1L << (h_spill->B & 0x3f)) - 1;
                    /* Unresolved local var: void * c@[???] */
      pvVar1 = h_spill->oldbuckets;
      pvVar3 = (void *)((uVar4 & local_10) * (ulong)t_spill->bucketsize + (long)h_spill->buckets);
      if (pvVar1 != (void *)0x0) {
                    /* Unresolved local var: runtime.bmap * oldb@[???] */
        if ((h_spill->flags & 8) == 0) {
          uVar4 = uVar4 >> 1;
        }
        lVar5 = (ulong)t_spill->bucketsize * (uVar4 & local_10);
                    /* Unresolved local var: uint8 h@[???] */
        if (2 < (byte)(*(char *)((long)pvVar1 + lVar5) - 2U)) {
          pvVar3 = (void *)((long)pvVar1 + lVar5);
        }
      }
    }
    do {
      if (pvVar3 == (void *)0x0) {
        return runtime_zeroVal;
      }
      puVar2 = (uint32 *)((long)pvVar3 + 8);
                    /* Unresolved local var: uintptr i@[???]
                       Unresolved local var: void * k@[???] */
      for (uVar4 = 0; uVar4 < 8; uVar4 = uVar4 + 1) {
        if ((key_spill == *puVar2) && (1 < *(byte *)(uVar4 + (long)pvVar3))) {
          return (void *)((long)pvVar3 + t_spill->elemsize * uVar4 + 0x28);
        }
        puVar2 = puVar2 + 1;
      }
      pvVar3 = *(void **)((long)pvVar3 + ((ulong)t_spill->bucketsize - 8));
    } while( true );
  }
  return runtime_zeroVal;
}

