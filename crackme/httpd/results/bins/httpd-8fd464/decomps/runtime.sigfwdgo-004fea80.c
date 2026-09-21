
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.sigfwdgo(uint32 sig, runtime.siginfo * info, void * ctx,
   bool ~r3) */

bool runtime_sigfwdgo(uint32 sig,runtime_siginfo *info,void *ctx)

{
  uintptr uVar1;
  long lVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined1 extraout_AL;
  ulong uVar5;
  uint32 sig_spill;
  runtime_siginfo *info_spill;
  void *ctx_spill;
  long local_38;
  runtime_sigctxt local_18;
  
                    /* Unresolved local var: uintptr fwdFn@[???]
                       Unresolved local var: int32 flags@[???]
                       Unresolved local var: runtime.sigctxt * c@[???]
                       Unresolved local var: runtime.g * g@[???] */
  uVar5 = (ulong)sig_spill;
  bVar3 = SUB41(sig_spill,0);
  if (0x20 < sig_spill) {
    return bVar3;
  }
  uVar1 = runtime_fwdSig[uVar5];
  if ((runtime_handlingSig[uVar5] != 0) && (runtime_signalsOK)) {
    if (uVar1 == 0) {
      return bVar3;
    }
    if (((info_spill->si_code == 0x10001) || (((uint)runtime_sigtable[uVar5].flags >> 3 & 1) == 0))
       && (sig_spill != 0xd)) {
      return bVar3;
    }
    runtime_sigFetchG(&local_18);
    if (((local_38 != 0) && (lVar2 = *(long *)(local_38 + 0x30), lVar2 != 0)) &&
       ((*(long *)(lVar2 + 200) != 0 && (*(char *)(lVar2 + 0x120) == '\0')))) {
      return SUB81(lVar2,0);
    }
    uVar4 = 1;
    if (uVar1 != 1) {
      uVar4 = runtime_sigfwd();
    }
    return (bool)uVar4;
  }
  if (uVar1 != 1) {
    if (uVar1 != 0) {
      uVar4 = runtime_sigfwd();
      return (bool)uVar4;
    }
    if (((uint)runtime_sigtable[uVar5].flags >> 8 & 1) == 0) {
      runtime_setsig(sig_spill,(ulong)runtime_handlingSig[uVar5]);
      runtime_dieFromSignal(sig_spill);
      return (bool)extraout_AL;
    }
  }
  return bVar3;
}

