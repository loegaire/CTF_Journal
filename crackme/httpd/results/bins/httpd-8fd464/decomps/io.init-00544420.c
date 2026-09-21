
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void io_init(void)

{
  long in_FS_OFFSET;
  undefined8 *local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  local_10[1] = 0xb;
  *local_10 = &DAT_0029228c;
  io_ErrShortWrite.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    io_ErrShortWrite.data = local_10;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  local_10[1] = 0x14;
  *local_10 = 0x29c05e;
  io_errInvalidWrite.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    io_errInvalidWrite.data = local_10;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  local_10[1] = 0xc;
  *local_10 = &DAT_00294036;
  io_ErrShortBuffer.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    io_ErrShortBuffer.data = local_10;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  local_10[1] = 3;
  *local_10 = &DAT_00287906;
  io_EOF.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    io_EOF.data = local_10;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  local_10[1] = 0xe;
  *local_10 = &DAT_00298277;
  io_ErrUnexpectedEOF.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    io_ErrUnexpectedEOF.data = local_10;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  local_10[1] = 0x2b;
  *local_10 = &DAT_002a7727;
  io_ErrNoProgress.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    io_ErrNoProgress.data = local_10;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  local_10[1] = 0x14;
  *local_10 = &DAT_0029bda2;
  io_errWhence.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    io_errWhence.data = local_10;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  local_10[1] = 0x14;
  *local_10 = &DAT_0029bd8e;
  io_errOffset.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    io_errOffset.data = local_10;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  local_10[1] = 0x1d;
  *local_10 = 
  "io: read/write on closed pipemime: invalid media parametermismatched local address typeoperation already in progresspadding contained in alphabetpkcs12: odd-length BMP stringprotocol family not supportedreflect: Elem of invalid typereflect: In of non-func type reflect: Key of non-map type runtime: impossible type kindruntime: levelShift[level] = runtime: marking free object runtime: p.gcMarkWorkerMode= runtime: split stack overflowruntime: sudog with non-nil cruntime: summary max pages = runtime: unknown pc in defer semacquire not on the G stackskipping TypeExtendedMlpsFlowskipping TypeExtendedVlanFlowstring concatenation too longsyntax error scanning booleantls: invalid NextProtos valuetls: invalid server key sharetls: too many ignored recordstoo many open files in systemunknown IP protocol specifiedunknown certificate authorityx509: cannot parse URI %q: %sx509: cannot parse dnsName %qx509: malformed serial numberx509: unsupported time formatzero length OBJECT IDENTIFIER (types from different scopes) in prepareForSweep; sweepgen  locals stack map entries for , wire length %d cap length %d227373675443232059478759765625802.1Q tag length %d too shortAlteon Application Switch 2208Alteon Application Switch 2216Alteon Application Switch 2224Alteon Application Switch 2424Alteon Application Switch 3408Alteon Application Switch 3416BCMCSControlServersAddressListCollocated Interference ReportControl Detection Time ExpiredE.164 (SMDS, Frame Relay, ATM)Ethernet Routing Switch 4526FXEthernet Routing Switch 4548GTFine Tuning Measure ParametersFragmentReassemblyTimeExceededGODEBUG: unknown cpu feature \"GTP packet too small: %d bytesHEADERS frame with stream ID 0HT Information (802.11n D1.10)Invalid TCP data offset %d < 5MapIter.Key called before NextMeasurement Pilot TransmissionMesh Channel Switch ParametersName Exists when it should notNeighbor Signaled Session DownNot enough bytes to decode: %dReverse Concatenated Path DownSIGPROF: profiling alarm clockSIGUSR1: user-defined signal 1SIGUSR2: user-defined signal 2SIGVTALRM: v..." /* TRUNCATED STRING LITERAL */
  ;
  io_ErrClosedPipe.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    io_ErrClosedPipe.data = local_10;
  }
  else {
    runtime_gcWriteBarrier();
  }
  return;
}

