
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.typesEqual(runtime._type * t, runtime._type * v,
   map[runtime._typePair]struct_{} seen, bool ~r3) */

bool runtime_typesEqual(runtime__type *t,runtime__type *v,map_runtime__typePair_struct___ seen)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  runtime_nameOff off;
  uintptr uVar5;
  undefined1 extraout_AL;
  undefined1 extraout_AL_00;
  undefined1 uVar6;
  undefined1 extraout_AL_01;
  undefined1 extraout_AL_02;
  undefined1 extraout_AL_03;
  undefined1 extraout_AL_04;
  undefined1 extraout_AL_05;
  undefined1 extraout_AL_06;
  bool bVar7;
  runtime__type *prVar8;
  void *ptrInModule;
  ulong uVar9;
  long lVar10;
  byte bVar11;
  ulong uVar12;
  runtime__type *v_00;
  ulong uVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  string sVar15;
  string s;
  multireturn_void___bool_ mVar16;
  runtime_arraytype *at;
  runtime_arraytype *av;
  map_runtime__typePair_struct___ seen_spill;
  undefined8 local_120;
  runtime_name local_118;
  char local_110;
  char local_108;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  runtime__type *local_88;
  map_runtime__typePair_struct___ local_80;
  map_runtime__typePair_struct___ local_78;
  uintptr *local_70;
  map_runtime__typePair_struct___ local_68;
  undefined8 local_60;
  map_runtime__typePair_struct___ local_58;
  uint8 *local_50;
  runtime_name local_48;
  runtime__type *local_40;
  runtime__type *local_38;
  runtime__type *local_30;
  runtime__type *local_28;
  map_runtime__typePair_struct___ local_20;
  undefined1 local_18 [16];
  
                    /* Unresolved local var: uint8 kind@[???]
                       Unresolved local var: runtime.uncommontype * ut@[???]
                       Unresolved local var: runtime.uncommontype * uv@[???]
                       Unresolved local var: runtime._typePair tp@[???]
                       Unresolved local var: void * ~R0@[???] */
  while (&local_a8 <= *(long **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  mVar16 = runtime_mapaccess2((runtime_maptype *)at,(runtime_hmap *)seen_spill,av);
  if (local_108 != '\0') {
    return mVar16.~r3._0_1_;
  }
  local_120 = seen_spill;
  local_118.bytes = local_18;
  runtime_mapassign((runtime_maptype *)at,(runtime_hmap *)local_118.bytes,av);
  bVar7 = SUB81(av,0);
  if (av == at) {
    return bVar7;
  }
  bVar1 = (at->typ).kind;
  bVar11 = bVar1 & 0x1f;
  if (((av->typ).kind & 0x1f) != bVar11) {
    return bVar7;
  }
  runtime____type__string(&av->typ);
  sVar15 = runtime____type__string((runtime__type *)local_118.bytes);
  runtime_memequal();
  if (local_110 == '\0') {
    return (bool)extraout_AL;
  }
  runtime____type__uncommon(&at->typ);
  local_78 = seen_spill;
  runtime____type__uncommon((runtime__type *)seen_spill);
  if (local_78 == (map_runtime__typePair_struct___)0x0) {
    uVar6 = 0;
    if (seen_spill != (map_runtime__typePair_struct___)0x0) {
LAB_0051125a:
      return SUB81(seen_spill,0);
    }
  }
  else {
    if (seen_spill == (map_runtime__typePair_struct___)0x0) goto LAB_0051125a;
    local_80 = seen_spill;
    uVar4 = (uint)local_78->count;
    local_120._4_4_ = (undefined4)((ulong)seen_spill >> 0x20);
    local_120 = (map_runtime__typePair_struct___)CONCAT44(local_120._4_4_,uVar4);
    runtime_resolveNameOff((void *)(ulong)uVar4,(runtime_nameOff)sVar15.len);
    runtime_name_name(local_118);
    uVar4 = (uint)local_80->count;
    local_60 = local_120;
    local_120 = (map_runtime__typePair_struct___)CONCAT44(local_120._4_4_,uVar4);
    runtime_resolveNameOff((void *)(ulong)uVar4,(runtime_nameOff)av);
    runtime_name_name(local_118);
    runtime_memequal();
    uVar6 = extraout_AL_00;
    if (local_110 == '\0') {
      return (bool)extraout_AL_00;
    }
  }
  if ((byte)(bVar11 - 1) < 0x10) {
    return (bool)uVar6;
  }
  if (0x15 < bVar11) {
    if (bVar11 < 0x18) {
      if (bVar11 != 0x16) {
        runtime_typesEqual((runtime__type *)seen_spill,(runtime__type *)(ulong)bVar11,
                           (map_runtime__typePair_struct___)av->elem);
        return (bool)local_110;
      }
      runtime_typesEqual((runtime__type *)seen_spill,(runtime__type *)&DAT_00000016,
                         (map_runtime__typePair_struct___)av->elem);
      return (bool)local_110;
    }
    if (bVar11 != 0x18) {
      if (bVar11 == 0x19) {
        if (at->len != av->len) {
          return bVar7;
        }
        runtime_name_name((runtime_name)at->elem);
        local_20 = local_120;
        runtime_name_name(local_118);
        runtime_memequal();
        if (local_110 == '\0') {
          return (bool)extraout_AL_02;
        }
                    /* Unresolved local var: int i@[???] */
        uVar5 = at->len;
        uVar9 = 0;
        while( true ) {
          if ((long)uVar5 <= (long)uVar9) {
            return SUB81(uVar9,0);
          }
          if (at->len <= uVar9) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          if (av->len <= uVar9) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          local_30 = av->slice;
          local_28 = at->slice;
          runtime_name_name((uint8 *)(&at->slice->size)[uVar9 * 3]);
          local_20 = local_120;
          runtime_name_name(local_118);
          runtime_memequal();
          if (local_110 == '\0') break;
          local_120 = (map_runtime__typePair_struct___)(&local_30->ptrdata)[uVar9 * 3];
          bVar7 = runtime_typesEqual((runtime__type *)(uVar9 * 3),local_30,
                                     (map_runtime__typePair_struct___)local_28);
          if (local_110 == '\0') {
            return bVar7;
          }
          runtime_name_tag((uint8 *)(uVar9 * 3));
          local_20 = local_120;
          runtime_name_tag((runtime_name)seen_spill);
          local_118.bytes = (uint8 *)seen_spill;
          runtime_memequal();
          if (local_110 == '\0') {
            return (bool)extraout_AL_04;
          }
          if (*(long *)(&local_30->hash + uVar9 * 6) != *(long *)(&local_28->hash + uVar9 * 6)) {
            return (bool)extraout_AL_04;
          }
          uVar9 = uVar9 + 1;
        }
        return (bool)extraout_AL_03;
      }
      if (bVar11 != 0x1a) goto LAB_00511879;
    }
    return (bool)uVar6;
  }
  if (0x12 < bVar11) {
                    /* Unresolved local var: []*runtime._type tin@[???]
                       Unresolved local var: []*runtime._type vin@[???]
                       Unresolved local var: []*runtime._type tout@[???]
                       Unresolved local var: []*runtime._type vout@[???]
                       Unresolved local var: runtime._type * * ~R0.ptr@[???]
                       Unresolved local var: int ~R0.len@[???] */
    if (bVar11 == 0x13) {
      if (*(short *)((long)&av->elem + 2) == *(short *)((long)&at->elem + 2)) {
        uVar2 = *(ushort *)&at->elem;
        uVar3 = *(ushort *)&av->elem;
        if (uVar3 == uVar2) {
                    /* Unresolved local var: uintptr uadd@[???] */
          if (((at->typ).tflag & 1) == 0) {
            local_98 = 0x38;
          }
          else {
            local_98 = 0x48;
          }
          local_98 = (long)&(at->typ).size + local_98;
          if (0x100000 < (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
            runtime_panicSliceAlen();
          }
                    /* Unresolved local var: uintptr uadd@[???] */
          if (((av->typ).tflag & 1) == 0) {
            local_90 = 0x38;
          }
          else {
            local_90 = 0x48;
          }
          local_90 = (long)&(av->typ).size + local_90;
                    /* Unresolved local var: int i@[???] */
          prVar8 = (runtime__type *)0x0;
          while( true ) {
            if ((long)(ulong)uVar2 <= (long)prVar8) {
              if (((at->typ).tflag & 1) == 0) {
                lVar10 = 0x38;
              }
              else {
                lVar10 = 0x48;
              }
              uVar13 = (ulong)*(ushort *)&at->elem;
              uVar9 = (ulong)((*(ushort *)((long)&at->elem + 2) & 0x7fff) +
                              (uint)*(ushort *)&at->elem & 0xffff);
              if (uVar9 < uVar13) {
                    /* WARNING: Subroutine does not return */
                runtime_panicSliceB();
              }
              local_a8 = (long)&(at->typ).size +
                         ((long)(uVar13 - 0x100000) >> 0x3f & uVar13 << 3) + lVar10;
              if (((av->typ).tflag & 1) == 0) {
                lVar10 = 0x38;
              }
              else {
                lVar10 = 0x48;
              }
              uVar14 = (ulong)*(ushort *)&av->elem;
              uVar12 = (ulong)((*(ushort *)((long)&av->elem + 2) & 0x7fff) +
                               (uint)*(ushort *)&av->elem & 0xffff);
              if (uVar12 < uVar14) {
                    /* WARNING: Subroutine does not return */
                runtime_panicSliceB();
              }
              v_00 = (runtime__type *)(uVar12 - uVar14);
              local_a0 = (long)&(av->typ).size +
                         (uVar14 << 3 & (long)(uVar14 - 0x100000) >> 0x3f) + lVar10;
              prVar8 = (runtime__type *)0x0;
                    /* Unresolved local var: int i@[???] */
              while( true ) {
                if ((long)(uVar9 - uVar13) <= (long)prVar8) {
                  return SUB81(prVar8,0);
                }
                if (v_00 <= prVar8) break;
                bVar7 = runtime_typesEqual(prVar8,v_00,
                                           *(map_runtime__typePair_struct___ *)
                                            (local_a0 + (long)prVar8 * 8));
                if (local_110 == '\0') {
                  return bVar7;
                }
                prVar8 = (runtime__type *)((long)&prVar8->size + 1);
              }
                    /* WARNING: Subroutine does not return */
              runtime_panicIndex();
            }
            if ((runtime__type *)(ulong)uVar3 <= prVar8) {
                    /* WARNING: Subroutine does not return */
              runtime_panicIndex();
            }
            bVar7 = runtime_typesEqual(prVar8,&at->typ,
                                       *(map_runtime__typePair_struct___ *)
                                        (local_90 + (long)prVar8 * 8));
            if (local_110 == '\0') break;
            prVar8 = (runtime__type *)((long)&prVar8->size + 1);
                    /* Unresolved local var: uintptr uadd@[???]
                       Unresolved local var: uint16 outCount@[???] */
                    /* Unresolved local var: uintptr uadd@[???]
                       Unresolved local var: uint16 outCount@[???] */
          }
          return bVar7;
        }
      }
      return (bool)uVar6;
    }
    if (bVar11 != 0x14) {
      prVar8 = av->elem;
      runtime_typesEqual(&at->typ,prVar8,seen_spill);
      if (local_110 == '\0') {
        local_110 = '\0';
      }
      else {
        runtime_typesEqual((runtime__type *)seen_spill,prVar8,
                           (map_runtime__typePair_struct___)av->slice);
      }
      return (bool)local_110;
    }
    runtime_name_name((runtime_name)at);
    local_20 = local_120;
    runtime_name_name(local_118);
    runtime_memequal();
    if (local_110 == '\0') {
      return (bool)extraout_AL_01;
    }
    uVar5 = at->len;
    if (av->len != uVar5) {
      return (bool)extraout_AL_01;
    }
    ptrInModule = (void *)0x0;
                    /* Unresolved local var: int i@[???] */
    while( true ) {
      if ((long)uVar5 <= (long)ptrInModule) {
        return SUB81(ptrInModule,0);
      }
                    /* Unresolved local var: runtime.imethod * tm@[???]
                       Unresolved local var: runtime.imethod * vm@[???]
                       Unresolved local var: runtime._type * tityp@[???]
                       Unresolved local var: runtime._type * vityp@[???] */
      if ((void *)at->len <= ptrInModule) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      if ((void *)av->len <= ptrInModule) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      local_70 = &at->slice->size + (long)ptrInModule;
      local_40 = at->slice;
      local_38 = av->slice;
      runtime_resolveNameOff(ptrInModule,(runtime_nameOff)uVar5);
      local_88 = (runtime__type *)(&local_38->size + (long)ptrInModule);
      off = (runtime_nameOff)(&local_38->size)[(long)ptrInModule];
      local_48.bytes = local_118.bytes;
      local_120 = (map_runtime__typePair_struct___)CONCAT44(local_120._4_4_,off);
      runtime_resolveNameOff(ptrInModule,off);
      local_50 = local_118.bytes;
      runtime_name_name(local_118);
      local_58 = local_120;
      runtime_name_name(local_118);
      runtime_memequal();
      if (local_110 == '\0') break;
      runtime_name_pkgPath(local_48);
      local_20 = local_120;
      sVar15 = runtime_name_pkgPath(local_118);
      runtime_memequal();
      if (local_110 == '\0') {
        return (bool)extraout_AL_06;
      }
      runtime_resolveTypeOff(ptrInModule,(runtime_typeOff)sVar15.len);
      prVar8 = local_88;
      local_68 = (map_runtime__typePair_struct___)local_118.bytes;
      runtime_resolveTypeOff(local_118.bytes,(runtime_typeOff)local_88);
      local_120 = (map_runtime__typePair_struct___)local_118.bytes;
      local_118.bytes = (uint8 *)seen_spill;
      bVar7 = runtime_typesEqual((runtime__type *)seen_spill,prVar8,local_68);
      if (local_110 == '\0') {
        return bVar7;
      }
      ptrInModule = (void *)((long)ptrInModule + 1);
    }
    return (bool)extraout_AL_05;
  }
  if (bVar11 == 0x11) {
    runtime_typesEqual(&at->typ,av->elem,seen_spill);
    if (local_110 == '\0') {
      bVar7 = false;
    }
    else {
      bVar7 = av->len == at->len;
    }
    return bVar7;
  }
  if (bVar11 == 0x12) {
    if (av->slice == at->slice) {
      runtime_typesEqual((runtime__type *)seen_spill,(runtime__type *)&DAT_00000012,
                         (map_runtime__typePair_struct___)av->elem);
    }
    else {
      local_110 = '\0';
    }
    return (bool)local_110;
  }
LAB_00511879:
  runtime_printlock();
  sVar15.len._0_1_ = bVar11;
  sVar15.str = (uint8 *)
               "runtime: impossible type kind socket operation on non-socketstream error: stream ID %d; %vsync: inconsistent mutex statesync: unlock of unlocked mutextext/javascript; charset=utf-8transform: short source bufferx509: SAN dNSName is malformedx509: invalid ECDSA parametersx509: malformed issuerUniqueID) not in usable address space: ...additional frames elided...\n11368683772161602973937988281255684341886080801486968994140625BayStack 380 10/100/1000 SwitchCLIENT_HANDSHAKE_TRAFFIC_SECRETHT Capabilities (802.11n D1.10)Invalid counter record type: %dManufacturerUsageDescriptionURLNetwork Authentication RequiredOPTera Metro 8003 OPM L2 SwitchOPTera Metro 8006 OPM L2 SwitchOPTera Metro 8010 OPM L2 SwitchOverlapping BSS Scan ParametersPRIORITY frame with stream ID 0PartialOrderConnectionPermittedRequest Header Fields Too LargeRequested Range Not SatisfiableSERVER_HANDSHAKE_TRAFFIC_SECRETSIGSEGV: segmentation violationTLS: sequence number wraparoundUnrecognized VRRPv2 type field.bad certificate status responsebad write barrier buffer boundscall from within the Go runtimecannot-support-all-capabilitiescasgstatus: bad incoming valuescheckmark found unmarked objectentersyscallblock inconsistent fatal: bad g in signal handler\nfmt: unknown base; can\'t happenhash/crc32: tables do not matchhttp2: connection error: %v: %vinternal error - misuse of itabinvalid network interface indexmalformed time zone informationnon in-use span in unswept listpacer: sweep done at heap size pattern contains path separatorreflect.MakeSlice: negative capreflect.MakeSlice: negative lenreflect: Len of non-array type resetspinning: not a spinning mruntime: cannot allocate memoryruntime: split stack overflow: skipping TypeExtendedMlpsVcFlowslice bounds out of range [%x:]slice bounds out of range [:%x]tls: failed to sign handshake: tls: no certificates configuredtls: unsupported public key: %Ttoo many transfer encodings: %qx509: certificate is valid for x509: malformed GeneralizedTimex509: malformed subjectUniqueIDx509: malformed tbs certificate (types from..." /* TRUNCATED STRING LITERAL */
  ;
  sVar15.len._1_7_ = 0;
  runtime_printstring(sVar15);
  runtime_printuint((ulong)(bVar1 & 0x1f));
  runtime_printnl();
  runtime_printunlock();
  s.len._0_1_ = bVar11;
  s.str = (uint8 *)
          "runtime: impossible type kindruntime: levelShift[level] = runtime: marking free object runtime: p.gcMarkWorkerMode= runtime: split stack overflowruntime: sudog with non-nil cruntime: summary max pages = runtime: unknown pc in defer semacquire not on the G stackskipping TypeExtendedMlpsFlowskipping TypeExtendedVlanFlowstring concatenation too longsyntax error scanning booleantls: invalid NextProtos valuetls: invalid server key sharetls: too many ignored recordstoo many open files in systemunknown IP protocol specifiedunknown certificate authorityx509: cannot parse URI %q: %sx509: cannot parse dnsName %qx509: malformed serial numberx509: unsupported time formatzero length OBJECT IDENTIFIER (types from different scopes) in prepareForSweep; sweepgen  locals stack map entries for , wire length %d cap length %d227373675443232059478759765625802.1Q tag length %d too shortAlteon Application Switch 2208Alteon Application Switch 2216Alteon Application Switch 2224Alteon Application Switch 2424Alteon Application Switch 3408Alteon Application Switch 3416BCMCSControlServersAddressListCollocated Interference ReportControl Detection Time ExpiredE.164 (SMDS, Frame Relay, ATM)Ethernet Routing Switch 4526FXEthernet Routing Switch 4548GTFine Tuning Measure ParametersFragmentReassemblyTimeExceededGODEBUG: unknown cpu feature \"GTP packet too small: %d bytesHEADERS frame with stream ID 0HT Information (802.11n D1.10)Invalid TCP data offset %d < 5MapIter.Key called before NextMeasurement Pilot TransmissionMesh Channel Switch ParametersName Exists when it should notNeighbor Signaled Session DownNot enough bytes to decode: %dReverse Concatenated Path DownSIGPROF: profiling alarm clockSIGUSR1: user-defined signal 1SIGUSR2: user-defined signal 2SIGVTALRM: virtual alarm clockUDP packet too small: %d bytesUnable to decode IPProtocol %dUnable to determine IGMP type.Unable to determine OSPF type.Unknown information element idabi mismatch detected between asn1: cannot marshal nil valueassignment to entry in nil mapcan\'t assign requested addressch..." /* TRUNCATED STRING LITERAL */
  ;
  s.len._1_7_ = 0;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s);
}

