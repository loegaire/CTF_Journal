
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.(*rtype).NumIn(reflect.rtype * t, int ~r0) */

int reflect___rtype__NumIn(reflect_rtype *t)

{
  reflect_rtype *t_00;
  runtime_tmpBuf *buf;
  int iVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *unaff_RBP;
  int in_RSI;
  uint8 *in_RDI;
  long in_FS_OFFSET;
  string a0;
  string sVar4;
  string val;
  interface___ e;
  reflect_funcType *tt;
  
  do {
    puVar3 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar3 = (undefined1 *)((long)register0x00000020 + -0x40);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      t_00 = *(reflect_rtype **)((long)register0x00000020 + 8);
      if ((t_00->kind & 0x1f) == 0x13) {
        uVar2 = (ulong)(ushort)t_00[1].size;
        *(ulong *)((long)register0x00000020 + 0x10) = uVar2;
        return uVar2;
      }
      *(reflect_rtype **)((long)register0x00000020 + -0x40) = t_00;
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x53620f;
      sVar4 = reflect___rtype__String(t_00);
      a0.str = (uint8 *)sVar4.len;
      buf = *(runtime_tmpBuf **)((long)register0x00000020 + -0x38);
      iVar1 = *(int *)((long)register0x00000020 + -0x30);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
      *(char **)((long)register0x00000020 + -0x38) =
           "reflect: NumIn of non-func type removespecial on invalid pointerresource temporarily unavailableruntime: mcall function returnedruntime: newstack called from g=runtime: root level max pages = runtime: stack split at bad timeruntime: sudog with non-nil elemruntime: sudog with non-nil nextruntime: sudog with non-nil prevscanstack: goroutine not stoppedskipping TypeExtendedMlpsFecFlowslice bounds out of range [%x::]slice bounds out of range [:%x:]slice bounds out of range [::%x]software caused connection abortsweep increased allocation countsync: Unlock of unlocked RWMutexsync: negative WaitGroup countertls: NextProtos values too largetls: unknown Renegotiation valuetransform: short internal bufferuse of closed network connectionx509: ECDSA verification failurex509: cannot parse rfc822Name %qx509: invalid constraint value: x509: malformed subjectPublicKeyx509: unsupported elliptic curve of method on nil interface value142108547152020037174224853515625710542735760100185871124267578125BCMCSControlServersDomainNameListBayStack 450 10/100/1000 SwitchesDestination address is the serverE.164 with NSAP format subaddressEthernet Routing Switch 4550T-PWREthernetCTP skip count is odd: %dExtended MPLS LVP FEC Flow RecordGODEBUG sys/cpu: can not enable \"GODEBUG: no value specified for \"Invalid SCTP common header lengthNot all IP header bytes availableOPTera Metro 8010co OPM L2 SwitchRR Set that should exist does notSIGCHLD: child status has changedSIGTTIN: background read from ttySIGXFSZ: file size limit exceededServer Not Authoritative for zoneUnable to decode SCTPChunkType %dbad point length: %d, expected %dbase outside usable address spacebytes.Buffer.Grow: negative countconcurrent map read and map writecrypto/aes: output not full blockcrypto/des: output not full blockcrypto: requested hash function #findrunnable: negative nmspinningfreeing stack not in a stack spanheapBitsSetType: unexpected shifthttp2: invalid pseudo headers: %vhttp2: recursive push not allowedhttp: CloseIdleConnections calledhttp: invalid Read on closed B..." /* TRUNCATED STRING LITERAL */
      ;
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x20;
      *(runtime_tmpBuf **)((long)register0x00000020 + -0x28) = buf;
      *(int *)((long)register0x00000020 + -0x20) = iVar1;
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x536245;
      sVar4.len = in_RSI;
      sVar4.str = in_RDI;
      a0.len = iVar1;
      sVar4 = runtime_concatstring2(buf,a0,sVar4);
      val.len = (void *)sVar4.len;
      *(uint8 **)((long)register0x00000020 + -0x40) = *(uint8 **)((long)register0x00000020 + -0x18);
      *(undefined8 *)((long)register0x00000020 + -0x38) =
           *(undefined8 *)((long)register0x00000020 + -0x10);
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x53625d;
      val.str = *(uint8 **)((long)register0x00000020 + -0x18);
      runtime_convTstring(val);
      *(undefined **)((long)register0x00000020 + -0x40) = &DAT_00225520;
      *(runtime__type **)((long)register0x00000020 + -0x38) =
           *(runtime__type **)((long)register0x00000020 + -0x30);
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x536277;
      e.data = val.len;
      e._type = *(runtime__type **)((long)register0x00000020 + -0x30);
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar3 + -8) = 0x53627d;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar3;
  } while( true );
}

