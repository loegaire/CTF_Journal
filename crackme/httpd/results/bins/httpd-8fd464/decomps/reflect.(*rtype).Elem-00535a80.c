
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.(*rtype).Elem(reflect.rtype * t, reflect.Type ~r0) */

reflect_Type reflect___rtype__Elem(reflect_rtype *t)

{
  reflect_rtype *t_00;
  runtime_tmpBuf *buf;
  int iVar1;
  runtime_itab *prVar2;
  byte bVar3;
  undefined1 *puVar4;
  void *unaff_RBX;
  undefined1 *unaff_RBP;
  int in_RSI;
  uint8 *in_RDI;
  long in_FS_OFFSET;
  reflect_Type rVar5;
  reflect_Type rVar6;
  reflect_Type rVar7;
  reflect_Type rVar8;
  reflect_Type rVar9;
  string sVar10;
  interface___ e;
  string a1;
  string a0;
  reflect_arrayType *tt;
  
  sVar10.len = unaff_RBX;
  do {
    puVar4 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar4 = (undefined1 *)((long)register0x00000020 + -0x40);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      t_00 = *(reflect_rtype **)((long)register0x00000020 + 8);
      bVar3 = t_00->kind & 0x1f;
      if (bVar3 < 0x13) {
        if (bVar3 == 0x11) {
          prVar2 = (runtime_itab *)t_00[1].size;
          if (prVar2 == (runtime_itab *)0x0) {
            puVar4 = (undefined1 *)0x0;
            prVar2 = (runtime_itab *)0x0;
          }
          else {
            puVar4 = go_itab__reflect_rtype_reflect_Type;
          }
          *(undefined1 **)((long)register0x00000020 + 0x10) = puVar4;
          *(runtime_itab **)((long)register0x00000020 + 0x18) = prVar2;
          rVar5.data = sVar10.len;
          rVar5.tab = prVar2;
          return rVar5;
        }
        if (bVar3 == 0x12) {
          prVar2 = (runtime_itab *)t_00[1].size;
          if (prVar2 == (runtime_itab *)0x0) {
            puVar4 = (undefined1 *)0x0;
            prVar2 = (runtime_itab *)0x0;
          }
          else {
            puVar4 = go_itab__reflect_rtype_reflect_Type;
          }
          *(undefined1 **)((long)register0x00000020 + 0x10) = puVar4;
          *(runtime_itab **)((long)register0x00000020 + 0x18) = prVar2;
          rVar6.data = sVar10.len;
          rVar6.tab = prVar2;
          return rVar6;
        }
      }
      else {
        if (bVar3 == 0x15) {
          prVar2 = (runtime_itab *)t_00[1].ptrdata;
          if (prVar2 == (runtime_itab *)0x0) {
            puVar4 = (undefined1 *)0x0;
            prVar2 = (runtime_itab *)0x0;
          }
          else {
            puVar4 = go_itab__reflect_rtype_reflect_Type;
          }
          *(undefined1 **)((long)register0x00000020 + 0x10) = puVar4;
          *(runtime_itab **)((long)register0x00000020 + 0x18) = prVar2;
          rVar7.data = sVar10.len;
          rVar7.tab = prVar2;
          return rVar7;
        }
        if (bVar3 == 0x16) {
          prVar2 = (runtime_itab *)t_00[1].size;
          if (prVar2 == (runtime_itab *)0x0) {
            puVar4 = (undefined1 *)0x0;
            prVar2 = (runtime_itab *)0x0;
          }
          else {
            puVar4 = go_itab__reflect_rtype_reflect_Type;
          }
          *(undefined1 **)((long)register0x00000020 + 0x10) = puVar4;
          *(runtime_itab **)((long)register0x00000020 + 0x18) = prVar2;
          rVar8.data = sVar10.len;
          rVar8.tab = prVar2;
          return rVar8;
        }
        if (bVar3 == 0x17) {
          prVar2 = (runtime_itab *)t_00[1].size;
          if (prVar2 == (runtime_itab *)0x0) {
            puVar4 = (undefined1 *)0x0;
            prVar2 = (runtime_itab *)0x0;
          }
          else {
            puVar4 = go_itab__reflect_rtype_reflect_Type;
          }
          *(undefined1 **)((long)register0x00000020 + 0x10) = puVar4;
          *(runtime_itab **)((long)register0x00000020 + 0x18) = prVar2;
          rVar9.data = sVar10.len;
          rVar9.tab = prVar2;
          return rVar9;
        }
      }
      *(reflect_rtype **)((long)register0x00000020 + -0x40) = t_00;
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x535bba;
      sVar10 = reflect___rtype__String(t_00);
      a0.str = (uint8 *)sVar10.len;
      buf = *(runtime_tmpBuf **)((long)register0x00000020 + -0x38);
      iVar1 = *(int *)((long)register0x00000020 + -0x30);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
      *(char **)((long)register0x00000020 + -0x38) =
           "reflect: Elem of invalid type reflect: Len of non-array typereflect: Out of non-func type running on the wrong goroutinerunqputslow: queue is not fullruntime: bad g in cgocallback\nruntime: bad pointer in frame runtime: found in object at *(runtime: impossible type kind socket operation on non-socketstream error: stream ID %d; %vsync: inconsistent mutex statesync: unlock of unlocked mutextext/javascript; charset=utf-8transform: short source bufferx509: SAN dNSName is malformedx509: invalid ECDSA parametersx509: malformed issuerUniqueID) not in usable address space: ...additional frames elided...\n11368683772161602973937988281255684341886080801486968994140625BayStack 380 10/100/1000 SwitchCLIENT_HANDSHAKE_TRAFFIC_SECRETHT Capabilities (802.11n D1.10)Invalid counter record type: %dManufacturerUsageDescriptionURLNetwork Authentication RequiredOPTera Metro 8003 OPM L2 SwitchOPTera Metro 8006 OPM L2 SwitchOPTera Metro 8010 OPM L2 SwitchOverlapping BSS Scan ParametersPRIORITY frame with stream ID 0PartialOrderConnectionPermittedRequest Header Fields Too LargeRequested Range Not SatisfiableSERVER_HANDSHAKE_TRAFFIC_SECRETSIGSEGV: segmentation violationTLS: sequence number wraparoundUnrecognized VRRPv2 type field.bad certificate status responsebad write barrier buffer boundscall from within the Go runtimecannot-support-all-capabilitiescasgstatus: bad incoming valuescheckmark found unmarked objectentersyscallblock inconsistent fatal: bad g in signal handler\nfmt: unknown base; can\'t happenhash/crc32: tables do not matchhttp2: connection error: %v: %vinternal error - misuse of itabinvalid network interface indexmalformed time zone informationnon in-use span in unswept listpacer: sweep done at heap size pattern contains path separatorreflect.MakeSlice: negative capreflect.MakeSlice: negative lenreflect: Len of non-array type resetspinning: not a spinning mruntime: cannot allocate memoryruntime: split stack overflow: skipping TypeExtendedMlpsVcFlowslice bounds out of range [%x:]slice bounds out of range [:%x]tls: failed to sign ..." /* TRUNCATED STRING LITERAL */
      ;
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x1e;
      *(runtime_tmpBuf **)((long)register0x00000020 + -0x28) = buf;
      *(int *)((long)register0x00000020 + -0x20) = iVar1;
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x535bf0;
      a1.len = in_RSI;
      a1.str = in_RDI;
      a0.len = iVar1;
      sVar10 = runtime_concatstring2(buf,a0,a1);
      *(uint8 **)((long)register0x00000020 + -0x40) = *(uint8 **)((long)register0x00000020 + -0x18);
      *(undefined8 *)((long)register0x00000020 + -0x38) =
           *(undefined8 *)((long)register0x00000020 + -0x10);
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x535c08;
      sVar10.str = *(uint8 **)((long)register0x00000020 + -0x18);
      runtime_convTstring(sVar10);
      *(undefined **)((long)register0x00000020 + -0x40) = &DAT_00225520;
      *(runtime__type **)((long)register0x00000020 + -0x38) =
           *(runtime__type **)((long)register0x00000020 + -0x30);
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x535c25;
      e.data = sVar10.len;
      e._type = *(runtime__type **)((long)register0x00000020 + -0x30);
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar4 + -8) = 0x535c2b;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar4;
  } while( true );
}

