
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.sweepone(uintptr ~r0) */

uintptr runtime_sweepone(void)

{
  uint uVar1;
  int *piVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  runtime_sweepLocked *sl;
  uintptr uVar6;
  uint32 uVar7;
  uint64 v;
  uint64 uVar8;
  float64 v_00;
  uint64 uVar9;
  long lVar10;
  long in_FS_OFFSET;
  bool bVar11;
  bool bVar12;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  string s_05;
  string s_06;
  string s_07;
  long local_68;
  char local_60;
  
                    /* Unresolved local var: runtime.g * _g_@[???]
                       Unresolved local var: uintptr npages@[???]
                       Unresolved local var: bool noMoreWork@[???]
                       Unresolved local var: runtime.sweepLocker sl@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  lVar5 = *(long *)(in_FS_OFFSET + -8);
  piVar2 = (int *)(*(long *)(lVar5 + 0x30) + 0x110);
  *piVar2 = *piVar2 + 1;
  uVar7 = runtime_mheap_.sweepgen;
  if (runtime_mheap_.sweepDrained != 0) {
    uVar6 = *(uintptr *)(lVar5 + 0x30);
    piVar2 = (int *)(uVar6 + 0x110);
    *piVar2 = *piVar2 + -1;
    return uVar6;
  }
  bVar12 = false;
  do {
    while( true ) {
                    /* Unresolved local var: runtime.mspan * s@[???] */
      runtime___mheap__nextSpanForSweep(&runtime_mheap_);
      if (local_68 == 0) {
        LOCK();
        bVar11 = runtime_mheap_.sweepDrained == 0;
        if (bVar11) {
          runtime_mheap_.sweepDrained = 1;
        }
        UNLOCK();
        goto LAB_004d4a17;
      }
      bVar3 = *(byte *)(local_68 + 99);
                    /* Unresolved local var: runtime.mSpanState state@[???] */
      if (bVar3 == 1) break;
      uVar4 = *(uint *)(local_68 + 0x58);
      if ((uVar7 != uVar4) && (uVar1 = uVar7 + 3, uVar4 != uVar1)) {
        runtime_printlock();
        s_04.len._0_4_ = uVar1;
        s_04.str = &DAT_0029f693;
        s_04.len._4_4_ = 0;
        runtime_printstring(s_04);
        runtime_printuint((ulong)bVar3);
        s_05.len._0_4_ = uVar1;
        s_05.str = &DAT_002927ee;
        s_05.len._4_4_ = 0;
        runtime_printstring(s_05);
        runtime_printuint((ulong)uVar4);
        s_06.len._0_4_ = uVar1;
        s_06.str = &DAT_0028ec42;
        s_06.len._4_4_ = 0;
        runtime_printstring(s_06);
        runtime_printuint((ulong)uVar7);
        runtime_printnl();
        runtime_printunlock();
        s_07.len._0_4_ = uVar1;
        s_07.str = (uint8 *)
                   "non in-use span in unswept listpacer: sweep done at heap size pattern contains path separatorreflect.MakeSlice: negative capreflect.MakeSlice: negative lenreflect: Len of non-array type resetspinning: not a spinning mruntime: cannot allocate memoryruntime: split stack overflow: skipping TypeExtendedMlpsVcFlowslice bounds out of range [%x:]slice bounds out of range [:%x]tls: failed to sign handshake: tls: no certificates configuredtls: unsupported public key: %Ttoo many transfer encodings: %qx509: certificate is valid for x509: malformed GeneralizedTimex509: malformed subjectUniqueIDx509: malformed tbs certificate (types from different packages)28421709430404007434844970703125: day-of-year does not match dayAlcatel Ethernet workgroup conc.Alteon SSL 410 10/100/1000 FiberBFD packet length does not matchBSS Available Admission CapacityBayStack 250 10/100 Ethernet HubCannot set rfmon for this handleClientNetworkInterfaceIdentifierDMG Link Adaption AcknowledgmentEthernet Routing Switch 2500-26TEthernet Routing Switch 2500-50TEthernet Routing Switch 5510-24TEthernet Routing Switch 5510-48TExtended MPLS Tunnel Flow RecordFailoverPartnerRawClientLeadTimeIPv6 header TLV option too smallInvalid TCP option length %d < 2MapIter.Value called before NextNon Transmitted BSSID CapabilityNortel Networks VPN Gateway 3050Nortel Networks VPN Gateway 3070RR Set Exists when it should notSIGFPE: floating-point exceptionSIGTTOU: background write to ttyUnable to decode EthernetType %dUnsupported SFlow sample type %dUnsupported flow record type: %d\" not supported for cpu option \"bad input point: low order pointbufio: invalid use of UnreadBytebufio: invalid use of UnreadRunebufio: tried to fill full buffercan\'t send after socket shutdowncannot represent time as UTCTimechacha20: invalid buffer overlapchacha20poly1305: bad key lengthcrypto/aes: input not full blockcrypto/des: input not full blocked25519: bad public key length: end outside usable address spacego package net: hostLookupOrder(http2: server ignoring frame: %vinteger is not minim..." /* TRUNCATED STRING LITERAL */
        ;
        s_07.len._4_4_ = 0;
                    /* WARNING: Subroutine does not return */
        runtime_throw(s_07);
      }
    }
    if (*(int *)(local_68 + 0x58) == uVar7 - 2) {
      if (!bVar12) {
        LOCK();
        runtime_mheap_.sweepers = runtime_mheap_.sweepers + 1;
        UNLOCK();
        bVar12 = true;
      }
      LOCK();
      bVar11 = uVar7 - 2 == *(int *)(local_68 + 0x58);
      if (bVar11) {
        *(int *)(local_68 + 0x58) = uVar7 - 1;
      }
      UNLOCK();
      if (bVar11) {
        bVar11 = true;
        lVar10 = local_68;
      }
      else {
        lVar10 = 0;
        bVar11 = false;
      }
    }
    else {
      bVar11 = false;
      lVar10 = 0;
                    /* Unresolved local var: bool ok@[???]
                       Unresolved local var: runtime.sweepLocked s@[???] */
    }
  } while (!bVar11);
  sl = *(runtime_sweepLocked **)(lVar10 + 0x20);
  runtime___sweepLocked__sweep(sl,SUB81(lVar10,0));
  if (local_60 != '\0') {
    LOCK();
    runtime_mheap_.reclaimCredit = (long)&sl->mspan + runtime_mheap_.reclaimCredit;
    UNLOCK();
  }
  bVar11 = false;
