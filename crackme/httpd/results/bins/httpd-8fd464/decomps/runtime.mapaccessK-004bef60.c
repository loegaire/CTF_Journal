
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.mapaccessK(runtime.maptype * t, runtime.hmap * h, void *
   key, void * ~r3, void * ~r4) */

multireturn_void___void___ runtime_mapaccessK(runtime_maptype *t,runtime_hmap *h,void *key)

{
  func_unsafe_Pointer__unsafe_Pointer__bool **ppfVar1;
  byte bVar2;
  void *pvVar3;
  void *pvVar4;
  ulong *puVar5;
  long *plVar6;
  undefined1 *puVar7;
  ulong *puVar8;
  uint uVar9;
  void *pvVar10;
  long lVar11;
  long in_FS_OFFSET;
  multireturn_void___void___ mVar12;
  multireturn_void___void___ mVar13;
  multireturn_void___void___ mVar14;
  runtime_maptype *t_spill;
  runtime_hmap *h_spill;
  void *key_spill;
  char local_30;
  uint7 uStack_2f;
  
                    /* Unresolved local var: uintptr hash@[???]
                       Unresolved local var: uintptr m@[???]
                       Unresolved local var: runtime.bmap * b@[???]
                       Unresolved local var: uint8 top@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((h_spill == (runtime_hmap *)0x0) || (h_spill->count == 0)) {
    mVar12.~r4 = h;
    mVar12.~r3 = h_spill;
    return mVar12;
  }
  (**t_spill->hasher)(key_spill,(ulong)h_spill->hash0,(uintptr *)t_spill->hasher);
  puVar8 = (ulong *)((1L << (h_spill->B & 0x3f)) - 1);
  pvVar10 = (void *)(ulong)t_spill->bucketsize;
                    /* Unresolved local var: void * c@[???] */
  pvVar4 = h_spill->oldbuckets;
  puVar5 = (ulong *)(((ulong)puVar8 & CONCAT71(uStack_2f,local_30)) * (long)pvVar10 +
                    (long)h_spill->buckets);
  if (pvVar4 != (void *)0x0) {
                    /* Unresolved local var: runtime.bmap * oldb@[???] */
    if ((h_spill->flags & 8) == 0) {
      puVar8 = (ulong *)((ulong)puVar8 >> 1);
    }
    lVar11 = (long)pvVar10 * ((ulong)puVar8 & CONCAT71(uStack_2f,local_30));
    puVar8 = (ulong *)((long)pvVar4 + lVar11);
                    /* Unresolved local var: uint8 h@[???] */
    uVar9 = *(byte *)((long)pvVar4 + lVar11) - 2;
    pvVar10 = (void *)(ulong)uVar9;
    if (2 < (byte)uVar9) {
      puVar5 = puVar8;
    }
  }
                    /* Unresolved local var: uint8 top@[???] */
  pvVar3 = (void *)(ulong)(uStack_2f >> 0x30);
  bVar2 = (byte)(uStack_2f >> 0x30);
  pvVar4 = pvVar3;
  if (bVar2 < 5) {
    pvVar3 = (void *)(ulong)(bVar2 + 5);
    pvVar4 = pvVar3;
  }
  do {
    if (puVar5 == (ulong *)0x0) {
LAB_004bf073:
      mVar13.~r4 = puVar8;
      mVar13.~r3 = pvVar3;
      return mVar13;
    }
                    /* Unresolved local var: uintptr i@[???] */
    for (puVar7 = (undefined1 *)0x0; puVar7 < &DAT_00000008; puVar7 = puVar7 + 1) {
                    /* Unresolved local var: void * k@[???] */
      if ((char)pvVar3 == puVar7[(long)puVar5]) {
        plVar6 = (long *)((long)puVar5 + (ulong)t_spill->keysize * (long)puVar7 + 8);
        if ((t_spill->flags & 1) != 0) {
          plVar6 = (long *)*plVar6;
        }
        ppfVar1 = t_spill->key->equal;
        (**ppfVar1)(pvVar10,t_spill,(bool *)ppfVar1);
        if (local_30 != '\0') {
          mVar14.~r4 = puVar7;
          mVar14.~r3 = plVar6;
                    /* Unresolved local var: void * e@[???] */
          return mVar14;
        }
        pvVar3 = (void *)((ulong)pvVar4 & 0xff);
      }
      else if (puVar7[(long)puVar5] == '\0') {
        puVar8 = (ulong *)0x0;
        goto LAB_004bf073;
      }
    }
    puVar8 = (ulong *)((long)puVar5 + ((ulong)t_spill->bucketsize - 8));
    puVar5 = (ulong *)*puVar8;
  } while( true );
}

