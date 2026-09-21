
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.(*rtype).Len(reflect.rtype * t, int ~r0) */

int reflect___rtype__Len(reflect_rtype *t)

{
  reflect_rtype *t_00;
  runtime_tmpBuf *buf;
  int iVar1;
  undefined1 *puVar2;
  undefined1 *unaff_RBP;
  int in_RSI;
  uint8 *in_RDI;
  long in_FS_OFFSET;
  string sVar3;
  interface___ e;
  string a1;
  string a0;
  reflect_arrayType *tt;
  
  do {
    puVar2 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar2 = (undefined1 *)((long)register0x00000020 + -0x40);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      t_00 = *(reflect_rtype **)((long)register0x00000020 + 8);
      if ((t_00->kind & 0x1f) == 0x11) {
        iVar1._0_4_ = t_00[1].hash;
        iVar1._4_1_ = t_00[1].tflag;
        iVar1._5_1_ = t_00[1].align;
        iVar1._6_1_ = t_00[1].fieldAlign;
        iVar1._7_1_ = t_00[1].kind;
        *(int *)((long)register0x00000020 + 0x10) = iVar1;
        return iVar1;
      }
      *(reflect_rtype **)((long)register0x00000020 + -0x40) = t_00;
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x53604f;
      sVar3 = reflect___rtype__String(t_00);
      a0.str = (uint8 *)sVar3.len;
      buf = *(runtime_tmpBuf **)((long)register0x00000020 + -0x38);
      iVar1 = *(int *)((long)register0x00000020 + -0x30);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
      *(char **)((long)register0x00000020 + -0x38) =
           "reflect: Len of non-array type resetspinning: not a spinning mruntime: cannot allocate memoryruntime: split stack overflow: skipping TypeExtendedMlpsVcFlowslice bounds out of range [%x:]slice bounds out of range [:%x]tls: failed to sign handshake: tls: no certificates configuredtls: unsupported public key: %Ttoo many transfer encodings: %qx509: certificate is valid for x509: malformed GeneralizedTimex509: malformed subjectUniqueIDx509: malformed tbs certificate (types from different packages)28421709430404007434844970703125: day-of-year does not match dayAlcatel Ethernet workgroup conc.Alteon SSL 410 10/100/1000 FiberBFD packet length does not matchBSS Available Admission CapacityBayStack 250 10/100 Ethernet HubCannot set rfmon for this handleClientNetworkInterfaceIdentifierDMG Link Adaption AcknowledgmentEthernet Routing Switch 2500-26TEthernet Routing Switch 2500-50TEthernet Routing Switch 5510-24TEthernet Routing Switch 5510-48TExtended MPLS Tunnel Flow RecordFailoverPartnerRawClientLeadTimeIPv6 header TLV option too smallInvalid TCP option length %d < 2MapIter.Value called before NextNon Transmitted BSSID CapabilityNortel Networks VPN Gateway 3050Nortel Networks VPN Gateway 3070RR Set Exists when it should notSIGFPE: floating-point exceptionSIGTTOU: background write to ttyUnable to decode EthernetType %dUnsupported SFlow sample type %dUnsupported flow record type: %d\" not supported for cpu option \"bad input point: low order pointbufio: invalid use of UnreadBytebufio: invalid use of UnreadRunebufio: tried to fill full buffercan\'t send after socket shutdowncannot represent time as UTCTimechacha20: invalid buffer overlapchacha20poly1305: bad key lengthcrypto/aes: input not full blockcrypto/des: input not full blocked25519: bad public key length: end outside usable address spacego package net: hostLookupOrder(http2: server ignoring frame: %vinteger is not minimally encodedinternal error: bigIntToFiatP521invalid range: failed to overlapmime: expected token after slashnon-Go code disabled sigaltstacknot permitted i..." /* TRUNCATED STRING LITERAL */
      ;
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x1f;
      *(runtime_tmpBuf **)((long)register0x00000020 + -0x28) = buf;
      *(int *)((long)register0x00000020 + -0x20) = iVar1;
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x536085;
      a1.len = in_RSI;
      a1.str = in_RDI;
      a0.len = iVar1;
      sVar3 = runtime_concatstring2(buf,a0,a1);
      *(uint8 **)((long)register0x00000020 + -0x40) = *(uint8 **)((long)register0x00000020 + -0x18);
      *(undefined8 *)((long)register0x00000020 + -0x38) =
           *(undefined8 *)((long)register0x00000020 + -0x10);
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x53609d;
      sVar3.str = *(uint8 **)((long)register0x00000020 + -0x18);
      runtime_convTstring(sVar3);
      *(undefined **)((long)register0x00000020 + -0x40) = &DAT_00225520;
      *(runtime__type **)((long)register0x00000020 + -0x38) =
           *(runtime__type **)((long)register0x00000020 + -0x30);
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x5360b7;
      e.data = sVar3.len;
      e._type = *(runtime__type **)((long)register0x00000020 + -0x30);
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar2 + -8) = 0x5360bd;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar2;
  } while( true );
}

