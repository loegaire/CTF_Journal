
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.mapaccess1(runtime.maptype * t, runtime.hmap * h, void *
   key, void * ~r3) */

void * runtime_mapaccess1(runtime_maptype *t,runtime_hmap *h,void *key)

{
  void *pvVar1;
  func_unsafe_Pointer__unsafe_Pointer__bool **ppfVar2;
  byte bVar3;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  uintptr in_RSI;
  uint uVar8;
  void *in_RDI;
  void *pvVar9;
  long lVar10;
  long in_FS_OFFSET;
  string s;
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
    return runtime_zeroVal;
  }
  if ((h_spill->flags & 4) != 0) {
    s.len = (int)h;
    s.str = (uint8 *)0x2a2f68;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
  (**t_spill->hasher)(key_spill,(ulong)h_spill->hash0,(uintptr *)t_spill->hasher);
  uVar7 = (1L << (h_spill->B & 0x3f)) - 1;
  pvVar9 = (void *)(ulong)t_spill->bucketsize;
                    /* Unresolved local var: void * c@[???] */
  pvVar1 = h_spill->oldbuckets;
  pvVar5 = (void *)((uVar7 & CONCAT71(uStack_27,local_28)) * (long)pvVar9 + (long)h_spill->buckets);
  if (pvVar1 != (void *)0x0) {
                    /* Unresolved local var: runtime.bmap * oldb@[???] */
    if ((h_spill->flags & 8) == 0) {
      uVar7 = uVar7 >> 1;
    }
    lVar10 = (long)pvVar9 * (uVar7 & CONCAT71(uStack_27,local_28));
                    /* Unresolved local var: uint8 h@[???] */
    uVar8 = *(byte *)((long)pvVar1 + lVar10) - 2;
    pvVar9 = (void *)(ulong)uVar8;
    if (2 < (byte)uVar8) {
      pvVar5 = (void *)((long)pvVar1 + lVar10);
    }
  }
                    /* Unresolved local var: uint8 top@[???] */
  uVar4 = (ulong)(uStack_27 >> 0x30);
  bVar3 = (byte)(uStack_27 >> 0x30);
  uVar7 = uVar4;
  if (bVar3 < 5) {
    uVar4 = (ulong)(bVar3 + 5);
    uVar7 = uVar4;
  }
  for (; pvVar5 != (void *)0x0; pvVar5 = *(void **)((long)pvVar5 + ((ulong)t_spill->bucketsize - 8))
      ) {
                    /* Unresolved local var: uintptr i@[???] */
    for (uVar6 = 0; uVar6 < 8; uVar6 = uVar6 + 1) {
                    /* Unresolved local var: void * k@[???] */
      if ((char)uVar4 == *(char *)(uVar6 + (long)pvVar5)) {
        ppfVar2 = t_spill->key->equal;
        (**ppfVar2)(pvVar9,t_spill,(bool *)ppfVar2);
        if (local_28 != '\0') {
                    /* Unresolved local var: void * e@[???] */
          return (void *)(ulong)t_spill->flags;
        }
        uVar4 = uVar7 & 0xff;
      }
      else if (*(char *)(uVar6 + (long)pvVar5) == '\0') goto LAB_004bec1e;
    }
  }
LAB_004bec1e:
  return runtime_zeroVal;
}

