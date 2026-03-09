
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_debugCallCheck_func1(void)

{
  undefined8 *pc;
  uintptr *puVar1;
  long lVar2;
  long lVar3;
  long in_RDX;
  long extraout_RDX;
  runtime_moduledata *prVar4;
  runtime_pcvalueCache *in_RSI;
  uintptr in_RDI;
  long in_FS_OFFSET;
  runtime_funcInfo rVar5;
  string sVar6;
  runtime_funcInfo f;
  runtime__func *local_60;
  long *local_58;
  long local_50;
  long local_48;
  int local_40;
  
  lVar3 = local_50;
                    /* Unresolved local var: uintptr * &pc@[???]
                       Unresolved local var: string * &ret@[???]
                       Unresolved local var: string name@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack();
    in_RDX = extraout_RDX;
  }
  pc = *(undefined8 **)(in_RDX + 0x10);
  puVar1 = *(uintptr **)(in_RDX + 8);
  rVar5 = runtime_findfunc((uintptr)pc);
  if (local_60 == (runtime__func *)0x0) {
    pc[1] = 0x1a;
    if (runtime_writeBarrier._0_4_ == 0) {
      *pc = &DAT_0029f387;
    }
    else {
      runtime_gcWriteBarrier();
    }
    return;
  }
  rVar5._func = local_60;
  sVar6 = runtime_funcname(rVar5);
  prVar4 = (runtime_moduledata *)sVar6.len;
  if (local_50 < 0xd) {
    if (local_50 == 0xb) {
      prVar4 = (runtime_moduledata *)0x6c61436775626564;
      if (((*local_58 == 0x6c61436775626564) && ((short)local_58[1] == 0x336c)) &&
         (*(char *)((long)local_58 + 10) == '2')) {
        return;
      }
      if (((*local_58 == 0x6c61436775626564) && ((short)local_58[1] == 0x366c)) &&
         (*(char *)((long)local_58 + 10) == '4')) {
        return;
      }
    }
    else if (local_50 == 0xc) {
      lVar2 = *local_58;
      prVar4 = (runtime_moduledata *)0x6c61436775626564;
      if ((lVar2 == 0x6c61436775626564) && ((int)local_58[1] == 0x3832316c)) {
        return;
      }
      if ((lVar2 == 0x6c61436775626564) && ((int)local_58[1] == 0x3635326c)) {
        return;
      }
      if ((lVar2 == 0x6c61436775626564) && ((int)local_58[1] == 0x3231356c)) {
        return;
      }
    }
  }
  else if (local_50 == 0xd) {
    local_50 = 0xd;
    runtime_cmpstring();
    if (local_48 < 1) {
      if ((((*local_58 == 0x6c61436775626564) && ((int)local_58[1] == 0x3230316c)) &&
          (*(char *)((long)local_58 + 0xc) == '4')) ||
         (((*local_58 == 0x6c61436775626564 && ((int)local_58[1] == 0x3430326c)) &&
          (*(char *)((long)local_58 + 0xc) == '8')))) {
        return;
      }
    }
    else {
      if (((*local_58 == 0x6c61436775626564) && ((int)local_58[1] == 0x3930346c)) &&
         (*(char *)((long)local_58 + 0xc) == '6')) {
        return;
      }
      if (((*local_58 == 0x6c61436775626564) && ((int)local_58[1] == 0x3931386c)) &&
         (*(char *)((long)local_58 + 0xc) == '2')) {
        return;
      }
    }
  }
  else if (local_50 == 0xe) {
    lVar2 = *local_58;
    prVar4 = (runtime_moduledata *)0x6c61436775626564;
    if (((lVar2 == 0x6c61436775626564) && ((int)local_58[1] == 0x3336316c)) &&
       (*(short *)((long)local_58 + 0xc) == 0x3438)) {
      return;
    }
    if (((lVar2 == 0x6c61436775626564) && ((int)local_58[1] == 0x3732336c)) &&
       (*(short *)((long)local_58 + 0xc) == 0x3836)) {
      return;
    }
    if (((lVar2 == 0x6c61436775626564) && ((int)local_58[1] == 0x3535366c)) &&
       (*(short *)((long)local_58 + 0xc) == 0x3633)) {
      return;
    }
  }
  if (8 < lVar3) {
    runtime_memequal();
    if ((char)local_50 != '\0') {
      pc[1] = 0x1f;
      if (runtime_writeBarrier._0_4_ == 0) {
        *pc = 
        "call from within the Go runtimecannot-support-all-capabilitiescasgstatus: bad incoming valuescheckmark found unmarked objectentersyscallblock inconsistent fatal: bad g in signal handler\nfmt: unknown base; can\'t happenhash/crc32: tables do not matchhttp2: connection error: %v: %vinternal error - misuse of itabinvalid network interface indexmalformed time zone informationnon in-use span in unswept listpacer: sweep done at heap size pattern contains path separatorreflect.MakeSlice: negative capreflect.MakeSlice: negative lenreflect: Len of non-array type resetspinning: not a spinning mruntime: cannot allocate memoryruntime: split stack overflow: skipping TypeExtendedMlpsVcFlowslice bounds out of range [%x:]slice bounds out of range [:%x]tls: failed to sign handshake: tls: no certificates configuredtls: unsupported public key: %Ttoo many transfer encodings: %qx509: certificate is valid for x509: malformed GeneralizedTimex509: malformed subjectUniqueIDx509: malformed tbs certificate (types from different packages)28421709430404007434844970703125: day-of-year does not match dayAlcatel Ethernet workgroup conc.Alteon SSL 410 10/100/1000 FiberBFD packet length does not matchBSS Available Admission CapacityBayStack 250 10/100 Ethernet HubCannot set rfmon for this handleClientNetworkInterfaceIdentifierDMG Link Adaption AcknowledgmentEthernet Routing Switch 2500-26TEthernet Routing Switch 2500-50TEthernet Routing Switch 5510-24TEthernet Routing Switch 5510-48TExtended MPLS Tunnel Flow RecordFailoverPartnerRawClientLeadTimeIPv6 header TLV option too smallInvalid TCP option length %d < 2MapIter.Value called before NextNon Transmitted BSSID CapabilityNortel Networks VPN Gateway 3050Nortel Networks VPN Gateway 3070RR Set Exists when it should notSIGFPE: floating-point exceptionSIGTTOU: background write to ttyUnable to decode EthernetType %dUnsupported SFlow sample type %dUnsupported flow record type: %d\" not supported for cpu option \"bad input point: low order pointbufio: invalid use of UnreadBytebufio: invalid use of UnreadRune..." /* TRUNCATED STRING LITERAL */
        ;
      }
      else {
        runtime_gcWriteBarrier();
      }
      return;
    }
  }
  if (local_60->entry != *puVar1) {
    *puVar1 = *puVar1 - 1;
  }
  f.datap = prVar4;
  f._func = (runtime__func *)*puVar1;
  runtime_pcdatavalue(f,(uint32)local_58,in_RDI,in_RSI);
  if (local_40 != -1) {
    pc[1] = 0x16;
    if (runtime_writeBarrier._0_4_ == 0) {
      *pc = &DAT_0029d17f;
    }
    else {
      runtime_gcWriteBarrier();
    }
  }
  return;
}