LAB_004d4a17:
  uVar9 = runtime_gcController.heapLive;
  v_00 = runtime_mheap_.sweepPagesPerByte;
  uVar8 = runtime_mheap_.sweepHeapLiveBasis;
  v = runtime_mheap_.pagesSwept;
  if (bVar12) {
    LOCK();
    uVar7 = runtime_mheap_.sweepers - 1;
    UNLOCK();
    bVar12 = runtime_mheap_.sweepers == 1;
    runtime_mheap_.sweepers = uVar7;
    if ((bVar12 && runtime_mheap_.sweepDrained != 0) && (0 < runtime_debug.gcpacertrace)) {
      runtime_printlock();
      s.len = 0x7f2c70;
      s.str = (uint8 *)0x2a1fe3;
      runtime_printstring(s);
      runtime_printuint(uVar9 >> 0x14);
      s_00.len = 0x7f2c70;
      s_00.str = &DAT_00296703;
      runtime_printstring(s_00);
      runtime_printuint(uVar9 - uVar8 >> 0x14);
      s_01.len = 0x7f2c70;
      s_01.str = &DAT_0029d8ec;
      runtime_printstring(s_01);
      runtime_printuint(v);
      s_02.len = 0x7f2c70;
      s_02.str = &DAT_0028ebf2;
      runtime_printstring(s_02);
      runtime_printfloat(v_00);
      s_03.len = 0x7f2c70;
      s_03.str = &DAT_002927ca;
      runtime_printstring(s_03);
      runtime_printunlock();
    }
  }
  if (bVar11) {
    runtime_systemstack();
    LOCK();
    runtime_scavenge.sysmonWake = 1;
    UNLOCK();
  }
  uVar6 = *(uintptr *)(lVar5 + 0x30);
  piVar2 = (int *)(uVar6 + 0x110);
  *piVar2 = *piVar2 + -1;
  return uVar6;
}

