
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.mapaccess2(runtime.maptype * t, runtime.hmap * h, void *
   key, void * ~r3, bool ~r4) */

multireturn_void___bool_ runtime_mapaccess2(runtime_maptype *t,runtime_hmap *h,void *key)

{
  void *pvVar1;
  func_unsafe_Pointer__unsafe_Pointer__bool **ppfVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 uVar8;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar9;
  uintptr in_RSI;
  uint uVar10;
  void *in_RDI;
  void *pvVar11;
  long lVar12;
  long in_FS_OFFSET;
  string s;
  multireturn_void___bool_ mVar13;
  multireturn_void___bool_ mVar14;
  multireturn_void___bool_ mVar15;
  runtime_maptype *t_spill;
  runtime_hmap *h_spill;
  void *key_spill;
  char local_28;
  uint7 uStack_27;
  
                    /* Unresolved local var: uintptr hash@[???]
                       Unresolved local var: uintptr m@[???]
                       Unresolved local var: runtime.bmap * b@[???]
                       Unresolved local var: uint8 top@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((h_spill == (runtime_hmap *)0x0) || (h_spill->count == 0)) {
    if ((t_spill->flags >> 4 & 1) != 0) {
      (**t_spill->hasher)(in_RDI,in_RSI,(uintptr *)t_spill->hasher);
    }
    mVar13.~r4 = SUB81(h,0);
    mVar13.~r3 = runtime_zeroVal;
    return mVar13;
  }
  if ((h_spill->flags & 4) != 0) {
    s.len = (int)h;
    s.str = (uint8 *)0x2a2f68;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
  (**t_spill->hasher)(key_spill,(ulong)h_spill->hash0,(uintptr *)t_spill->hasher);
  puVar9 = (ulong *)((1L << (h_spill->B & 0x3f)) - 1);
  pvVar11 = (void *)(ulong)t_spill->bucketsize;
                    /* Unresolved local var: void * c@[???] */
  pvVar1 = h_spill->oldbuckets;
  puVar6 = (ulong *)(((ulong)puVar9 & CONCAT71(uStack_27,local_28)) * (long)pvVar11 +
                    (long)h_spill->buckets);
  if (pvVar1 != (void *)0x0) {
                    /* Unresolved local var: runtime.bmap * oldb@[???] */
    if ((h_spill->flags & 8) == 0) {
      puVar9 = (ulong *)((ulong)puVar9 >> 1);
    }
    lVar12 = (long)pvVar11 * ((ulong)puVar9 & CONCAT71(uStack_27,local_28));
    puVar9 = (ulong *)((long)pvVar1 + lVar12);
                    /* Unresolved local var: uint8 h@[???] */
    uVar10 = *(byte *)((long)pvVar1 + lVar12) - 2;
    pvVar11 = (void *)(ulong)uVar10;
    if (2 < (byte)uVar10) {
      puVar6 = puVar9;
    }
  }
                    /* Unresolved local var: uint8 top@[???] */
  uVar4 = (ulong)(uStack_27 >> 0x30);
  bVar3 = (byte)(uStack_27 >> 0x30);
  uVar5 = uVar4;
  if (bVar3 < 5) {
    uVar4 = (ulong)(bVar3 + 5);
    uVar5 = uVar4;
  }
  do {
    uVar8 = SUB81(puVar9,0);
    if (puVar6 == (ulong *)0x0) {
LAB_004bee63:
      mVar14.~r4 = (bool)uVar8;
      mVar14.~r3 = runtime_zeroVal;
      return mVar14;
    }
                    /* Unresolved local var: uintptr i@[???] */
    for (uVar7 = 0; uVar7 < 8; uVar7 = uVar7 + 1) {
                    /* Unresolved local var: void * k@[???] */
      if ((char)uVar4 == *(char *)(uVar7 + (long)puVar6)) {
        ppfVar2 = t_spill->key->equal;
        (**ppfVar2)(pvVar11,t_spill,(bool *)ppfVar2);
        if (local_28 != '\0') {
                    /* Unresolved local var: void * e@[???] */
          mVar15.~r3 = (void *)(ulong)t_spill->flags;
          mVar15.~r4 = SUB81(uVar7,0);
          return mVar15;
        }
        uVar4 = uVar5 & 0xff;
      }
      else if (*(char *)(uVar7 + (long)puVar6) == '\0') {
        uVar8 = false;
        goto LAB_004bee63;
      }
    }
    puVar9 = (ulong *)((long)puVar6 + ((ulong)t_spill->bucketsize - 8));
    puVar6 = (ulong *)*puVar9;
  } while( true );
}

