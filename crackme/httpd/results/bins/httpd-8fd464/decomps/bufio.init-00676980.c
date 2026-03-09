
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void bufio_init(void)

{
  long in_FS_OFFSET;
  undefined8 *local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  local_10[1] = 0x20;
  *local_10 = 
  "bufio: invalid use of UnreadBytebufio: invalid use of UnreadRunebufio: tried to fill full buffercan\'t send after socket shutdowncannot represent time as UTCTimechacha20: invalid buffer overlapchacha20poly1305: bad key lengthcrypto/aes: input not full blockcrypto/des: input not full blocked25519: bad public key length: end outside usable address spacego package net: hostLookupOrder(http2: server ignoring frame: %vinteger is not minimally encodedinternal error: bigIntToFiatP521invalid range: failed to overlapmime: expected token after slashnon-Go code disabled sigaltstacknot permitted in capability modenumerical argument out of domainpanic while printing panic valuereflect.nameFrom: tag too long: reflect: NumIn of non-func type removespecial on invalid pointerresource temporarily unavailableruntime: mcall function returnedruntime: newstack called from g=runtime: root level max pages = runtime: stack split at bad timeruntime: sudog with non-nil elemruntime: sudog with non-nil nextruntime: sudog with non-nil prevscanstack: goroutine not stoppedskipping TypeExtendedMlpsFecFlowslice bounds out of range [%x::]slice bounds out of range [:%x:]slice bounds out of range [::%x]software caused connection abortsweep increased allocation countsync: Unlock of unlocked RWMutexsync: negative WaitGroup countertls: NextProtos values too largetls: unknown Renegotiation valuetransform: short internal bufferuse of closed network connectionx509: ECDSA verification failurex509: cannot parse rfc822Name %qx509: invalid constraint value: x509: malformed subjectPublicKeyx509: unsupported elliptic curve of method on nil interface value142108547152020037174224853515625710542735760100185871124267578125BCMCSControlServersDomainNameListBayStack 450 10/100/1000 SwitchesDestination address is the serverE.164 with NSAP format subaddressEthernet Routing Switch 4550T-PWREthernetCTP skip count is odd: %dExtended MPLS LVP FEC Flow RecordGODEBUG sys/cpu: can not enable \"GODEBUG: no value specified for \"Invalid SCTP common header lengthNot all IP header b..." /* TRUNCATED STRING LITERAL */
  ;
  bufio_ErrInvalidUnreadByte.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    bufio_ErrInvalidUnreadByte.data = local_10;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  local_10[1] = 0x20;
  *local_10 = 
  "bufio: invalid use of UnreadRunebufio: tried to fill full buffercan\'t send after socket shutdowncannot represent time as UTCTimechacha20: invalid buffer overlapchacha20poly1305: bad key lengthcrypto/aes: input not full blockcrypto/des: input not full blocked25519: bad public key length: end outside usable address spacego package net: hostLookupOrder(http2: server ignoring frame: %vinteger is not minimally encodedinternal error: bigIntToFiatP521invalid range: failed to overlapmime: expected token after slashnon-Go code disabled sigaltstacknot permitted in capability modenumerical argument out of domainpanic while printing panic valuereflect.nameFrom: tag too long: reflect: NumIn of non-func type removespecial on invalid pointerresource temporarily unavailableruntime: mcall function returnedruntime: newstack called from g=runtime: root level max pages = runtime: stack split at bad timeruntime: sudog with non-nil elemruntime: sudog with non-nil nextruntime: sudog with non-nil prevscanstack: goroutine not stoppedskipping TypeExtendedMlpsFecFlowslice bounds out of range [%x::]slice bounds out of range [:%x:]slice bounds out of range [::%x]software caused connection abortsweep increased allocation countsync: Unlock of unlocked RWMutexsync: negative WaitGroup countertls: NextProtos values too largetls: unknown Renegotiation valuetransform: short internal bufferuse of closed network connectionx509: ECDSA verification failurex509: cannot parse rfc822Name %qx509: invalid constraint value: x509: malformed subjectPublicKeyx509: unsupported elliptic curve of method on nil interface value142108547152020037174224853515625710542735760100185871124267578125BCMCSControlServersDomainNameListBayStack 450 10/100/1000 SwitchesDestination address is the serverE.164 with NSAP format subaddressEthernet Routing Switch 4550T-PWREthernetCTP skip count is odd: %dExtended MPLS LVP FEC Flow RecordGODEBUG sys/cpu: can not enable \"GODEBUG: no value specified for \"Invalid SCTP common header lengthNot all IP header bytes availableOPTera Metro 8010c..." /* TRUNCATED STRING LITERAL */
  ;
  bufio_ErrInvalidUnreadRune.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    bufio_ErrInvalidUnreadRune.data = local_10;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  local_10[1] = 0x12;
  *local_10 = &DAT_0029aabe;
  bufio_ErrBufferFull.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    bufio_ErrBufferFull.data = local_10;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  local_10[1] = 0x15;
  *local_10 = &DAT_0029c80e;
  bufio_ErrNegativeCount.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    bufio_ErrNegativeCount.data = local_10;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  local_10[1] = 0x2f;
  *local_10 = &DAT_002a893c;
  bufio_errNegativeRead.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    bufio_errNegativeRead.data = local_10;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  local_10[1] = 0x30;
  *local_10 = &DAT_002a8dac;
  bufio_errNegativeWrite.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    bufio_errNegativeWrite.data = local_10;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  local_10[1] = 0x1d;
  *local_10 = 
  "bufio.Scanner: token too longcrypto/aes: invalid key size crypto/des: invalid key size crypto/rc4: invalid key size dns index walked out of rangeexecuting on Go runtime stackgc done but gcphase != _GCoffgfput: bad status (not Gdead)http2: client conn not usablehttp: idle connection timeouthttp: panic serving %v: %v\n%sinteger not minimally-encodedinternal error: took too muchinvalid header field value %qinvalid length of trace eventio: read/write on closed pipemime: invalid media parametermismatched local address typeoperation already in progresspadding contained in alphabetpkcs12: odd-length BMP stringprotocol family not supportedreflect: Elem of invalid typereflect: In of non-func type reflect: Key of non-map type runtime: impossible type kindruntime: levelShift[level] = runtime: marking free object runtime: p.gcMarkWorkerMode= runtime: split stack overflowruntime: sudog with non-nil cruntime: summary max pages = runtime: unknown pc in defer semacquire not on the G stackskipping TypeExtendedMlpsFlowskipping TypeExtendedVlanFlowstring concatenation too longsyntax error scanning booleantls: invalid NextProtos valuetls: invalid server key sharetls: too many ignored recordstoo many open files in systemunknown IP protocol specifiedunknown certificate authorityx509: cannot parse URI %q: %sx509: cannot parse dnsName %qx509: malformed serial numberx509: unsupported time formatzero length OBJECT IDENTIFIER (types from different scopes) in prepareForSweep; sweepgen  locals stack map entries for , wire length %d cap length %d227373675443232059478759765625802.1Q tag length %d too shortAlteon Application Switch 2208Alteon Application Switch 2216Alteon Application Switch 2224Alteon Application Switch 2424Alteon Application Switch 3408Alteon Application Switch 3416BCMCSControlServersAddressListCollocated Interference ReportControl Detection Time ExpiredE.164 (SMDS, Frame Relay, ATM)Ethernet Routing Switch 4526FXEthernet Routing Switch 4548GTFine Tuning Measure ParametersFragmentReassemblyTimeExceededGODEBUG: unknown cpu featur..." /* TRUNCATED STRING LITERAL */
  ;
  bufio_ErrTooLong.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    bufio_ErrTooLong.data = local_10;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  local_10[1] = 0x37;
  *local_10 = &DAT_002aa493;
  bufio_ErrNegativeAdvance.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    bufio_ErrNegativeAdvance.data = local_10;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  local_10[1] = 0x3b;
  *local_10 = &DAT_002aaf94;
  bufio_ErrAdvanceTooFar.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    bufio_ErrAdvanceTooFar.data = local_10;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  local_10[1] = 0x2d;
  *local_10 = &DAT_002a7e26;
  bufio_ErrBadReadCount.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    bufio_ErrBadReadCount.data = local_10;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  local_10[1] = 0xb;
  *local_10 = &DAT_002916b0;
  bufio_ErrFinalToken.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    bufio_ErrFinalToken.data = local_10;
  }
  else {
    runtime_gcWriteBarrier();
  }
  return;
}

