
/* WARNING: Unknown calling convention */

void runtime_moduledataverify1(runtime_moduledata *datap)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  runtime_pcHeader *prVar7;
  runtime_functab *prVar8;
  runtime_moduledata *prVar9;
  uint64 uVar10;
  uint64 v;
  uint8 *puVar11;
  ulong uVar12;
  runtime_moduledata *prVar13;
  long lVar14;
  uint8 *puVar15;
  runtime_modulehash *prVar16;
  ulong uVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  runtime_funcInfo f;
  runtime_funcInfo f_00;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  string s_05;
  string s_06;
  string s_07;
  string s_08;
  string s_09;
  string s_10;
  string s_11;
  string s_12;
  runtime_funcInfo f_01;
  string s_13;
  string s_14;
  string s_15;
  string s_16;
  string s_17;
  runtime_moduledata *datap_spill;
  runtime_moduledata *local_c8;
  char local_c0;
  undefined7 uStack_bf;
  runtime_moduledata *local_58;
  uint8 *local_50;
  runtime_modulehash *local_48;
  runtime_moduledata *local_40;
  uint8 *local_38;
  uint8 *local_30;
  uint8 *local_28;
  uint8 *puStack_20;
  long local_18;
  string *psStack_10;
  
                    /* Unresolved local var: runtime.pcHeader * hdr@[???]
                       Unresolved local var: int nftab@[???] */
  while (&local_58 <= *(runtime_moduledata ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  prVar7 = datap_spill->pcHeader;
  uVar6 = prVar7->magic;
  if ((((uVar6 != 0xfffffffa) || (prVar7->pad1 != 0)) || (prVar7->pad2 != 0)) ||
     ((prVar7->minLC != 1 || (prVar7->ptrSize != 8)))) {
    bVar2 = prVar7->pad1;
    bVar3 = prVar7->pad2;
    bVar4 = prVar7->minLC;
    bVar5 = prVar7->ptrSize;
    runtime_printlock();
    s_14.len._0_1_ = bVar5;
    s_14.str = &DAT_002a5aaf;
    s_14.len._1_7_ = 0;
    runtime_printstring(s_14);
    runtime_printhex((ulong)uVar6);
    runtime_printhex((ulong)bVar2);
    runtime_printhex((ulong)bVar3);
    runtime_printhex((ulong)bVar4);
    runtime_printhex((ulong)bVar5);
    runtime_printunlock();
    lVar1 = (datap_spill->pluginpath).len;
    if (lVar1 != 0) {
      local_40 = (runtime_moduledata *)(datap_spill->pluginpath).str;
      runtime_printlock();
      s_16.len._0_1_ = bVar5;
      s_16.str = &DAT_0028d28c;
      s_16.len._1_7_ = 0;
      runtime_printstring(s_16);
      s_17.len._0_1_ = bVar5;
      s_17.str = (uint8 *)lVar1;
      s_17.len._1_7_ = 0;
      runtime_printstring(s_17);
      runtime_printunlock();
    }
    runtime_printlock();
    runtime_printnl();
    runtime_printunlock();
    s_15.len._0_1_ = bVar5;
    s_15.str = (uint8 *)
               "invalid function symbol table\ninvalid network interface nameinvalid pointer found on stackmime: duplicate parameter namemissing validateFirstLine funcprotocol version not supportedprotocol wrong type for socketreflect: Elem of invalid type reflect: Len of non-array typereflect: Out of non-func type running on the wrong goroutinerunqputslow: queue is not fullruntime: bad g in cgocallback\nruntime: bad pointer in frame runtime: found in object at *(runtime: impossible type kind socket operation on non-socketstream error: stream ID %d; %vsync: inconsistent mutex statesync: unlock of unlocked mutextext/javascript; charset=utf-8transform: short source bufferx509: SAN dNSName is malformedx509: invalid ECDSA parametersx509: malformed issuerUniqueID) not in usable address space: ...additional frames elided...\n11368683772161602973937988281255684341886080801486968994140625BayStack 380 10/100/1000 SwitchCLIENT_HANDSHAKE_TRAFFIC_SECRETHT Capabilities (802.11n D1.10)Invalid counter record type: %dManufacturerUsageDescriptionURLNetwork Authentication RequiredOPTera Metro 8003 OPM L2 SwitchOPTera Metro 8006 OPM L2 SwitchOPTera Metro 8010 OPM L2 SwitchOverlapping BSS Scan ParametersPRIORITY frame with stream ID 0PartialOrderConnectionPermittedRequest Header Fields Too LargeRequested Range Not SatisfiableSERVER_HANDSHAKE_TRAFFIC_SECRETSIGSEGV: segmentation violationTLS: sequence number wraparoundUnrecognized VRRPv2 type field.bad certificate status responsebad write barrier buffer boundscall from within the Go runtimecannot-support-all-capabilitiescasgstatus: bad incoming valuescheckmark found unmarked objectentersyscallblock inconsistent fatal: bad g in signal handler\nfmt: unknown base; can\'t happenhash/crc32: tables do not matchhttp2: connection error: %v: %vinternal error - misuse of itabinvalid network interface indexmalformed time zone informationnon in-use span in unswept listpacer: sweep done at heap size pattern contains path separatorreflect.MakeSlice: negative capreflect.MakeSlice: negative lenreflect: Len of non-array t..." /* TRUNCATED STRING LITERAL */
    ;
    s_15.len._1_7_ = 0;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_15);
  }
  prVar8 = (datap_spill->ftab).array;
  uVar18 = (datap_spill->ftab).len;
  lVar1 = uVar18 - 1;
  uVar17 = 0;
                    /* Unresolved local var: int i@[???] */
  while (uVar12 = uVar17, (long)uVar12 < lVar1) {
    f._func = (runtime_moduledata *)(uVar12 * 0x10);
    uVar17 = uVar12 + 1;
    if (uVar18 <= uVar17) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if (prVar8[uVar17].entry < *(ulong *)((long)&(f._func)->pcHeader + (long)prVar8)) {
                    /* Unresolved local var: runtime.funcInfo f1@[???]
                       Unresolved local var: runtime.funcInfo f2@[???]
                       Unresolved local var: string f2name@[???] */
      prVar13 = (runtime_moduledata *)(datap_spill->pclntable).len;
      prVar9 = *(runtime_moduledata **)((long)&((f._func)->funcnametab).array + (long)prVar8);
      if (prVar13 <= prVar9) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndexU();
      }
      if (prVar13 <= (runtime_moduledata *)prVar8[uVar17].funcoff) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndexU();
      }
      if ((long)uVar17 < lVar1) {
        f.datap = (runtime_moduledata *)prVar8[uVar17].funcoff;
        local_38 = (uint8 *)((long)&prVar9->pcHeader + (long)(datap_spill->pclntable).array);
        runtime_funcname(f);
        puVar15 = (uint8 *)CONCAT71(uStack_bf,local_c0);
        prVar13 = local_c8;
        local_58 = local_c8;
      }
      else {
        puVar15 = (uint8 *)0x3;
        prVar13 = f._func;
        local_58 = (runtime_moduledata *)&DAT_00287afe;
      }
      f_00.datap = local_58;
      f_00._func = (runtime__func *)prVar13;
      runtime_funcname(f_00);
      s_00.str._1_7_ = uStack_bf;
      s_00.str._0_1_ = local_c0;
      uVar18 = (datap_spill->ftab).len;
      prVar8 = (datap_spill->ftab).array;
      if (uVar18 <= uVar12) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      uVar10 = *(uint64 *)((long)&(f._func)->pcHeader + (long)prVar8);
      if (uVar18 <= uVar17) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      local_40 = local_c8;
      v = prVar8[uVar17].entry;
      runtime_printlock();
      s.len = uVar18;
      s.str = &DAT_002a9b9b;
      runtime_printstring(s);
      runtime_printhex(uVar10);
      s_00.len = uVar18;
      runtime_printstring(s_00);
      s_01.len = uVar18;
      s_01.str = (uint8 *)&DAT_0028774c;
      runtime_printstring(s_01);
      runtime_printhex(v);
      s_02.len = uVar18;
      s_02.str = puVar15;
      runtime_printstring(s_02);
      runtime_printunlock();
      puVar15 = (uint8 *)(datap_spill->pluginpath).len;
      if (puVar15 != (uint8 *)0x0) {
        local_40 = (runtime_moduledata *)(datap_spill->pluginpath).str;
        runtime_printlock();
        s_03.len = uVar18;
        s_03.str = &DAT_0028d28c;
        runtime_printstring(s_03);
        s_04.len = uVar18;
        s_04.str = puVar15;
        runtime_printstring(s_04);
        runtime_printunlock();
      }
      runtime_printlock();
      runtime_printnl();
      runtime_printunlock();
                    /* Unresolved local var: int j@[???] */
      uVar17 = 0;
      while( true ) {
        if ((long)uVar12 < (long)uVar17) {
          s_13.len = uVar18;
          s_13.str = (uint8 *)0x2a05e8;
                    /* WARNING: Subroutine does not return */
          runtime_throw(s_13);
        }
        prVar13 = (runtime_moduledata *)(datap_spill->pclntable).len;
        if ((ulong)(datap_spill->ftab).len <= uVar17) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        prVar9 = (runtime_moduledata *)(datap_spill->ftab).array[uVar17].funcoff;
        if (prVar13 <= prVar9) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndexU();
        }
        f_01.datap = prVar13;
        f_01._func = (runtime__func *)
                     ((long)&prVar9->pcHeader + (long)(datap_spill->pclntable).array);
        runtime_funcname(f_01);
        s_12.str._1_7_ = uStack_bf;
        s_12.str._0_1_ = local_c0;
        uVar18 = (datap_spill->ftab).len;
        if (uVar18 <= uVar17) break;
        local_40 = local_c8;
        uVar10 = (datap_spill->ftab).array[uVar17].entry;
        runtime_printlock();
        s_11.len = uVar18;
        s_11.str = &DAT_002b2e50;
        runtime_printstring(s_11);
        runtime_printhex(uVar10);
        runtime_printsp();
        s_12.len = uVar18;
        runtime_printstring(s_12);
        runtime_printnl();
        runtime_printunlock();
        uVar17 = uVar17 + 1;
      }
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
  }
  if (uVar18 == 0) {
                    /* WARNING: Subroutine does not return */
    runtime_panicIndex();
  }
  if ((prVar8->entry == datap_spill->minpc) && (prVar8[lVar1].entry == datap_spill->maxpc)) {
                    /* Unresolved local var: runtime.modulehash modulehash@[???] */
    lVar1 = (datap_spill->modulehashes).len;
    prVar16 = (datap_spill->modulehashes).array;
    if (0 < lVar1) {
      lVar14 = 0;
      while( true ) {
        local_30 = (prVar16->modulename).str;
        local_28 = (uint8 *)(prVar16->modulename).len;
        puStack_20 = (prVar16->linktimehash).str;
        local_18 = (prVar16->linktimehash).len;
        psStack_10 = prVar16->runtimehash;
        if ((psStack_10->len != local_18) ||
           (local_48 = prVar16, runtime_memequal(), local_c0 == '\0')) {
          puVar11 = local_28;
          local_40 = (runtime_moduledata *)(datap_spill->modulename).str;
          puVar15 = (uint8 *)(datap_spill->modulename).len;
          local_50 = local_30;
          runtime_printlock();
          s_05.len = (int)puVar11;
          s_05.str = (uint8 *)0x2a16b8;
          runtime_printstring(s_05);
          s_06.len = (int)puVar11;
          s_06.str = puVar15;
          runtime_printstring(s_06);
          s_07.len = (int)puVar11;
          s_07.str = &DAT_002888e0;
          runtime_printstring(s_07);
          s_08.len = (int)puVar11;
          s_08.str = puVar11;
          runtime_printstring(s_08);
          runtime_printnl();
          runtime_printunlock();
          s_09.len = (int)puVar11;
          s_09.str = &DAT_00292d2e;
                    /* WARNING: Subroutine does not return */
          runtime_throw(s_09);
        }
        lVar14 = lVar14 + 1;
        if (lVar1 <= lVar14) break;
        prVar16 = local_48 + 1;
      }
    }
    return;
  }
  s_10.len = (int)prVar8;
  s_10.str = &DAT_0029d34d;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_10);
}

