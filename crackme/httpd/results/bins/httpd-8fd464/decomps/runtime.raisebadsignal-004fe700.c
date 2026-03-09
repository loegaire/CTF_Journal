
/* WARNING: Unknown calling convention */

void runtime_raisebadsignal(uint32 sig,runtime_sigctxt *c)

{
  long in_FS_OFFSET;
  uint32 sig_spill;
  runtime_sigctxt *c_spill;
  
                    /* Unresolved local var: uintptr handler@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (sig_spill != 0x1b) {
    runtime_unblocksig(sig_spill);
    runtime_setsig(sig_spill,(uintptr)c);
    runtime_raise(sig_spill);
    runtime_usleep();
    runtime_setsig(0x4fd800,(uintptr)c);
    return;
  }
  return;
}

