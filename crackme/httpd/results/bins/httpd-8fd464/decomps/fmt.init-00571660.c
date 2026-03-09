
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void fmt_init(void)

{
  long in_FS_OFFSET;
  undefined8 *local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  local_10[1] = 0x24;
  *local_10 = &DAT_002a4f09;
  fmt_complexError.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    fmt_complexError.data = local_10;
  }
  else {
    runtime_gcWriteBarrier();
  }
  runtime_newobject((runtime__type *)&DAT_00241ea0);
  local_10[1] = 0x1d;
  *local_10 = 
  "syntax error scanning booleantls: invalid NextProtos valuetls: invalid server key sharetls: too many ignored recordstoo many open files in systemunknown IP protocol specifiedunknown certificate authorityx509: cannot parse URI %q: %sx509: cannot parse dnsName %qx509: malformed serial numberx509: unsupported time formatzero length OBJECT IDENTIFIER (types from different scopes) in prepareForSweep; sweepgen  locals stack map entries for , wire length %d cap length %d227373675443232059478759765625802.1Q tag length %d too shortAlteon Application Switch 2208Alteon Application Switch 2216Alteon Application Switch 2224Alteon Application Switch 2424Alteon Application Switch 3408Alteon Application Switch 3416BCMCSControlServersAddressListCollocated Interference ReportControl Detection Time ExpiredE.164 (SMDS, Frame Relay, ATM)Ethernet Routing Switch 4526FXEthernet Routing Switch 4548GTFine Tuning Measure ParametersFragmentReassemblyTimeExceededGODEBUG: unknown cpu feature \"GTP packet too small: %d bytesHEADERS frame with stream ID 0HT Information (802.11n D1.10)Invalid TCP data offset %d < 5MapIter.Key called before NextMeasurement Pilot TransmissionMesh Channel Switch ParametersName Exists when it should notNeighbor Signaled Session DownNot enough bytes to decode: %dReverse Concatenated Path DownSIGPROF: profiling alarm clockSIGUSR1: user-defined signal 1SIGUSR2: user-defined signal 2SIGVTALRM: virtual alarm clockUDP packet too small: %d bytesUnable to decode IPProtocol %dUnable to determine IGMP type.Unable to determine OSPF type.Unknown information element idabi mismatch detected between asn1: cannot marshal nil valueassignment to entry in nil mapcan\'t assign requested addresscheckdead: inconsistent countscrypto/dsa: invalid public keycrypto/rsa: verification errordhcpv6 option size < length %dfailed to get system page sizefreedefer with d._panic != nilhttp2: decoded hpack field %+vhttp2: panic serving %v: %v\n%shttp: named cookie not presentillegal window increment valueinappropriate ioctl for deviceinvalid function sym..." /* TRUNCATED STRING LITERAL */
  ;
  fmt_boolError.tab = (runtime_itab *)&go_itab__errors_errorString_error;
  if (runtime_writeBarrier._0_4_ == 0) {
    fmt_boolError.data = local_10;
  }
  else {
    runtime_gcWriteBarrier();
  }
  return;
}

