
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.setCheckmark(uintptr obj, uintptr base, uintptr off,
   runtime.markBits mbits, bool ~r4) */

bool runtime_setCheckmark
               (uintptr param_1,undefined8 param_2,undefined8 param_3,uintptr off,undefined8 param_5
               ,undefined8 param_6,uintptr param_7,uintptr param_8,uintptr param_9,uint8 *param_10,
               uint8 param_11)

{
  ulong uVar1;
  byte *pbVar2;
  byte bVar3;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string label;
  string label_00;
  string s_03;
  uintptr obj_spill;
  uintptr base_spill;
  uintptr off_spill;
  runtime_markBits mbits_spill;
  
                    /* Unresolved local var: runtime.heapArena * arena@[???]
                       Unresolved local var: uintptr arenaWord@[???]
                       Unresolved local var: uint8 * bytep@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if ((*mbits_spill.bytep & mbits_spill.mask) == 0) {
    runtime_printlock();
    runtime_printlock();
    s.len._0_1_ = mbits_spill.mask;
    s.str = &DAT_002aaca5;
    s.len._1_7_ = 0;
    runtime_printstring(s);
    runtime_printhex(obj_spill);
    runtime_printnl();
    runtime_printunlock();
    runtime_printlock();
    s_00.len._0_1_ = mbits_spill.mask;
    s_00.str = &DAT_0029e79f;
    s_00.len._1_7_ = 0;
    runtime_printstring(s_00);
    runtime_printhex(base_spill);
    s_01.len._0_1_ = mbits_spill.mask;
    s_01.str = (uint8 *)&net__stmp_20;
    s_01.len._1_7_ = 0;
    runtime_printstring(s_01);
    runtime_printhex(off_spill);
    s_02.len._0_1_ = mbits_spill.mask;
    s_02.str = &DAT_00287783;
    s_02.len._1_7_ = 0;
    runtime_printstring(s_02);
    runtime_printunlock();
    label.len._0_1_ = mbits_spill.mask;
    label.str = (uint8 *)off_spill;
    label.len._1_7_ = 0;
    runtime_gcDumpObject(label,off,param_1);
    label_00.len._0_1_ = mbits_spill.mask;
    label_00.str = (uint8 *)obj_spill;
    label_00.len._1_7_ = 0;
    runtime_gcDumpObject(label_00,off,param_1);
    *(undefined1 *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0x131) = 2;
    s_03.len._0_1_ = mbits_spill.mask;
    s_03.str = (uint8 *)
               "checkmark found unmarked objectentersyscallblock inconsistent fatal: bad g in signal handler\nfmt: unknown base; can\'t happenhash/crc32: tables do not matchhttp2: connection error: %v: %vinternal error - misuse of itabinvalid network interface indexmalformed time zone informationnon in-use span in unswept listpacer: sweep done at heap size pattern contains path separatorreflect.MakeSlice: negative capreflect.MakeSlice: negative lenreflect: Len of non-array type resetspinning: not a spinning mruntime: cannot allocate memoryruntime: split stack overflow: skipping TypeExtendedMlpsVcFlowslice bounds out of range [%x:]slice bounds out of range [:%x]tls: failed to sign handshake: tls: no certificates configuredtls: unsupported public key: %Ttoo many transfer encodings: %qx509: certificate is valid for x509: malformed GeneralizedTimex509: malformed subjectUniqueIDx509: malformed tbs certificate (types from different packages)28421709430404007434844970703125: day-of-year does not match dayAlcatel Ethernet workgroup conc.Alteon SSL 410 10/100/1000 FiberBFD packet length does not matchBSS Available Admission CapacityBayStack 250 10/100 Ethernet HubCannot set rfmon for this handleClientNetworkInterfaceIdentifierDMG Link Adaption AcknowledgmentEthernet Routing Switch 2500-26TEthernet Routing Switch 2500-50TEthernet Routing Switch 5510-24TEthernet Routing Switch 5510-48TExtended MPLS Tunnel Flow RecordFailoverPartnerRawClientLeadTimeIPv6 header TLV option too smallInvalid TCP option length %d < 2MapIter.Value called before NextNon Transmitted BSSID CapabilityNortel Networks VPN Gateway 3050Nortel Networks VPN Gateway 3070RR Set Exists when it should notSIGFPE: floating-point exceptionSIGTTOU: background write to ttyUnable to decode EthernetType %dUnsupported SFlow sample type %dUnsupported flow record type: %d\" not supported for cpu option \"bad input point: low order pointbufio: invalid use of UnreadBytebufio: invalid use of UnreadRunebufio: tried to fill full buffercan\'t send after socket shutdowncannot represent time as UTCT..." /* TRUNCATED STRING LITERAL */
    ;
    s_03.len._1_7_ = 0;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_03);
  }
  uVar1 = obj_spill + 0x800000000000 >> 0x1a;
  if (0x3fffff < uVar1) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndexU();
  }
  pbVar2 = (byte *)(*(long *)("*norm.reorderBuffer" +
                             (long)((*runtime_mheap_.arenas[0])[uVar1]->bitmap + 3)) +
                   (obj_spill >> 0x1d & 0xfffff));
  bVar3 = (byte)(1 << ((byte)(obj_spill >> 0x1a) & 7));
  if ((bVar3 & *pbVar2) != 0) {
    return SUB81(pbVar2,0);
  }
  LOCK();
  *pbVar2 = *pbVar2 | bVar3;
  UNLOCK();
  return SUB81(pbVar2,0);
}

