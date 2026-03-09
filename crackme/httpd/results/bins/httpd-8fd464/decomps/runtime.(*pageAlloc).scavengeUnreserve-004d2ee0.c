
/* WARNING: Unknown calling convention */

void runtime___pageAlloc__scavengeUnreserve(runtime_pageAlloc *p,runtime_addrRange r,uint32 gen)

{
  long lVar1;
  long in_FS_OFFSET;
  string s;
  runtime_addrRange r_00;
  runtime_pageAlloc *p_spill;
  runtime_addrRange r_spill;
  uint32 gen_spill;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x18)) {
    runtime_morestackc();
  }
  if (r_spill.base.a + 0x800000000000 < r_spill.limit.a + 0x800000000000) {
    lVar1 = r_spill.limit.a - r_spill.base.a;
  }
  else {
    lVar1 = 0;
  }
  if (lVar1 != 0) {
    r_00.base.a._4_4_ = 0;
    r_00.base.a._0_4_ = gen_spill;
    if ((p_spill->scav).gen == gen_spill) {
      if ((r_spill.base.a & 0x3fffff) == 0) {
        r_00.limit.a = r_spill.base.a;
        runtime___addrRanges__add(&(p_spill->scav).inUse,r_00);
        return;
      }
      s.len._0_4_ = gen_spill;
      s.str = (uint8 *)
              "unreserving unaligned regionunsupported compression for unsupported protocol versionx509: invalid DSA parametersx509: invalid DSA public keyx509: invalid RSA public key- Layer %d (%02d bytes) = %s\n45474735088646411895751953125BayStack 10 Power Supply UnitBayStack 303 and 304 SwitchesCisco CCX1 CKIP + Device NameEthernet Routing Switch 4550TExtended MPLS FEC Flow RecordFailoverMaximumClientLeadTimeHTTP/1.1 %d %s: %s%s%d %s: %sInvalid Address TLV length %dInvalid Address TLV number %dMCCAOP Advertisement OverviewMon, 02 Jan 2006 15:04:05 GMTNSYM mod 10!=9 or no short GINon-Authoritative InformationPFLog data less than 60 bytesPassport 8300 10-slot chassisProxy Authentication RequiredS46Lightweight4Over6ContainerSIGPIPE: write to broken pipeTime.UnmarshalBinary: no dataToken Ring Interface CountersUnable to decode Dot11Type %dUnable to decode EAPOLType %dUnable to decode PPPoECode %dUnavailable For Legal ReasonsWide Bandwidth Channel Switchaddspecial on invalid pointerapplication/vnd.ms-fontobjectbufio.Scanner: token too longcrypto/aes: invalid key size crypto/des: invalid key size crypto/rc4: invalid key size dns index walked out of rangeexecuting on Go runtime stackgc done but gcphase != _GCoffgfput: bad status (not Gdead)http2: client conn not usablehttp: idle connection timeouthttp: panic serving %v: %v\n%sinteger not minimally-encodedinternal error: took too muchinvalid header field value %qinvalid length of trace eventio: read/write on closed pipemime: invalid media parametermismatched local address typeoperation already in progresspadding contained in alphabetpkcs12: odd-length BMP stringprotocol family not supportedreflect: Elem of invalid typereflect: In of non-func type reflect: Key of non-map type runtime: impossible type kindruntime: levelShift[level] = runtime: marking free object runtime: p.gcMarkWorkerMode= runtime: split stack overflowruntime: sudog with non-nil cruntime: summary max pages = runtime: unknown pc in defer semacquire not on the G stackskipping TypeExtendedMlpsFlowskipping TypeExtendedVla..." /* TRUNCATED STRING LITERAL */
      ;
      s.len._4_4_ = 0;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s);
    }
  }
  return;
}

