
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.(*mheap).reclaimChunk(runtime.mheap * h,
   []runtime.arenaIdx arenas, uintptr pageIdx, uintptr n, uintptr ~r3) */

uintptr runtime___mheap__reclaimChunk
                  (runtime_mheap *h,__runtime_arenaIdx arenas,uintptr pageIdx,uintptr n)

{
  long lVar1;
  uint32 uVar2;
  bool bVar3;
  uintptr extraout_RAX;
  ulong uVar4;
  undefined4 uVar5;
  ulong uVar6;
  runtime_mspan *prVar7;
  byte bVar8;
  runtime_heapArena *prVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  char *pcVar13;
  ulong uVar14;
  uintptr uVar15;
  long in_FS_OFFSET;
  bool bVar16;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  runtime_mheap *h_spill;
  __runtime_arenaIdx arenas_spill;
  uintptr pageIdx_spill;
  uintptr n0;
  byte local_a8;
  runtime_sweepLocked local_98;
  runtime_mutex *local_90;
  long local_88;
  ulong local_80;
  ulong local_78;
  runtime_heapArena *local_70;
  ulong local_68;
  long local_60;
  float64 local_58;
  uint64 local_50;
  uint64 local_48;
  runtime_mutex *local_40;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  undefined *local_20;
  char *local_18;
  byte *local_10;
  
                    /* Unresolved local var: uintptr nFreed@[???]
                       Unresolved local var: runtime.sweepLocker sl@[???] */
  while (uVar2 = runtime_mheap_.sweepgen,
        &local_38 <= *(ulong **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  bVar3 = false;
  local_88 = 0;
  uVar15 = n0;
  while( true ) {
    if (uVar15 == 0) {
      if (bVar3) {
        LOCK();
        uVar2 = runtime_mheap_.sweepers - 1;
        UNLOCK();
        if (runtime_mheap_.sweepers == 1) {
          uVar5 = CONCAT31((int3)(runtime_mheap_.sweepDrained >> 8),runtime_mheap_.sweepDrained != 0
                          );
        }
        else {
          uVar5 = 0;
        }
        runtime_mheap_.sweepers = uVar2;
        if (((char)uVar5 != '\0') && (0 < runtime_debug.gcpacertrace)) {
          local_40 = (runtime_mutex *)runtime_gcController.heapLive;
          local_48 = runtime_mheap_.sweepHeapLiveBasis;
          local_50 = runtime_mheap_.pagesSwept;
          local_58 = runtime_mheap_.sweepPagesPerByte;
          runtime_printlock();
          s.len._0_4_ = uVar5;
          s.str = (uint8 *)
                  "pacer: sweep done at heap size pattern contains path separatorreflect.MakeSlice: negative capreflect.MakeSlice: negative lenreflect: Len of non-array type resetspinning: not a spinning mruntime: cannot allocate memoryruntime: split stack overflow: skipping TypeExtendedMlpsVcFlowslice bounds out of range [%x:]slice bounds out of range [:%x]tls: failed to sign handshake: tls: no certificates configuredtls: unsupported public key: %Ttoo many transfer encodings: %qx509: certificate is valid for x509: malformed GeneralizedTimex509: malformed subjectUniqueIDx509: malformed tbs certificate (types from different packages)28421709430404007434844970703125: day-of-year does not match dayAlcatel Ethernet workgroup conc.Alteon SSL 410 10/100/1000 FiberBFD packet length does not matchBSS Available Admission CapacityBayStack 250 10/100 Ethernet HubCannot set rfmon for this handleClientNetworkInterfaceIdentifierDMG Link Adaption AcknowledgmentEthernet Routing Switch 2500-26TEthernet Routing Switch 2500-50TEthernet Routing Switch 5510-24TEthernet Routing Switch 5510-48TExtended MPLS Tunnel Flow RecordFailoverPartnerRawClientLeadTimeIPv6 header TLV option too smallInvalid TCP option length %d < 2MapIter.Value called before NextNon Transmitted BSSID CapabilityNortel Networks VPN Gateway 3050Nortel Networks VPN Gateway 3070RR Set Exists when it should notSIGFPE: floating-point exceptionSIGTTOU: background write to ttyUnable to decode EthernetType %dUnsupported SFlow sample type %dUnsupported flow record type: %d\" not supported for cpu option \"bad input point: low order pointbufio: invalid use of UnreadBytebufio: invalid use of UnreadRunebufio: tried to fill full buffercan\'t send after socket shutdowncannot represent time as UTCTimechacha20: invalid buffer overlapchacha20poly1305: bad key lengthcrypto/aes: input not full blockcrypto/des: input not full blocked25519: bad public key length: end outside usable address spacego package net: hostLookupOrder(http2: server ignoring frame: %vinteger is not minimally encodedinternal error: big..." /* TRUNCATED STRING LITERAL */
          ;
          s.len._4_4_ = 0;
          runtime_printstring(s);
          runtime_printuint((ulong)local_40 >> 0x14);
          s_00.len._0_4_ = uVar5;
          s_00.str = &DAT_00296703;
          s_00.len._4_4_ = 0;
          runtime_printstring(s_00);
          runtime_printuint((long)local_40 - local_48 >> 0x14);
          s_01.len._0_4_ = uVar5;
          s_01.str = &DAT_0029d8ec;
          s_01.len._4_4_ = 0;
          runtime_printstring(s_01);
          runtime_printuint(local_50);
          s_02.len._0_4_ = uVar5;
          s_02.str = &DAT_0028ebf2;
          s_02.len._4_4_ = 0;
          runtime_printstring(s_02);
          runtime_printfloat(local_58);
          s_03.len._0_4_ = uVar5;
          s_03.str = &DAT_002927ca;
          s_03.len._4_4_ = 0;
          runtime_printstring(s_03);
          runtime_printunlock();
        }
      }
      if (runtime_trace.enabled != false) {
        runtime_unlock2((runtime_mutex *)n0);
        runtime_traceGCSweepSpan((n0 - local_88) * 0x2000);
        runtime_lock2(&h_spill->lock);
        n0 = extraout_RAX;
      }
      return n0;
    }
    if ((ulong)arenas_spill.len <= pageIdx_spill >> 0xd) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndexU();
    }
    if (0x3fffff < arenas_spill.array[pageIdx_spill >> 0xd]) break;
    prVar9 = (*h_spill->arenas[0])[arenas_spill.array[pageIdx_spill >> 0xd]];
    uVar10 = pageIdx_spill & 0x1fff;
    uVar11 = uVar10 >> 3;
    if (0x400 < uVar11) {
      runtime_panicSliceBU();
      break;
    }
    lVar1 = uVar11 - 0x400;
    uVar11 = uVar11 & lVar1 >> 0x3f;
    pcVar13 = "*net.addrinfoErrno" + (long)(prVar9->bitmap + uVar11 + 2);
    puVar12 = &DAT_00210400 + (long)(prVar9->bitmap + uVar11);
    uVar11 = uVar15 >> 3;
    if ((ulong)-lVar1 < uVar11 || -uVar11 == lVar1) {
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: uint8 inUseUnmarked@[???] */
      uVar11 = -lVar1;
    }
    local_80 = uVar11;
    local_70 = prVar9;
    local_38 = pageIdx_spill;
    local_30 = uVar10;
    local_28 = uVar15;
    local_20 = puVar12;
    local_18 = pcVar13;
    for (uVar14 = 0; (long)uVar14 < (long)uVar11; uVar14 = uVar14 + 1) {
      local_10 = (byte *)(pcVar13 + uVar14);
      if (uVar11 <= uVar14) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      bVar8 = *local_10 & ~puVar12[uVar14];
      if (bVar8 != 0) {
        local_78 = uVar14;
        for (uVar4 = 0; uVar4 < 8; uVar4 = uVar4 + 1) {
          local_60 = local_88;
          if (((byte)(1 << ((byte)uVar4 & 0x1f)) & bVar8) != 0) {
                    /* Unresolved local var: runtime.mspan * s@[???] */
            uVar6 = uVar10 + uVar14 * 8 + uVar4;
            if (0x1fff < uVar6) {
                    /* WARNING: Subroutine does not return */
              runtime_panicIndexU();
            }
            prVar7 = prVar9->spans[uVar6];
            if (prVar7->sweepgen == uVar2 - 2) {
              if (!bVar3) {
                LOCK();
                runtime_mheap_.sweepers = runtime_mheap_.sweepers + 1;
                UNLOCK();
                bVar3 = true;
              }
              LOCK();
              bVar16 = uVar2 - 2 == prVar7->sweepgen;
              if (bVar16) {
                prVar7->sweepgen = uVar2 - 1;
              }
              UNLOCK();
              if (bVar16) {
                bVar16 = true;
              }
              else {
                prVar7 = (runtime_mspan *)0x0;
                bVar16 = false;
              }
            }
            else {
              prVar7 = (runtime_mspan *)0x0;
              bVar16 = false;
                    /* Unresolved local var: bool ok@[???]
                       Unresolved local var: runtime.sweepLocked s@[???] */
            }
            pageIdx_spill = local_38;
            uVar15 = local_28;
            local_98.mspan = prVar7;
            if (bVar16) {
                    /* Unresolved local var: uintptr npages@[???] */
              local_90 = (runtime_mutex *)prVar7->npages;
              local_68 = uVar4;
              runtime_unlock2(local_90);
              runtime___sweepLocked__sweep(&local_98,SUB81(prVar7,0));
              local_40 = (runtime_mutex *)(ulong)local_a8;
              runtime_lock2(local_40);
              local_88 = local_60;
              if (local_40 != (runtime_mutex *)0x0) {
                local_88 = (long)&local_90->key + local_60;
              }
              bVar8 = *local_10 & ~local_20[local_78];
              uVar4 = local_68;
              uVar11 = local_80;
              prVar9 = local_70;
              puVar12 = local_20;
              pageIdx_spill = local_38;
              uVar10 = local_30;
              pcVar13 = local_18;
              uVar14 = local_78;
              uVar15 = local_28;
            }
          }
                    /* Unresolved local var: uint j@[???] */
        }
      }
    }
                    /* Unresolved local var: runtime.arenaIdx ai@[???]
                       Unresolved local var: runtime.heapArena * ha@[???]
                       Unresolved local var: uint arenaPage@[???]
                       Unresolved local var: []uint8 marked@[???]
                       Unresolved local var: []uint8 inUse@[???] */
    pageIdx_spill = pageIdx_spill + uVar11 * 8;
    uVar15 = uVar15 + uVar11 * -8;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndexU();
}

