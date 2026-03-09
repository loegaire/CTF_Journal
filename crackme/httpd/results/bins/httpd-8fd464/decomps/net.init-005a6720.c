
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void net_init(void)

{
  uint8 *puVar1;
  uint8 *puVar2;
  undefined8 *key;
  int cap;
  runtime_hmap *h;
  runtime_hmap *unaff_RBX;
  map_net_hostLookupOrder_string *pphVar3;
  undefined1 *puVar4;
  net_IP *pnVar5;
  net_IPMask *pnVar6;
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
  string s_14;
  string s_15;
  string s_16;
  string s_17;
  string s_18;
  string s_19;
  string s_20;
  string s_21;
  string s_22;
  string s_23;
  string s_24;
  string s_25;
  string s_26;
  string s_27;
  string s_28;
  undefined8 *local_50;
  net_IP *local_40;
  uint8 *local_38;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  local_50[1] = 0xd;
  *local_50 = &DAT_00295654;
  net_errLameReferral.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    net_errLameReferral.data = local_50;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  local_50[1] = 0x1c;
  *local_50 = 
  "cannot unmarshal DNS messagecomparing uncomparable type crypto/rsa: decryption errorcurrent time %s is before %sdestination address requiredfatal: morestack on gsignal\nfindrunnable: netpoll with pfound pointer to free objectgcBgMarkWorker: mode not setgcstopm: negative nmspinninghttp2: client conn is closedhttp: request body too largeinability-exists-associationinvalid P-521 field encodinginvalid byte in chunk lengthinvalid first SIP line: \'%s\'invalid header field name %qinvalid proxy address %q: %vinvalid runtime symbol tablemalformed MIME header line: mheap.freeSpanLocked - span missing required Host headermissing stack in shrinkstackmspan.sweep: m is not lockedmultipart: message too largenewproc1: new g is not Gdeadnewproc1: newg missing stacknotewakeup - double wakeup (os: process already finishedpending ASN.1 child too longreflect.MakeSlice: len > capregion exceeds uintptr rangeruntime: bad lfnode address runtime: casgstatus: oldval=runtime: kevent failed with runtime: kqueue failed with runtime: no module data for save on system g not allowedskipping TypeExtendedNatFlowtext/plain; charset=utf-16betext/plain; charset=utf-16leunreserving unaligned regionunsupported compression for unsupported protocol versionx509: invalid DSA parametersx509: invalid DSA public keyx509: invalid RSA public key- Layer %d (%02d bytes) = %s\n45474735088646411895751953125BayStack 10 Power Supply UnitBayStack 303 and 304 SwitchesCisco CCX1 CKIP + Device NameEthernet Routing Switch 4550TExtended MPLS FEC Flow RecordFailoverMaximumClientLeadTimeHTTP/1.1 %d %s: %s%s%d %s: %sInvalid Address TLV length %dInvalid Address TLV number %dMCCAOP Advertisement OverviewMon, 02 Jan 2006 15:04:05 GMTNSYM mod 10!=9 or no short GINon-Authoritative InformationPFLog data less than 60 bytesPassport 8300 10-slot chassisProxy Authentication RequiredS46Lightweight4Over6ContainerSIGPIPE: write to broken pipeTime.UnmarshalBinary: no dataToken Ring Interface CountersUnable to decode Dot11Type %dUnable to decode EAPOLType %dUnable to decode PPPoECode %dUnavail..." /* TRUNCATED STRING LITERAL */
  ;
  net_errCannotUnmarshalDNSMessage.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    net_errCannotUnmarshalDNSMessage.data = local_50;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  local_50[1] = 0x1a;
  *local_50 = &DAT_0029f3a1;
  net_errCannotMarshalDNSMessage.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    net_errCannotMarshalDNSMessage.data = local_50;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  local_50[1] = 0x12;
  *local_50 = &DAT_0029ad22;
  net_errServerMisbehaving.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    net_errServerMisbehaving.data = local_50;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  local_50[1] = 0x14;
  *local_50 = &DAT_0029bffa;
  net_errInvalidDNSResponse.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    net_errInvalidDNSResponse.data = local_50;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  local_50[1] = 0x19;
  *local_50 = &DAT_0029ed58;
  net_errNoAnswerFromDNSServer.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    net_errNoAnswerFromDNSServer.data = local_50;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  local_50[1] = 0x12;
  *local_50 = &DAT_0029ad22;
  net_errServerTemporarilyMisbehaving.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    net_errServerTemporarilyMisbehaving.data = local_50;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_makemap_small();
  runtime_mapassign_fast64((runtime_maptype *)&DAT_00241ea0,unaff_RBX,0x235ae0);
  local_40->len = 3;
  if (runtime_writeBarrier._0_4_ == 0) {
    local_40->array = (uint8 *)&DAT_00287a6b;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_mapassign_fast64((runtime_maptype *)&DAT_00235ae0,unaff_RBX,0x241ea0);
  local_40->len = 9;
  if (runtime_writeBarrier._0_4_ == 0) {
    local_40->array = (uint8 *)&DAT_0028dcbe;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_mapassign_fast64((runtime_maptype *)&DAT_00235ae0,unaff_RBX,0x241ea0);
  local_40->len = 9;
  if (runtime_writeBarrier._0_4_ == 0) {
    local_40->array = (uint8 *)&DAT_0028db20;
  }
  else {
    runtime_gcWriteBarrier();
  }
  key = &DAT_00241ea0;
  runtime_mapassign_fast64((runtime_maptype *)&DAT_00235ae0,unaff_RBX,0x241ea0);
  local_40->len = 5;
  if (runtime_writeBarrier._0_4_ == 0) {
    local_40->array = (uint8 *)&DAT_00288d5e;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_mapassign_fast64((runtime_maptype *)&DAT_00241ea0,unaff_RBX,(uint64)key);
  local_40->len = 3;
  if (runtime_writeBarrier._0_4_ == 0) {
    local_40->array = (uint8 *)&DAT_00287ab9;
    net_lookupOrderName = (map_net_hostLookupOrder_string)&DAT_00241ea0;
  }
  else {
    runtime_gcWriteBarrier();
    pphVar3 = &net_lookupOrderName;
    runtime_gcWriteBarrier();
    local_40 = (net_IP *)pphVar3;
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  DAT_00241ea8 = 0x19;
  DAT_00241ea0 = &DAT_0029ecdb;
  net_errInvalidInterface.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    net_errInvalidInterface.data = &DAT_00241ea0;
  }
  else {
    local_40 = (net_IP *)&net_errInvalidInterface.data;
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  DAT_00241ea8 = 0x1f;
  DAT_00241ea0 = 
  "invalid network interface indexmalformed time zone informationnon in-use span in unswept listpacer: sweep done at heap size pattern contains path separatorreflect.MakeSlice: negative capreflect.MakeSlice: negative lenreflect: Len of non-array type resetspinning: not a spinning mruntime: cannot allocate memoryruntime: split stack overflow: skipping TypeExtendedMlpsVcFlowslice bounds out of range [%x:]slice bounds out of range [:%x]tls: failed to sign handshake: tls: no certificates configuredtls: unsupported public key: %Ttoo many transfer encodings: %qx509: certificate is valid for x509: malformed GeneralizedTimex509: malformed subjectUniqueIDx509: malformed tbs certificate (types from different packages)28421709430404007434844970703125: day-of-year does not match dayAlcatel Ethernet workgroup conc.Alteon SSL 410 10/100/1000 FiberBFD packet length does not matchBSS Available Admission CapacityBayStack 250 10/100 Ethernet HubCannot set rfmon for this handleClientNetworkInterfaceIdentifierDMG Link Adaption AcknowledgmentEthernet Routing Switch 2500-26TEthernet Routing Switch 2500-50TEthernet Routing Switch 5510-24TEthernet Routing Switch 5510-48TExtended MPLS Tunnel Flow RecordFailoverPartnerRawClientLeadTimeIPv6 header TLV option too smallInvalid TCP option length %d < 2MapIter.Value called before NextNon Transmitted BSSID CapabilityNortel Networks VPN Gateway 3050Nortel Networks VPN Gateway 3070RR Set Exists when it should notSIGFPE: floating-point exceptionSIGTTOU: background write to ttyUnable to decode EthernetType %dUnsupported SFlow sample type %dUnsupported flow record type: %d\" not supported for cpu option \"bad input point: low order pointbufio: invalid use of UnreadBytebufio: invalid use of UnreadRunebufio: tried to fill full buffercan\'t send after socket shutdowncannot represent time as UTCTimechacha20: invalid buffer overlapchacha20poly1305: bad key lengthcrypto/aes: input not full blockcrypto/des: input not full blocked25519: bad public key length: end outside usable address spacego package net: hostLo..." /* TRUNCATED STRING LITERAL */
  ;
  net_errInvalidInterfaceIndex.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    net_errInvalidInterfaceIndex.data = &DAT_00241ea0;
  }
  else {
    local_40 = (net_IP *)&net_errInvalidInterfaceIndex.data;
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  DAT_00241ea8 = 0x1e;
  DAT_00241ea0 = 
  "invalid network interface nameinvalid pointer found on stackmime: duplicate parameter namemissing validateFirstLine funcprotocol version not supportedprotocol wrong type for socketreflect: Elem of invalid type reflect: Len of non-array typereflect: Out of non-func type running on the wrong goroutinerunqputslow: queue is not fullruntime: bad g in cgocallback\nruntime: bad pointer in frame runtime: found in object at *(runtime: impossible type kind socket operation on non-socketstream error: stream ID %d; %vsync: inconsistent mutex statesync: unlock of unlocked mutextext/javascript; charset=utf-8transform: short source bufferx509: SAN dNSName is malformedx509: invalid ECDSA parametersx509: malformed issuerUniqueID) not in usable address space: ...additional frames elided...\n11368683772161602973937988281255684341886080801486968994140625BayStack 380 10/100/1000 SwitchCLIENT_HANDSHAKE_TRAFFIC_SECRETHT Capabilities (802.11n D1.10)Invalid counter record type: %dManufacturerUsageDescriptionURLNetwork Authentication RequiredOPTera Metro 8003 OPM L2 SwitchOPTera Metro 8006 OPM L2 SwitchOPTera Metro 8010 OPM L2 SwitchOverlapping BSS Scan ParametersPRIORITY frame with stream ID 0PartialOrderConnectionPermittedRequest Header Fields Too LargeRequested Range Not SatisfiableSERVER_HANDSHAKE_TRAFFIC_SECRETSIGSEGV: segmentation violationTLS: sequence number wraparoundUnrecognized VRRPv2 type field.bad certificate status responsebad write barrier buffer boundscall from within the Go runtimecannot-support-all-capabilitiescasgstatus: bad incoming valuescheckmark found unmarked objectentersyscallblock inconsistent fatal: bad g in signal handler\nfmt: unknown base; can\'t happenhash/crc32: tables do not matchhttp2: connection error: %v: %vinternal error - misuse of itabinvalid network interface indexmalformed time zone informationnon in-use span in unswept listpacer: sweep done at heap size pattern contains path separatorreflect.MakeSlice: negative capreflect.MakeSlice: negative lenreflect: Len of non-array type resetspinning: not a spinn..." /* TRUNCATED STRING LITERAL */
  ;
  net_errInvalidInterfaceName.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    net_errInvalidInterfaceName.data = &DAT_00241ea0;
  }
  else {
    local_40 = (net_IP *)&net_errInvalidInterfaceName.data;
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  DAT_00241ea8 = 0x19;
  DAT_00241ea0 = &DAT_0029eda3;
  net_errNoSuchInterface.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    net_errNoSuchInterface.data = &DAT_00241ea0;
  }
  else {
    local_40 = (net_IP *)&net_errNoSuchInterface.data;
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  DAT_00241ea8 = 0x23;
  DAT_00241ea0 = &DAT_002a44da;
  net_errNoSuchMulticastInterface.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    net_errNoSuchMulticastInterface.data = &DAT_00241ea0;
  }
  else {
    local_40 = (net_IP *)&net_errNoSuchMulticastInterface.data;
    runtime_gcWriteBarrier();
  }
  runtime_makemap_small();
  if (runtime_writeBarrier._0_4_ == 0) {
    net_zoneCache.toIndex = (map_string_int)&DAT_00241ea0;
  }
  else {
    local_40 = (net_IP *)&net_zoneCache.toIndex;
    runtime_gcWriteBarrier();
  }
  runtime_makemap_small();
  if (runtime_writeBarrier._0_4_ == 0) {
    net_zoneCache.toName = (map_int_string)&DAT_00241ea0;
  }
  else {
    local_40 = (net_IP *)&net_zoneCache.toName;
    runtime_gcWriteBarrier();
  }
  s.len = (int)unaff_RBX;
  s.str = &DAT_0028a477;
  net_mustCIDR(s);
  if (runtime_writeBarrier._0_4_ == 0) {
    net__stmp_4._0_8_ = 4;
  }
  else {
    puVar4 = net__stmp_4;
    runtime_gcWriteBarrier();
    local_40 = (net_IP *)puVar4;
  }
  s_00.len = (int)unaff_RBX;
  s_00.str = &DAT_00287e61;
  net_mustCIDR(s_00);
  if (runtime_writeBarrier._0_4_ == 0) {
    net__stmp_4._16_8_ = 4;
  }
  else {
    local_40 = (net_IP *)(net__stmp_4 + 0x10);
    runtime_gcWriteBarrier();
  }
  s_01.len = (int)unaff_RBX;
  s_01.str = &DAT_00294614;
  net_mustCIDR(s_01);
  if (runtime_writeBarrier._0_4_ == 0) {
    net__stmp_4._32_8_ = 4;
  }
  else {
    local_40 = (net_IP *)(net__stmp_4 + 0x20);
    runtime_gcWriteBarrier();
  }
  s_02.len = (int)unaff_RBX;
  s_02.str = &DAT_0028d2d4;
  net_mustCIDR(s_02);
  if (runtime_writeBarrier._0_4_ == 0) {
    net__stmp_4._48_8_ = 4;
  }
  else {
    local_40 = (net_IP *)(net__stmp_4 + 0x30);
    runtime_gcWriteBarrier();
  }
  s_03.len = (int)unaff_RBX;
  s_03.str = &DAT_0028d2cb;
  net_mustCIDR(s_03);
  if (runtime_writeBarrier._0_4_ == 0) {
    net__stmp_4._64_8_ = 4;
  }
  else {
    local_40 = (net_IP *)(net__stmp_4 + 0x40);
    runtime_gcWriteBarrier();
  }
  s_04.len = (int)unaff_RBX;
  s_04.str = &DAT_0028c252;
  net_mustCIDR(s_04);
  if (runtime_writeBarrier._0_4_ == 0) {
    net__stmp_4._80_8_ = 4;
  }
  else {
    local_40 = (net_IP *)(net__stmp_4 + 0x50);
    runtime_gcWriteBarrier();
  }
  s_05.len = (int)unaff_RBX;
  s_05.str = &DAT_002889ad;
  net_mustCIDR(s_05);
  if (runtime_writeBarrier._0_4_ == 0) {
    net__stmp_4._96_8_ = 4;
  }
  else {
    local_40 = (net_IP *)(net__stmp_4 + 0x60);
    runtime_gcWriteBarrier();
  }
  s_06.len = (int)unaff_RBX;
  s_06.str = &DAT_0028dcac;
  net_mustCIDR(s_06);
  if (runtime_writeBarrier._0_4_ == 0) {
    net__stmp_4._112_8_ = 4;
  }
  else {
    local_40 = (net_IP *)(net__stmp_4 + 0x70);
    runtime_gcWriteBarrier();
  }
  s_07.len = (int)unaff_RBX;
  s_07.str = &DAT_0028d2ef;
  net_mustCIDR(s_07);
  if (runtime_writeBarrier._0_4_ == 0) {
    net__stmp_4._128_8_ = 4;
  }
  else {
    local_40 = (net_IP *)(net__stmp_4 + 0x80);
    runtime_gcWriteBarrier();
  }
                    /* Unresolved local var: net.IP p@[???] */
  runtime_makeslicecopy
            ((runtime__type *)net_v4InV6Prefix.array,(int)unaff_RBX,net_v4InV6Prefix.len,local_40);
  puVar1 = local_38;
  puVar1[0xc] = 0xff;
  puVar1[0xd] = 0xff;
  puVar1[0xe] = 0xff;
  puVar1[0xf] = 0xff;
  net_IPv4bcast.len = 0x10;
  net_IPv4bcast.cap = 0x10;
  if (runtime_writeBarrier._0_4_ == 0) {
    net_IPv4bcast.array = local_38;
  }
  else {
    pnVar5 = &net_IPv4bcast;
    runtime_gcWriteBarrier();
    local_40 = pnVar5;
  }
                    /* Unresolved local var: net.IP p@[???] */
  runtime_makeslicecopy
            ((runtime__type *)net_v4InV6Prefix.array,(int)unaff_RBX,net_v4InV6Prefix.len,local_40);
  puVar1[0xc] = 0xe0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 1;
  net_IPv4allsys.len = 0x10;
  net_IPv4allsys.cap = 0x10;
  if (runtime_writeBarrier._0_4_ == 0) {
    net_IPv4allsys.array = local_38;
  }
  else {
    pnVar5 = &net_IPv4allsys;
    runtime_gcWriteBarrier();
    local_40 = pnVar5;
  }
                    /* Unresolved local var: net.IP p@[???] */
  runtime_makeslicecopy
            ((runtime__type *)net_v4InV6Prefix.array,(int)unaff_RBX,net_v4InV6Prefix.len,local_40);
  puVar1[0xc] = 0xe0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 2;
  net_IPv4allrouter.len = 0x10;
  net_IPv4allrouter.cap = 0x10;
  if (runtime_writeBarrier._0_4_ == 0) {
    net_IPv4allrouter.array = local_38;
  }
  else {
    pnVar5 = &net_IPv4allrouter;
    runtime_gcWriteBarrier();
    local_40 = pnVar5;
  }
                    /* Unresolved local var: net.IP p@[???] */
  puVar2 = net_v4InV6Prefix.array;
  cap = net_v4InV6Prefix.len;
  runtime_makeslicecopy
            ((runtime__type *)net_v4InV6Prefix.array,(int)unaff_RBX,net_v4InV6Prefix.len,local_40);
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  net_IPv4zero.len = 0x10;
  net_IPv4zero.cap = 0x10;
  if (runtime_writeBarrier._0_4_ == 0) {
    net_IPv4zero.array = local_38;
  }
  else {
    pnVar5 = &net_IPv4zero;
    runtime_gcWriteBarrier();
    local_40 = pnVar5;
  }
                    /* Unresolved local var: net.IPMask p@[???] */
  runtime_makeslice((runtime__type *)&DAT_00225720,(int)unaff_RBX,cap);
  puVar2[0] = 0xff;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  net_classAMask.len = 4;
  net_classAMask.cap = 4;
  if (runtime_writeBarrier._0_4_ == 0) {
    net_classAMask.array = puVar2;
  }
  else {
    pnVar6 = &net_classAMask;
    runtime_gcWriteBarrier();
    local_40 = (net_IP *)pnVar6;
  }
                    /* Unresolved local var: net.IPMask p@[???] */
  runtime_makeslice((runtime__type *)&DAT_00225720,(int)unaff_RBX,cap);
  puVar2[0] = 0xff;
  puVar2[1] = 0xff;
  puVar2[2] = 0;
  puVar2[3] = 0;
  net_classBMask.len = 4;
  net_classBMask.cap = 4;
  if (runtime_writeBarrier._0_4_ == 0) {
    net_classBMask.array = puVar2;
  }
  else {
    pnVar6 = &net_classBMask;
    runtime_gcWriteBarrier();
    local_40 = (net_IP *)pnVar6;
  }
                    /* Unresolved local var: net.IPMask p@[???] */
  runtime_makeslice((runtime__type *)&DAT_00225720,(int)unaff_RBX,cap);
  puVar2[0] = 0xff;
  puVar2[1] = 0xff;
  puVar2[2] = 0xff;
  puVar2[3] = 0;
  net_classCMask.len = 4;
  net_classCMask.cap = 4;
  if (runtime_writeBarrier._0_4_ == 0) {
    net_classCMask.array = puVar2;
  }
  else {
    pnVar6 = &net_classCMask;
    runtime_gcWriteBarrier();
    local_40 = (net_IP *)pnVar6;
  }
  runtime_makemap_small();
  s_08.len = (int)local_40;
  s_08.str = (uint8 *)&DAT_00236320;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00225720,unaff_RBX,s_08);
  puVar1[0] = 1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  s_09.len = (int)local_40;
  s_09.str = &DAT_00225720;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236320,unaff_RBX,s_09);
  puVar1[0] = 2;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  s_10.len = (int)local_40;
  s_10.str = &DAT_00225720;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236320,unaff_RBX,s_10);
  puVar1[0] = 6;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  s_11.len = (int)local_40;
  s_11.str = &DAT_00225720;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236320,unaff_RBX,s_11);
  puVar1[0] = 0x11;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  s_12.len = (int)local_40;
  s_12.str = &DAT_00225720;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236320,unaff_RBX,s_12);
  puVar1[0] = 0x3a;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  if (runtime_writeBarrier._0_4_ == 0) {
    net_protocols = (map_string_int)&DAT_00225720;
  }
  else {
    local_40 = (net_IP *)&net_protocols;
    runtime_gcWriteBarrier();
  }
  runtime_makemap_small();
  runtime_makemap_small();
  s_13.len = (int)local_40;
  s_13.str = (uint8 *)&DAT_00236320;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236320,unaff_RBX,s_13);
  puVar1[0] = 0x35;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  h = (runtime_hmap *)&DAT_00236320;
  s_14.len = (int)local_40;
  s_14.str = (uint8 *)&DAT_00236320;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_002363e0,unaff_RBX,s_14);
  if (runtime_writeBarrier._0_4_ == 0) {
    *(undefined ***)local_38 = &DAT_00236320;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_makemap((runtime_maptype *)&DAT_00236320,(int)unaff_RBX,h);
  s_15.len = (int)local_38;
  s_15.str = (uint8 *)&DAT_00236320;
  runtime_mapassign_faststr((runtime_maptype *)0x3,unaff_RBX,s_15);
  puVar1[0] = 0x15;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  s_16.len = (int)local_38;
  s_16.str = (uint8 *)0x3;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236320,unaff_RBX,s_16);
  puVar1[0] = 0xde;
  puVar1[1] = 3;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  s_17.len = (int)local_38;
  s_17.str = (uint8 *)0x3;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236320,unaff_RBX,s_17);
  puVar1[0] = 0x46;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  s_18.len = (int)local_38;
  s_18.str = (uint8 *)0x3;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236320,unaff_RBX,s_18);
  puVar1[0] = 0x50;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  s_19.len = (int)local_38;
  s_19.str = (uint8 *)0x3;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236320,unaff_RBX,s_19);
  puVar1[0] = 0xbb;
  puVar1[1] = 1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  s_20.len = (int)local_38;
  s_20.str = (uint8 *)0x3;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236320,unaff_RBX,s_20);
  puVar1[0] = 0x8f;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  s_21.len = (int)local_38;
  s_21.str = (uint8 *)0x3;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236320,unaff_RBX,s_21);
  puVar1[0] = 0xdc;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  s_22.len = (int)local_38;
  s_22.str = (uint8 *)0x3;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236320,unaff_RBX,s_22);
  puVar1[0] = 0xe1;
  puVar1[1] = 3;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  s_23.len = (int)local_38;
  s_23.str = (uint8 *)0x3;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236320,unaff_RBX,s_23);
  puVar1[0] = 0x6e;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  s_24.len = (int)local_38;
  s_24.str = (uint8 *)0x3;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236320,unaff_RBX,s_24);
  puVar1[0] = 0xe3;
  puVar1[1] = 3;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  s_25.len = (int)local_38;
  s_25.str = (uint8 *)0x3;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236320,unaff_RBX,s_25);
  puVar1[0] = 0x19;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  s_26.len = (int)local_38;
  s_26.str = (uint8 *)0x3;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236320,unaff_RBX,s_26);
  puVar1[0] = 0x16;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  s_27.len = (int)local_38;
  s_27.str = &DAT_0028a1b2;
  runtime_mapassign_faststr((runtime_maptype *)0x3,unaff_RBX,s_27);
  puVar1[0] = 0x17;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  s_28.len = (int)local_38;
  s_28.str = &DAT_00287d0b;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236320,unaff_RBX,s_28);
  if (runtime_writeBarrier._0_4_ == 0) {
    puVar1[0] = 3;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    net_services = (map_string_map_string_int)&DAT_00236320;
  }
  else {
    runtime_gcWriteBarrier();
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  DAT_00236328 = 0x19;
  DAT_00236320 = &DAT_0029edbc;
  net_errNoSuitableAddress.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    net_errNoSuitableAddress.data = &DAT_00236320;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  DAT_00236328 = 0xf;
  DAT_00236320 = &DAT_00298db2;
  net_errMissingAddress.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    net_errMissingAddress.data = &DAT_00236320;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  DAT_00236328 = 0x16;
  DAT_00236320 = &DAT_0029d3bb;
  net_errCanceled.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    net_errCanceled.data = &DAT_00236320;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  DAT_00236328 = 0x2c;
  DAT_00236320 = &DAT_002a7d48;
  net_ErrWriteToConnected.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    net_ErrWriteToConnected.data = &DAT_00236320;
  }
  else {
    runtime_gcWriteBarrier();
  }
  net_aLongTimeAgo.wall = 0;
  net_aLongTimeAgo.ext = 0xe7791f701;
  if (runtime_writeBarrier._0_4_ == 0) {
    net_aLongTimeAgo.loc = time_Local;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  DAT_00236328 = 0xc;
  DAT_00236320 = &DAT_00293c16;
  net_errNoSuchHost.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    net_errNoSuchHost.data = &DAT_00236320;
  }
  else {
    runtime_gcWriteBarrier();
  }
  return;
}

