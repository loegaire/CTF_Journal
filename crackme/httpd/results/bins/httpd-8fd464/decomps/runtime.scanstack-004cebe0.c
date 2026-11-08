
/* WARNING: Unknown calling convention */

void runtime_scanstack(runtime_g *gp,runtime_gcWork *gcw)

{
  runtime_stackObjectBuf *prVar1;
  runtime_stackObjectBuf *b;
  int iVar2;
  uintptr uVar3;
  uint uVar4;
  runtime_g *prVar5;
  uint uVar6;
  runtime_stackScanState *in_RSI;
  runtime_g *gp_00;
  uintptr *in_R8;
  int in_R9;
  func__runtime_stkframe__unsafe_Pointer__bool **in_R10;
  void *in_R11;
  long in_FS_OFFSET;
  bool bVar7;
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
  multireturn_uintptr_bool_ mVar8;
  multireturn_runtime_stackObject___runtime_stackObjectBuf___int_ mVar9;
  runtime_g *gp_spill;
  runtime_gcWork *gcw_spill;
  runtime_mheap *local_1f8;
  runtime_mheap *local_1f0;
  runtime_g *local_1e8;
  undefined1 local_1b0 [304];
  __runtime_ancestorInfo *local_80;
  uintptr local_78;
  runtime_sudog *local_68;
  uintptr *local_60;
  long local_58;
  runtime_stackObjectBuf *local_50;
  runtime_mheap *local_40;
  runtime_g *local_38;
  uintptr local_30;
  runtime__defer *local_28;
  func__runtime_stkframe__unsafe_Pointer__bool *local_20;
  undefined1 *puStack_18;
  
                    /* Unresolved local var: func(*runtime.stkframe,_unsafe.Pointer)_bool * *
                       scanframe@[???]
                       Unresolved local var: runtime.stackScanState state@[???]
                       Unresolved local var: uint32 ~R0@[???] */
  while (local_1b0 + 0x30 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x18)) {
    runtime_morestackc();
  }
  if ((gp_spill->atomicstatus >> 0xc & 1) == 0) {
    local_1b0._16_4_ = gp_spill->atomicstatus;
    local_1b0._40_8_ = gp_spill->goid;
    runtime_printlock();
    s_09.len = (int)gcw;
    s_09.str = &DAT_0029d497;
    runtime_printstring(s_09);
    runtime_printpointer(gp_spill);
    s_10.len = (int)gcw;
    s_10.str = &DAT_0028a40e;
    runtime_printstring(s_10);
    runtime_printint(local_1b0._40_8_);
    s_11.len = (int)gcw;
    s_11.str = &DAT_0029ae57;
    runtime_printstring(s_11);
    runtime_printhex((ulong)(uint)local_1b0._16_4_);
    runtime_printnl();
    runtime_printunlock();
    s_12.len = (int)gcw;
    s_12.str = &DAT_0029d4c3;
                    /* WARNING: Subroutine does not return */
    runtime_throw(s_12);
  }
  uVar4 = gp_spill->atomicstatus & 0xffffefff;
  if (uVar4 < 3) {
    if (uVar4 == 1) {
LAB_004cec4e:
      if (gp_spill == *(runtime_g **)(in_FS_OFFSET + -8)) {
        s_04.len = (int)gcw;
        s_04.str = &DAT_0029e58f;
                    /* WARNING: Subroutine does not return */
        runtime_throw(s_04);
      }
      if (gp_spill->syscallsp == 0) {
        if (gp_spill->asyncSafePoint == false) {
          bVar7 = gp_spill->parkingOnChan == 0;
        }
        else {
          bVar7 = false;
        }
      }
      else {
        bVar7 = false;
      }
      if (bVar7) {
        runtime_shrinkstack(gp_spill);
      }
      else {
        gp_spill->preemptShrink = true;
      }
      gp_00 = (runtime_g *)local_1b0;
      local_1e8 = (runtime_g *)FUN_0051a134();
      local_78 = (local_1e8->stack).hi;
      local_80 = (__runtime_ancestorInfo *)(local_1e8->stack).lo;
      if ((local_1e8->sched).ctxt != (void *)0x0) {
        runtime_scanblock((uintptr)local_1e8,(uintptr)gcw,(uint8 *)gcw_spill,(runtime_gcWork *)gp_00
                          ,in_RSI);
        local_1e8 = gp_spill;
      }
      local_20 = runtime_scanstack_func1;
      puStack_18 = local_1b0 + 0x30;
      runtime_gentraceback
                ((uintptr)local_1e8,(uintptr)&local_20,(uintptr)puStack_18,gp_00,(int)in_RSI,in_R8,
                 in_R9,in_R10,in_R11,0xffffffffffffffff);
      runtime_tracebackdefers(gp_spill,&local_20,&local_20);
                    /* Unresolved local var: runtime._defer * d@[???] */
      for (local_28 = gp_spill->_defer; local_28 != (runtime__defer *)0x0; local_28 = local_28->link
          ) {
        if (local_28->fn != (runtime_funcval *)0x0) {
          local_1e8 = (runtime_g *)gcw_spill;
          runtime_scanblock((uintptr)gcw_spill,(uintptr)&local_20,local_1b0 + 0x30,
                            (runtime_gcWork *)gp_00,in_RSI);
        }
        if (local_28->link != (runtime__defer *)0x0) {
          local_1e8 = (runtime_g *)gcw_spill;
          runtime_scanblock((uintptr)gcw_spill,(uintptr)&local_20,local_1b0 + 0x30,
                            (runtime_gcWork *)gp_00,in_RSI);
        }
        if (local_28->heap != false) {
          local_1e8 = (runtime_g *)gcw_spill;
          runtime_scanblock((uintptr)gcw_spill,(uintptr)&local_20,local_1b0 + 0x30,
                            (runtime_gcWork *)gp_00,in_RSI);
        }
      }
      if ((runtime_stackScanState *)gp_spill->_panic != (runtime_stackScanState *)0x0) {
        runtime___stackScanState__putPtr
                  ((runtime_stackScanState *)gp_spill->_panic,(uintptr)&local_20,
                   (bool)((char)local_1b0 + '0'));
      }
      local_1f8 = (runtime_mheap *)0x0;
      local_1f0 = local_40;
      mVar9 = runtime_binarySearchTree(local_50,(int)&local_20,(int)local_40);
      s_03.len = (runtime_mheap *)mVar9.restBuf;
      local_38 = local_1e8;
      do {
                    /* Unresolved local var: uintptr p@[???]
                       Unresolved local var: runtime.stackObject * obj@[???]
                       Unresolved local var: runtime.stackObjectRecord * r@[???]
                       Unresolved local var: uint8 * gcdata@[???]
                       Unresolved local var: runtime.mspan * s@[???]
                       Unresolved local var: uintptr b@[???]
                       Unresolved local var: runtime.stackObject * ~R0@[???] */
        mVar8 = runtime___stackScanState__getPtr((runtime_stackScanState *)(local_1b0 + 0x30));
        s_03.len = (runtime_mheap *)CONCAT71((int7)((ulong)s_03.len >> 8),mVar8.conservative);
        if (local_1f8 == (runtime_mheap *)0x0) {
          while (b = local_50, local_50 != (runtime_stackObjectBuf *)0x0) {
            prVar1 = (local_50->stackObjectBufHdr).next;
            (local_50->stackObjectBufHdr).workbufhdr.nobj = 0;
            local_50 = prVar1;
            runtime_putempty((runtime_workbuf *)b);
          }
          if (((local_68 == (runtime_sudog *)0x0) && (local_58 == 0)) &&
             (local_60 == (uintptr *)0x0)) {
            return;
          }
          s_03.str = &DAT_0029ee39;
                    /* WARNING: Subroutine does not return */
          runtime_throw(s_03);
        }
                    /* Unresolved local var: runtime.stackObject * obj@[???] */
        uVar4 = (int)local_1f8 - (int)local_80;
        prVar5 = local_38;
        while (prVar5 != (runtime_g *)0x0) {
          uVar6 = (uint)(prVar5->stack).lo;
          s_03.len = (runtime_mheap *)(ulong)uVar6;
          if (uVar4 < uVar6) {
            prVar5 = (runtime_g *)prVar5->stackguard0;
          }
          else {
            uVar6 = uVar6 + *(int *)((long)&(prVar5->stack).lo + 4);
            s_03.len = (runtime_mheap *)(ulong)uVar6;
            if (uVar4 < uVar6) goto LAB_004cf098;
            prVar5 = (runtime_g *)prVar5->stackguard1;
          }
        }
        prVar5 = (runtime_g *)0x0;
LAB_004cf098:
        if ((prVar5 != (runtime_g *)0x0) && (uVar3 = (prVar5->stack).hi, uVar3 != 0)) {
          (prVar5->stack).hi = 0;
          s_03.len = *(runtime_mheap **)(uVar3 + 0x10);
          if (*(int *)(uVar3 + 8) < 0) {
            local_1b0[0xb] = (char)local_1f0;
            local_1b0._24_8_ = prVar5;
            local_30 = uVar3;
            runtime_materializeGCProg((long)-*(int *)(uVar3 + 8),(uint8 *)s_03.len);
            s_03.len = (runtime_mheap *)(local_1f0->pages).summary[0].cap;
                    /* Unresolved local var: int32 x@[???] */
            uVar3 = local_30;
            local_1b0._32_8_ = local_1f0;
            local_1f0._0_1_ = local_1b0[0xb];
          }
          else {
            local_1b0._32_8_ = (runtime_mheap *)0x0;
          }
          if ((char)local_1f0 == '\0') {
                    /* Unresolved local var: int32 x@[???] */
            iVar2 = *(int *)(uVar3 + 8);
            if (iVar2 < 0) {
              iVar2 = -iVar2;
            }
            runtime_scanblock((uintptr)gcw_spill,(uintptr)s_03.len,local_1b0 + 0x30,
                              (runtime_gcWork *)gp_00,(runtime_stackScanState *)local_1b0._32_8_);
          }
          else {
            iVar2 = *(int *)(uVar3 + 8);
            if (iVar2 < 0) {
              iVar2 = -iVar2;
            }
            runtime_scanConservative
                      ((uintptr)gcw_spill,(uintptr)s_03.len,local_1b0 + 0x30,(runtime_gcWork *)gp_00
                       ,(runtime_stackScanState *)local_1b0._32_8_);
          }
          local_1f8 = (runtime_mheap *)(long)iVar2;
          local_1f0 = s_03.len;
          if ((runtime_mheap *)local_1b0._32_8_ != (runtime_mheap *)0x0) {
            local_1f8 = (runtime_mheap *)local_1b0._32_8_;
            local_1f0 = (runtime_mheap *)CONCAT71((int7)((ulong)s_03.len >> 8),2);
            runtime___mheap__freeManual
                      ((runtime_mheap *)local_1b0._32_8_,(runtime_mspan *)s_03.len,0x40);
          }
        }
      } while( true );
    }
    if (uVar4 == 2) {
      local_1b0._20_4_ = gp_spill->atomicstatus;
      local_1b0._40_8_ = gp_spill->goid;
      runtime_printlock();
      s_05.len = (int)gcw;
      s_05.str = &DAT_00293f16;
      runtime_printstring(s_05);
      runtime_printpointer(gp_spill);
      s_06.len = (int)gcw;
      s_06.str = &DAT_0028a40e;
      runtime_printstring(s_06);
      runtime_printint(local_1b0._40_8_);
      s_07.len = (int)gcw;
      s_07.str = &DAT_0029ae57;
      runtime_printstring(s_07);
      runtime_printuint((ulong)(uint)local_1b0._20_4_);
      runtime_printnl();
      runtime_printunlock();
      s_08.len = (int)gcw;
      s_08.str = (uint8 *)0x2a2a10;
                    /* WARNING: Subroutine does not return */
      runtime_throw(s_08);
    }
  }
  else {
    if (uVar4 < 5) goto LAB_004cec4e;
    if (uVar4 == 6) {
      return;
    }
  }
  local_1b0._12_4_ = gp_spill->atomicstatus;
  local_1b0._40_8_ = gp_spill->goid;
  runtime_printlock();
  s.len = (int)gcw;
  s.str = &DAT_00293f16;
  runtime_printstring(s);
  runtime_printpointer(gp_spill);
  s_00.len = (int)gcw;
  s_00.str = &DAT_0028a40e;
  runtime_printstring(s_00);
  runtime_printint(local_1b0._40_8_);
  s_01.len = (int)gcw;
  s_01.str = &DAT_0029ae57;
  runtime_printstring(s_01);
  runtime_printuint((ulong)(uint)local_1b0._12_4_);
  runtime_printnl();
  runtime_printunlock();
  s_02.len = (int)gcw;
  s_02.str = &DAT_0029a23a;
                    /* WARNING: Subroutine does not return */
  runtime_throw(s_02);
}

