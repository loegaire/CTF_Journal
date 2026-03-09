
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.mapaccess2_faststr(runtime.maptype * t, runtime.hmap * h,
   string ky, void * ~r3, bool ~r4) */

multireturn_void___bool_ runtime_mapaccess2_faststr(runtime_maptype *t,runtime_hmap *h,string ky)

{
  void *pvVar1;
  uint8 *puVar2;
  byte bVar3;
  ulong uVar4;
  long *plVar5;
  undefined1 uVar8;
  void *pvVar6;
  ulong uVar7;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  bool bVar13;
  string s;
  multireturn_void___bool_ mVar14;
  multireturn_void___bool_ mVar15;
  multireturn_void___bool_ mVar16;
  multireturn_void___bool_ mVar17;
  multireturn_void___bool_ mVar18;
  multireturn_void___bool_ mVar19;
  multireturn_void___bool_ mVar20;
  multireturn_void___bool_ mVar21;
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
    mVar14.~r4 = SUB81(h,0);
    mVar14.~r3 = runtime_zeroVal;
    return mVar14;
  }
  if ((h_spill->flags & 4) != 0) {
    s.len = (int)h;
    s.str = (uint8 *)0x2a2f68;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
  if (h_spill->B != 0) {
LAB_004c32d9:
    (**t_spill->hasher)(&ky_spill,(ulong)h_spill->hash0,(uintptr *)t_spill->hasher);
    uVar12 = (1L << (h_spill->B & 0x3f)) - 1;
                    /* Unresolved local var: void * c@[???] */
    pvVar1 = h_spill->oldbuckets;
    pvVar6 = (void *)((uVar12 & local_58) * (ulong)t_spill->bucketsize + (long)h_spill->buckets);
    if (pvVar1 != (void *)0x0) {
                    /* Unresolved local var: runtime.bmap * oldb@[???] */
      if ((h_spill->flags & 8) == 0) {
        uVar12 = uVar12 >> 1;
      }
      lVar10 = (uVar12 & local_58) * (ulong)t_spill->bucketsize;
                    /* Unresolved local var: uint8 h@[???] */
      uVar9 = *(byte *)((long)pvVar1 + lVar10) - 2;
      uVar12 = (ulong)uVar9;
      if (2 < (byte)uVar9) {
        pvVar6 = (void *)((long)pvVar1 + lVar10);
      }
    }
                    /* Unresolved local var: uint8 top@[???] */
    uVar4 = local_58 >> 0x38;
    bVar3 = (byte)(local_58 >> 0x38);
    uVar7 = uVar4;
    if (bVar3 < 5) {
      uVar4 = (ulong)(bVar3 + 5);
      uVar7 = uVar4;
    }
    do {
      if (pvVar6 == (void *)0x0) {
        mVar15.~r4 = SUB81(uVar12,0);
        mVar15.~r3 = runtime_zeroVal;
        return mVar15;
      }
      plVar5 = (long *)((long)pvVar6 + 8);
                    /* Unresolved local var: uintptr i@[???]
                       Unresolved local var: void * kptr@[???] */
      for (uVar12 = 0; uVar12 < 8; uVar12 = uVar12 + 1) {
                    /* Unresolved local var: runtime.stringStruct * k@[???] */
        if ((plVar5[1] == ky_spill.len) && (*(char *)(uVar12 + (long)pvVar6) == (char)uVar4)) {
          if ((ky_spill.str == (uint8 *)*plVar5) || (runtime_memequal(), local_50 != '\0')) {
            lVar10 = uVar12 * t_spill->elemsize;
            mVar16.~r4 = SUB81(lVar10,0);
            mVar16.~r3 = (void *)((long)pvVar6 + lVar10 + 0x88);
            return mVar16;
          }
          uVar4 = uVar7 & 0xff;
        }
        plVar5 = plVar5 + 2;
      }
      pvVar6 = *(void **)((long)pvVar6 + ((ulong)t_spill->bucketsize - 8));
    } while( true );
  }
                    /* Unresolved local var: runtime.bmap * b@[???]
                       Unresolved local var: uintptr keymaybe@[???] */
  pvVar1 = h_spill->buckets;
  if (0x1f < ky_spill.len) {
    puVar11 = (undefined8 *)((long)pvVar1 + 8);
    uVar12 = 8;
                    /* Unresolved local var: uintptr i@[???]
                       Unresolved local var: void * kptr@[???] */
    for (uVar7 = 0; mVar17.~r4 = SUB81(ky_spill.len,0), uVar7 < 8; uVar7 = uVar7 + 1) {
                    /* Unresolved local var: runtime.stringStruct * k@[???] */
      if ((puVar11[1] == ky_spill.len) && (1 < *(byte *)(uVar7 + (long)pvVar1))) {
        puVar2 = (uint8 *)*puVar11;
        if (ky_spill.str == puVar2) {
          mVar17.~r3 = (void *)((long)pvVar1 + uVar7 * t_spill->elemsize + 0x88);
          return mVar17;
        }
        if (((*(int *)ky_spill.str == *(int *)puVar2) &&
            (*(int *)(ky_spill.str + ky_spill.len + -4) == *(int *)(puVar2 + ky_spill.len + -4))) &&
           (bVar13 = uVar12 != 8, uVar12 = uVar7, bVar13)) goto LAB_004c32d9;
      }
      else if (*(char *)(uVar7 + (long)pvVar1) == '\0') break;
      puVar11 = puVar11 + 2;
    }
                    /* Unresolved local var: runtime.stringStruct * k@[???] */
    if ((uVar12 != 8) && (runtime_memequal(), local_50 != '\0')) {
      mVar19.~r4 = mVar17.~r4;
      mVar19.~r3 = (void *)((long)pvVar1 + uVar12 * t_spill->elemsize + 0x88);
      return mVar19;
    }
    mVar18.~r4 = mVar17.~r4;
    mVar18.~r3 = runtime_zeroVal;
    return mVar18;
  }
  plVar5 = (long *)((long)pvVar1 + 8);
  uVar7 = 0;
  uVar12 = ky_spill.len;
                    /* Unresolved local var: uintptr i@[???]
                       Unresolved local var: void * kptr@[???] */
  do {
    uVar4 = ky_spill.len;
    uVar8 = (undefined1)uVar12;
    if (7 < uVar7) {
LAB_004c3681:
      mVar21.~r4 = (bool)uVar8;
      mVar21.~r3 = runtime_zeroVal;
      return mVar21;
    }
                    /* Unresolved local var: runtime.stringStruct * k@[???] */
    if ((plVar5[1] == ky_spill.len) && (1 < *(byte *)(uVar7 + (long)pvVar1))) {
      if ((ky_spill.str == (uint8 *)*plVar5) || (runtime_memequal(), local_50 != '\0')) {
        mVar20.~r4 = SUB81(uVar4,0);
        mVar20.~r3 = (void *)((long)pvVar1 + uVar7 * t_spill->elemsize + 0x88);
        return mVar20;
      }
    }
    else {
      uVar4 = (ulong)*(byte *)(uVar7 + (long)pvVar1);
      if (*(byte *)(uVar7 + (long)pvVar1) == 0) {
        uVar8 = false;
        goto LAB_004c3681;
      }
    }
    uVar7 = uVar7 + 1;
    plVar5 = plVar5 + 2;
    uVar12 = uVar4;
  } while( true );
}

