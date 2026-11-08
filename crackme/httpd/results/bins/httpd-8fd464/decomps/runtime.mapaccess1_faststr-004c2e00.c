
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.mapaccess1_faststr(runtime.maptype * t, runtime.hmap * h,
   string ky, void * ~r3) */

void * runtime_mapaccess1_faststr(runtime_maptype *t,runtime_hmap *h,string ky)

{
  void *pvVar1;
  uint8 *puVar2;
  byte bVar3;
  long *plVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long in_FS_OFFSET;
  bool bVar11;
  string s;
  runtime_maptype *t_spill;
  runtime_hmap *h_spill;
  string ky_spill;
  ulong local_58;
  char local_50;
  
                    /* Unresolved local var: runtime.stringStruct * key@[???]
                       Unresolved local var: uintptr hash@[???]
                       Unresolved local var: uintptr m@[???]
                       Unresolved local var: runtime.bmap * b@[???]
                       Unresolved local var: uint8 top@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((h_spill == (runtime_hmap *)0x0) || (h_spill->count == 0)) {
    return runtime_zeroVal;
  }
  if ((h_spill->flags & 4) != 0) {
    s.len = (int)h;
    s.str = (uint8 *)0x2a2f68;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
  if (h_spill->B != 0) {
LAB_004c2e91:
    (**t_spill->hasher)(&ky_spill,(ulong)h_spill->hash0,(uintptr *)t_spill->hasher);
    uVar7 = (1L << (h_spill->B & 0x3f)) - 1;
                    /* Unresolved local var: void * c@[???] */
    pvVar1 = h_spill->oldbuckets;
    pvVar5 = (void *)((uVar7 & local_58) * (ulong)t_spill->bucketsize + (long)h_spill->buckets);
    if (pvVar1 != (void *)0x0) {
                    /* Unresolved local var: runtime.bmap * oldb@[???] */
      if ((h_spill->flags & 8) == 0) {
        uVar7 = uVar7 >> 1;
      }
      lVar8 = (uVar7 & local_58) * (ulong)t_spill->bucketsize;
                    /* Unresolved local var: uint8 h@[???] */
      if (2 < (byte)(*(char *)((long)pvVar1 + lVar8) - 2U)) {
        pvVar5 = (void *)((long)pvVar1 + lVar8);
      }
    }
                    /* Unresolved local var: uint8 top@[???] */
    uVar6 = local_58 >> 0x38;
    bVar3 = (byte)(local_58 >> 0x38);
    uVar7 = uVar6;
    if (bVar3 < 5) {
      uVar6 = (ulong)(bVar3 + 5);
      uVar7 = uVar6;
    }
    do {
      if (pvVar5 == (void *)0x0) {
        return runtime_zeroVal;
      }
      plVar4 = (long *)((long)pvVar5 + 8);
                    /* Unresolved local var: uintptr i@[???]
                       Unresolved local var: void * kptr@[???] */
      for (uVar9 = 0; uVar9 < 8; uVar9 = uVar9 + 1) {
                    /* Unresolved local var: runtime.stringStruct * k@[???] */
        if ((plVar4[1] == ky_spill.len) && (*(char *)(uVar9 + (long)pvVar5) == (char)uVar6)) {
          if ((ky_spill.str == (uint8 *)*plVar4) || (runtime_memequal(), local_50 != '\0')) {
            return (void *)((long)pvVar5 + uVar9 * t_spill->elemsize + 0x88);
          }
          uVar6 = uVar7 & 0xff;
        }
        plVar4 = plVar4 + 2;
      }
      pvVar5 = *(void **)((long)pvVar5 + ((ulong)t_spill->bucketsize - 8));
    } while( true );
  }
                    /* Unresolved local var: runtime.bmap * b@[???]
                       Unresolved local var: uintptr keymaybe@[???] */
  pvVar1 = h_spill->buckets;
  if (0x1f < ky_spill.len) {
    puVar10 = (undefined8 *)((long)pvVar1 + 8);
    uVar7 = 8;
                    /* Unresolved local var: uintptr i@[???]
                       Unresolved local var: void * kptr@[???] */
    for (uVar6 = 0; uVar6 < 8; uVar6 = uVar6 + 1) {
                    /* Unresolved local var: runtime.stringStruct * k@[???] */
      if ((puVar10[1] == ky_spill.len) && (1 < *(byte *)(uVar6 + (long)pvVar1))) {
        puVar2 = (uint8 *)*puVar10;
        if (ky_spill.str == puVar2) {
          return (void *)((long)pvVar1 + uVar6 * t_spill->elemsize + 0x88);
        }
        if (((*(int *)ky_spill.str == *(int *)puVar2) &&
            (*(int *)(puVar2 + ky_spill.len + -4) == *(int *)(ky_spill.str + ky_spill.len + -4))) &&
           (bVar11 = uVar7 != 8, uVar7 = uVar6, bVar11)) goto LAB_004c2e91;
      }
      else if (*(char *)(uVar6 + (long)pvVar1) == '\0') break;
      puVar10 = puVar10 + 2;
    }
                    /* Unresolved local var: runtime.stringStruct * k@[???] */
    if ((uVar7 != 8) && (runtime_memequal(), local_50 != '\0')) {
      return (void *)((long)pvVar1 + uVar7 * t_spill->elemsize + 0x88);
    }
    return runtime_zeroVal;
  }
  plVar4 = (long *)((long)pvVar1 + 8);
                    /* Unresolved local var: uintptr i@[???]
                       Unresolved local var: void * kptr@[???] */
  for (uVar7 = 0; uVar7 < 8; uVar7 = uVar7 + 1) {
                    /* Unresolved local var: runtime.stringStruct * k@[???] */
    if ((plVar4[1] == ky_spill.len) && (1 < *(byte *)(uVar7 + (long)pvVar1))) {
      if ((ky_spill.str == (uint8 *)*plVar4) || (runtime_memequal(), local_50 != '\0')) {
        return (void *)((long)pvVar1 + uVar7 * t_spill->elemsize + 0x88);
      }
    }
    else if (*(char *)(uVar7 + (long)pvVar1) == '\0') break;
    plVar4 = plVar4 + 2;
  }
  return runtime_zeroVal;
}

