
/* WARNING: Unknown calling convention */

void runtime___profBuf__write(runtime_profBuf *b,void **tagPtr,int64 now,__uint64 hdr,__uintptr stk)

{
  uint64 *puVar1;
  runtime_profBuf *prVar2;
  runtime_profBuf *b_00;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  runtime_profAtomic rVar7;
  uintptr *puVar8;
  uint64 uVar9;
  uintptr *puVar10;
  uint64 uVar11;
  int iVar12;
  uint64 *puVar13;
  long in_FS_OFFSET;
  bool bVar14;
  string s;
  __uint64 hdr_00;
  __uintptr stk_00;
  runtime_profBuf *b_spill;
  void **tagPtr_spill;
  int64 now_spill;
  __uint64 hdr_spill;
  __uintptr stk_spill;
  byte local_78;
  char local_70;
  ulong local_40;
  runtime_profAtomic local_38;
  uintptr *local_30;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  uint64 *local_10;
  
  iVar12 = stk.cap;
  uVar11 = stk.len;
  puVar10 = stk.array;
                    /* Unresolved local var: runtime.profIndex bw@[???]
                       Unresolved local var: int wt@[???]
                       Unresolved local var: int wd@[???]
                       Unresolved local var: int skip@[???]
                       Unresolved local var: uintptr i@[???]
                       Unresolved local var: []uint64 data@[???] */
  while (&stack0xfffffffffffffff8 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (b_spill == (runtime_profBuf *)0x0) {
    return;
  }
  if ((long)b_spill->hdrsize < hdr_spill.len) {
    s.len = (int)b_spill;
    s.str = &DAT_0029ddf4;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s);
  }
  uVar9 = b_spill->overflow;
  if ((int)uVar9 == 0) {
    local_70 = '\0';
  }
  else {
    local_78 = (byte)stk_spill.len;
    local_18 = uVar9;
    runtime___profBuf__canWriteTwoRecords((runtime_profBuf *)stk_spill.len,(int)b_spill,now);
                    /* Unresolved local var: uint64 overflow@[???] */
    uVar9 = local_18;
  }
  if (local_70 == '\0') {
    if ((int)uVar9 == 0) {
      runtime___profBuf__canWriteRecord((runtime_profBuf *)stk_spill.len,(int)b_spill);
      b_00 = (runtime_profBuf *)(ulong)(local_78 ^ 1);
                    /* Unresolved local var: uint64 overflow@[???] */
    }
    else {
      b_00 = (runtime_profBuf *)0x1;
    }
    if ((char)b_00 != '\0') {
      do {
        prVar2 = (runtime_profBuf *)b_spill->overflow;
        if ((int)prVar2 == 0) {
          LOCK();
          b_spill->overflowTime = now_spill;
          UNLOCK();
          LOCK();
          b_00 = (runtime_profBuf *)b_spill->overflow;
          b_spill->overflow = (((ulong)prVar2 >> 0x20) + 1 << 0x20) + 1;
          UNLOCK();
          break;
        }
        if ((int)prVar2 == -1) break;
        LOCK();
        b_00 = (runtime_profBuf *)b_spill->overflow;
        bVar14 = prVar2 == b_00;
        if (bVar14) {
          b_spill->overflow = (uint64)((long)&prVar2->r + 1);
          b_00 = prVar2;
        }
        UNLOCK();
      } while (!bVar14);
      runtime___profBuf__wakeupExtra(b_00);
      return;
    }
  }
  else {
    uVar9 = b_spill->overflowTime;
    puVar8 = (uintptr *)b_spill->overflow;
    while ((int)puVar8 != 0) {
      LOCK();
      bVar14 = puVar8 == (uintptr *)b_spill->overflow;
      if (bVar14) {
        b_spill->overflow = ((ulong)puVar8 >> 0x20) + 1 << 0x20;
      }
      UNLOCK();
      local_30 = puVar8;
      if (bVar14) goto LAB_004f8c18;
      uVar9 = b_spill->overflowTime;
      puVar10 = (uintptr *)b_spill->overflow;
      uVar11 = uVar9;
                    /* Unresolved local var: uint64 time@[???] */
      puVar8 = puVar10;
    }
    uVar9 = 0;
LAB_004f8c18:
    if ((int)puVar8 != 0) {
                    /* Unresolved local var: uintptr[1] stk@[???] */
      local_40 = (ulong)puVar8 & 0xffffffff;
      hdr_00.len = hdr_spill.len;
      hdr_00.array = puVar8;
      hdr_00.cap = uVar9;
      stk_00.len = uVar11;
      stk_00.array = puVar10;
      stk_00.cap = iVar12;
      runtime___profBuf__write
                ((runtime_profBuf *)&stack0xffffffffffffffc0,(void **)b_spill,now,hdr_00,stk_00);
    }
  }
  uVar6 = b_spill->w;
  uVar4 = (b_spill->tags).len;
  if ((int)uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    runtime_panicdivide();
  }
  uVar5 = (uVar6 >> 0x22) % (uVar4 & 0xffffffff);
  if (tagPtr_spill != (void **)0x0) {
    if (uVar4 <= uVar5) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    (b_spill->tags).array[uVar5] = *tagPtr_spill;
  }
  uVar4 = (b_spill->data).len;
  if ((int)uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    runtime_panicdivide();
  }
  uVar6 = (uVar6 & 0xffffffff) % (uVar4 & 0xffffffff);
  if ((long)uVar4 < (long)(b_spill->hdrsize + uVar6 + stk_spill.len + 2)) {
    if (uVar4 <= uVar6) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    (b_spill->data).array[uVar6] = 0;
    rVar7 = (b_spill->data).len - uVar6;
    uVar6 = 0;
  }
  else {
    rVar7 = 0;
  }
  puVar1 = (b_spill->data).array;
  uVar4 = (b_spill->data).len;
  if (uVar4 < uVar6) {
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceB();
  }
  uVar4 = uVar4 - uVar6;
  uVar5 = (b_spill->data).cap - uVar6;
  uVar6 = (long)-uVar5 >> 0x3f & uVar6 << 3;
  puVar13 = (uint64 *)(uVar6 + (long)puVar1);
  if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  *(uintptr *)((long)puVar1 + uVar6) = stk_spill.len + b_spill->hdrsize + 2;
  if (1 < uVar4) {
    *(int64 *)((long)puVar1 + uVar6 + 8) = now_spill;
    uVar6 = b_spill->hdrsize;
    if (uVar6 + 2 <= uVar5) {
      if (uVar6 + 2 < 2) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceB();
      }
      if (hdr_spill.len < (long)uVar6) {
        uVar6 = hdr_spill.len;
      }
      if (hdr_spill.array != (uint64 *)(((long)-(uVar5 - 2) >> 0x3f & 0x10U) + (long)puVar13)) {
        local_38 = rVar7;
        local_28 = uVar4;
        local_20 = uVar6;
        local_10 = puVar13;
                    /* Unresolved local var: runtime.profIndex old@[???]
                       Unresolved local var: runtime.profIndex new@[???] */
        runtime_memmove();
        uVar4 = local_28;
        rVar7 = local_38;
        uVar6 = local_20;
        puVar13 = local_10;
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: uintptr pc@[???] */
      }
      while( true ) {
        if (b_spill->hdrsize <= uVar6) {
          lVar3 = 0;
          while( true ) {
            if (stk_spill.len <= lVar3) {
              do {
                local_18 = b_spill->w;
                LOCK();
                bVar14 = local_18 == b_spill->w;
                if (bVar14) {
                  b_spill->w = (local_18 >> 0x22) + 1 << 0x22 |
                               (ulong)(uint)((int)stk_spill.len + (int)rVar7 + (int)b_spill->hdrsize
                                             + 2 + (int)local_18);
                }
                UNLOCK();
              } while (!bVar14);
              if ((local_18 >> 0x20 & 1) != 0) {
                runtime_notewakeup(&b_spill->wait);
              }
              return;
            }
            uVar6 = b_spill->hdrsize + lVar3 + 2;
            if (uVar4 <= uVar6) break;
            puVar13[uVar6] = stk_spill.array[lVar3];
            lVar3 = lVar3 + 1;
          }
                    /* WARNING: Subroutine does not return */
          runtime_panicIndexU();
        }
        if (uVar4 <= uVar6 + 2) break;
        puVar13[uVar6 + 2] = 0;
        uVar6 = uVar6 + 1;
      }
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
    runtime_panicSliceAcapU();
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

