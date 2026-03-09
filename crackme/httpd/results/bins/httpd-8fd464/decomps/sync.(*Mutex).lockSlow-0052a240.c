
/* WARNING: Unknown calling convention */

void sync___Mutex__lockSlow(sync_Mutex *m)

{
  bool bVar1;
  int iVar2;
  uint32 *i;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint32 *addr;
  uint32 *puVar7;
  char cVar8;
  uint uVar9;
  long in_FS_OFFSET;
  bool bVar10;
  string s;
  string s_00;
  sync_Mutex *m_spill;
  uint32 *local_48;
  char local_40;
  
                    /* Unresolved local var: int64 waitStartTime@[???]
                       Unresolved local var: bool starving@[???]
                       Unresolved local var: bool awoke@[???]
                       Unresolved local var: int iter@[???]
                       Unresolved local var: int32 old@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uVar4 = m_spill->state;
  i = (uint32 *)0x0;
  bVar1 = false;
  uVar3 = 0;
  addr = (uint32 *)0x0;
  while( true ) {
    while( true ) {
      while( true ) {
        uVar5 = uVar4 & 5;
        if (uVar5 == 1) {
          sync_runtime_canSpin((int)i);
          uVar6 = uVar3 & 0xff;
          cVar8 = local_40;
          local_48 = i;
        }
        else {
          uVar6 = uVar3;
          cVar8 = '\0';
        }
        if (cVar8 == '\0') break;
        if (((!bVar1) && ((uVar4 >> 1 & 1) == 0)) && ((int)uVar4 >> 3 != 0)) {
          LOCK();
          bVar10 = uVar4 == m_spill->state;
          if (bVar10) {
            m_spill->state = uVar4 | 2;
          }
          UNLOCK();
          if (bVar10) {
            bVar1 = true;
          }
        }
        sync_runtime_doSpin();
        i = (uint32 *)((long)i + 1);
        uVar4 = m_spill->state;
        uVar3 = uVar3 & 0xff;
      }
      uVar9 = uVar4;
      if ((uVar4 & 4) == 0) {
        uVar9 = uVar4 | 1;
      }
      if (uVar5 != 0) {
        uVar9 = uVar9 + 8;
      }
      if (((char)uVar6 != '\0') && ((uVar4 & 1) != 0)) {
        uVar9 = uVar9 | 4;
      }
      if (bVar1) {
        if ((uVar9 >> 1 & 1) == 0) {
          local_48 = (uint32 *)0x2a1a96;
          local_40 = '\x1e';
          s.len = uVar6;
          s.str = (uint8 *)0x2a1a96;
          sync_throw(s);
          uVar6 = uVar3 & 0xff;
        }
        uVar9 = uVar9 & 0xfffffffd;
      }
      LOCK();
      bVar10 = uVar4 == m_spill->state;
      if (bVar10) {
        m_spill->state = uVar9;
      }
      UNLOCK();
      if (bVar10) break;
      uVar4 = m_spill->state;
      uVar3 = uVar6;
    }
    if (uVar5 == 0) break;
    puVar7 = addr;
    if (addr == (uint32 *)0x0) {
      sync_runtime_nanotime();
      puVar7 = local_48;
    }
    local_48 = &m_spill->sema;
    local_40 = addr != (uint32 *)0x0;
    sync_runtime_SemacquireMutex(addr,SUB81(uVar6,0),(int)m_spill);
    if ((char)uVar3 == '\0') {
      sync_runtime_nanotime();
      uVar3 = CONCAT71((int7)((ulong)((long)local_48 - (long)puVar7) >> 8),
                       1000000 < (long)local_48 - (long)puVar7);
    }
    else {
      uVar3 = 1;
    }
    uVar4 = m_spill->state;
    if ((uVar4 >> 2 & 1) != 0) {
                    /* Unresolved local var: int32 delta@[???] */
      iVar2 = (int)uVar4 >> 3;
      if (((uVar4 & 3) != 0) || (uVar4 = 0, iVar2 == 0)) {
        s_00.len._0_4_ = uVar4;
        s_00.str = (uint8 *)
                   "sync: inconsistent mutex statesync: unlock of unlocked mutextext/javascript; charset=utf-8transform: short source bufferx509: SAN dNSName is malformedx509: invalid ECDSA parametersx509: malformed issuerUniqueID) not in usable address space: ...additional frames elided...\n11368683772161602973937988281255684341886080801486968994140625BayStack 380 10/100/1000 SwitchCLIENT_HANDSHAKE_TRAFFIC_SECRETHT Capabilities (802.11n D1.10)Invalid counter record type: %dManufacturerUsageDescriptionURLNetwork Authentication RequiredOPTera Metro 8003 OPM L2 SwitchOPTera Metro 8006 OPM L2 SwitchOPTera Metro 8010 OPM L2 SwitchOverlapping BSS Scan ParametersPRIORITY frame with stream ID 0PartialOrderConnectionPermittedRequest Header Fields Too LargeRequested Range Not SatisfiableSERVER_HANDSHAKE_TRAFFIC_SECRETSIGSEGV: segmentation violationTLS: sequence number wraparoundUnrecognized VRRPv2 type field.bad certificate status responsebad write barrier buffer boundscall from within the Go runtimecannot-support-all-capabilitiescasgstatus: bad incoming valuescheckmark found unmarked objectentersyscallblock inconsistent fatal: bad g in signal handler\nfmt: unknown base; can\'t happenhash/crc32: tables do not matchhttp2: connection error: %v: %vinternal error - misuse of itabinvalid network interface indexmalformed time zone informationnon in-use span in unswept listpacer: sweep done at heap size pattern contains path separatorreflect.MakeSlice: negative capreflect.MakeSlice: negative lenreflect: Len of non-array type resetspinning: not a spinning mruntime: cannot allocate memoryruntime: split stack overflow: skipping TypeExtendedMlpsVcFlowslice bounds out of range [%x:]slice bounds out of range [:%x]tls: failed to sign handshake: tls: no certificates configuredtls: unsupported public key: %Ttoo many transfer encodings: %qx509: certificate is valid for x509: malformed GeneralizedTimex509: malformed subjectUniqueIDx509: malformed tbs certificate (types from different packages)28421709430404007434844970703125: day-of-year does not match dayAlcate..." /* TRUNCATED STRING LITERAL */
        ;
        s_00.len._4_4_ = 0;
        sync_throw(s_00);
        uVar3 = uVar3 & 0xff;
      }
      if (((char)uVar3 == '\0') || (iVar2 == 1)) {
        iVar2 = -0xb;
      }
      else {
        iVar2 = -7;
      }
      LOCK();
      m_spill->state = m_spill->state + iVar2;
      UNLOCK();
      return;
    }
    i = (uint32 *)0x0;
    uVar3 = uVar3 & 0xffffffff;
    bVar1 = true;
    addr = puVar7;
  }
  return;
}

