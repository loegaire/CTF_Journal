
/* WARNING: Unknown calling convention */

void runtime___mcache__prepareForSweep(runtime_mcache *c)

{
  uint uVar1;
  uint32 uVar2;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  runtime_mcache *c_spill;
  
                    /* Unresolved local var: uint32 sg@[DW_OP_reg0(RAX)] */
  while (uVar2 = runtime_mheap_.sweepgen,
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uVar1 = c_spill->flushGen;
  if (uVar1 != runtime_mheap_.sweepgen) {
    s.len._0_4_ = runtime_mheap_.sweepgen - 2;
    if (uVar1 == (uint)s.len) {
      runtime___mcache__releaseAll((runtime_mcache *)(ulong)runtime_mheap_.sweepgen);
      runtime_stackcache_clear(c_spill);
      LOCK();
      c_spill->flushGen = runtime_mheap_.sweepgen;
      UNLOCK();
      return;
    }
    runtime_printlock();
    s.str = &DAT_00294dd9;
    s.len._4_4_ = 0;
    runtime_printstring(s);
    runtime_printuint((ulong)uVar1);
    s_00.len._0_4_ = (uint)s.len;
    s_00.str = (uint8 *)
               " in prepareForSweep; sweepgen  locals stack map entries for , wire length %d cap length %d227373675443232059478759765625802.1Q tag length %d too shortAlteon Application Switch 2208Alteon Application Switch 2216Alteon Application Switch 2224Alteon Application Switch 2424Alteon Application Switch 3408Alteon Application Switch 3416BCMCSControlServersAddressListCollocated Interference ReportControl Detection Time ExpiredE.164 (SMDS, Frame Relay, ATM)Ethernet Routing Switch 4526FXEthernet Routing Switch 4548GTFine Tuning Measure ParametersFragmentReassemblyTimeExceededGODEBUG: unknown cpu feature \"GTP packet too small: %d bytesHEADERS frame with stream ID 0HT Information (802.11n D1.10)Invalid TCP data offset %d < 5MapIter.Key called before NextMeasurement Pilot TransmissionMesh Channel Switch ParametersName Exists when it should notNeighbor Signaled Session DownNot enough bytes to decode: %dReverse Concatenated Path DownSIGPROF: profiling alarm clockSIGUSR1: user-defined signal 1SIGUSR2: user-defined signal 2SIGVTALRM: virtual alarm clockUDP packet too small: %d bytesUnable to decode IPProtocol %dUnable to determine IGMP type.Unable to determine OSPF type.Unknown information element idabi mismatch detected between asn1: cannot marshal nil valueassignment to entry in nil mapcan\'t assign requested addresscheckdead: inconsistent countscrypto/dsa: invalid public keycrypto/rsa: verification errordhcpv6 option size < length %dfailed to get system page sizefreedefer with d._panic != nilhttp2: decoded hpack field %+vhttp2: panic serving %v: %v\n%shttp: named cookie not presentillegal window increment valueinappropriate ioctl for deviceinvalid function symbol table\ninvalid network interface nameinvalid pointer found on stackmime: duplicate parameter namemissing validateFirstLine funcprotocol version not supportedprotocol wrong type for socketreflect: Elem of invalid type reflect: Len of non-array typereflect: Out of non-func type running on the wrong goroutinerunqputslow: queue is not fullruntime: bad g in cgocallback\nruntime:..." /* TRUNCATED STRING LITERAL */
    ;
    s_00.len._4_4_ = 0;
    runtime_printstring(s_00);
    runtime_printuint((ulong)uVar2);
    runtime_printnl();
    runtime_printunlock();
    s_01.len._0_4_ = (uint)s.len;
    s_01.str = &DAT_00292f62;
    s_01.len._4_4_ = 0;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_01);
  }
  return;
}

