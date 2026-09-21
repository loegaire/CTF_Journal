
/* WARNING: Unknown calling convention */

void runtime_unblocksig(uint32 sig)

{
  ulong uVar1;
  uint32 sig_spill;
  runtime_sigset set;
  
  set.__bits[0] = 0;
  set.__bits[1] = 0;
  set.__bits[2] = 0;
  set.__bits[3] = 0;
  uVar1 = (long)(((ulong)((long)((ulong)sig_spill - 1) >> 0x3f) >> 0x3b) + (ulong)sig_spill + -1) >>
          5;
  if (uVar1 < 4) {
    set.__bits[uVar1] = set.__bits[uVar1] | 1 << ((char)sig_spill - 1U & 0x1f);
    runtime_sigprocmask();
    return;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

