
/* WARNING: Unknown calling convention */

void runtime_sysSigaction(uint32 sig,runtime_sigactiont *new,runtime_sigactiont *old)

{
  uint32 sig_spill;
  runtime_sigactiont *new_spill;
  runtime_sigactiont *old_spill;
  undefined4 local_10;
  
  runtime_asmSigaction();
  if (local_10 != 0) {
    runtime_systemstack();
  }
  return;
}

