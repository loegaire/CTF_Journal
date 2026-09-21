
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.(*rtype).Key(reflect.rtype * t, reflect.Type ~r0) */

reflect_Type reflect___rtype__Key(reflect_rtype *t)

{
  reflect_rtype *t_00;
  runtime_tmpBuf *buf;
  int iVar1;
  runtime_itab *prVar2;
  undefined1 *puVar3;
  void *unaff_RBX;
  undefined1 *unaff_RBP;
  int in_RSI;
  uint8 *in_RDI;
  long in_FS_OFFSET;
  reflect_Type rVar4;
  string sVar5;
  interface___ e;
  string a1;
  string a0;
  reflect_mapType *tt;
  
  sVar5.len = unaff_RBX;
  do {
    puVar3 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar3 = (undefined1 *)((long)register0x00000020 + -0x40);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      t_00 = *(reflect_rtype **)((long)register0x00000020 + 8);
      if ((t_00->kind & 0x1f) == 0x15) {
        prVar2 = (runtime_itab *)t_00[1].size;
        if (prVar2 == (runtime_itab *)0x0) {
          puVar3 = (undefined1 *)0x0;
          prVar2 = (runtime_itab *)0x0;
        }
        else {
          puVar3 = go_itab__reflect_rtype_reflect_Type;
        }
        *(undefined1 **)((long)register0x00000020 + 0x10) = puVar3;
        *(runtime_itab **)((long)register0x00000020 + 0x18) = prVar2;
        rVar4.data = sVar5.len;
        rVar4.tab = prVar2;
        return rVar4;
      }
      *(reflect_rtype **)((long)register0x00000020 + -0x40) = t_00;
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x535f86;
      sVar5 = reflect___rtype__String(t_00);
      a0.str = (uint8 *)sVar5.len;
      buf = *(runtime_tmpBuf **)((long)register0x00000020 + -0x38);
      iVar1 = *(int *)((long)register0x00000020 + -0x30);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
      *(char **)((long)register0x00000020 + -0x38) =
           "reflect: Key of non-map type runtime: impossible type kindruntime: levelShift[level] = runtime: marking free object runtime: p.gcMarkWorkerMode= runtime: split stack overflowruntime: sudog with non-nil cruntime: summary max pages = runtime: unknown pc in defer semacquire not on the G stackskipping TypeExtendedMlpsFlowskipping TypeExtendedVlanFlowstring concatenation too longsyntax error scanning booleantls: invalid NextProtos valuetls: invalid server key sharetls: too many ignored recordstoo many open files in systemunknown IP protocol specifiedunknown certificate authorityx509: cannot parse URI %q: %sx509: cannot parse dnsName %qx509: malformed serial numberx509: unsupported time formatzero length OBJECT IDENTIFIER (types from different scopes) in prepareForSweep; sweepgen  locals stack map entries for , wire length %d cap length %d227373675443232059478759765625802.1Q tag length %d too shortAlteon Application Switch 2208Alteon Application Switch 2216Alteon Application Switch 2224Alteon Application Switch 2424Alteon Application Switch 3408Alteon Application Switch 3416BCMCSControlServersAddressListCollocated Interference ReportControl Detection Time ExpiredE.164 (SMDS, Frame Relay, ATM)Ethernet Routing Switch 4526FXEthernet Routing Switch 4548GTFine Tuning Measure ParametersFragmentReassemblyTimeExceededGODEBUG: unknown cpu feature \"GTP packet too small: %d bytesHEADERS frame with stream ID 0HT Information (802.11n D1.10)Invalid TCP data offset %d < 5MapIter.Key called before NextMeasurement Pilot TransmissionMesh Channel Switch ParametersName Exists when it should notNeighbor Signaled Session DownNot enough bytes to decode: %dReverse Concatenated Path DownSIGPROF: profiling alarm clockSIGUSR1: user-defined signal 1SIGUSR2: user-defined signal 2SIGVTALRM: virtual alarm clockUDP packet too small: %d bytesUnable to decode IPProtocol %dUnable to determine IGMP type.Unable to determine OSPF type.Unknown information element idabi mismatch detected between asn1: cannot marshal nil valueassignment to entry in nil mapcan..." /* TRUNCATED STRING LITERAL */
      ;
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x1d;
      *(runtime_tmpBuf **)((long)register0x00000020 + -0x28) = buf;
      *(int *)((long)register0x00000020 + -0x20) = iVar1;
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x535fbc;
      a1.len = in_RSI;
      a1.str = in_RDI;
      a0.len = iVar1;
      sVar5 = runtime_concatstring2(buf,a0,a1);
      *(uint8 **)((long)register0x00000020 + -0x40) = *(uint8 **)((long)register0x00000020 + -0x18);
      *(undefined8 *)((long)register0x00000020 + -0x38) =
           *(undefined8 *)((long)register0x00000020 + -0x10);
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x535fd4;
      sVar5.str = *(uint8 **)((long)register0x00000020 + -0x18);
      runtime_convTstring(sVar5);
      *(undefined **)((long)register0x00000020 + -0x40) = &DAT_00225520;
      *(runtime__type **)((long)register0x00000020 + -0x38) =
           *(runtime__type **)((long)register0x00000020 + -0x30);
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x535fee;
      e.data = sVar5.len;
      e._type = *(runtime__type **)((long)register0x00000020 + -0x30);
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar3 + -8) = 0x535ff4;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar3;
  } while( true );
}

