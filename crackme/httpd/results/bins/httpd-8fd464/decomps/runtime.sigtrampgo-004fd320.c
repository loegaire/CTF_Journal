
/* WARNING: Removing unreachable block (ram,0x004fd475) */
/* WARNING: Removing unreachable block (ram,0x004fd4f6) */
/* WARNING: Unknown calling convention */

void runtime_sigtrampgo(uint32 sig,runtime_siginfo *info,void *ctx)

{
  long lVar1;
  runtime_g *in_RDI;
  uint32 sig_spill;
  runtime_siginfo *info_spill;
  void *ctx_spill;
  char local_58;
  runtime_gsignalStack local_48;
  runtime_siginfo *local_20;
  undefined1 local_18 [8];
  void *pvStack_10;
  
                    /* Unresolved local var: runtime.sigctxt * c@[???]
                       Unresolved local var: runtime.g * g@[???]
                       Unresolved local var: bool setStack@[???]
                       Unresolved local var: runtime.gsignalStack gsignalStack@[???] */
  runtime_sigfwdgo(sig_spill,info,info_spill);
  if (local_58 != '\0') {
    return;
  }
  pvStack_10 = ctx_spill;
  runtime_sigFetchG((runtime_sigctxt *)info_spill);
  local_20 = info_spill;
  runtime_setg();
  if (local_20 != (runtime_siginfo *)0x0) {
    runtime_setg();
    local_48.stack.lo = 0;
    local_48.stack.hi = 0;
    local_48.stackguard0 = 0;
    local_48.stackguard1 = 0;
    local_48.stktopsp = 0;
    runtime_adjustSignalStack((uint32)local_20,(runtime_m *)info,&local_48);
    lVar1._0_4_ = local_20->si_uid;
    lVar1._4_4_ = local_20->si_status;
    if (lVar1 == -0x4d2) {
      runtime_signalDuringFork(sig_spill);
    }
    runtime_sighandler((uint32)ctx_spill,info,local_20,in_RDI);
    runtime_setg();
    return;
  }
  if (sig_spill == 0x1b) {
    runtime_sigprofNonGoPC(*(uintptr *)((long)pvStack_10 + 0xb0));
    return;
  }
  if ((sig_spill == 0x10) && (runtime_debug.asyncpreemptoff == 0)) {
    return;
  }
  runtime_badsignal((uintptr)local_18,(runtime_sigctxt *)info);
  return;
}

