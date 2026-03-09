
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void net.lookupProtocolMap(string name, int ~r1, error ~r2) */

multireturn_int_error__conflict net_lookupProtocolMap(string name)

{
  map_string_int extraout_RAX;
  map_string_int phVar1;
  runtime_maptype *t;
  int in_RDI;
  long in_FS_OFFSET;
  __uint8 x;
  multireturn_int_error__conflict mVar2;
  multireturn_int_error__conflict mVar3;
  string ky;
  multireturn_void___bool_ mVar4;
  string name_spill;
  undefined8 *local_40;
  char local_38;
  uint8 lowerProtocol [25];
  
                    /* Unresolved local var: int n@[???]
                       Unresolved local var: int proto@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  lowerProtocol[0] = 0;
  lowerProtocol[1] = 0;
  lowerProtocol[2] = 0;
  lowerProtocol[3] = 0;
  lowerProtocol[4] = 0;
  lowerProtocol[5] = 0;
  lowerProtocol[6] = 0;
  lowerProtocol[7] = 0;
  lowerProtocol[8] = 0;
  lowerProtocol[9] = 0;
  lowerProtocol[10] = 0;
  lowerProtocol[0xb] = 0;
  lowerProtocol[0xc] = 0;
  lowerProtocol[0xd] = 0;
  lowerProtocol[0xe] = 0;
  lowerProtocol[0xf] = 0;
  lowerProtocol[0x10] = 0;
  lowerProtocol[0x11] = 0;
  lowerProtocol[0x12] = 0;
  lowerProtocol[0x13] = 0;
  lowerProtocol[0x14] = 0;
  lowerProtocol[0x15] = 0;
  lowerProtocol[0x16] = 0;
  lowerProtocol[0x17] = 0;
  lowerProtocol[0x18] = 0;
  t = (runtime_maptype *)&DAT_00000019;
  if (name_spill.len < 0x19) {
    t = (runtime_maptype *)name_spill.len;
  }
  if (name_spill.str != lowerProtocol) {
    runtime_memmove();
  }
  x.array = lowerProtocol;
  if (t < (runtime_maptype *)&DAT_0000001a) {
    x.len = name_spill.len;
    x.cap = (int)t;
    net_lowerASCIIBytes(x);
    phVar1 = net_protocols;
    ky.len = in_RDI;
    ky.str = (uint8 *)&DAT_00236320;
    mVar4 = runtime_mapaccess2_faststr(t,(runtime_hmap *)name_spill.len,ky);
    mVar2.~r2.tab = CONCAT71((int7)((ulong)name_spill.len >> 8),mVar4.~r4);
    if ((local_38 != '\0') && ((runtime_maptype *)name_spill.len == t)) {
      mVar2.~r1 = *local_40;
      mVar2.~r2.data = (void *)name_spill.len;
      return mVar2;
    }
    runtime_newobject((runtime__type *)&DAT_0024c8c0);
    phVar1->flags = 0x1d;
    phVar1->B = 0;
    phVar1->noverflow = 0;
    phVar1->hash0 = 0;
    phVar1->count =
         (int)
         "unknown IP protocol specifiedunknown certificate authorityx509: cannot parse URI %q: %sx509: cannot parse dnsName %qx509: malformed serial numberx509: unsupported time formatzero length OBJECT IDENTIFIER (types from different scopes) in prepareForSweep; sweepgen  locals stack map entries for , wire length %d cap length %d227373675443232059478759765625802.1Q tag length %d too shortAlteon Application Switch 2208Alteon Application Switch 2216Alteon Application Switch 2224Alteon Application Switch 2424Alteon Application Switch 3408Alteon Application Switch 3416BCMCSControlServersAddressListCollocated Interference ReportControl Detection Time ExpiredE.164 (SMDS, Frame Relay, ATM)Ethernet Routing Switch 4526FXEthernet Routing Switch 4548GTFine Tuning Measure ParametersFragmentReassemblyTimeExceededGODEBUG: unknown cpu feature \"GTP packet too small: %d bytesHEADERS frame with stream ID 0HT Information (802.11n D1.10)Invalid TCP data offset %d < 5MapIter.Key called before NextMeasurement Pilot TransmissionMesh Channel Switch ParametersName Exists when it should notNeighbor Signaled Session DownNot enough bytes to decode: %dReverse Concatenated Path DownSIGPROF: profiling alarm clockSIGUSR1: user-defined signal 1SIGUSR2: user-defined signal 2SIGVTALRM: virtual alarm clockUDP packet too small: %d bytesUnable to decode IPProtocol %dUnable to determine IGMP type.Unable to determine OSPF type.Unknown information element idabi mismatch detected between asn1: cannot marshal nil valueassignment to entry in nil mapcan\'t assign requested addresscheckdead: inconsistent countscrypto/dsa: invalid public keycrypto/rsa: verification errordhcpv6 option size < length %dfailed to get system page sizefreedefer with d._panic != nilhttp2: decoded hpack field %+vhttp2: panic serving %v: %v\n%shttp: named cookie not presentillegal window increment valueinappropriate ioctl for deviceinvalid function symbol table\ninvalid network interface nameinvalid pointer found on stackmime: duplicate parameter namemissing validateFirstLine funcprotocol versio..." /* TRUNCATED STRING LITERAL */
    ;
    phVar1->oldbuckets = (bucket<string,int> *)name_spill.len;
    if (runtime_writeBarrier._0_4_ == 0) {
      phVar1->buckets = (bucket<string,int> *)name_spill.str;
    }
    else {
      runtime_gcWriteBarrierCX();
      phVar1 = extraout_RAX;
    }
    mVar3.~r2.tab = (runtime_itab *)mVar2.~r2.tab;
    mVar3.~r1 = (int)phVar1;
    mVar3.~r2.data = go_itab__net_AddrError_error;
    return mVar3;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicSliceAlen();
}

