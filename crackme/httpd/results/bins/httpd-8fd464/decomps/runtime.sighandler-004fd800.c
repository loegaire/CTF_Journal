
/* WARNING: Unknown calling convention */

void runtime_sighandler(uint32 sig,runtime_siginfo *info,void *ctxt,runtime_g *gp)

{
  byte bVar1;
  runtime_g *gp_00;
  uint8 *puVar2;
  int64 v;
  uint64 v_00;
  runtime_m *prVar3;
  ulong uVar4;
  bool bVar5;
  uint sig_00;
  uint32 uVar6;
  uint32 extraout_EAX;
  undefined7 extraout_var;
  uint uVar7;
  runtime_g *prVar8;
  ulong uVar9;
  runtime_g *prVar10;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  string s_05;
  string s_06;
  uint32 sig_spill;
  runtime_siginfo *info_spill;
  void *ctxt_spill;
  runtime_g *gp_spill;
  runtime_sigctxt *local_a0;
  char local_90;
  runtime_g *local_28;
  uint8 *local_20;
  runtime_sigctxt local_18;
  
                    /* Unresolved local var: runtime.g * _g_@[DW_OP_reg0(RAX)]
                       Unresolved local var: runtime.sigctxt * c@[???]
                       Unresolved local var: int32 flags@[???]
                       Unresolved local var: int32 level@[???]
                       Unresolved local var: uint64 ~R0@[???] */
  while (&local_28 <= *(runtime_g ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  gp_00 = *(runtime_g **)(in_FS_OFFSET + -8);
  local_18.info = info_spill;
  local_18.ctxt = ctxt_spill;
  if (sig_spill == 0x1b) {
    runtime_sigprof((uintptr)gp_00->m,(uintptr)ctxt_spill,(uintptr)gp_spill,gp,(runtime_m *)0x1b);
    return;
  }
  if ((sig_spill == 5) &&
     (runtime_testSigtrap != (func__runtime_siginfo___runtime_sigctxt___runtime_g__bool **)0x0)) {
    local_a0 = &local_18;
    (**runtime_testSigtrap)
              ((runtime_siginfo *)gp,(runtime_sigctxt *)&DAT_00000005,
               (runtime_g *)runtime_testSigtrap,(bool *)local_a0);
    ctxt_spill = gp_spill;
    if (local_90 != '\0') {
      return;
    }
  }
  if (((sig_spill == 0x1e) && (runtime_testSigusr1 != (func__runtime_g__bool **)0x0)) &&
     ((**runtime_testSigusr1)(gp,(bool *)&DAT_0000001e), (char)local_a0 != '\0')) {
    return;
  }
  if ((sig_spill == 0x10) && (runtime_debug.asyncpreemptoff == 0)) {
    local_a0._0_1_ = (char)&local_18;
    runtime_doSigPreempt(gp_spill,ctxt_spill);
  }
  if (sig_spill < 0x21) {
    uVar7 = runtime_sigtable[sig_spill].flags;
  }
  else {
    uVar7 = 4;
  }
  if ((((local_18.info)->si_code != 0x10001) && ((uVar7 >> 3 & 1) != 0)) &&
     (gp_spill->throwsplit != false)) {
    uVar7 = 4;
  }
  runtime_isAbortPC(*(uintptr *)((long)local_18.ctxt + 0xb0));
  if ((char)local_a0 != '\0') {
    uVar7 = 4;
  }
  sig_00 = (local_18.info)->si_code;
  if (sig_00 != 0x10001) {
    if ((uVar7 >> 3 & 1) != 0) {
      gp_spill->sig = sig_spill;
      gp_spill->sigcode0 = (long)(local_18.info)->si_code;
      gp_spill->sigcode1 = (local_18.info)->si_addr;
      gp_spill->sigpc = *(uintptr *)((long)local_18.ctxt + 0xb0);
      runtime___sigctxt__preparePanic((runtime_sigctxt *)(ulong)sig_spill,(uint32)gp_spill,gp_spill)
      ;
      return;
    }
    if ((sig_00 != 0x10001) && ((uVar7 & 1) == 0)) goto LAB_004fdaca;
  }
  bVar5 = runtime_sigsend(sig_spill);
  sig_00 = (uint)CONCAT71(extraout_var,bVar5);
  if ((char)local_a0 != '\0') {
    return;
  }
LAB_004fdaca:
  if ((local_18.info)->si_code == 0x10001) {
    if (1 < (ulong)(sig_spill >> 5)) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    sig_00 = runtime_sig.ignored[sig_spill >> 5];
    if ((sig_00 >> (sig_spill & 0x1f) & 1) != 0) {
      return;
    }
  }
  if ((uVar7 >> 1 & 1) != 0) {
    runtime_dieFromSignal(sig_00);
  }
  if ((uVar7 & 0xc) == 0) {
    return;
  }
  gp_00->m->throwing = 1;
  gp_00->m->caughtsig = (runtime_guintptr)gp_spill;
  if (runtime_crashing == 0) {
    runtime_startpanic_m();
  }
  prVar10 = gp_spill;
  if (sig_spill < 0x21) {
    puVar2 = (uint8 *)runtime_sigtable[sig_spill].name.len;
    local_20 = runtime_sigtable[sig_spill].name.str;
    runtime_printlock();
    s.len = (int)puVar2;
    s.str = puVar2;
    runtime_printstring(s);
    runtime_printnl();
    runtime_printunlock();
  }
  else {
    runtime_printlock();
    s_00.len = (int)gp_spill;
    s_00.str = &DAT_0028a68b;
    runtime_printstring(s_00);
    runtime_printuint((ulong)sig_spill);
    runtime_printnl();
    runtime_printunlock();
  }
  v = gp_00->m->id;
  v_00 = *(uint64 *)((long)local_18.ctxt + 0xb0);
  s_01.len = (uintptr)(local_18.info)->si_code;
  runtime_printlock();
  s_01.str = &DAT_0028797e;
  runtime_printstring(s_01);
  runtime_printhex(v_00);
  s_02.len = s_01.len;
  s_02.str = &DAT_00287885;
  runtime_printstring(s_02);
  runtime_printint(v);
  s_03.len = s_01.len;
  s_03.str = &DAT_0028d220;
  runtime_printstring(s_03);
  runtime_printuint(s_01.len);
  runtime_printnl();
  runtime_printunlock();
  prVar3 = gp_00->m;
  if (((prVar3->lockedg != 0) && (0 < prVar3->ncgo)) && (prVar3->g0 == gp_spill)) {
    runtime_printlock();
    s_04.len = s_01.len;
    s_04.str = &DAT_002a4ec1;
    runtime_printstring(s_04);
    runtime_printunlock();
    gp_spill = (runtime_g *)gp_00->m->lockedg;
  }
  local_28 = gp_spill;
  if ((sig_spill == 4) || (sig_spill == 8)) {
                    /* Unresolved local var: uintptr n@[???]
                       Unresolved local var: uintptr pc@[???]
                       Unresolved local var: uint8[16] * b@[???] */
    uVar4 = *(ulong *)((long)local_18.ctxt + 0xb0);
    if (runtime_physPageSize == 0) {
                    /* WARNING: Subroutine does not return */
      runtime_panicdivide();
    }
    s_01.len = runtime_physPageSize - uVar4 % runtime_physPageSize;
    if (0xf < s_01.len) {
      s_01.len = 0x10;
    }
                    /* Unresolved local var: uintptr i@[???] */
    runtime_printlock();
    s_05.len = s_01.len;
    s_05.str = &DAT_0029abde;
    runtime_printstring(s_05);
    runtime_printunlock();
    for (uVar9 = 0; uVar9 < s_01.len; uVar9 = uVar9 + 1) {
      if (0xf < uVar9) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndexU();
      }
      bVar1 = *(byte *)(uVar4 + uVar9);
      runtime_printlock();
      runtime_printsp();
      runtime_printhex((ulong)bVar1);
      runtime_printunlock();
    }
    runtime_printlock();
    runtime_printnl();
    runtime_printunlock();
  }
  runtime_printlock();
  runtime_printnl();
  runtime_printunlock();
  uVar6 = runtime_traceback_cache;
                    /* Unresolved local var: runtime.g * _g_@[???]
                       Unresolved local var: uint32 t@[???] */
  bVar1 = *(byte *)(*(long *)(*(long *)(in_FS_OFFSET + -8) + 0x30) + 0x131);
  uVar7 = runtime_traceback_cache >> 2;
  if (bVar1 != 0) {
    uVar7 = (uint)bVar1;
  }
  if (uVar7 != 0) {
    runtime_goroutineheader(local_28);
    runtime_tracebacktrap((uintptr)local_28,s_01.len,*(uintptr *)((long)local_18.ctxt + 0xb0),gp);
    if (runtime_crashing < 1) {
      bVar5 = false;
    }
    else {
      prVar8 = gp_00->m->curg;
      if (local_28 == prVar8) {
        bVar5 = false;
      }
      else if (prVar8 == (runtime_g *)0x0) {
        bVar5 = false;
      }
      else {
        bVar5 = (prVar8->atomicstatus & 0xffffefff) == 2;
      }
    }
    if (bVar5) {
      prVar8 = gp_00->m->curg;
      runtime_goroutineheader(gp_00);
      runtime_traceback1((uintptr)gp_00->m->curg,s_01.len,(uintptr)prVar8,gp,(uint)prVar10);
    }
    else if (runtime_crashing == 0) {
      runtime_tracebackothers(gp_00);
      runtime_printlock();
      runtime_printnl();
      runtime_printunlock();
    }
    runtime_dumpregs(&local_18);
  }
  if ((uVar6 & 1) != 0) {
    uVar6 = runtime_crashing + 1;
    runtime_crashing = uVar6;
    if ((int)uVar6 <
        (int)(((int)runtime_sched.mnext - (int)runtime_sched.nmfreed) - runtime_extraMCount)) {
      runtime_printlock();
      s_06.len = s_01.len;
      s_06.str = &DAT_0028bca2;
      runtime_printstring(s_06);
      runtime_printunlock();
      runtime_raiseproc();
      runtime_usleep();
      uVar6 = extraout_EAX;
    }
    runtime_dieFromSignal(uVar6);
  }
  runtime_exit();
  return;
}

