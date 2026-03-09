
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*sweepLocked).sweep(runtime.sweepLocked * sl, bool
   preserve, bool ~r1) */

bool runtime___sweepLocked__sweep(runtime_sweepLocked *sl,bool preserve)

{
  uint uVar1;
  runtime_pallocData (**pparVar2) [8192];
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  long *plVar6;
  runtime_mheap *prVar7;
  runtime_special *prVar8;
  long lVar9;
  runtime_pallocSum *prVar10;
  uint32 uVar11;
  bool bVar12;
  undefined1 extraout_AL;
  undefined1 extraout_AL_00;
  ushort uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  runtime_mheap *extraout_RAX;
  runtime_mheap *extraout_RAX_00;
  runtime_mheap *extraout_RAX_01;
  runtime_mheap *h;
  runtime_pallocSum *prVar17;
  runtime_mspan *prVar18;
  runtime_mheap *prVar19;
  byte *pbVar20;
  ulong uVar21;
  runtime_special *prVar22;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  string s_05;
  string s_06;
  string s_07;
  string s_08;
  string s_09;
  string s_10;
  string s_11;
  string s_12;
  string s_13;
  runtime_sweepLocked *sl_spill;
  bool preserve_spill;
  runtime_mheap *local_d8;
  runtime_mspan *local_60;
  ulong local_58;
  runtime_mspan *local_50;
  runtime_special *local_48;
  runtime_special *local_40;
  runtime_pallocSum *local_38;
  byte local_30;
  long local_28;
  byte *local_20;
  byte local_18;
  ulong local_10;
  
                    /* Unresolved local var: runtime.g * _g_@[DW_OP_reg1(RDX)]
                       Unresolved local var: runtime.mspan * s@[???]
                       Unresolved local var: uint32 sweepgen@[???]
                       Unresolved local var: runtime.spanClass spc@[???]
                       Unresolved local var: uintptr size@[???]
                       Unresolved local var: uint16 nfreed@[???]
                       Unresolved local var: runtime.specialsIter siter@[???]
                       Unresolved local var: runtime.special * ~R0s@[???] */
  while (&local_60 <= *(runtime_mspan ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  plVar6 = *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x30);
  if ((((int)plVar6[0x22] == 0) && ((int)plVar6[0x1f] == 0)) &&
     (*plVar6 != *(long *)(in_FS_OFFSET + -8))) {
    s_13.len = (int)plVar6;
    s_13.str = (uint8 *)0x2a0674;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_13);
  }
  h = (runtime_mheap *)sl_spill->mspan;
  if (!preserve_spill) {
    sl_spill->mspan = (runtime_mspan *)0x0;
  }
  uVar11 = runtime_mheap_.sweepgen;
                    /* Unresolved local var: runtime.mSpanState state@[???] */
  bVar3 = *(undefined1 *)((long)&(h->pages).summary[3].cap + 3);
  if ((bVar3 != 1) ||
     (uVar1 = runtime_mheap_.sweepgen - 1, (uint)(h->pages).summary[3].len != uVar1)) {
    local_58 = (ulong)(uint)(h->pages).summary[3].len;
    runtime_printlock();
    s_09.len = (int)h;
    s_09.str = &DAT_0029b648;
    runtime_printstring(s_09);
    runtime_printuint((ulong)bVar3);
    s_10.len = (int)h;
    s_10.str = &DAT_0028ec42;
    runtime_printstring(s_10);
    runtime_printuint(local_58);
    s_11.len = (int)h;
    s_11.str = &DAT_00299245;
    runtime_printstring(s_11);
    runtime_printuint((ulong)uVar11);
    runtime_printnl();
    runtime_printunlock();
    s_12.len = (int)h;
    s_12.str = &DAT_0029fe1f;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_12);
  }
  if (runtime_trace.enabled != false) {
    runtime_traceGCSweepSpan((long)(h->pages).summary[1].array << 0xd);
                    /* Unresolved local var: runtime.mSpanState state@[???] */
  }
  LOCK();
  runtime_mheap_.pagesSwept = runtime_mheap_.pagesSwept + (long)(h->pages).summary[1].array;
  UNLOCK();
  bVar3 = *(undefined1 *)((long)&(h->pages).summary[3].cap + 2);
  prVar7 = (runtime_mheap *)(h->pages).summary[4].array;
  prVar8 = (runtime_special *)(h->pages).chunks[0];
  local_48 = (runtime_special *)(h->pages).chunks;
  local_40 = prVar8;
  do {
    while( true ) {
      prVar22 = local_40;
      if (local_40 == (runtime_special *)0x0) {
        if ((prVar8 != (runtime_special *)0x0) &&
           ((h->pages).chunks[0] == (runtime_pallocData (*) [8192])0x0)) {
                    /* Unresolved local var: uintptr arenaPage@[???]
                       Unresolved local var: runtime.heapArena * ha@[???] */
          uVar15 = (h->pages).summary[0].cap;
          uVar21 = uVar15 + 0x800000000000 >> 0x1a;
          if (0x3fffff < uVar21) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndexU();
          }
          uVar15 = uVar15 >> 0xd;
          uVar16 = (uVar15 & 0x1fff) >> 3;
          if (0x3ff < uVar16) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndexU();
          }
          LOCK();
          "*asn1.stringEncoder"[(long)((*runtime_mheap_.arenas[0])[uVar21]->bitmap + uVar16 + 8)] =
               "*asn1.stringEncoder"
               [(long)((*runtime_mheap_.arenas[0])[uVar21]->bitmap + uVar16 + 8)] &
               ~(byte)(1 << ((byte)uVar15 & 7));
          UNLOCK();
        }
        if ((runtime_debug.allocfreetrace != 0) || (runtime_debug.clobberfree != 0)) {
          local_38 = (h->pages).summary[3].array;
                    /* Unresolved local var: runtime.markBits mbits@[???]
                       Unresolved local var: runtime.markBits abits@[???] */
          local_30 = 1;
          local_28 = 0;
          local_20 = (byte *)(h->pages).summary[2].cap;
          local_18 = 1;
          local_10 = 0;
                    /* Unresolved local var: uintptr i@[???] */
          for (prVar17 = (runtime_pallocSum *)0x0; prVar17 < (h->pages).summary[2].array;
              prVar17 = (runtime_pallocSum *)((long)prVar17 + 1)) {
            if ((((byte)*local_38 & local_30) == 0) &&
               ((local_10 < (ulong)(h->pages).summary[1].cap || ((*local_20 & local_18) != 0)))) {
                    /* Unresolved local var: uintptr x@[???] */
              prVar10 = (h->pages).summary[4].array;
              lVar9 = (h->pages).summary[0].cap;
              if (runtime_debug.allocfreetrace != 0) {
                runtime_tracefree(prVar17,(uintptr)h);
                    /* Unresolved local var: uintptr i@[???] */
                local_d8 = prVar7;
              }
              if (runtime_debug.clobberfree != 0) {
                for (prVar19 = (runtime_mheap *)0x0; prVar19 < prVar7;
                    prVar19 = (runtime_mheap *)((long)&(prVar19->lock).key + 4)) {
                  *(undefined4 *)
                   ((long)(prVar19->pages).summary + (long)prVar10 * (long)prVar17 + lVar9 + -8) =
                       0xdeadbeef;
                }
              }
            }
            if (local_30 == 0x80) {
              local_38 = (runtime_pallocSum *)((long)local_38 + 1);
              local_30 = 1;
            }
            else {
              local_30 = local_30 << 1;
            }
            local_28 = local_28 + 1;
            if (local_18 == 0x80) {
              local_20 = local_20 + 1;
              local_18 = 1;
            }
            else {
              local_18 = local_18 << 1;
            }
            local_10 = local_10 + 1;
          }
        }
        prVar17 = (runtime_pallocSum *)(h->pages).summary[1].cap;
        if (prVar17 < (h->pages).summary[2].array) {
          prVar18 = (runtime_mspan *)((ulong)prVar17 >> 3);
          if ((byte)((~*(byte *)((h->pages).summary[2].cap + (long)&prVar18->next) &
                     *(byte *)((long)&prVar18->next + (long)(h->pages).summary[3].array)) >>
                    ((byte)prVar17 & 7)) != 0) {
            local_50 = prVar18;
            runtime___mspan__reportZombies(prVar18);
                    /* Unresolved local var: uintptr i@[???] */
            prVar18 = local_50;
          }
          while (prVar18 = (runtime_mspan *)((long)&prVar18->next + 1),
                prVar18 < (runtime_mspan *)((long)(h->pages).summary[2].array + 7U >> 3)) {
            if ((*(byte *)((long)&prVar18->next + (long)(h->pages).summary[3].array) &
                ~*(byte *)((h->pages).summary[2].cap + (long)&prVar18->next)) != 0) {
              runtime___mspan__reportZombies(prVar18);
            }
          }
        }
                    /* Unresolved local var: int count@[???]
                       Unresolved local var: uintptr i@[???]
                       Unresolved local var: uint64 mrkBits@[???] */
        prVar18 = (runtime_mspan *)((long)(h->pages).summary[2].array + 7U >> 3);
        local_60 = (runtime_mspan *)0x0;
        local_50 = prVar18;
        for (uVar15 = 0; uVar15 < prVar18; uVar15 = uVar15 + 8) {
          if (runtime_x86HasPOPCNT == false) {
            runtime_internal_sys_OnesCount64((uint64)prVar18);
            prVar18 = local_50;
            prVar19 = local_d8;
          }
          else {
            prVar19 = (runtime_mheap *)
                      POPCOUNT(*(undefined8 *)((long)(h->pages).summary[3].array + uVar15));
          }
          local_60 = (runtime_mspan *)
                     ((long)&(prVar19->pages).summary[0].array + (long)&local_60[-1].specials);
        }
        uVar5 = (ushort)(h->pages).summary[3].cap;
        uVar14 = (uint)uVar5 - (int)local_60;
        uVar13 = (ushort)uVar14;
        if (uVar5 < (ushort)local_60) {
          local_50 = (runtime_mspan *)(h->pages).summary[2].array;
          runtime_printlock();
          s_04.len = (int)h;
          s_04.str = &DAT_00299af5;
          runtime_printstring(s_04);
          runtime_printuint((uint64)local_50);
          s_05.len = (int)h;
          s_05.str = &DAT_0028b88a;
          runtime_printstring(s_05);
          runtime_printuint((ulong)local_60 & 0xffff);
          s_06.len = (int)h;
          s_06.str = &DAT_0029c28f;
          runtime_printstring(s_06);
          runtime_printuint((ulong)uVar5);
          s_07.len = (int)h;
          s_07.str = &DAT_0028b89a;
          runtime_printstring(s_07);
          runtime_printuint((ulong)uVar13);
          runtime_printnl();
          runtime_printunlock();
          s_08.len = (int)h;
          s_08.str = (uint8 *)0x2a2ad0;
                    /* WARNING: Subroutine does not return */
          runtime_throw(s_08);
        }
        *(ushort *)&(h->pages).summary[3].cap = (ushort)local_60;
        (h->pages).summary[1].cap = 0;
        if (runtime_trace.enabled != false) {
          plVar6 = (long *)(*(long *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0xd8) +
                           0x1648);
          *plVar6 = *plVar6 + (long)(h->pages).summary[4].array * (ulong)(uVar14 & 0xffff);
        }
        (h->pages).summary[2].cap = (int)(h->pages).summary[3].array;
        runtime_newMarkBits((uintptr)(h->pages).summary[2].array);
        (h->pages).summary[3].array = (runtime_pallocSum *)local_d8;
        runtime___mspan__refillAllocCache((runtime_mspan *)local_d8,(uintptr)h);
        bVar4 = *(undefined1 *)((long)&(h->pages).summary[3].cap + 3);
        prVar19 = h;
        if (bVar4 == 1) {
          uVar14 = (uint)(h->pages).summary[3].len;
          prVar19 = (runtime_mheap *)(ulong)uVar1;
          if (uVar14 == uVar1) {
            if ((uVar14 == uVar11 + 1) || (uVar14 == uVar11 + 3)) {
              s.len._0_4_ = uVar11;
              s.str = &DAT_0029a3d2;
              s.len._4_4_ = 0;
                    /* WARNING: Subroutine does not return */
              runtime_throw(s);
            }
            LOCK();
            *(uint32 *)&(h->pages).summary[3].len = uVar11;
            UNLOCK();
            if (bVar3 >> 1 == 0) {
              if (!preserve_spill) {
                if (uVar13 != 0) {
                    /* Unresolved local var: runtime.heapStatsDelta * stats@[???] */
                  if (runtime_debug.efence < 1) {
                    runtime___mheap__freeSpan(h,(runtime_mspan *)(ulong)uVar13);
                    local_d8 = h;
                  }
                  else {
                    (h->pages).summary[4].len = 0;
                    runtime_mmap();
                    local_d8 = prVar7;
                  }
                  runtime___consistentHeapStats__acquire(&runtime_memstats.heapStats);
                  LOCK();
                  pparVar2 = (local_d8->pages).chunks + 0x3e;
                  *pparVar2 = (runtime_pallocData (*) [8192])((long)(**pparVar2)[0].pallocBits + 1);
                  UNLOCK();
                  LOCK();
                  pparVar2 = (local_d8->pages).chunks + 0x3d;
                  *pparVar2 = (runtime_pallocData (*) [8192])
                              ((long)((prVar7->pages).summary + 5) + (long)(**pparVar2 + -1));
                  UNLOCK();
                  runtime___consistentHeapStats__release(&runtime_memstats.heapStats);
                  return (bool)extraout_AL_00;
                }
                if (0x87 < bVar3) {
                    /* WARNING: Subroutine does not return */
                  runtime_panicIndex();
                }
                runtime___spanSet__push
                          ((runtime_spanSet *)h,(runtime_mspan *)runtime_mheap_.central);
                h = extraout_RAX_01;
              }
            }
            else {
              if (uVar13 != 0) {
                    /* Unresolved local var: runtime.heapStatsDelta * stats@[???] */
                *(undefined1 *)((long)&(h->pages).summary[3].cap + 4) = 1;
                runtime___consistentHeapStats__acquire((runtime_consistentHeapStats *)h);
                if (0x43 < (ulong)(long)(char)(bVar3 >> 1)) {
                    /* WARNING: Subroutine does not return */
                  runtime_panicIndex();
                }
                plVar6 = (long *)((long)(char)(bVar3 >> 1) * 8 + 0x278);
                LOCK();
                *plVar6 = *plVar6 + (ulong)uVar13;
                UNLOCK();
                runtime___consistentHeapStats__release(&runtime_memstats.heapStats);
              }
              if (!preserve_spill) {
                if ((short)local_60 == 0) {
                  runtime___mheap__freeSpan(h,local_60);
                  return (bool)extraout_AL;
                }
                if ((h->pages).summary[2].array == (runtime_pallocSum *)((ulong)local_60 & 0xffff))
                {
                  if (0x87 < bVar3) {
                    /* WARNING: Subroutine does not return */
                    runtime_panicIndex();
                  }
                  runtime___spanSet__push
                            ((runtime_spanSet *)h,(runtime_mspan *)runtime_mheap_.central);
                  h = extraout_RAX;
                }
                else {
                  if (0x87 < bVar3) {
                    /* WARNING: Subroutine does not return */
                    runtime_panicIndex();
                  }
                  runtime___spanSet__push
                            ((runtime_spanSet *)h,(runtime_mspan *)runtime_mheap_.central);
                  h = extraout_RAX_00;
                }
              }
            }
            return SUB81(h,0);
          }
        }
        local_58 = (ulong)(uint)(h->pages).summary[3].len;
        runtime_printlock();
        s_00.len = (int)prVar19;
        s_00.str = &DAT_0029b648;
        runtime_printstring(s_00);
        runtime_printuint((ulong)bVar4);
        s_01.len = (int)prVar19;
        s_01.str = &DAT_0028ec42;
        runtime_printstring(s_01);
        runtime_printuint(local_58);
        s_02.len = (int)prVar19;
        s_02.str = &DAT_00299245;
        runtime_printstring(s_02);
        runtime_printuint((ulong)uVar11);
        runtime_printnl();
        runtime_printunlock();
        s_03.len = (int)prVar19;
        s_03.str = &DAT_002a5fce;
                    /* WARNING: Subroutine does not return */
        runtime_throw(s_03);
      }
                    /* Unresolved local var: uintptr objIndex@[???]
                       Unresolved local var: uintptr p@[???]
                       Unresolved local var: runtime.markBits mbits@[???] */
      if (prVar7 == (runtime_mheap *)0x0) {
                    /* WARNING: Subroutine does not return */
        runtime_panicdivide();
      }
      uVar15 = (ulong)local_40->offset / (ulong)prVar7;
      lVar9 = (h->pages).summary[0].cap;
                    /* Unresolved local var: uint8 * bytep@[???] */
      pbVar20 = (byte *)((uVar15 >> 3) + (long)(h->pages).summary[3].array);
      bVar4 = *pbVar20;
      if ((bVar4 & (byte)(1 << (sbyte)(uVar15 & 7))) == 0) break;
      if (local_40->kind == 3) {
        prVar22 = (runtime_special *)((runtime_pallocData *)&local_40->next)->pallocBits[0];
        ((runtime_pallocData *)&local_48->next)->pallocBits[0] = (uint64)prVar22;
        *(undefined1 *)((long)&local_40[1].next + 1) = 1;
        local_40 = prVar22;
        runtime_freeSpecial(prVar22,h,(uintptr)local_48);
        local_d8 = (runtime_mheap *)(lVar9 + uVar15 * (long)prVar7);
      }
      else {
        local_40 = (runtime_special *)((runtime_pallocData *)&local_40->next)->pallocBits[0];
        local_48 = prVar22;
      }
    }
                    /* Unresolved local var: bool hasFin@[???]
                       Unresolved local var: uintptr endOffset@[???] */
    uVar21 = (long)(prVar7->pages).summary + uVar15 * (long)prVar7 + -8;
                    /* Unresolved local var: runtime.special * tmp@[???] */
    for (; prVar22 != (runtime_special *)0x0;
        prVar22 = (runtime_special *)((runtime_pallocData *)&prVar22->next)->pallocBits[0]) {
      if (uVar21 <= prVar22->offset) {
        bVar12 = false;
        goto LAB_004d5c27;
      }
      if (prVar22->kind == 1) {
        *pbVar20 = bVar4 | (byte)(1 << (int)(uVar15 & 7));
        bVar12 = true;
        goto LAB_004d5c27;
      }
    }
    bVar12 = false;
LAB_004d5c27:
    while ((prVar22 = local_40, local_40 != (runtime_special *)0x0 &&
           (uVar5 = local_40->offset, uVar5 < uVar21))) {
      lVar9 = (h->pages).summary[0].cap;
      if ((local_40->kind == 1) || (!bVar12)) {
        local_40 = (runtime_special *)((runtime_pallocData *)&local_40->next)->pallocBits[0];
        ((runtime_pallocData *)&local_48->next)->pallocBits[0] = (uint64)local_40;
        runtime_freeSpecial(local_40,h,(uintptr)local_48);
        local_d8 = (runtime_mheap *)((ulong)uVar5 + lVar9);
      }
      else {
        local_40 = (runtime_special *)((runtime_pallocData *)&local_40->next)->pallocBits[0];
        local_48 = prVar22;
      }
    }
  } while( true );
}

