
/* WARNING: Unknown calling convention */

void reflect_addTypeBits(reflect_bitVector *bv,uintptr offset,reflect_rtype *t)

{
  uintptr offset_00;
  reflect_bitVector *prVar1;
  uint8 *extraout_RAX;
  uint8 *extraout_RAX_00;
  ulong uVar2;
  uint8 *extraout_RAX_01;
  uint8 *extraout_RAX_02;
  ulong uVar3;
  uint8 *extraout_RAX_03;
  long lVar4;
  uint uVar5;
  uint8 *puVar6;
  long in_FS_OFFSET;
  runtime_slice old;
  runtime_slice old_00;
  runtime_slice old_01;
  runtime_slice old_02;
  runtime_slice old_03;
  reflect_bitVector *bv_spill;
  uintptr offset_spill;
  reflect_arrayType *tt;
  uint8 *local_38;
  long local_30;
  int local_28;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((tt->rtype).ptrdata == 0) {
    return;
  }
  uVar2 = (ulong)((tt->rtype).kind & 0x1f);
  if (uVar2 < 0x15) {
    if (uVar2 == 0x11) {
                    /* Unresolved local var: int i@[???] */
      for (prVar1 = (reflect_bitVector *)0x0; (long)prVar1 < (long)tt->len;
          prVar1 = (reflect_bitVector *)((long)&prVar1->n + 1)) {
        reflect_addTypeBits(prVar1,tt->elem->size * (long)prVar1 + offset_spill,tt->elem);
      }
      return;
    }
    if (1 < uVar2 - 0x12) {
      if (uVar2 != 0x14) {
        return;
      }
      while (uVar5 = bv_spill->n, uVar5 < (uint)(offset_spill >> 3)) {
        if ((uVar5 & 7) == 0) {
          lVar4 = (bv_spill->data).len;
          puVar6 = (bv_spill->data).array;
          if ((ulong)(bv_spill->data).cap < lVar4 + 1U) {
            old_01.len = (int)t;
            old_01.array = (void *)lVar4;
            old_01.cap = offset_spill;
            runtime_growslice((runtime__type *)&DAT_00225720,old_01,lVar4 + 1U);
            (bv_spill->data).cap = local_28;
            lVar4 = local_30;
            if (runtime_writeBarrier._0_4_ == 0) {
              (bv_spill->data).array = local_38;
              puVar6 = local_38;
            }
            else {
              runtime_gcWriteBarrier();
              puVar6 = extraout_RAX_01;
            }
          }
          (bv_spill->data).len = lVar4 + 1;
          puVar6[lVar4] = 0;
        }
        t = (reflect_rtype *)(bv_spill->data).len;
        if (t <= (reflect_rtype *)(ulong)(bv_spill->n >> 3)) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        bv_spill->n = bv_spill->n + 1;
      }
      if ((uVar5 & 7) == 0) {
        lVar4 = (bv_spill->data).len;
        puVar6 = (bv_spill->data).array;
        if ((ulong)(bv_spill->data).cap < lVar4 + 1U) {
          old_02.len = (int)t;
          old_02.array = (void *)lVar4;
          old_02.cap = (int)puVar6;
          runtime_growslice((runtime__type *)&DAT_00225720,old_02,lVar4 + 1U);
          (bv_spill->data).cap = local_28;
          lVar4 = local_30;
          if (runtime_writeBarrier._0_4_ == 0) {
            (bv_spill->data).array = local_38;
            puVar6 = local_38;
          }
          else {
            runtime_gcWriteBarrier();
            puVar6 = extraout_RAX_02;
          }
        }
        (bv_spill->data).len = lVar4 + 1;
        puVar6[lVar4] = 0;
      }
      puVar6 = (bv_spill->data).array;
      uVar2 = (bv_spill->data).len;
      uVar3 = (ulong)(bv_spill->n >> 3);
      if (uVar3 < uVar2) {
        puVar6[uVar3] = puVar6[uVar3] | (byte)(1 << (bv_spill->n & 7));
        uVar5 = bv_spill->n + 1;
        bv_spill->n = uVar5;
        if ((uVar5 & 7) == 0) {
          lVar4 = (bv_spill->data).len;
          puVar6 = (bv_spill->data).array;
          if ((ulong)(bv_spill->data).cap < lVar4 + 1U) {
            old_03.len = uVar2;
            old_03.array = (void *)lVar4;
            old_03.cap = (int)puVar6;
            runtime_growslice((runtime__type *)&DAT_00225720,old_03,lVar4 + 1U);
            (bv_spill->data).cap = local_28;
            if (runtime_writeBarrier._0_4_ == 0) {
              (bv_spill->data).array = local_38;
              lVar4 = local_30;
              puVar6 = local_38;
            }
            else {
              runtime_gcWriteBarrier();
              lVar4 = local_30;
              puVar6 = extraout_RAX_03;
            }
          }
          (bv_spill->data).len = lVar4 + 1;
          puVar6[lVar4] = 0;
        }
        puVar6 = (bv_spill->data).array;
        uVar2 = (ulong)(bv_spill->n >> 3);
        if (uVar2 < (ulong)(bv_spill->data).len) {
          puVar6[uVar2] = puVar6[uVar2] | (byte)(1 << (bv_spill->n & 7));
          bv_spill->n = bv_spill->n + 1;
          return;
        }
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
  }
  else if (0x18 < uVar2) {
    if (uVar2 == 0x19) {
                    /* Unresolved local var: int i@[???] */
      offset_00 = tt->len;
      prVar1 = (reflect_bitVector *)0x0;
      while( true ) {
        if ((long)offset_00 <= (long)prVar1) {
          return;
        }
        if ((reflect_bitVector *)tt->len <= prVar1) break;
        reflect_addTypeBits(prVar1,offset_00,
                            (reflect_rtype *)
                            ((*(ulong *)(&tt->slice->hash + (long)prVar1 * 6) >> 1) + offset_spill))
        ;
        prVar1 = (reflect_bitVector *)((long)&prVar1->n + 1);
      }
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if (uVar2 != 0x1a) {
      return;
    }
  }
  while (uVar5 = bv_spill->n, uVar5 < (uint)(offset_spill >> 3)) {
    if ((uVar5 & 7) == 0) {
      lVar4 = (bv_spill->data).len;
      puVar6 = (bv_spill->data).array;
      if ((ulong)(bv_spill->data).cap < lVar4 + 1U) {
        old.len = (int)t;
        old.array = (void *)lVar4;
        old.cap = offset_spill;
        runtime_growslice((runtime__type *)&DAT_00225720,old,lVar4 + 1U);
        (bv_spill->data).cap = local_28;
        lVar4 = local_30;
        if (runtime_writeBarrier._0_4_ == 0) {
          (bv_spill->data).array = local_38;
          puVar6 = local_38;
        }
        else {
          runtime_gcWriteBarrier();
          puVar6 = extraout_RAX;
        }
      }
      (bv_spill->data).len = lVar4 + 1;
      puVar6[lVar4] = 0;
    }
    t = (reflect_rtype *)(bv_spill->data).len;
    if (t <= (reflect_rtype *)(ulong)(bv_spill->n >> 3)) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    bv_spill->n = bv_spill->n + 1;
  }
  if ((uVar5 & 7) == 0) {
    lVar4 = (bv_spill->data).len;
    puVar6 = (bv_spill->data).array;
    if ((ulong)(bv_spill->data).cap < lVar4 + 1U) {
      old_00.len = (int)t;
      old_00.array = (void *)lVar4;
      old_00.cap = (int)puVar6;
      runtime_growslice((runtime__type *)&DAT_00225720,old_00,lVar4 + 1U);
      (bv_spill->data).cap = local_28;
      if (runtime_writeBarrier._0_4_ == 0) {
        (bv_spill->data).array = local_38;
        lVar4 = local_30;
        puVar6 = local_38;
      }
      else {
        runtime_gcWriteBarrier();
        lVar4 = local_30;
        puVar6 = extraout_RAX_00;
      }
    }
    (bv_spill->data).len = lVar4 + 1;
    puVar6[lVar4] = 0;
  }
  puVar6 = (bv_spill->data).array;
  uVar2 = (ulong)(bv_spill->n >> 3);
  if (uVar2 < (ulong)(bv_spill->data).len) {
    puVar6[uVar2] = puVar6[uVar2] | (byte)(1 << (bv_spill->n & 7));
    bv_spill->n = bv_spill->n + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

