
/* WARNING: Unknown calling convention */

void runtime_raise(uint32 sig)

{
  uint32 sig_spill;
  
  runtime_thr_self();
  runtime_thr_kill();
  return;
}

