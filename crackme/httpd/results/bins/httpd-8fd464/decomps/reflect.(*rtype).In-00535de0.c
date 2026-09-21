
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.(*rtype).In(reflect.rtype * t, int i, reflect.Type ~r1) */

reflect_Type reflect___rtype__In(reflect_rtype *t,int i)

{
  runtime_tmpBuf *buf;
  int iVar1;
  long lVar2;
  runtime_itab *prVar3;
  reflect_rtype *extraout_RAX;
  reflect_rtype *extraout_RAX_00;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *unaff_RBP;
  long lVar6;
  uint8 *puVar7;
  long in_FS_OFFSET;
  reflect_Type rVar8;
  string sVar9;
  interface___ e;
  string a1;
  string a0;
  reflect_funcType *tt;
  int i_spill;
  
  sVar9.len = (void *)i;
  do {
    puVar4 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar4 = (undefined1 *)((long)register0x00000020 + -0x40);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      lVar6 = *(long *)((long)register0x00000020 + 8);
      puVar7 = (uint8 *)(ulong)(*(byte *)(lVar6 + 0x17) & 0x1f);
      if (puVar7 == (uint8 *)0x13) {
                    /* Unresolved local var: uintptr uadd@[???] */
        puVar7 = (uint8 *)(ulong)*(byte *)(lVar6 + 0x14);
        if ((*(byte *)(lVar6 + 0x14) & 1) == 0) {
          lVar2 = 0x38;
        }
        else {
          lVar2 = 0x48;
        }
        uVar5 = (ulong)*(ushort *)(lVar6 + 0x30);
        if (*(ushort *)(lVar6 + 0x30) == 0) {
          uVar5 = 0;
          lVar6 = 0;
LAB_00535e49:
          if (*(ulong *)((long)register0x00000020 + 0x10) < uVar5) {
            prVar3 = *(runtime_itab **)(lVar6 + *(ulong *)((long)register0x00000020 + 0x10) * 8);
            if (prVar3 == (runtime_itab *)0x0) {
              puVar4 = (undefined1 *)0x0;
              prVar3 = (runtime_itab *)0x0;
            }
            else {
              puVar4 = go_itab__reflect_rtype_reflect_Type;
            }
            *(undefined1 **)((long)register0x00000020 + 0x18) = puVar4;
            *(runtime_itab **)((long)register0x00000020 + 0x20) = prVar3;
            rVar8.data = sVar9.len;
            rVar8.tab = prVar3;
            return rVar8;
          }
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)register0x00000020 + -0x48) = 0x535e85;
          runtime_panicIndex();
        }
        lVar6 = lVar6 + lVar2;
        if (uVar5 < 0x100001) goto LAB_00535e49;
        *(undefined8 *)((long)register0x00000020 + -0x48) = 0x535e8f;
        runtime_panicSlice3Alen();
        t = extraout_RAX;
      }
      *(long *)((long)register0x00000020 + -0x40) = lVar6;
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x535e98;
      sVar9 = reflect___rtype__String(t);
      a0.str = (uint8 *)sVar9.len;
      buf = *(runtime_tmpBuf **)((long)register0x00000020 + -0x38);
      iVar1 = *(int *)((long)register0x00000020 + -0x30);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
      *(char **)((long)register0x00000020 + -0x38) =
           "reflect: In of non-func type reflect: Key of non-map type runtime: impossible type kindruntime: levelShift[level] = runtime: marking free object runtime: p.gcMarkWorkerMode= runtime: split stack overflowruntime: sudog with non-nil cruntime: summary max pages = runtime: unknown pc in defer semacquire not on the G stackskipping TypeExtendedMlpsFlowskipping TypeExtendedVlanFlowstring concatenation too longsyntax error scanning booleantls: invalid NextProtos valuetls: invalid server key sharetls: too many ignored recordstoo many open files in systemunknown IP protocol specifiedunknown certificate authorityx509: cannot parse URI %q: %sx509: cannot parse dnsName %qx509: malformed serial numberx509: unsupported time formatzero length OBJECT IDENTIFIER (types from different scopes) in prepareForSweep; sweepgen  locals stack map entries for , wire length %d cap length %d227373675443232059478759765625802.1Q tag length %d too shortAlteon Application Switch 2208Alteon Application Switch 2216Alteon Application Switch 2224Alteon Application Switch 2424Alteon Application Switch 3408Alteon Application Switch 3416BCMCSControlServersAddressListCollocated Interference ReportControl Detection Time ExpiredE.164 (SMDS, Frame Relay, ATM)Ethernet Routing Switch 4526FXEthernet Routing Switch 4548GTFine Tuning Measure ParametersFragmentReassemblyTimeExceededGODEBUG: unknown cpu feature \"GTP packet too small: %d bytesHEADERS frame with stream ID 0HT Information (802.11n D1.10)Invalid TCP data offset %d < 5MapIter.Key called before NextMeasurement Pilot TransmissionMesh Channel Switch ParametersName Exists when it should notNeighbor Signaled Session DownNot enough bytes to decode: %dReverse Concatenated Path DownSIGPROF: profiling alarm clockSIGUSR1: user-defined signal 1SIGUSR2: user-defined signal 2SIGVTALRM: virtual alarm clockUDP packet too small: %d bytesUnable to decode IPProtocol %dUnable to determine IGMP type.Unable to determine OSPF type.Unknown information element idabi mismatch detected between asn1: cannot marshal nil valueassi..." /* TRUNCATED STRING LITERAL */
      ;
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x1d;
      *(runtime_tmpBuf **)((long)register0x00000020 + -0x28) = buf;
      *(int *)((long)register0x00000020 + -0x20) = iVar1;
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x535ece;
      a1.len = lVar6;
      a1.str = puVar7;
      a0.len = iVar1;
      sVar9 = runtime_concatstring2(buf,a0,a1);
      *(uint8 **)((long)register0x00000020 + -0x40) = *(uint8 **)((long)register0x00000020 + -0x18);
      *(undefined8 *)((long)register0x00000020 + -0x38) =
           *(undefined8 *)((long)register0x00000020 + -0x10);
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x535ee6;
      sVar9.str = *(uint8 **)((long)register0x00000020 + -0x18);
      runtime_convTstring(sVar9);
      *(undefined **)((long)register0x00000020 + -0x40) = &DAT_00225520;
      *(runtime__type **)((long)register0x00000020 + -0x38) =
           *(runtime__type **)((long)register0x00000020 + -0x30);
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x535f05;
      e.data = sVar9.len;
      e._type = *(runtime__type **)((long)register0x00000020 + -0x30);
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar4 + -8) = 0x535f0b;
    runtime_morestack_noctxt();
    t = extraout_RAX_00;
    register0x00000020 = (BADSPACEBASE *)puVar4;
  } while( true );
}

