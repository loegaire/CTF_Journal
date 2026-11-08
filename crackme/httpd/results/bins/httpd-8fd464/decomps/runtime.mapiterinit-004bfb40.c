
/* WARNING: Unknown calling convention */

void runtime_mapiterinit(runtime_maptype *t,runtime_hmap *h,runtime_hiter *it)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  runtime_hiter *extraout_RAX;
  runtime_hiter *extraout_RAX_00;
  runtime_hiter *extraout_RAX_01;
  runtime_hiter *extraout_RAX_02;
  runtime_hiter *extraout_RAX_03;
  runtime_hiter *it_00;
  runtime_hiter *extraout_RDX;
  runtime_hiter *extraout_RDX_00;
  runtime_hiter *extraout_RDX_01;
  runtime_hiter *extraout_RDX_02;
  runtime_hiter *extraout_RDX_03;
  runtime_hiter *prVar4;
  ulong uVar5;
  uint uVar6;
  long in_FS_OFFSET;
  runtime_maptype *t_spill;
  runtime_hmap *h_spill;
  runtime_hiter *it_spill;
  ___runtime_bmap *local_10;
  
                    /* Unresolved local var: uintptr r@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((h_spill != (runtime_hmap *)0x0) && (h_spill->count != 0)) {
    if (runtime_writeBarrier._0_4_ == 0) {
      it_spill->t = t_spill;
      it_spill->h = h_spill;
      it_00 = (runtime_hiter *)h_spill;
      prVar4 = it_spill;
    }
    else {
      runtime_gcWriteBarrierBX();
      runtime_gcWriteBarrier();
      it_00 = extraout_RAX;
      prVar4 = extraout_RDX;
    }
    prVar4->B = *(uint8 *)((long)&it_00->elem + 1);
    if (runtime_writeBarrier._0_4_ == 0) {
      prVar4->buckets = it_00->t;
    }
    else {
      runtime_gcWriteBarrierSI();
      it_00 = extraout_RAX_00;
      prVar4 = extraout_RDX_00;
    }
    if (t_spill->bucket->ptrdata == 0) {
      if (it_00->bptr == (runtime_bmap *)0x0) {
        runtime_newobject((runtime__type *)&DAT_002587e0);
        if (runtime_writeBarrier._0_4_ == 0) {
          h_spill->extra = (runtime_mapextra *)local_10;
          it_00 = (runtime_hiter *)h_spill;
          prVar4 = it_spill;
        }
        else {
          runtime_gcWriteBarrier();
          it_00 = extraout_RDX_01;
          prVar4 = it_spill;
        }
      }
      if (*(long *)it_00->bptr->tophash == 0) {
        runtime_newobject((runtime__type *)&DAT_0021fba0);
        if (runtime_writeBarrier._0_4_ == 0) {
          h_spill->extra->overflow = local_10;
          it_00 = (runtime_hiter *)h_spill;
          prVar4 = it_spill;
        }
        else {
          runtime_gcWriteBarrierCX();
          it_00 = extraout_RAX_01;
          prVar4 = it_spill;
        }
      }
      if (runtime_writeBarrier._0_4_ == 0) {
        prVar4->overflow = *(___runtime_bmap **)it_00->bptr->tophash;
      }
      else {
        runtime_gcWriteBarrierBX();
        it_00 = extraout_RAX_02;
        prVar4 = extraout_RDX_02;
      }
      if (runtime_writeBarrier._0_4_ == 0) {
        prVar4->oldoverflow = *(___runtime_bmap **)it_00->bptr[1].tophash;
      }
      else {
        runtime_gcWriteBarrierBX();
        it_00 = extraout_RAX_03;
        prVar4 = extraout_RDX_03;
      }
    }
                    /* Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: uint32 s1@[???]
                       Unresolved local var: uint32 s0@[???] */
    lVar3 = *(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30);
    uVar6 = *(uint *)(lVar3 + 0x128);
    uVar2 = *(uint *)(lVar3 + 300);
    *(uint *)(lVar3 + 0x128) = uVar2;
    uVar6 = uVar6 ^ uVar6 << 0x11;
    uVar6 = uVar2 >> 0x10 ^ uVar2 ^ uVar6 ^ uVar6 >> 7;
    *(uint *)(lVar3 + 300) = uVar6;
    uVar5 = (ulong)(uVar6 + uVar2);
    if (0x1c < *(byte *)((long)&it_00->elem + 1)) {
                    /* Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: uint32 s1@[???]
                       Unresolved local var: uint32 s0@[???] */
      lVar3 = *(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30);
      uVar6 = *(uint *)(lVar3 + 0x128);
      uVar2 = *(uint *)(lVar3 + 300);
      *(uint *)(lVar3 + 0x128) = uVar2;
      uVar6 = uVar6 ^ uVar6 << 0x11;
      uVar6 = uVar2 >> 0x10 ^ uVar2 ^ uVar6 ^ uVar6 >> 7;
      *(uint *)(lVar3 + 300) = uVar6;
      uVar5 = uVar5 + (ulong)(uVar6 + uVar2) * 0x80000000;
    }
    prVar4->startBucket = (1L << (*(byte *)((long)&it_00->elem + 1) & 0x3f)) - 1U & uVar5;
    bVar1 = *(byte *)((long)&it_00->elem + 1);
    prVar4->offset = (byte)(uVar5 >> (bVar1 & 0x3f)) & -(bVar1 < 0x40) & 7;
    prVar4->bucket = prVar4->startBucket;
                    /* Unresolved local var: uint8 old@[???] */
    if (((ulong)it_00->elem & 3) != 3) {
      it_00 = (runtime_hiter *)&it_00->elem;
      LOCK();
      *(byte *)it_00 = *(byte *)it_00 | 3;
      UNLOCK();
    }
    runtime_mapiternext(it_00);
    return;
  }
  return;
}

