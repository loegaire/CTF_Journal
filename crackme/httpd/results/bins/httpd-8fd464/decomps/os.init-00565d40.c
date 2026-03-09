
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void os_init(void)

{
  undefined **ppuVar1;
  uint8 *unaff_RBX;
  long in_FS_OFFSET;
  string name;
  string name_00;
  string name_01;
  undefined8 *local_20;
  os_File *local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  os_ErrInvalid.tab = io_fs_ErrInvalid.tab;
  if (runtime_writeBarrier._0_4_ == 0) {
    os_ErrInvalid.data = io_fs_ErrInvalid.data;
  }
  else {
    runtime_gcWriteBarrier();
  }
  os_ErrPermission.tab = io_fs_ErrPermission.tab;
  if (runtime_writeBarrier._0_4_ == 0) {
    os_ErrPermission.data = io_fs_ErrPermission.data;
  }
  else {
    runtime_gcWriteBarrier();
  }
  os_ErrExist.tab = io_fs_ErrExist.tab;
  if (runtime_writeBarrier._0_4_ == 0) {
    os_ErrExist.data = io_fs_ErrExist.data;
  }
  else {
    runtime_gcWriteBarrier();
  }
  os_ErrNotExist.tab = io_fs_ErrNotExist.tab;
  if (runtime_writeBarrier._0_4_ == 0) {
    os_ErrNotExist.data = io_fs_ErrNotExist.data;
  }
  else {
    runtime_gcWriteBarrier();
  }
  os_ErrClosed.tab = io_fs_ErrClosed.tab;
  if (runtime_writeBarrier._0_4_ == 0) {
    os_ErrClosed.data = io_fs_ErrClosed.data;
  }
  else {
    runtime_gcWriteBarrier();
  }
  os_ErrNoDeadline.tab = internal_poll_ErrNoDeadline.tab;
  if (runtime_writeBarrier._0_4_ == 0) {
    os_ErrNoDeadline.data = internal_poll_ErrNoDeadline.data;
  }
  else {
    runtime_gcWriteBarrier();
  }
  os_ErrDeadlineExceeded.tab = internal_poll_ErrDeadlineExceeded.tab;
  if (runtime_writeBarrier._0_4_ == 0) {
    os_ErrDeadlineExceeded.data = internal_poll_ErrDeadlineExceeded.data;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  local_20[1] = 0x1c;
  *local_20 = 
  "os: process already finishedpending ASN.1 child too longreflect.MakeSlice: len > capregion exceeds uintptr rangeruntime: bad lfnode address runtime: casgstatus: oldval=runtime: kevent failed with runtime: kqueue failed with runtime: no module data for save on system g not allowedskipping TypeExtendedNatFlowtext/plain; charset=utf-16betext/plain; charset=utf-16leunreserving unaligned regionunsupported compression for unsupported protocol versionx509: invalid DSA parametersx509: invalid DSA public keyx509: invalid RSA public key- Layer %d (%02d bytes) = %s\n45474735088646411895751953125BayStack 10 Power Supply UnitBayStack 303 and 304 SwitchesCisco CCX1 CKIP + Device NameEthernet Routing Switch 4550TExtended MPLS FEC Flow RecordFailoverMaximumClientLeadTimeHTTP/1.1 %d %s: %s%s%d %s: %sInvalid Address TLV length %dInvalid Address TLV number %dMCCAOP Advertisement OverviewMon, 02 Jan 2006 15:04:05 GMTNSYM mod 10!=9 or no short GINon-Authoritative InformationPFLog data less than 60 bytesPassport 8300 10-slot chassisProxy Authentication RequiredS46Lightweight4Over6ContainerSIGPIPE: write to broken pipeTime.UnmarshalBinary: no dataToken Ring Interface CountersUnable to decode Dot11Type %dUnable to decode EAPOLType %dUnable to decode PPPoECode %dUnavailable For Legal ReasonsWide Bandwidth Channel Switchaddspecial on invalid pointerapplication/vnd.ms-fontobjectbufio.Scanner: token too longcrypto/aes: invalid key size crypto/des: invalid key size crypto/rc4: invalid key size dns index walked out of rangeexecuting on Go runtime stackgc done but gcphase != _GCoffgfput: bad status (not Gdead)http2: client conn not usablehttp: idle connection timeouthttp: panic serving %v: %v\n%sinteger not minimally-encodedinternal error: took too muchinvalid header field value %qinvalid length of trace eventio: read/write on closed pipemime: invalid media parametermismatched local address typeoperation already in progresspadding contained in alphabetpkcs12: odd-length BMP stringprotocol family not supportedreflect: Elem of invalid typereflect:..." /* TRUNCATED STRING LITERAL */
  ;
  ppuVar1 = &go_itab__errors_errorString_error;
  os_ErrProcessDone.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    os_ErrProcessDone.data = local_20;
  }
  else {
    runtime_gcWriteBarrier();
  }
  name.len = (int)ppuVar1;
  name.str = unaff_RBX;
  os_NewFile(0x28eca6,name);
  if (runtime_writeBarrier._0_4_ == 0) {
    os_Stdin = local_10;
  }
  else {
    runtime_gcWriteBarrier();
  }
  name_00.len = (int)ppuVar1;
  name_00.str = unaff_RBX;
  os_NewFile(0x2909cc,name_00);
  if (runtime_writeBarrier._0_4_ == 0) {
    os_Stdout = local_10;
  }
  else {
    runtime_gcWriteBarrier();
  }
  name_01.len = (int)ppuVar1;
  name_01.str = unaff_RBX;
  os_NewFile(0x2909c1,name_01);
  if (runtime_writeBarrier._0_4_ == 0) {
    os_Stderr = local_10;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  DAT_002909c9 = 0x37;
  DAT_002909c1 = &DAT_002aa682;
  os_errWriteAtInAppendMode.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    os_errWriteAtInAppendMode.data = &DAT_002909c1;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  DAT_002909c9 = 0x1f;
  DAT_002909c1 = 
  "pattern contains path separatorreflect.MakeSlice: negative capreflect.MakeSlice: negative lenreflect: Len of non-array type resetspinning: not a spinning mruntime: cannot allocate memoryruntime: split stack overflow: skipping TypeExtendedMlpsVcFlowslice bounds out of range [%x:]slice bounds out of range [:%x]tls: failed to sign handshake: tls: no certificates configuredtls: unsupported public key: %Ttoo many transfer encodings: %qx509: certificate is valid for x509: malformed GeneralizedTimex509: malformed subjectUniqueIDx509: malformed tbs certificate (types from different packages)28421709430404007434844970703125: day-of-year does not match dayAlcatel Ethernet workgroup conc.Alteon SSL 410 10/100/1000 FiberBFD packet length does not matchBSS Available Admission CapacityBayStack 250 10/100 Ethernet HubCannot set rfmon for this handleClientNetworkInterfaceIdentifierDMG Link Adaption AcknowledgmentEthernet Routing Switch 2500-26TEthernet Routing Switch 2500-50TEthernet Routing Switch 5510-24TEthernet Routing Switch 5510-48TExtended MPLS Tunnel Flow RecordFailoverPartnerRawClientLeadTimeIPv6 header TLV option too smallInvalid TCP option length %d < 2MapIter.Value called before NextNon Transmitted BSSID CapabilityNortel Networks VPN Gateway 3050Nortel Networks VPN Gateway 3070RR Set Exists when it should notSIGFPE: floating-point exceptionSIGTTOU: background write to ttyUnable to decode EthernetType %dUnsupported SFlow sample type %dUnsupported flow record type: %d\" not supported for cpu option \"bad input point: low order pointbufio: invalid use of UnreadBytebufio: invalid use of UnreadRunebufio: tried to fill full buffercan\'t send after socket shutdowncannot represent time as UTCTimechacha20: invalid buffer overlapchacha20poly1305: bad key lengthcrypto/aes: input not full blockcrypto/des: input not full blocked25519: bad public key length: end outside usable address spacego package net: hostLookupOrder(http2: server ignoring frame: %vinteger is not minimally encodedinternal error: bigIntToFiatP521invalid range: fai..." /* TRUNCATED STRING LITERAL */
  ;
  os_errPatternHasSeparator.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    os_errPatternHasSeparator.data = &DAT_002909c1;
  }
  else {
    runtime_gcWriteBarrier();
  }
  return;
}

