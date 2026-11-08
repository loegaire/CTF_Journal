
/* WARNING: Removing unreachable block (ram,0x004f9657) */
/* WARNING: Removing unreachable block (ram,0x004f9625) */
/* WARNING: Removing unreachable block (ram,0x004f95d7) */
/* WARNING: Removing unreachable block (ram,0x004f9511) */
/* WARNING: Removing unreachable block (ram,0x004f9509) */
/* WARNING: Removing unreachable block (ram,0x004f9411) */
/* WARNING: Removing unreachable block (ram,0x004f93e5) */
/* WARNING: Removing unreachable block (ram,0x004f93b8) */
/* WARNING: Removing unreachable block (ram,0x004f95be) */
/* WARNING: Removing unreachable block (ram,0x004f95f0) */
/* WARNING: Removing unreachable block (ram,0x004f9609) */
/* WARNING: Removing unreachable block (ram,0x004f963e) */
/* WARNING: Removing unreachable block (ram,0x004f96a5) */
/* WARNING: Removing unreachable block (ram,0x004f96d7) */
/* WARNING: Removing unreachable block (ram,0x004f9709) */
/* WARNING: Removing unreachable block (ram,0x004f9670) */
/* WARNING: Removing unreachable block (ram,0x004f96be) */
/* WARNING: Removing unreachable block (ram,0x004f9689) */
/* WARNING: Removing unreachable block (ram,0x004f9549) */
/* WARNING: Removing unreachable block (ram,0x004f96f0) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_check(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_RBX;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  char local_40;
  int local_1c;
  
                    /* Unresolved local var: int32 e@[???]
                       Unresolved local var: float32 i@[???]
                       Unresolved local var: float32 i1@[???]
                       Unresolved local var: float64 j@[???]
                       Unresolved local var: float64 j1@[???]
                       Unresolved local var: uint8[4] m@[???]
                       Unresolved local var: uint32 z@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  uVar1 = 0;
  lVar4 = 0xb3a4b57ce31;
                    /* Unresolved local var: int32 res@[???]
                       Unresolved local var: int bit@[???] */
  for (lVar3 = 0x1e; -1 < lVar3; lVar3 = lVar3 + -1) {
    unaff_RBX = 1000000000L << ((byte)lVar3 & 0x3f);
    if (unaff_RBX <= lVar4) {
      lVar4 = lVar4 - unaff_RBX;
      uVar1 = uVar1 | 1 << ((uint)lVar3 & 0x1f);
    }
  }
  if (lVar4 < 1000000000) {
    local_1c = (int)lVar4;
  }
  else {
    local_1c = 0;
    uVar1 = 0x7fffffff;
  }
  if ((uVar1 == 0x3039) && (local_1c == 0xd431)) {
    LOCK();
    UNLOCK();
    LOCK();
    UNLOCK();
    LOCK();
    UNLOCK();
    LOCK();
    UNLOCK();
    LOCK();
    UNLOCK();
    runtime_testAtomic64();
    uVar2 = 0;
                    /* Unresolved local var: uint s@[???] */
    while( true ) {
      s_00.len._0_4_ = 1 << ((byte)uVar2 & 0x1f) & -(uint)(uVar2 < 0x20);
      if (0x7ff < (int)(uint)s_00.len) break;
      uVar2 = uVar2 + 1;
    }
    if ((uint)s_00.len != 0x800) {
      s_00.str = (uint8 *)
                 "FixedStack is not power-of-2IPv6 header option too smallInvalid IP packet version %vInvalid loopback protocol %qMIC (Message Integrity Code)MLDv1MulticastListenerReportMLDv2MulticastListenerReportPassport 8300 6-slot chassisPrepended_Concatenation_MarkSIGCONT: continue after stopSIGHUP: terminal line hangupSIGWINCH: window size changeSignature out of time windowSource address is the serverTraffic Indication Map (TIM)Unable to decode LinkType %d[originating from goroutine application/x-rar-compressedasn1: string not valid UTF-8cannot unmarshal DNS messagecomparing uncomparable type crypto/rsa: decryption errorcurrent time %s is before %sdestination address requiredfatal: morestack on gsignal\nfindrunnable: netpoll with pfound pointer to free objectgcBgMarkWorker: mode not setgcstopm: negative nmspinninghttp2: client conn is closedhttp: request body too largeinability-exists-associationinvalid P-521 field encodinginvalid byte in chunk lengthinvalid first SIP line: \'%s\'invalid header field name %qinvalid proxy address %q: %vinvalid runtime symbol tablemalformed MIME header line: mheap.freeSpanLocked - span missing required Host headermissing stack in shrinkstackmspan.sweep: m is not lockedmultipart: message too largenewproc1: new g is not Gdeadnewproc1: newg missing stacknotewakeup - double wakeup (os: process already finishedpending ASN.1 child too longreflect.MakeSlice: len > capregion exceeds uintptr rangeruntime: bad lfnode address runtime: casgstatus: oldval=runtime: kevent failed with runtime: kqueue failed with runtime: no module data for save on system g not allowedskipping TypeExtendedNatFlowtext/plain; charset=utf-16betext/plain; charset=utf-16leunreserving unaligned regionunsupported compression for unsupported protocol versionx509: invalid DSA parametersx509: invalid DSA public keyx509: invalid RSA public key- Layer %d (%02d bytes) = %s\n45474735088646411895751953125BayStack 10 Power Supply UnitBayStack 303 and 304 SwitchesCisco CCX1 CKIP + Device NameEthernet Routing Switch 4550TExtended MPLS FEC Flow Rec..." /* TRUNCATED STRING LITERAL */
      ;
      s_00.len._4_4_ = 0;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_00);
    }
    runtime_checkASM();
    if (local_40 == '\0') {
      s.len._0_4_ = 0x800;
      s.str = &DAT_0029d127;
      s.len._4_4_ = 0;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s);
    }
    return;
  }
  s_01.len = unaff_RBX;
  s_01.str = &DAT_002910b7;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_01);
}

