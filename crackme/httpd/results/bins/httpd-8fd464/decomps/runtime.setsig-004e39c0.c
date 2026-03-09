
/* WARNING: Unknown calling convention */

void runtime_setsig(uint32 i,uintptr fn)

{
  uint32 i_spill;
  uintptr fn_spill;
  runtime_sigactiont sa;
  
  sa._28_4_ = 0;
  sa.sa_flags = 0x43;
  sa.sa_mask.__bits[0] = runtime_sigset_all.__bits[0];
  sa.sa_mask.__bits._4_8_ = runtime_sigset_all.__bits._4_8_;
  sa.sa_mask.__bits[3] = runtime_sigset_all.__bits[3];
  if ((code *)fn_spill == runtime_sighandler) {
    if (runtime_iscgo) {
      fn_spill = (uintptr)runtime_cgoSigtramp;
    }
    else {
      fn_spill = (uintptr)runtime_sigtramp;
    }
  }
  sa.sa_handler = fn_spill;
  runtime_sigaction((uint32)&sa,(runtime_sigactiont *)fn,(runtime_sigactiont *)(ulong)i_spill);
  return;
}

