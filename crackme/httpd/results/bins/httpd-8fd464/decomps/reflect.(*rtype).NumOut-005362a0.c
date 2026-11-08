
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.(*rtype).NumOut(reflect.rtype * t, int ~r0) */

int reflect___rtype__NumOut(reflect_rtype *t)

{
  runtime_tmpBuf *buf;
  int iVar1;
  reflect_rtype *extraout_RAX;
  reflect_rtype *extraout_RAX_00;
  reflect_rtype *prVar2;
  long lVar3;
  long extraout_RDX;
  ushort uVar4;
  undefined1 *puVar5;
  undefined1 *unaff_RBP;
  int in_RSI;
  uint8 *in_RDI;
  long in_FS_OFFSET;
  string sVar6;
  string val;
  interface___ e;
  string a0;
  reflect_funcType *tt;
  
  do {
    puVar5 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar5 = (undefined1 *)((long)register0x00000020 + -0x40);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      lVar3 = *(long *)((long)register0x00000020 + 8);
      if ((*(byte *)(lVar3 + 0x17) & 0x1f) == 0x13) {
                    /* Unresolved local var: uint16 outCount@[???] */
        uVar4 = *(ushort *)(lVar3 + 0x32) & 0x7fff;
        if (uVar4 == 0) {
          lVar3 = 0;
          goto LAB_005362fb;
        }
        t = (reflect_rtype *)(ulong)*(ushort *)(lVar3 + 0x30);
        prVar2 = (reflect_rtype *)(ulong)(ushort)(uVar4 + *(ushort *)(lVar3 + 0x30));
        if (t <= prVar2) {
          lVar3 = (long)prVar2 - (long)t;
LAB_005362fb:
          *(long *)((long)register0x00000020 + 0x10) = lVar3;
          return (int)t;
        }
        *(undefined8 *)((long)register0x00000020 + -0x48) = 0x53630f;
        runtime_panicSlice3C();
        t = extraout_RAX;
        lVar3 = extraout_RDX;
      }
      *(long *)((long)register0x00000020 + -0x40) = lVar3;
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x536318;
      sVar6 = reflect___rtype__String(t);
      a0.str = (uint8 *)sVar6.len;
      buf = *(runtime_tmpBuf **)((long)register0x00000020 + -0x38);
      iVar1 = *(int *)((long)register0x00000020 + -0x30);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
      *(char **)((long)register0x00000020 + -0x38) =
           "reflect: NumOut of non-func type reflect: array index out of rangereflect: slice index out of rangeruntime: castogscanstatus oldval=runtime: failed mSpanList.insert runtime: goroutine stack exceeds runtime: memory allocated by OS [runtime: name offset out of rangeruntime: text offset out of rangeruntime: type offset out of rangescalar has high bit set illegallyslice bounds out of range [%x:%y]stackalloc not on scheduler stackstoplockedm: inconsistent lockingstruct contains unexported fieldssync: RUnlock of unlocked RWMutextimer period must be non-negativetls: failed to write to key log: tls: invalid server finished hashtls: unexpected ServerKeyExchangetoo many Answers to pack (>65535)too many levels of remote in pathtoo many levels of symbolic linkstoo many references: can\'t spliceunsupported transfer encoding: %qwaiting for unsupported file typex509: SAN rfc822Name is malformedx509: invalid RSA public exponentx509: invalid basic constraints ax509: invalid basic constraints bx509: invalid basic constraints cx509: invalid extended key usages%s %q is excluded by constraint %q3552713678800500929355621337890625: day-of-year does not match monthAlteon Application Switch 2424-SSLAuhenticated Mesh Perring ExchangeBaseContext returned a nil contextBayStack 380-24F Fiber 1000 SwitchBayStack 670 wireless access pointCould not extract Link State type.Ethernet Routing Switch 4548GT-PWREthernet Routing Switch 5530-24TFDExtended Decapsulate Egress RecordExtended IPv4 Tunnel Egress RecordExtended IPv6 Tunnel Egress RecordFibre Channel World-Wide Node NameFibre Channel World-Wide Port NameGODEBUG sys/cpu: can not disable \"ICMPv6Option(%s:%v/%v:%t:%t:%v:%v)IPSec AH packet less than 12 bytesInvalid Address Protocol length %dLayer type not currently supportedMIPv6VisitedHomeNetworkInformationOther_Default_Ignorable_Code_PointPacket too smal for OSPF Version 2Packet too smal for OSPF Version 3SIGURG: urgent condition on socketTLS 1.3, client CertificateVerify"
      ;
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x21;
      *(runtime_tmpBuf **)((long)register0x00000020 + -0x28) = buf;
      *(int *)((long)register0x00000020 + -0x20) = iVar1;
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x53634e;
      sVar6.len = in_RSI;
      sVar6.str = in_RDI;
      a0.len = iVar1;
      sVar6 = runtime_concatstring2(buf,a0,sVar6);
      val.len = (void *)sVar6.len;
      *(uint8 **)((long)register0x00000020 + -0x40) = *(uint8 **)((long)register0x00000020 + -0x18);
      *(undefined8 *)((long)register0x00000020 + -0x38) =
           *(undefined8 *)((long)register0x00000020 + -0x10);
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x536366;
      val.str = *(uint8 **)((long)register0x00000020 + -0x18);
      runtime_convTstring(val);
      *(undefined **)((long)register0x00000020 + -0x40) = &DAT_00225520;
      *(runtime__type **)((long)register0x00000020 + -0x38) =
           *(runtime__type **)((long)register0x00000020 + -0x30);
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x536385;
      e.data = val.len;
      e._type = *(runtime__type **)((long)register0x00000020 + -0x30);
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar5 + -8) = 0x53638b;
    runtime_morestack_noctxt();
    t = extraout_RAX_00;
    register0x00000020 = (BADSPACEBASE *)puVar5;
  } while( true );
}

