
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void mime_init(void)

{
  undefined **h;
  runtime_hmap *unaff_RBX;
  int in_RDI;
  undefined8 *puVar1;
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
  undefined8 *local_30;
  runtime_maptype *local_20;
  undefined8 *local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  local_30[1] = 0x23;
  *local_30 = &DAT_002a4494;
  mime_errInvalidWord.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    mime_errInvalidWord.data = local_30;
  }
  else {
    in_RDI = 0x79ee58;
    runtime_gcWriteBarrier();
  }
  mime_maxBase64Len = 0x2d;
  if (encoding_base64_StdEncoding->padChar == -1) {
    mime_maxBase64Len = 0x2f;
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  local_30[1] = 0x1d;
  *local_30 = 
  "mime: invalid media parametermismatched local address typeoperation already in progresspadding contained in alphabetpkcs12: odd-length BMP stringprotocol family not supportedreflect: Elem of invalid typereflect: In of non-func type reflect: Key of non-map type runtime: impossible type kindruntime: levelShift[level] = runtime: marking free object runtime: p.gcMarkWorkerMode= runtime: split stack overflowruntime: sudog with non-nil cruntime: summary max pages = runtime: unknown pc in defer semacquire not on the G stackskipping TypeExtendedMlpsFlowskipping TypeExtendedVlanFlowstring concatenation too longsyntax error scanning booleantls: invalid NextProtos valuetls: invalid server key sharetls: too many ignored recordstoo many open files in systemunknown IP protocol specifiedunknown certificate authorityx509: cannot parse URI %q: %sx509: cannot parse dnsName %qx509: malformed serial numberx509: unsupported time formatzero length OBJECT IDENTIFIER (types from different scopes) in prepareForSweep; sweepgen  locals stack map entries for , wire length %d cap length %d227373675443232059478759765625802.1Q tag length %d too shortAlteon Application Switch 2208Alteon Application Switch 2216Alteon Application Switch 2224Alteon Application Switch 2424Alteon Application Switch 3408Alteon Application Switch 3416BCMCSControlServersAddressListCollocated Interference ReportControl Detection Time ExpiredE.164 (SMDS, Frame Relay, ATM)Ethernet Routing Switch 4526FXEthernet Routing Switch 4548GTFine Tuning Measure ParametersFragmentReassemblyTimeExceededGODEBUG: unknown cpu feature \"GTP packet too small: %d bytesHEADERS frame with stream ID 0HT Information (802.11n D1.10)Invalid TCP data offset %d < 5MapIter.Key called before NextMeasurement Pilot TransmissionMesh Channel Switch ParametersName Exists when it should notNeighbor Signaled Session DownNot enough bytes to decode: %dReverse Concatenated Path DownSIGPROF: profiling alarm clockSIGUSR1: user-defined signal 1SIGUSR2: user-defined signal 2SIGVTALRM: virtual alarm clockUDP packet ..." /* TRUNCATED STRING LITERAL */
  ;
  h = &go_itab__errors_errorString_error;
  mime_ErrInvalidMediaParameter.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    mime_ErrInvalidMediaParameter.data = local_30;
  }
  else {
    in_RDI = 0x79ee48;
    runtime_gcWriteBarrier();
  }
  runtime_makemap((runtime_maptype *)&DAT_00236500,(int)unaff_RBX,(runtime_hmap *)h);
  s.len = in_RDI;
  s.str = &DAT_00236500;
  runtime_mapassign_faststr(local_20,unaff_RBX,s);
  local_18[1] = 10;
  puVar1 = local_18;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_18 = &DAT_0028fa02;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_00.len = (int)puVar1;
  s_00.str = (uint8 *)local_20;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236500,unaff_RBX,s_00);
  local_18[1] = 0x17;
  puVar1 = local_18;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_18 = &DAT_0029e078;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_01.len = (int)puVar1;
  s_01.str = (uint8 *)local_20;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236500,unaff_RBX,s_01);
  local_18[1] = 9;
  puVar1 = local_18;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_18 = &DAT_0028deec;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_02.len = (int)puVar1;
  s_02.str = (uint8 *)local_20;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236500,unaff_RBX,s_02);
  local_18[1] = 0x18;
  puVar1 = local_18;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_18 = &DAT_0029e82f;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_03.len = (int)puVar1;
  s_03.str = (uint8 *)local_20;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236500,unaff_RBX,s_03);
  local_18[1] = 0x18;
  puVar1 = local_18;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_18 = &DAT_0029e82f;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_04.len = (int)puVar1;
  s_04.str = (uint8 *)local_20;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236500,unaff_RBX,s_04);
  local_18[1] = 10;
  puVar1 = local_18;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_18 = &DAT_0028fa0c;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_05.len = (int)puVar1;
  s_05.str = (uint8 *)local_20;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236500,unaff_RBX,s_05);
  local_18[1] = 10;
  puVar1 = local_18;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_18 = &DAT_0028fa0c;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_06.len = (int)puVar1;
  s_06.str = (uint8 *)local_20;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236500,unaff_RBX,s_06);
  local_18[1] = 0x1e;
  puVar1 = local_18;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_18 = 
    "text/javascript; charset=utf-8transform: short source bufferx509: SAN dNSName is malformedx509: invalid ECDSA parametersx509: malformed issuerUniqueID) not in usable address space: ...additional frames elided...\n11368683772161602973937988281255684341886080801486968994140625BayStack 380 10/100/1000 SwitchCLIENT_HANDSHAKE_TRAFFIC_SECRETHT Capabilities (802.11n D1.10)Invalid counter record type: %dManufacturerUsageDescriptionURLNetwork Authentication RequiredOPTera Metro 8003 OPM L2 SwitchOPTera Metro 8006 OPM L2 SwitchOPTera Metro 8010 OPM L2 SwitchOverlapping BSS Scan ParametersPRIORITY frame with stream ID 0PartialOrderConnectionPermittedRequest Header Fields Too LargeRequested Range Not SatisfiableSERVER_HANDSHAKE_TRAFFIC_SECRETSIGSEGV: segmentation violationTLS: sequence number wraparoundUnrecognized VRRPv2 type field.bad certificate status responsebad write barrier buffer boundscall from within the Go runtimecannot-support-all-capabilitiescasgstatus: bad incoming valuescheckmark found unmarked objectentersyscallblock inconsistent fatal: bad g in signal handler\nfmt: unknown base; can\'t happenhash/crc32: tables do not matchhttp2: connection error: %v: %vinternal error - misuse of itabinvalid network interface indexmalformed time zone informationnon in-use span in unswept listpacer: sweep done at heap size pattern contains path separatorreflect.MakeSlice: negative capreflect.MakeSlice: negative lenreflect: Len of non-array type resetspinning: not a spinning mruntime: cannot allocate memoryruntime: split stack overflow: skipping TypeExtendedMlpsVcFlowslice bounds out of range [%x:]slice bounds out of range [:%x]tls: failed to sign handshake: tls: no certificates configuredtls: unsupported public key: %Ttoo many transfer encodings: %qx509: certificate is valid for x509: malformed GeneralizedTimex509: malformed subjectUniqueIDx509: malformed tbs certificate (types from different packages)28421709430404007434844970703125: day-of-year does not match dayAlcatel Ethernet workgroup conc.Alteon SSL 410 10/100/1000 FiberBF..." /* TRUNCATED STRING LITERAL */
    ;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_07.len = (int)puVar1;
  s_07.str = (uint8 *)local_20;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236500,unaff_RBX,s_07);
  local_18[1] = 0x10;
  puVar1 = local_18;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_18 = &DAT_00299815;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_08.len = (int)puVar1;
  s_08.str = (uint8 *)local_20;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236500,unaff_RBX,s_08);
  local_18[1] = 0x1e;
  puVar1 = local_18;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_18 = 
    "text/javascript; charset=utf-8transform: short source bufferx509: SAN dNSName is malformedx509: invalid ECDSA parametersx509: malformed issuerUniqueID) not in usable address space: ...additional frames elided...\n11368683772161602973937988281255684341886080801486968994140625BayStack 380 10/100/1000 SwitchCLIENT_HANDSHAKE_TRAFFIC_SECRETHT Capabilities (802.11n D1.10)Invalid counter record type: %dManufacturerUsageDescriptionURLNetwork Authentication RequiredOPTera Metro 8003 OPM L2 SwitchOPTera Metro 8006 OPM L2 SwitchOPTera Metro 8010 OPM L2 SwitchOverlapping BSS Scan ParametersPRIORITY frame with stream ID 0PartialOrderConnectionPermittedRequest Header Fields Too LargeRequested Range Not SatisfiableSERVER_HANDSHAKE_TRAFFIC_SECRETSIGSEGV: segmentation violationTLS: sequence number wraparoundUnrecognized VRRPv2 type field.bad certificate status responsebad write barrier buffer boundscall from within the Go runtimecannot-support-all-capabilitiescasgstatus: bad incoming valuescheckmark found unmarked objectentersyscallblock inconsistent fatal: bad g in signal handler\nfmt: unknown base; can\'t happenhash/crc32: tables do not matchhttp2: connection error: %v: %vinternal error - misuse of itabinvalid network interface indexmalformed time zone informationnon in-use span in unswept listpacer: sweep done at heap size pattern contains path separatorreflect.MakeSlice: negative capreflect.MakeSlice: negative lenreflect: Len of non-array type resetspinning: not a spinning mruntime: cannot allocate memoryruntime: split stack overflow: skipping TypeExtendedMlpsVcFlowslice bounds out of range [%x:]slice bounds out of range [:%x]tls: failed to sign handshake: tls: no certificates configuredtls: unsupported public key: %Ttoo many transfer encodings: %qx509: certificate is valid for x509: malformed GeneralizedTimex509: malformed subjectUniqueIDx509: malformed tbs certificate (types from different packages)28421709430404007434844970703125: day-of-year does not match dayAlcatel Ethernet workgroup conc.Alteon SSL 410 10/100/1000 FiberBF..." /* TRUNCATED STRING LITERAL */
    ;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_09.len = (int)puVar1;
  s_09.str = (uint8 *)local_20;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236500,unaff_RBX,s_09);
  local_18[1] = 0xf;
  puVar1 = local_18;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_18 = &DAT_00298b0f;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_10.len = (int)puVar1;
  s_10.str = (uint8 *)local_20;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236500,unaff_RBX,s_10);
  local_18[1] = 9;
  puVar1 = local_18;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_18 = &DAT_0028def5;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_11.len = (int)puVar1;
  s_11.str = (uint8 *)local_20;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236500,unaff_RBX,s_11);
  local_18[1] = 0xd;
  puVar1 = local_18;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_18 = &DAT_002954e8;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_12.len = (int)puVar1;
  s_12.str = (uint8 *)local_20;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236500,unaff_RBX,s_12);
  local_18[1] = 0x10;
  puVar1 = local_18;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_18 = &DAT_00299825;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_13.len = (int)puVar1;
  s_13.str = (uint8 *)local_20;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236500,unaff_RBX,s_13);
  local_18[1] = 10;
  puVar1 = local_18;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_18 = &DAT_0028fa16;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_14.len = (int)puVar1;
  s_14.str = &DAT_00287e09;
  runtime_mapassign_faststr(local_20,unaff_RBX,s_14);
  local_18[1] = 0x17;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_18 = &DAT_0029e08f;
    mime_builtinTypesLower = (map_string_string)local_20;
  }
  else {
    runtime_gcWriteBarrier();
    runtime_gcWriteBarrier();
  }
  return;
}

