
/* WARNING: Unknown calling convention */

void runtime_gcMark(int64 startTime)

{
  bool v;
  runtime_mSpanList *prVar1;
  uintptr uVar2;
  runtime_p **pprVar3;
  int iVar4;
  int iVar5;
  runtime_lfstack v_00;
  int v_01;
  int v_02;
  ulong v_03;
  ulong v_04;
  long lVar6;
  runtime_mcache *unaff_RBX;
  uint64 in_RSI;
  undefined8 in_RDI;
  long in_FS_OFFSET;
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
  string s_13;
  interface___ e;
  string s_14;
  __uint64 args;
  int64 startTime_spill;
  uint64 local_20;
  runtime_mcache *local_18;
  runtime_p *local_10;
  
  while (&local_10 <= *(runtime_p ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (0 < runtime_debug.allocfreetrace) {
    runtime_tracegc();
  }
  v_02 = runtime_work.nStackRoots;
  v_01 = runtime_work.nSpanRoots;
  iVar5 = runtime_work.nBSSRoots;
  iVar4 = runtime_work.nDataRoots;
  v_00 = runtime_work.full;
  if (runtime_gcphase == 2) {
    runtime_work.tstart = startTime_spill;
    if ((runtime_work.full == 0) && (runtime_work.markrootJobs <= runtime_work.markrootNext)) {
      if (0 < runtime_debug.gccheckmark) {
        runtime_gcMarkRootCheck();
      }
      iVar4 = runtime_allp.len;
      if (runtime_work.full == 0) {
                    /* Unresolved local var: runtime.p * p@[???] */
        local_10 = (runtime_p *)runtime_allp.array;
        lVar6 = 0;
        while( true ) {
          iVar5 = runtime_allp.len;
          pprVar3 = runtime_allp.array;
          if (iVar4 <= lVar6) {
            runtime_gcController.heapMarked = runtime_work.bytesMarked;
                    /* Unresolved local var: runtime.p * p@[???] */
            for (lVar6 = 0; lVar6 < iVar5; lVar6 = lVar6 + 1) {
                    /* Unresolved local var: runtime.mcache * c@[???] */
              unaff_RBX = pprVar3[lVar6]->mcache;
              if (unaff_RBX != (runtime_mcache *)0x0) {
                in_RSI = runtime_gcController.heapScan + unaff_RBX->scanAlloc;
                runtime_gcController.heapScan = in_RSI;
                unaff_RBX->scanAlloc = 0;
              }
            }
            runtime_gcController.heapLive = runtime_work.bytesMarked;
            runtime_gcController.heapScan = runtime_gcController.scanWork;
            if (runtime_trace.enabled != false) {
              local_20 = runtime_work.bytesMarked;
              args.len = in_RDI;
              args.array = (uint64 *)iVar5;
              args.cap = in_RSI;
              runtime_traceEvent((uint8)&local_20,(int)unaff_RBX,args);
            }
            return;
          }
          unaff_RBX = *(runtime_mcache **)((long)local_10->deferpool + lVar6 * 8 + -0x68);
          local_18 = unaff_RBX;
          if (runtime_debug.gccheckmark < 1) {
            runtime___wbBuf__reset((runtime_wbBuf *)(unaff_RBX[4].alloc + 0x7b));
          }
          else {
            runtime_wbBufFlush1(local_10);
          }
          if ((local_18[4].alloc[0x76] != (runtime_mspan *)0x0) &&
             ((local_18[4].alloc[0x76]->list != (runtime_mSpanList *)0x0 ||
              (local_18[4].alloc[0x77]->list != (runtime_mSpanList *)0x0)))) break;
                    /* Unresolved local var: runtime.gcWork * gcw@[???] */
          runtime___gcWork__dispose((runtime_gcWork *)(local_18[4].alloc + 0x76));
          lVar6 = lVar6 + 1;
        }
        runtime_printlock();
        uVar2 = local_18->nextSample;
        v = *(bool *)(local_18[4].alloc + 0x7a);
        runtime_printlock();
        s.len = (int)unaff_RBX;
        s.str = &DAT_0029214d;
        runtime_printstring(s);
        runtime_printint((long)(int)uVar2);
        s_00.len = (int)unaff_RBX;
        s_00.str = &DAT_002944f6;
        runtime_printstring(s_00);
        runtime_printbool(v);
        runtime_printunlock();
        if (local_18[4].alloc[0x76] == (runtime_mspan *)0x0) {
          runtime_printlock();
          s_05.len = (int)unaff_RBX;
          s_05.str = &DAT_0029281e;
          runtime_printstring(s_05);
          runtime_printunlock();
        }
        else {
          prVar1 = local_18[4].alloc[0x76]->list;
          runtime_printlock();
          s_01.len = (int)unaff_RBX;
          s_01.str = &DAT_0028d244;
          runtime_printstring(s_01);
          runtime_printint((int64)prVar1);
          runtime_printunlock();
        }
        if (local_18[4].alloc[0x77] == (runtime_mspan *)0x0) {
          runtime_printlock();
          s_04.len = (int)unaff_RBX;
          s_04.str = &DAT_0029282a;
          runtime_printstring(s_04);
          runtime_printunlock();
        }
        else {
          prVar1 = local_18[4].alloc[0x77]->list;
          runtime_printlock();
          s_02.len = (int)unaff_RBX;
          s_02.str = &DAT_0028d24d;
          runtime_printstring(s_02);
          runtime_printint((int64)prVar1);
          runtime_printunlock();
        }
        runtime_printlock();
        runtime_printnl();
        runtime_printunlock();
        s_03.len = (int)unaff_RBX;
        s_03.str = &DAT_002a8880;
                    /* WARNING: Subroutine does not return */
        runtime_throw(s_03);
      }
      s_06.len = (int)unaff_RBX;
      s_06.str = &DAT_00298453;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_06);
    }
    v_03 = (ulong)runtime_work.markrootNext;
    v_04 = (ulong)runtime_work.markrootJobs;
    runtime_printlock();
    s_07.len = iVar5;
    s_07.str = &DAT_00297d8b;
    runtime_printstring(s_07);
    runtime_printhex(v_00);
    s_08.len = iVar5;
    s_08.str = &DAT_002893f0;
    runtime_printstring(s_08);
    runtime_printuint(v_03);
    s_09.len = iVar5;
    s_09.str = &DAT_002893de;
    runtime_printstring(s_09);
    runtime_printuint(v_04);
    s_10.len = iVar5;
    s_10.str = &DAT_002927b2;
    runtime_printstring(s_10);
    runtime_printint(iVar4);
    s_11.len = iVar5;
    s_11.str = &DAT_00290948;
    runtime_printstring(s_11);
    runtime_printint(iVar5);
    s_12.len = iVar5;
    s_12.str = &DAT_002927be;
    runtime_printstring(s_12);
    runtime_printint(v_01);
    s_13.len = iVar5;
    s_13.str = &DAT_00294537;
    runtime_printstring(s_13);
    runtime_printint(v_02);
    runtime_printnl();
    runtime_printunlock();
    e.data = (void *)iVar5;
    e._type = (runtime__type *)runtime__stmp_83;
    runtime_gopanic(e);
    unaff_RBX = (runtime_mcache *)iVar5;
  }
  s_14.len = (int)unaff_RBX;
  s_14.str = &DAT_002aa98d;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_14);
}

