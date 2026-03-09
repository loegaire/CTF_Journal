
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.(*rtype).Out(reflect.rtype * t, int i, reflect.Type ~r1)
    */

reflect_Type reflect___rtype__Out(reflect_rtype *t,int i)

{
  runtime_tmpBuf *buf;
  int iVar1;
  long lVar2;
  runtime_itab *prVar3;
  reflect_rtype *extraout_RAX;
  reflect_rtype *extraout_RAX_00;
  ulong uVar4;
  void *pvVar5;
  undefined1 *puVar6;
  long lVar7;
  long extraout_RDX;
  ushort uVar8;
  undefined1 *unaff_RBP;
  ulong in_RSI;
  uint8 *in_RDI;
  long in_FS_OFFSET;
  reflect_Type rVar9;
  string sVar10;
  interface___ e;
  string a1;
  string a0;
  reflect_funcType *tt;
  int i_spill;
  
  do {
    puVar6 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar6 = (undefined1 *)((long)register0x00000020 + -0x40);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      lVar7 = *(long *)((long)register0x00000020 + 8);
      if ((*(byte *)(lVar7 + 0x17) & 0x1f) == 0x13) {
                    /* Unresolved local var: uintptr uadd@[???]
                       Unresolved local var: uint16 outCount@[???] */
        if ((*(byte *)(lVar7 + 0x14) & 1) == 0) {
          lVar2 = 0x38;
        }
        else {
          lVar2 = 0x48;
        }
        uVar8 = *(ushort *)(lVar7 + 0x32) & 0x7fff;
        if (uVar8 == 0) {
          pvVar5 = (void *)0x0;
          lVar7 = 0;
          goto LAB_00536433;
        }
        in_RSI = (ulong)*(ushort *)(lVar7 + 0x30);
        uVar4 = (ulong)(ushort)(uVar8 + *(ushort *)(lVar7 + 0x30));
        if (in_RSI <= uVar4) {
          pvVar5 = (void *)(uVar4 - in_RSI);
          lVar7 = lVar7 + lVar2 + (in_RSI << 3 & -(long)pvVar5 >> 0x3f);
LAB_00536433:
          if (*(void **)((long)register0x00000020 + 0x10) < pvVar5) {
            prVar3 = *(runtime_itab **)
                      (lVar7 + (long)*(void **)((long)register0x00000020 + 0x10) * 8);
            if (prVar3 == (runtime_itab *)0x0) {
              puVar6 = (undefined1 *)0x0;
              prVar3 = (runtime_itab *)0x0;
            }
            else {
              puVar6 = go_itab__reflect_rtype_reflect_Type;
            }
            *(undefined1 **)((long)register0x00000020 + 0x18) = puVar6;
            *(runtime_itab **)((long)register0x00000020 + 0x20) = prVar3;
            rVar9.data = pvVar5;
            rVar9.tab = prVar3;
            return rVar9;
          }
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)register0x00000020 + -0x48) = 0x53646f;
          runtime_panicIndex();
        }
        *(undefined8 *)((long)register0x00000020 + -0x48) = 0x536476;
        runtime_panicSlice3C();
        t = extraout_RAX;
        lVar7 = extraout_RDX;
      }
      *(long *)((long)register0x00000020 + -0x40) = lVar7;
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x53647f;
      sVar10 = reflect___rtype__String(t);
      a0.str = (uint8 *)sVar10.len;
      buf = *(runtime_tmpBuf **)((long)register0x00000020 + -0x38);
      iVar1 = *(int *)((long)register0x00000020 + -0x30);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
      *(char **)((long)register0x00000020 + -0x38) =
           "reflect: Out of non-func type running on the wrong goroutinerunqputslow: queue is not fullruntime: bad g in cgocallback\nruntime: bad pointer in frame runtime: found in object at *(runtime: impossible type kind socket operation on non-socketstream error: stream ID %d; %vsync: inconsistent mutex statesync: unlock of unlocked mutextext/javascript; charset=utf-8transform: short source bufferx509: SAN dNSName is malformedx509: invalid ECDSA parametersx509: malformed issuerUniqueID) not in usable address space: ...additional frames elided...\n11368683772161602973937988281255684341886080801486968994140625BayStack 380 10/100/1000 SwitchCLIENT_HANDSHAKE_TRAFFIC_SECRETHT Capabilities (802.11n D1.10)Invalid counter record type: %dManufacturerUsageDescriptionURLNetwork Authentication RequiredOPTera Metro 8003 OPM L2 SwitchOPTera Metro 8006 OPM L2 SwitchOPTera Metro 8010 OPM L2 SwitchOverlapping BSS Scan ParametersPRIORITY frame with stream ID 0PartialOrderConnectionPermittedRequest Header Fields Too LargeRequested Range Not SatisfiableSERVER_HANDSHAKE_TRAFFIC_SECRETSIGSEGV: segmentation violationTLS: sequence number wraparoundUnrecognized VRRPv2 type field.bad certificate status responsebad write barrier buffer boundscall from within the Go runtimecannot-support-all-capabilitiescasgstatus: bad incoming valuescheckmark found unmarked objectentersyscallblock inconsistent fatal: bad g in signal handler\nfmt: unknown base; can\'t happenhash/crc32: tables do not matchhttp2: connection error: %v: %vinternal error - misuse of itabinvalid network interface indexmalformed time zone informationnon in-use span in unswept listpacer: sweep done at heap size pattern contains path separatorreflect.MakeSlice: negative capreflect.MakeSlice: negative lenreflect: Len of non-array type resetspinning: not a spinning mruntime: cannot allocate memoryruntime: split stack overflow: skipping TypeExtendedMlpsVcFlowslice bounds out of range [%x:]slice bounds out of range [:%x]tls: failed to sign handshake: tls: no certificates configuredtls: unsupported p..." /* TRUNCATED STRING LITERAL */
      ;
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x1e;
      *(runtime_tmpBuf **)((long)register0x00000020 + -0x28) = buf;
      *(int *)((long)register0x00000020 + -0x20) = iVar1;
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x5364b5;
      a1.len = in_RSI;
      a1.str = in_RDI;
      a0.len = iVar1;
      sVar10 = runtime_concatstring2(buf,a0,a1);
      *(uint8 **)((long)register0x00000020 + -0x40) = *(uint8 **)((long)register0x00000020 + -0x18);
      *(undefined8 *)((long)register0x00000020 + -0x38) =
           *(undefined8 *)((long)register0x00000020 + -0x10);
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x5364cd;
      sVar10.str = *(uint8 **)((long)register0x00000020 + -0x18);
      runtime_convTstring(sVar10);
      *(undefined **)((long)register0x00000020 + -0x40) = &DAT_00225520;
      *(runtime__type **)((long)register0x00000020 + -0x38) =
           *(runtime__type **)((long)register0x00000020 + -0x30);
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x5364e7;
      e.data = sVar10.len;
      e._type = *(runtime__type **)((long)register0x00000020 + -0x30);
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar6 + -8) = 0x5364ed;
    runtime_morestack_noctxt();
    t = extraout_RAX_00;
    register0x00000020 = (BADSPACEBASE *)puVar6;
  } while( true );
}

