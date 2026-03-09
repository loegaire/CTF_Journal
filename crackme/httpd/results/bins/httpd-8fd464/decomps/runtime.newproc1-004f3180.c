
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.newproc1(runtime.funcval * fn, void * argp, int32 narg,
   runtime.g * callergp, uintptr callerpc, runtime.g * ~r5) */

runtime_g *
runtime_newproc1(runtime_funcval *fn,void *argp,int32 narg,runtime_g *callergp,uintptr callerpc)

{
  uintptr uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  runtime_p *_p_;
  long lVar5;
  uint64 uVar6;
  char cVar7;
  long lVar8;
  runtime_g *extraout_RAX;
  runtime_g *prVar9;
  runtime_p *extraout_RAX_00;
  runtime_p *gp;
  long *plVar10;
  uintptr *puVar11;
  uint uVar12;
  uint oldval;
  long in_FS_OFFSET;
  runtime_funcInfo rVar13;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  runtime_funcval *fn_spill;
  void *argp_spill;
  int32 siz;
  runtime_g *callergp_spill;
  uintptr callerpc_spill;
  runtime_g *local_60;
  uintptr local_58;
  
                    /* Unresolved local var: runtime.g * _g_@[DW_OP_reg0(RAX)]
                       Unresolved local var: runtime.p * _p_@[???]
                       Unresolved local var: runtime.g * newg@[???]
                       Unresolved local var: uintptr sp@[???]
                       Unresolved local var: uintptr spArg@[???]
                       Unresolved local var: void * ~R0@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x18)) {
    runtime_morestackc();
  }
  _p_ = *(runtime_p **)(in_FS_OFFSET + -8);
  if (fn_spill == (runtime_funcval *)0x0) {
    *(undefined4 *)((_p_->sysmontick).syscallwhen + 0xfc) = 0xffffffff;
    s_03.len = (int)argp;
    s_03.str = &DAT_0029bf82;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_03);
  }
  piVar2 = (int *)((_p_->sysmontick).syscallwhen + 0x110);
  *piVar2 = *piVar2 + 1;
  s_00.len._0_4_ = siz + 7U & 0xfffffff8;
  if (0x7d7 < (int)(uint)s_00.len) {
    s_02.len._0_4_ = (uint)s_00.len;
    s_02.str = &DAT_002aa64b;
    s_02.len._4_4_ = 0;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_02);
  }
  lVar5 = *(long *)((_p_->sysmontick).syscallwhen + 0xd8);
  runtime_gfget(_p_);
  if (local_60 == (runtime_g *)0x0) {
    runtime_malg(0);
    runtime_casgstatus((runtime_g *)0x0,(uint)s_00.len,0);
    runtime_allgadd((runtime_g *)0x0);
  }
  if ((local_60->stack).hi == 0) {
    s_01.len._0_4_ = (uint)s_00.len;
    s_01.str = (uint8 *)
               "newproc1: newg missing stacknotewakeup - double wakeup (os: process already finishedpending ASN.1 child too longreflect.MakeSlice: len > capregion exceeds uintptr rangeruntime: bad lfnode address runtime: casgstatus: oldval=runtime: kevent failed with runtime: kqueue failed with runtime: no module data for save on system g not allowedskipping TypeExtendedNatFlowtext/plain; charset=utf-16betext/plain; charset=utf-16leunreserving unaligned regionunsupported compression for unsupported protocol versionx509: invalid DSA parametersx509: invalid DSA public keyx509: invalid RSA public key- Layer %d (%02d bytes) = %s\n45474735088646411895751953125BayStack 10 Power Supply UnitBayStack 303 and 304 SwitchesCisco CCX1 CKIP + Device NameEthernet Routing Switch 4550TExtended MPLS FEC Flow RecordFailoverMaximumClientLeadTimeHTTP/1.1 %d %s: %s%s%d %s: %sInvalid Address TLV length %dInvalid Address TLV number %dMCCAOP Advertisement OverviewMon, 02 Jan 2006 15:04:05 GMTNSYM mod 10!=9 or no short GINon-Authoritative InformationPFLog data less than 60 bytesPassport 8300 10-slot chassisProxy Authentication RequiredS46Lightweight4Over6ContainerSIGPIPE: write to broken pipeTime.UnmarshalBinary: no dataToken Ring Interface CountersUnable to decode Dot11Type %dUnable to decode EAPOLType %dUnable to decode PPPoECode %dUnavailable For Legal ReasonsWide Bandwidth Channel Switchaddspecial on invalid pointerapplication/vnd.ms-fontobjectbufio.Scanner: token too longcrypto/aes: invalid key size crypto/des: invalid key size crypto/rc4: invalid key size dns index walked out of rangeexecuting on Go runtime stackgc done but gcphase != _GCoffgfput: bad status (not Gdead)http2: client conn not usablehttp: idle connection timeouthttp: panic serving %v: %v\n%sinteger not minimally-encodedinternal error: took too muchinvalid header field value %qinvalid length of trace eventio: read/write on closed pipemime: invalid media parametermismatched local address typeoperation already in progresspadding contained in alphabetpkcs12: odd-length BMP stringprotocol f..." /* TRUNCATED STRING LITERAL */
    ;
    s_01.len._4_4_ = 0;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_01);
  }
  if (local_60->atomicstatus != 6) {
    s_00.str = (uint8 *)
               "newproc1: new g is not Gdeadnewproc1: newg missing stacknotewakeup - double wakeup (os: process already finishedpending ASN.1 child too longreflect.MakeSlice: len > capregion exceeds uintptr rangeruntime: bad lfnode address runtime: casgstatus: oldval=runtime: kevent failed with runtime: kqueue failed with runtime: no module data for save on system g not allowedskipping TypeExtendedNatFlowtext/plain; charset=utf-16betext/plain; charset=utf-16leunreserving unaligned regionunsupported compression for unsupported protocol versionx509: invalid DSA parametersx509: invalid DSA public keyx509: invalid RSA public key- Layer %d (%02d bytes) = %s\n45474735088646411895751953125BayStack 10 Power Supply UnitBayStack 303 and 304 SwitchesCisco CCX1 CKIP + Device NameEthernet Routing Switch 4550TExtended MPLS FEC Flow RecordFailoverMaximumClientLeadTimeHTTP/1.1 %d %s: %s%s%d %s: %sInvalid Address TLV length %dInvalid Address TLV number %dMCCAOP Advertisement OverviewMon, 02 Jan 2006 15:04:05 GMTNSYM mod 10!=9 or no short GINon-Authoritative InformationPFLog data less than 60 bytesPassport 8300 10-slot chassisProxy Authentication RequiredS46Lightweight4Over6ContainerSIGPIPE: write to broken pipeTime.UnmarshalBinary: no dataToken Ring Interface CountersUnable to decode Dot11Type %dUnable to decode EAPOLType %dUnable to decode PPPoECode %dUnavailable For Legal ReasonsWide Bandwidth Channel Switchaddspecial on invalid pointerapplication/vnd.ms-fontobjectbufio.Scanner: token too longcrypto/aes: invalid key size crypto/des: invalid key size crypto/rc4: invalid key size dns index walked out of rangeexecuting on Go runtime stackgc done but gcphase != _GCoffgfput: bad status (not Gdead)http2: client conn not usablehttp: idle connection timeouthttp: panic serving %v: %v\n%sinteger not minimally-encodedinternal error: took too muchinvalid header field value %qinvalid length of trace eventio: read/write on closed pipemime: invalid media parametermismatched local address typeoperation already in progresspadding contained in alphabetpkcs12: odd..." /* TRUNCATED STRING LITERAL */
    ;
    s_00.len._4_4_ = 0;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_00);
  }
  uVar1 = ((local_60->stack).hi - (long)(int)(uint)s_00.len) - 0x20;
  cVar7 = (char)local_58;
  if (0 < siz) {
    local_58 = (uintptr)siz;
    runtime_memmove();
    cVar7 = (char)siz;
    if ((runtime_writeBarrier.needed != false) &&
       (*(char *)(*(long *)((_p_->sysmontick).syscallwhen + 200) + 0xb6) == '\0')) {
                    /* Unresolved local var: runtime.stackmap * stkmap@[???] */
      rVar13 = runtime_findfunc((uintptr)fn_spill);
      s.len = rVar13.datap;
                    /* Unresolved local var: void * p@[???] */
      if (*(char *)((long)argp_spill + 0x2b) == '\0') {
        lVar8 = 0;
      }
      else {
        uVar3 = *(uint *)((long)argp_spill + 0x20);
        plVar10 = (long *)((long)argp_spill + (ulong)uVar3 * 4 + 0x2c);
        if (((uint)plVar10 >> 2 & 1) != 0) {
          if (((uint)argp_spill >> 2 & 1) != 0) {
            runtime_printlock();
            s.str = &DAT_0029ee6b;
            runtime_printstring(s);
            runtime_printpointer(argp_spill);
            runtime_printnl();
            runtime_printunlock();
          }
          plVar10 = (long *)((long)argp_spill + (ulong)uVar3 * 4 + 0x30);
        }
        lVar8 = *plVar10;
      }
      if (0 < *(int *)(lVar8 + 4)) {
        local_58 = (long)*(int *)(lVar8 + 4) << 3;
        runtime_bulkBarrierBitmap
                  (lVar8 + 8,(uintptr)s.len,local_58,(uintptr)callergp,(uint8 *)callerpc);
      }
      cVar7 = (char)local_58;
    }
  }
  local_58._0_1_ = cVar7;
  runtime_memclrNoHeapPointers();
  (local_60->sched).sp = uVar1;
  local_60->stktopsp = uVar1;
  (local_60->sched).pc = 0x5199e1;
  (local_60->sched).g = (runtime_guintptr)local_60;
                    /* Unresolved local var: void * fn@[???]
                       Unresolved local var: uintptr sp@[???] */
  puVar11 = (uintptr *)((local_60->sched).sp - 8);
  uVar1 = fn_spill->fn;
  *puVar11 = (local_60->sched).pc;
  (local_60->sched).sp = (uintptr)puVar11;
  (local_60->sched).pc = uVar1;
  if (runtime_writeBarrier._0_4_ == 0) {
    (local_60->sched).ctxt = fn_spill;
    prVar9 = local_60;
  }
  else {
    runtime_gcWriteBarrierBX();
    prVar9 = extraout_RAX;
  }
  prVar9->gopc = callerpc_spill;
  runtime_saveAncestors(prVar9);
  prVar9 = local_60;
  if (runtime_writeBarrier._0_4_ == 0) {
    local_60->ancestors = (__runtime_ancestorInfo *)&DAT_00000038;
  }
  else {
    runtime_gcWriteBarrier();
  }
  prVar9->startpc = fn_spill->fn;
  lVar8 = *(long *)((_p_->sysmontick).syscallwhen + 200);
  gp = _p_;
  if (lVar8 != 0) {
    if (runtime_writeBarrier._0_4_ == 0) {
      prVar9->labels = *(void **)(lVar8 + 0x168);
    }
    else {
      runtime_gcWriteBarrierDX();
      gp = extraout_RAX_00;
    }
  }
  runtime_isSystemGoroutine((runtime_g *)gp,SUB81(fn_spill,0));
  if ((char)local_58 != '\0') {
    LOCK();
    runtime_sched.ngsys = runtime_sched.ngsys + 1;
    UNLOCK();
  }
                    /* Unresolved local var: runtime.m * mp@[???]
                       Unresolved local var: uint32 s1@[???]
                       Unresolved local var: uint32 s0@[???] */
  lVar8 = *(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30);
  uVar12 = *(uint *)(lVar8 + 0x128);
  uVar3 = *(uint *)(lVar8 + 300);
  *(uint *)(lVar8 + 0x128) = uVar3;
  uVar12 = uVar12 ^ uVar12 << 0x11;
  oldval = uVar12 >> 7 ^ uVar3 ^ uVar12;
  uVar12 = uVar3 >> 0x10 ^ oldval;
  *(uint *)(lVar8 + 300) = uVar12;
  uVar3 = uVar3 + uVar12;
  local_60->trackingSeq = (uint8)uVar3;
  if ((uVar3 & 7) == 0) {
    local_60->tracking = true;
  }
  runtime_casgstatus((runtime_g *)0x100000006,oldval,(uint32)local_60);
  uVar6 = runtime_sched.goidgen;
  if (*(long *)(lVar5 + 0x5e8) == *(long *)(lVar5 + 0x5e0)) {
    LOCK();
    UNLOCK();
    lVar8 = runtime_sched.goidgen + 1;
    runtime_sched.goidgen = runtime_sched.goidgen + 0x10;
    *(long *)(lVar5 + 0x5e0) = lVar8;
    *(uint64 *)(lVar5 + 0x5e8) = uVar6 + 0x11;
  }
  local_60->goid = *(int64 *)(lVar5 + 0x5e0);
  *(long *)(lVar5 + 0x5e0) = *(long *)(lVar5 + 0x5e0) + 1;
  if (runtime_trace.enabled != false) {
    runtime_traceGoCreate((runtime_g *)local_60->startpc,(ulong)oldval);
  }
  prVar9 = (runtime_g *)(_p_->sysmontick).syscallwhen;
                    /* Unresolved local var: runtime.g * _g_@[???] */
  lVar5 = *(long *)(in_FS_OFFSET + -8);
  iVar4 = (int)prVar9->sigcode0;
  *(int *)&prVar9->sigcode0 = iVar4 + -1;
  if ((iVar4 == 1) && (*(char *)(lVar5 + 0xb1) != '\0')) {
    *(undefined8 *)(lVar5 + 0x10) = 0xfffffffffffffade;
  }
  return prVar9;
}

