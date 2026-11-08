
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.newName(string n, string tag, bool exported, reflect.name
   ~r3) */

reflect_name reflect_newName(string n,string tag,bool exported)

{
  reflect_name rVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  undefined1 *puVar5;
  undefined1 *unaff_RBP;
  undefined7 in_register_00000031;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint8 *puVar10;
  uint8 *puVar11;
  long lVar12;
  uint8 *in_R8;
  int in_R9;
  long in_FS_OFFSET;
  bool bVar13;
  bool bVar14;
  string sVar15;
  interface___ e;
  string val;
  interface___ e_00;
  string a1;
  string a1_00;
  string a0;
  string a0_00;
  string a2;
  string a2_00;
  string n_spill;
  string tag_spill;
  bool exported_spill;
  
  iVar6 = CONCAT71(in_register_00000031,exported);
  puVar10 = (uint8 *)tag.len;
  puVar11 = tag.str;
  sVar15.len = (uint8 *)n.len;
  do {
                    /* Unresolved local var: uint8 bits@[???]
                       Unresolved local var: int nameLenLen@[???]
                       Unresolved local var: int l@[???]
                       Unresolved local var: int tagLenLen@[???]
                       Unresolved local var: []uint8 b@[???]
                       Unresolved local var: uint8[10] nameLen@[???]
                       Unresolved local var: uint8[10] tagLen@[???]
                       Unresolved local var: int ~R0@[???] */
    puVar5 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) <
        (undefined1 *)((long)register0x00000020 + -0x30)) {
      puVar5 = (undefined1 *)((long)register0x00000020 + -0xb0);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      lVar12 = *(long *)((long)register0x00000020 + 0x10);
      if (lVar12 < 0x20000000) {
        sVar15.len = *(uint8 **)((long)register0x00000020 + 0x20);
        if ((long)sVar15.len < 0x20000000) {
          *(undefined8 *)((long)register0x00000020 + -0x22) = 0;
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0;
          *(undefined8 *)((long)register0x00000020 + -0x2c) = 0;
          *(undefined8 *)((long)register0x00000020 + -0x2a) = 0;
          uVar2 = 0;
          lVar7 = lVar12;
                    /* Unresolved local var: int i@[???] */
          while( true ) {
            bVar4 = (byte)lVar7 & 0x7f;
            lVar7 = lVar7 >> 7;
            if (lVar7 == 0) break;
            if (9 < uVar2) {
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x53530c;
              runtime_panicIndex();
            }
            *(byte *)((long)register0x00000020 + (uVar2 - 0x22)) = bVar4 | 0x80;
            uVar2 = uVar2 + 1;
          }
          if (9 < uVar2) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x5352ff;
            runtime_panicIndex();
          }
          *(byte *)((long)register0x00000020 + (uVar2 - 0x22)) = bVar4;
          uVar8 = 0;
          puVar11 = sVar15.len;
                    /* Unresolved local var: int i@[???] */
          while( true ) {
            bVar4 = (byte)puVar11 & 0x7f;
            puVar11 = (uint8 *)((long)puVar11 >> 7);
            if (puVar11 == (uint8 *)0x0) break;
            if (9 < uVar8) {
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x5352f2;
              runtime_panicIndex();
            }
            *(byte *)((long)register0x00000020 + (uVar8 - 0x2c)) = bVar4 | 0x80;
            uVar8 = uVar8 + 1;
          }
          if (9 < uVar8) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x5352e5;
            runtime_panicIndex();
          }
          *(ulong *)((long)register0x00000020 + -0x48) = uVar8;
          *(ulong *)((long)register0x00000020 + -0x50) = uVar2;
          *(byte *)((long)register0x00000020 + (uVar8 - 0x2c)) = bVar4;
          puVar11 = (uint8 *)(uVar2 + lVar12 + 2);
          *(uint8 **)((long)register0x00000020 + -0x58) = puVar11;
          *(ulong *)((long)register0x00000020 + -0x38) = lVar12 + uVar2;
          if ((long)sVar15.len < 1) {
            bVar4 = *(byte *)((long)register0x00000020 + 0x28);
            sVar15.len = puVar11;
          }
          else {
            bVar4 = *(byte *)((long)register0x00000020 + 0x28) | 2;
            sVar15.len = sVar15.len + lVar12 + uVar2 + uVar8 + 3;
          }
          *(uint8 **)((long)register0x00000020 + -0x40) = sVar15.len;
          *(byte *)((long)register0x00000020 + -0x61) = bVar4;
          *(undefined **)((long)register0x00000020 + -0xb0) = &DAT_00225720;
          *(uint8 **)((long)register0x00000020 + -0xa8) = sVar15.len;
          *(uint8 **)((long)register0x00000020 + -0xa0) = sVar15.len;
          *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x535095;
          runtime_makeslice((runtime__type *)&DAT_00225720,(int)puVar11,uVar2);
          rVar1.bytes = *(uint8 **)((long)register0x00000020 + -0x98);
          uVar2 = *(ulong *)((long)register0x00000020 + -0x40);
          if (uVar2 != 0) {
            *(uint8 **)((long)register0x00000020 + -0x10) = rVar1.bytes;
            *rVar1.bytes = *(uint8 *)((long)register0x00000020 + -0x61);
            lVar12 = uVar2 - 1;
            lVar7 = *(long *)((long)register0x00000020 + -0x50);
            lVar9 = lVar12;
            if (lVar7 + 1 < lVar12) {
              lVar9 = lVar7 + 1;
            }
            if ((uint8 *)((long)register0x00000020 + -0x22) != rVar1.bytes + (-lVar12 >> 0x3f & 1))
            {
              *(uint8 **)((long)register0x00000020 + -0xb0) = rVar1.bytes + (-lVar12 >> 0x3f & 1);
              *(uint8 **)((long)register0x00000020 + -0xa8) =
                   (uint8 *)((long)register0x00000020 + -0x22);
              *(long *)((long)register0x00000020 + -0xa0) = lVar9;
              *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x5350fe;
              runtime_memmove();
              rVar1.bytes = *(uint8 **)((long)register0x00000020 + -0x10);
              uVar2 = *(ulong *)((long)register0x00000020 + -0x40);
              lVar7 = *(long *)((long)register0x00000020 + -0x50);
            }
            if (uVar2 < lVar7 + 2U) {
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x5352cd;
              runtime_panicSliceB();
            }
            lVar12 = (uVar2 - lVar7) + -2;
            lVar9 = lVar12;
            if (*(long *)((long)register0x00000020 + 0x10) < lVar12) {
              lVar9 = *(long *)((long)register0x00000020 + 0x10);
            }
            if (*(uint8 **)((long)register0x00000020 + 8) ==
                rVar1.bytes + (lVar7 + 2U & -lVar12 >> 0x3f)) {
              lVar7 = *(long *)((long)register0x00000020 + 0x20);
              lVar12 = lVar7;
            }
            else {
              *(uint8 **)((long)register0x00000020 + -0xb0) =
                   rVar1.bytes + (lVar7 + 2U & -lVar12 >> 0x3f);
              *(uint8 **)((long)register0x00000020 + -0xa8) =
                   *(uint8 **)((long)register0x00000020 + 8);
              *(long *)((long)register0x00000020 + -0xa0) = lVar9;
              *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x535175;
              runtime_memmove();
              lVar12 = *(long *)((long)register0x00000020 + 0x20);
                    /* Unresolved local var: []uint8 tb@[???] */
              rVar1.bytes = *(uint8 **)((long)register0x00000020 + -0x10);
              lVar7 = *(long *)((long)register0x00000020 + 0x20);
              uVar2 = *(ulong *)((long)register0x00000020 + -0x40);
            }
            if (0 < lVar12) {
              if (uVar2 < *(ulong *)((long)register0x00000020 + -0x58)) {
                    /* WARNING: Subroutine does not return */
                *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x5352c5;
                runtime_panicSliceB();
              }
              lVar9 = uVar2 - *(long *)((long)register0x00000020 + -0x38);
              uVar2 = lVar9 - 2;
              lVar12 = *(long *)((long)register0x00000020 + -0x48);
              uVar8 = lVar12 + 1;
              uVar3 = uVar2;
              if ((long)uVar8 < (long)uVar2) {
                uVar3 = uVar8;
              }
              sVar15.len = rVar1.bytes +
                           (*(ulong *)((long)register0x00000020 + -0x58) & (long)-uVar2 >> 0x3f);
              if ((uint8 *)((long)register0x00000020 + -0x2c) == sVar15.len) {
                bVar13 = uVar8 < uVar2;
                bVar14 = uVar8 == uVar2;
              }
              else {
                *(ulong *)((long)register0x00000020 + -0x60) = uVar8;
                *(ulong *)((long)register0x00000020 + -0x38) = uVar2;
                *(uint8 **)((long)register0x00000020 + -0x18) = sVar15.len;
                *(long *)((long)register0x00000020 + -0x40) = lVar9;
                *(uint8 **)((long)register0x00000020 + -0xb0) = sVar15.len;
                *(uint8 **)((long)register0x00000020 + -0xa8) =
                     (uint8 *)((long)register0x00000020 + -0x2c);
                *(ulong *)((long)register0x00000020 + -0xa0) = uVar3;
                *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x535214;
                runtime_memmove();
                uVar8 = *(ulong *)((long)register0x00000020 + -0x60);
                bVar13 = uVar8 < *(ulong *)((long)register0x00000020 + -0x38);
                bVar14 = uVar8 == *(ulong *)((long)register0x00000020 + -0x38);
                lVar7 = *(long *)((long)register0x00000020 + 0x20);
                sVar15.len = *(uint8 **)((long)register0x00000020 + -0x18);
                lVar9 = *(long *)((long)register0x00000020 + -0x40);
                lVar12 = *(long *)((long)register0x00000020 + -0x48);
                rVar1.bytes = *(uint8 **)((long)register0x00000020 + -0x10);
              }
              if (!bVar13 && !bVar14) {
                    /* WARNING: Subroutine does not return */
                *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x5352b5;
                runtime_panicSliceB();
              }
              lVar12 = (lVar9 - lVar12) + -3;
              lVar9 = lVar12;
              if (lVar7 < lVar12) {
                lVar9 = lVar7;
              }
              if (*(uint8 **)((long)register0x00000020 + 0x18) !=
                  sVar15.len + (-lVar12 >> 0x3f & uVar8)) {
                *(uint8 **)((long)register0x00000020 + -0xb0) =
                     sVar15.len + (-lVar12 >> 0x3f & uVar8);
                *(uint8 **)((long)register0x00000020 + -0xa8) =
                     *(uint8 **)((long)register0x00000020 + 0x18);
                *(long *)((long)register0x00000020 + -0xa0) = lVar9;
                *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x53528a;
                runtime_memmove();
                rVar1.bytes = *(uint8 **)((long)register0x00000020 + -0x10);
              }
            }
            *(uint8 **)((long)register0x00000020 + 0x30) = rVar1.bytes;
            return (reflect_name)rVar1.bytes;
          }
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x5352d4;
          runtime_panicIndex();
        }
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0;
        *(char **)((long)register0x00000020 + -0xa8) =
             "reflect.nameFrom: tag too long: reflect: NumIn of non-func type removespecial on invalid pointerresource temporarily unavailableruntime: mcall function returnedruntime: newstack called from g=runtime: root level max pages = runtime: stack split at bad timeruntime: sudog with non-nil elemruntime: sudog with non-nil nextruntime: sudog with non-nil prevscanstack: goroutine not stoppedskipping TypeExtendedMlpsFecFlowslice bounds out of range [%x::]slice bounds out of range [:%x:]slice bounds out of range [::%x]software caused connection abortsweep increased allocation countsync: Unlock of unlocked RWMutexsync: negative WaitGroup countertls: NextProtos values too largetls: unknown Renegotiation valuetransform: short internal bufferuse of closed network connectionx509: ECDSA verification failurex509: cannot parse rfc822Name %qx509: invalid constraint value: x509: malformed subjectPublicKeyx509: unsupported elliptic curve of method on nil interface value142108547152020037174224853515625710542735760100185871124267578125BCMCSControlServersDomainNameListBayStack 450 10/100/1000 SwitchesDestination address is the serverE.164 with NSAP format subaddressEthernet Routing Switch 4550T-PWREthernetCTP skip count is odd: %dExtended MPLS LVP FEC Flow RecordGODEBUG sys/cpu: can not enable \"GODEBUG: no value specified for \"Invalid SCTP common header lengthNot all IP header bytes availableOPTera Metro 8010co OPM L2 SwitchRR Set that should exist does notSIGCHLD: child status has changedSIGTTIN: background read from ttySIGXFSZ: file size limit exceededServer Not Authoritative for zoneUnable to decode SCTPChunkType %dbad point length: %d, expected %dbase outside usable address spacebytes.Buffer.Grow: negative countconcurrent map read and map writecrypto/aes: output not full blockcrypto/des: output not full blockcrypto: requested hash function #findrunnable: negative nmspinningfreeing stack not in a stack spanheapBitsSetType: unexpected shifthttp2: invalid pseudo headers: %vhttp2: recursive push not allowedhttp: CloseIdleConnections call..." /* TRUNCATED STRING LITERAL */
        ;
        *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x20;
        *(undefined8 *)((long)register0x00000020 + -0x98) =
             *(undefined8 *)((long)register0x00000020 + 0x18);
        *(undefined8 *)((long)register0x00000020 + -0x90) = 0x400;
        *(undefined **)((long)register0x00000020 + -0x88) = &DAT_00287894;
        *(undefined8 *)((long)register0x00000020 + -0x80) = 3;
        *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x535359;
        a1.len = iVar6;
        a1.str = puVar10;
        a0.len = (int)puVar11;
        a0.str = sVar15.len;
        a2.len = in_R9;
        a2.str = in_R8;
        sVar15 = runtime_concatstring3((runtime_tmpBuf *)&DAT_00287894,a0,a1,a2);
        *(uint8 **)((long)register0x00000020 + -0xb0) =
             *(uint8 **)((long)register0x00000020 + -0x78);
        *(undefined8 *)((long)register0x00000020 + -0xa8) =
             *(undefined8 *)((long)register0x00000020 + -0x70);
        *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x535371;
        sVar15.str = *(uint8 **)((long)register0x00000020 + -0x78);
        runtime_convTstring(sVar15);
        puVar11 = &DAT_00225520;
        *(undefined **)((long)register0x00000020 + -0xb0) = &DAT_00225520;
        *(runtime__type **)((long)register0x00000020 + -0xa8) =
             *(runtime__type **)((long)register0x00000020 + -0xa0);
        *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x53538b;
        e.data = sVar15.len;
        e._type = *(runtime__type **)((long)register0x00000020 + -0xa0);
        runtime_gopanic(e);
      }
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0;
      *(char **)((long)register0x00000020 + -0xa8) =
           "reflect.nameFrom: name too long: reflect: Field index out of rangereflect: NumOut of non-func type reflect: array index out of rangereflect: slice index out of rangeruntime: castogscanstatus oldval=runtime: failed mSpanList.insert runtime: goroutine stack exceeds runtime: memory allocated by OS [runtime: name offset out of rangeruntime: text offset out of rangeruntime: type offset out of rangescalar has high bit set illegallyslice bounds out of range [%x:%y]stackalloc not on scheduler stackstoplockedm: inconsistent lockingstruct contains unexported fieldssync: RUnlock of unlocked RWMutextimer period must be non-negativetls: failed to write to key log: tls: invalid server finished hashtls: unexpected ServerKeyExchangetoo many Answers to pack (>65535)too many levels of remote in pathtoo many levels of symbolic linkstoo many references: can\'t spliceunsupported transfer encoding: %qwaiting for unsupported file typex509: SAN rfc822Name is malformedx509: invalid RSA public exponentx509: invalid basic constraints ax509: invalid basic constraints bx509: invalid basic constraints cx509: invalid extended key usages%s %q is excluded by constraint %q3552713678800500929355621337890625: day-of-year does not match monthAlteon Application Switch 2424-SSLAuhenticated Mesh Perring ExchangeBaseContext returned a nil contextBayStack 380-24F Fiber 1000 SwitchBayStack 670 wireless access pointCould not extract Link State type.Ethernet Routing Switch 4548GT-PWREthernet Routing Switch 5530-24TFDExtended Decapsulate Egress RecordExtended IPv4 Tunnel Egress RecordExtended IPv6 Tunnel Egress RecordFibre Channel World-Wide Node NameFibre Channel World-Wide Port NameGODEBUG sys/cpu: can not disable \"ICMPv6Option(%s:%v/%v:%t:%t:%v:%v)IPSec AH packet less than 12 bytesInvalid Address Protocol length %dLayer type not currently supportedMIPv6VisitedHomeNetworkInformationOther_Default_Ignorable_Code_PointPacket too smal for OSPF Version 2Packet too smal for OSPF Version 3SIGURG: urgent condition on socketTLS 1.3, client CertificateVerify"
      ;
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x21;
      *(undefined8 *)((long)register0x00000020 + -0x98) =
           *(undefined8 *)((long)register0x00000020 + 8);
      *(undefined8 *)((long)register0x00000020 + -0x90) = 0x400;
      *(undefined **)((long)register0x00000020 + -0x88) = &DAT_00287894;
      *(undefined8 *)((long)register0x00000020 + -0x80) = 3;
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x5353d8;
      a1_00.len = iVar6;
      a1_00.str = puVar10;
      a0_00.len = (int)puVar11;
      a0_00.str = sVar15.len;
      a2_00.len = in_R9;
      a2_00.str = in_R8;
      sVar15 = runtime_concatstring3((runtime_tmpBuf *)&DAT_00287894,a0_00,a1_00,a2_00);
      val.len = (uint8 *)sVar15.len;
      *(uint8 **)((long)register0x00000020 + -0xb0) = *(uint8 **)((long)register0x00000020 + -0x78);
      *(undefined8 *)((long)register0x00000020 + -0xa8) =
           *(undefined8 *)((long)register0x00000020 + -0x70);
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x5353f0;
      val.str = *(uint8 **)((long)register0x00000020 + -0x78);
      runtime_convTstring(val);
      puVar11 = &DAT_00225520;
      *(undefined **)((long)register0x00000020 + -0xb0) = &DAT_00225520;
      *(runtime__type **)((long)register0x00000020 + -0xa8) =
           *(runtime__type **)((long)register0x00000020 + -0xa0);
      *(undefined8 *)((long)register0x00000020 + -0xb8) = 0x53540a;
      e_00.data = val.len;
      e_00._type = *(runtime__type **)((long)register0x00000020 + -0xa0);
      runtime_gopanic(e_00);
      sVar15.len = val.len;
    }
    *(undefined8 *)(puVar5 + -8) = 0x535410;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar5;
  } while( true );
}

