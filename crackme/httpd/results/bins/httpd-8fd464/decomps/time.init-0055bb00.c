
/* WARNING: Removing unreachable block (ram,0x0055bf26) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void time_init(void)

{
  runtime_hmap *unaff_RBX;
  int in_RSI;
  map_string_int64 *in_RDI;
  long in_FS_OFFSET;
  string a1;
  string key;
  string a0;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  string s_05;
  undefined8 *local_40;
  undefined8 *local_28;
  undefined8 local_20;
  undefined8 local_18;
  string sVar1;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  local_40[1] = 0x14;
  *local_40 = &DAT_0029c1b2;
  time_atoiError.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    time_atoiError.data = local_40;
  }
  else {
    in_RDI = &time_atoiError.data;
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  local_40[1] = 0x13;
  *local_40 = &DAT_0029b434;
  time_errBad.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    time_errBad.data = local_40;
  }
  else {
    in_RDI = &time_errBad.data;
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  local_40[1] = 0x10;
  *local_40 = &DAT_00299b25;
  time_errLeadingInt.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    time_errLeadingInt.data = local_40;
  }
  else {
    in_RDI = &time_errLeadingInt.data;
    runtime_gcWriteBarrier();
  }
  runtime_makemap_small();
  sVar1.len = (int)in_RDI;
  sVar1.str = &DAT_00236380;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00241ea0,unaff_RBX,sVar1);
  *local_28 = 1;
  s.len = (int)in_RDI;
  s.str = (uint8 *)&DAT_00241ea0;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236380,unaff_RBX,s);
  *local_28 = 1000;
  s_00.len = (int)in_RDI;
  s_00.str = (uint8 *)&DAT_00241ea0;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236380,unaff_RBX,s_00);
  *local_28 = 1000;
  s_01.len = (int)in_RDI;
  s_01.str = (uint8 *)&DAT_00241ea0;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236380,unaff_RBX,s_01);
  *local_28 = 1000;
  s_02.len = (int)in_RDI;
  s_02.str = (uint8 *)&DAT_00241ea0;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236380,unaff_RBX,s_02);
  *local_28 = 1000000;
  s_03.len = (int)in_RDI;
  s_03.str = (uint8 *)&DAT_00241ea0;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236380,unaff_RBX,s_03);
  *local_28 = 1000000000;
  s_04.len = (int)in_RDI;
  s_04.str = (uint8 *)&DAT_00241ea0;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236380,unaff_RBX,s_04);
  *local_28 = 60000000000;
  s_05.len = (int)in_RDI;
  s_05.str = (uint8 *)((long)&DAT_0028775c + 1);
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00241ea0,unaff_RBX,s_05);
  *local_28 = 3600000000000;
  if (runtime_writeBarrier._0_4_ == 0) {
    time_unitMap = (map_string_int64)&DAT_00241ea0;
  }
  else {
    in_RDI = &time_unitMap;
    runtime_gcWriteBarrier();
  }
  runtime_nanotime();
  time_startNano = (int64)&UNK_0023637f;
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  DAT_00241ea8 = 0x1b;
  DAT_00241ea0 = 
  "time: invalid location nametimer when must be positivetls: short read from Rand: unsupported string type: %vwork.nwait was > work.nprocx509: malformed certificate args stack map entries for /usr/local/share/mime/globs2100BaseVG Interface Counters18189894035458564758300781259094947017729282379150390625BayStack 410 10/100 SwitchesChannel Measurement FeedbackClientSystemArchitectureTypeEd25519 verification failureEthernet, Tokenring and FDDIExtended Gateway Flow RecordExtended MPLS VC Flow RecordFixedStack is not power-of-2IPv6 header option too smallInvalid IP packet version %vInvalid loopback protocol %qMIC (Message Integrity Code)MLDv1MulticastListenerReportMLDv2MulticastListenerReportPassport 8300 6-slot chassisPrepended_Concatenation_MarkSIGCONT: continue after stopSIGHUP: terminal line hangupSIGWINCH: window size changeSignature out of time windowSource address is the serverTraffic Indication Map (TIM)Unable to decode LinkType %d[originating from goroutine application/x-rar-compressedasn1: string not valid UTF-8cannot unmarshal DNS messagecomparing uncomparable type crypto/rsa: decryption errorcurrent time %s is before %sdestination address requiredfatal: morestack on gsignal\nfindrunnable: netpoll with pfound pointer to free objectgcBgMarkWorker: mode not setgcstopm: negative nmspinninghttp2: client conn is closedhttp: request body too largeinability-exists-associationinvalid P-521 field encodinginvalid byte in chunk lengthinvalid first SIP line: \'%s\'invalid header field name %qinvalid proxy address %q: %vinvalid runtime symbol tablemalformed MIME header line: mheap.freeSpanLocked - span missing required Host headermissing stack in shrinkstackmspan.sweep: m is not lockedmultipart: message too largenewproc1: new g is not Gdeadnewproc1: newg missing stacknotewakeup - double wakeup (os: process already finishedpending ASN.1 child too longreflect.MakeSlice: len > capregion exceeds uintptr rangeruntime: bad lfnode address runtime: casgstatus: oldval=runtime: kevent failed with runtime: kqueue failed with runtime: n..." /* TRUNCATED STRING LITERAL */
  ;
  time_errLocation.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    time_errLocation.data = &DAT_00241ea0;
  }
  else {
    in_RDI = &time_errLocation.data;
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  DAT_00241ea8 = 0x1f;
  DAT_00241ea0 = 
  "malformed time zone informationnon in-use span in unswept listpacer: sweep done at heap size pattern contains path separatorreflect.MakeSlice: negative capreflect.MakeSlice: negative lenreflect: Len of non-array type resetspinning: not a spinning mruntime: cannot allocate memoryruntime: split stack overflow: skipping TypeExtendedMlpsVcFlowslice bounds out of range [%x:]slice bounds out of range [:%x]tls: failed to sign handshake: tls: no certificates configuredtls: unsupported public key: %Ttoo many transfer encodings: %qx509: certificate is valid for x509: malformed GeneralizedTimex509: malformed subjectUniqueIDx509: malformed tbs certificate (types from different packages)28421709430404007434844970703125: day-of-year does not match dayAlcatel Ethernet workgroup conc.Alteon SSL 410 10/100/1000 FiberBFD packet length does not matchBSS Available Admission CapacityBayStack 250 10/100 Ethernet HubCannot set rfmon for this handleClientNetworkInterfaceIdentifierDMG Link Adaption AcknowledgmentEthernet Routing Switch 2500-26TEthernet Routing Switch 2500-50TEthernet Routing Switch 5510-24TEthernet Routing Switch 5510-48TExtended MPLS Tunnel Flow RecordFailoverPartnerRawClientLeadTimeIPv6 header TLV option too smallInvalid TCP option length %d < 2MapIter.Value called before NextNon Transmitted BSSID CapabilityNortel Networks VPN Gateway 3050Nortel Networks VPN Gateway 3070RR Set Exists when it should notSIGFPE: floating-point exceptionSIGTTOU: background write to ttyUnable to decode EthernetType %dUnsupported SFlow sample type %dUnsupported flow record type: %d\" not supported for cpu option \"bad input point: low order pointbufio: invalid use of UnreadBytebufio: invalid use of UnreadRunebufio: tried to fill full buffercan\'t send after socket shutdowncannot represent time as UTCTimechacha20: invalid buffer overlapchacha20poly1305: bad key lengthcrypto/aes: input not full blockcrypto/des: input not full blocked25519: bad public key length: end outside usable address spacego package net: hostLookupOrder(http2: server ignorin..." /* TRUNCATED STRING LITERAL */
  ;
  time_badData.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    time_badData.data = &DAT_00241ea0;
  }
  else {
    in_RDI = &time_badData.data;
    runtime_gcWriteBarrier();
  }
                    /* Unresolved local var: string s@[???] */
  key.len = (int)unaff_RBX;
  key.str = &DAT_00289522;
  sVar1 = runtime_gogetenv(key);
  a0.str = (uint8 *)sVar1.len;
  a1.len = in_RSI;
  a1.str = (uint8 *)in_RDI;
  a0.len = 1;
  runtime_concatstring2((runtime_tmpBuf *)&DAT_0029cc2b,a0,a1);
  time__stmp_4._56_8_ = local_18;
  if (runtime_writeBarrier._0_4_ == 0) {
    time__stmp_4._48_8_ = local_20;
  }
  else {
    runtime_gcWriteBarrier();
  }
  return;
}

