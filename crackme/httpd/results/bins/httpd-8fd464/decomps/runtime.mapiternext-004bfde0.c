
/* WARNING: Unknown calling convention */

void runtime_mapiternext(runtime_hiter *it)

{
  runtime_maptype *t;
  runtime_maptype *h;
  func_unsafe_Pointer__unsafe_Pointer__bool **ppfVar1;
  ulong uVar2;
  runtime_hiter *extraout_RDX;
  byte bVar3;
  ulong uVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  runtime_bmap *prVar13;
  uint8 *puVar14;
  ulong uVar15;
  uint8 *key;
  long in_FS_OFFSET;
  string s;
  runtime_hiter *it_spill;
  uint8 *local_68;
  void *local_60;
  void *local_58;
  
                    /* Unresolved local var: runtime.hmap * h@[???]
                       Unresolved local var: runtime.maptype * t@[???]
                       Unresolved local var: uintptr bucket@[???]
                       Unresolved local var: runtime.bmap * b@[???]
                       Unresolved local var: uint8 i@[???]
                       Unresolved local var: uintptr checkBucket@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  t = (runtime_maptype *)it_spill->h;
  bVar8 = (byte)(t->typ).ptrdata;
  if ((bVar8 & 4) != 0) {
    s.len._0_1_ = bVar8;
    s.str = &DAT_002a584f;
    s.len._1_7_ = 0;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
  h = it_spill->t;
  uVar4 = it_spill->bucket;
  prVar13 = it_spill->bptr;
  uVar10 = (uint)it_spill->i;
  uVar2 = it_spill->checkBucket;
  do {
    if (prVar13 == (runtime_bmap *)0x0) {
      if ((it_spill->startBucket == uVar4) && (it_spill->wrapped != false)) {
        if (runtime_writeBarrier._0_4_ == 0) {
          it_spill->key = (void *)0x0;
          it_spill->elem = (void *)0x0;
        }
        else {
          runtime_gcWriteBarrier();
          runtime_gcWriteBarrier();
        }
        return;
      }
      ppfVar1 = (t->typ).equal;
      if ((ppfVar1 == (func_unsafe_Pointer__unsafe_Pointer__bool **)0x0) ||
         (*(uint8 *)((long)&(t->typ).ptrdata + 1) != it_spill->B)) {
        prVar13 = (runtime_bmap *)(h->bucketsize * uVar4 + (long)it_spill->buckets);
        uVar2 = 0xffffffffffffffff;
      }
      else {
                    /* Unresolved local var: uintptr oldbucket@[???] */
                    /* Unresolved local var: uint8 oldB@[???] */
        bVar8 = it_spill->h->B;
        if ((it_spill->h->flags & 8) == 0) {
          bVar8 = bVar8 - 1;
        }
        lVar12 = ((1L << (bVar8 & 0x3f)) - 1U & uVar4) * (ulong)h->bucketsize;
        prVar13 = (runtime_bmap *)((long)ppfVar1 + lVar12);
                    /* Unresolved local var: uint8 h@[???] */
        uVar2 = uVar4;
        if ((byte)(*(char *)(lVar12 + (long)ppfVar1) - 2U) < 3) {
          prVar13 = (runtime_bmap *)(h->bucketsize * uVar4 + (long)it_spill->buckets);
          uVar2 = 0xffffffffffffffff;
        }
      }
      uVar4 = uVar4 + 1;
      if (1L << (it_spill->B & 0x3f) == uVar4) {
        it_spill->wrapped = true;
        uVar4 = 0;
      }
      uVar10 = 0;
    }
    while (bVar8 = (byte)uVar10, bVar8 < 8) {
      uVar6 = it_spill->offset + uVar10;
      uVar7 = uVar6 & 7;
      uVar11 = uVar10;
      if ((prVar13->tophash[uVar7] < 2) || (prVar13->tophash[uVar7] == 4)) goto LAB_004bff61;
      uVar15 = (ulong)(uVar6 & 7);
      key = prVar13[1].tophash + h->keysize * uVar15;
      uVar6 = h->flags;
      pvVar5 = (void *)(ulong)uVar6;
      if ((uVar6 & 1) != 0) {
        key = *(uint8 **)key;
      }
                    /* Unresolved local var: void * rk@[???]
                       Unresolved local var: void * re@[???] */
      puVar14 = prVar13[(ulong)h->keysize + 1].tophash + h->elemsize * uVar15;
      bVar9 = bVar8;
      if ((uVar2 == 0xffffffffffffffff) || (((t->typ).ptrdata & 8) != 0)) {
LAB_004c0134:
        if ((prVar13->tophash[uVar7] == 2) || (prVar13->tophash[uVar7] == 3)) {
          if ((h->flags >> 2 & 1) == 0) {
            ppfVar1 = h->key->equal;
            (**ppfVar1)(it_spill,pvVar5,(bool *)ppfVar1);
            bVar9 = bVar8;
          }
          else {
            local_68._0_1_ = 1;
          }
          local_68._0_1_ = (byte)local_68 ^ 1;
        }
        else {
          local_68._0_1_ = 1;
        }
        if ((byte)local_68 != 0) {
          bVar8 = bVar9;
          if (runtime_writeBarrier._0_4_ == 0) {
            it_spill->key = key;
          }
          else {
            runtime_gcWriteBarrier();
          }
          if ((h->flags >> 1 & 1) != 0) {
            puVar14 = *(uint8 **)puVar14;
          }
          if (runtime_writeBarrier._0_4_ == 0) {
            it_spill->elem = puVar14;
          }
          else {
            runtime_gcWriteBarrierDX();
          }
LAB_004c02a8:
          it_spill->bucket = uVar4;
          if (it_spill->bptr != prVar13) {
            if (runtime_writeBarrier._0_4_ == 0) {
              it_spill->bptr = prVar13;
            }
            else {
              runtime_gcWriteBarrierDX();
            }
          }
          it_spill->i = bVar8 + 1;
          it_spill->checkBucket = uVar2;
          return;
        }
        runtime_mapaccessK(t,(runtime_hmap *)h,key);
        if (local_60 != (void *)0x0) {
          if (runtime_writeBarrier._0_4_ == 0) {
            it_spill->key = local_60;
            it_spill->elem = local_58;
          }
          else {
            runtime_gcWriteBarrier();
            runtime_gcWriteBarrierCX();
            it_spill = extraout_RDX;
          }
          goto LAB_004c02a8;
        }
        uVar11 = uVar10 & 0xff;
        local_68 = key;
      }
      else {
        if ((uVar6 >> 2 & 1) == 0) {
          ppfVar1 = h->key->equal;
          (**ppfVar1)(it_spill,pvVar5,(bool *)ppfVar1);
          uVar11 = uVar10 & 0xff;
          bVar3 = (byte)local_68;
        }
        else {
          bVar3 = 1;
        }
        if (bVar3 == 0) {
          bVar3 = it_spill->B - 1;
          pvVar5 = (void *)(ulong)(prVar13->tophash[uVar7] & 1);
          bVar9 = (byte)uVar11;
          if (pvVar5 == (void *)(-(ulong)(bVar3 < 0x40) & uVar2 >> (bVar3 & 0x3f)))
          goto LAB_004c0134;
        }
        else {
          pvVar5 = (void *)(ulong)*(uint *)((long)&(t->typ).ptrdata + 4);
          (**h->hasher)(key,(uintptr)pvVar5,(uintptr *)h->hasher);
          if (uVar2 == ((1L << (it_spill->B & 0x3f)) - 1U & (ulong)local_68)) goto LAB_004c0134;
          uVar11 = uVar10 & 0xff;
        }
      }
LAB_004bff61:
      uVar10 = uVar11 + 1;
    }
    prVar13 = *(runtime_bmap **)(prVar13[-1].tophash + h->bucketsize);
    uVar10 = 0;
                    /* Unresolved local var: void * k@[???]
                       Unresolved local var: void * e@[???]
                       Unresolved local var: void * ~R0@[???] */
  } while( true );
}

