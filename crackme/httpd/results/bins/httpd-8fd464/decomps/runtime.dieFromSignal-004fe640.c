
/* WARNING: Unknown calling convention */

void runtime_dieFromSignal(uint32 sig)

{
  uintptr unaff_RBX;
  uint32 sig_spill;
  
  runtime_unblocksig(sig_spill);
  if ((ulong)sig_spill < 0x21) {
    LOCK();
    runtime_handlingSig[sig_spill] = 0;
    UNLOCK();
    runtime_raise(sig_spill);
    runtime_osyield();
    runtime_osyield();
    runtime_osyield();
    runtime_setsig(sig_spill,unaff_RBX);
    runtime_raise(sig_spill);
    runtime_osyield();
    runtime_osyield();
    runtime_osyield();
    runtime_exit();
    return;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

