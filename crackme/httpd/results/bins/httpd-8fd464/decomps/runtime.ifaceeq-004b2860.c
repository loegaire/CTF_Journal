
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.ifaceeq(runtime.itab * tab, void * x, void * y, bool ~r3)
    */

bool runtime_ifaceeq(runtime_itab *tab,void *x,void *y)

{
  runtime__type *t;
  func_unsafe_Pointer__unsafe_Pointer__bool **ppfVar1;
  func_unsafe_Pointer__unsafe_Pointer__bool *pfVar2;
  runtime_tmpBuf *buf;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *unaff_RBP;
  void *in_RSI;
  uint8 *in_RDI;
  long in_FS_OFFSET;
  string sVar5;
  interface___ e;
  string a0;
  string a1;
  runtime_itab *tab_spill;
  void *x_spill;
  void *y_spill;
  
  do {
                    /* Unresolved local var: runtime._type * t@[???]
                       Unresolved local var: func(unsafe.Pointer,_unsafe.Pointer)_bool * * eq@[???]
                        */
    puVar4 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar4 = (undefined1 *)((long)register0x00000020 + -0x40);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      if (*(long *)((long)register0x00000020 + 8) == 0) {
        *(undefined1 *)((long)register0x00000020 + 0x20) = 1;
        return false;
      }
      t = *(runtime__type **)(*(long *)((long)register0x00000020 + 8) + 8);
      ppfVar1 = t->equal;
      if (ppfVar1 != (func_unsafe_Pointer__unsafe_Pointer__bool **)0x0) {
        if ((t->kind & 0x20) != 0) {
          *(bool *)((long)register0x00000020 + 0x20) =
               *(long *)((long)register0x00000020 + 0x18) ==
               *(long *)((long)register0x00000020 + 0x10);
          return SUB81(*(long *)((long)register0x00000020 + 0x18),0);
        }
        pfVar2 = *ppfVar1;
        *(undefined8 *)((long)register0x00000020 + -0x40) =
             *(undefined8 *)((long)register0x00000020 + 0x10);
        *(undefined8 *)((long)register0x00000020 + -0x38) =
             *(undefined8 *)((long)register0x00000020 + 0x18);
        *(undefined8 *)((long)register0x00000020 + -0x48) = 0x4b28d9;
        (*pfVar2)(in_RDI,in_RSI,(bool *)ppfVar1);
        *(undefined1 *)((long)register0x00000020 + 0x20) =
             *(undefined1 *)((long)register0x00000020 + -0x30);
        return (bool)*(undefined1 *)((long)register0x00000020 + -0x30);
      }
      *(runtime__type **)((long)register0x00000020 + -0x40) = t;
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x4b2905;
      sVar5 = runtime____type__string(t);
      a0.str = (uint8 *)sVar5.len;
      buf = *(runtime_tmpBuf **)((long)register0x00000020 + -0x38);
      iVar3 = *(int *)((long)register0x00000020 + -0x30);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
      *(char **)((long)register0x00000020 + -0x38) =
           "comparing uncomparable type crypto/rsa: decryption errorcurrent time %s is before %sdestination address requiredfatal: morestack on gsignal\nfindrunnable: netpoll with pfound pointer to free objectgcBgMarkWorker: mode not setgcstopm: negative nmspinninghttp2: client conn is closedhttp: request body too largeinability-exists-associationinvalid P-521 field encodinginvalid byte in chunk lengthinvalid first SIP line: \'%s\'invalid header field name %qinvalid proxy address %q: %vinvalid runtime symbol tablemalformed MIME header line: mheap.freeSpanLocked - span missing required Host headermissing stack in shrinkstackmspan.sweep: m is not lockedmultipart: message too largenewproc1: new g is not Gdeadnewproc1: newg missing stacknotewakeup - double wakeup (os: process already finishedpending ASN.1 child too longreflect.MakeSlice: len > capregion exceeds uintptr rangeruntime: bad lfnode address runtime: casgstatus: oldval=runtime: kevent failed with runtime: kqueue failed with runtime: no module data for save on system g not allowedskipping TypeExtendedNatFlowtext/plain; charset=utf-16betext/plain; charset=utf-16leunreserving unaligned regionunsupported compression for unsupported protocol versionx509: invalid DSA parametersx509: invalid DSA public keyx509: invalid RSA public key- Layer %d (%02d bytes) = %s\n45474735088646411895751953125BayStack 10 Power Supply UnitBayStack 303 and 304 SwitchesCisco CCX1 CKIP + Device NameEthernet Routing Switch 4550TExtended MPLS FEC Flow RecordFailoverMaximumClientLeadTimeHTTP/1.1 %d %s: %s%s%d %s: %sInvalid Address TLV length %dInvalid Address TLV number %dMCCAOP Advertisement OverviewMon, 02 Jan 2006 15:04:05 GMTNSYM mod 10!=9 or no short GINon-Authoritative InformationPFLog data less than 60 bytesPassport 8300 10-slot chassisProxy Authentication RequiredS46Lightweight4Over6ContainerSIGPIPE: write to broken pipeTime.UnmarshalBinary: no dataToken Ring Interface CountersUnable to decode Dot11Type %dUnable to decode EAPOLType %dUnable to decode PPPoECode %dUnavailable For Legal ReasonsWide B..." /* TRUNCATED STRING LITERAL */
      ;
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x1c;
      *(runtime_tmpBuf **)((long)register0x00000020 + -0x28) = buf;
      *(int *)((long)register0x00000020 + -0x20) = iVar3;
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x4b293b;
      a0.len = iVar3;
      a1.len = (int)in_RSI;
      a1.str = in_RDI;
      sVar5 = runtime_concatstring2(buf,a0,a1);
      *(uint8 **)((long)register0x00000020 + -0x40) = *(uint8 **)((long)register0x00000020 + -0x18);
      *(undefined8 *)((long)register0x00000020 + -0x38) =
           *(undefined8 *)((long)register0x00000020 + -0x10);
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x4b2953;
      sVar5.str = *(uint8 **)((long)register0x00000020 + -0x18);
      runtime_convTstring(sVar5);
      *(undefined **)((long)register0x00000020 + -0x40) = &DAT_00237b20;
      *(runtime__type **)((long)register0x00000020 + -0x38) =
           *(runtime__type **)((long)register0x00000020 + -0x30);
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x4b296d;
      e.data = sVar5.len;
      e._type = *(runtime__type **)((long)register0x00000020 + -0x30);
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar4 + -8) = 0x4b2973;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar4;
  } while( true );
}

