
/* WARNING: Unknown calling convention */

void runtime_setsigstack(uint32 i)

{
  runtime_sigactiont *old;
  runtime_sigactiont *unaff_RBX;
  uint32 i_spill;
  runtime_sigactiont sa;
  
  sa.sa_handler = 0;
  sa.sa_flags = 0;
  sa.sa_mask.__bits[0] = 0;
  sa.sa_mask.__bits[1] = 0;
  sa.sa_mask.__bits[2] = 0;
  sa.sa_mask.__bits[3] = 0;
  sa._28_4_ = 0;
  old = (runtime_sigactiont *)(ulong)i_spill;
  runtime_sigaction((uint32)&sa,unaff_RBX,old);
  if ((sa._8_8_ & 1) != 0) {
    return;
  }
  sa._8_8_ = sa._8_8_ | 1;
  runtime_sigaction((uint32)&sa,unaff_RBX,old);
  return;
}

