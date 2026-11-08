
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void runtime_badsignal(uintptr sig,runtime_sigctxt *c)

{
  uintptr sig_spill;
  runtime_sigctxt *c_spill;
  undefined1 local_20;
  
  if ((!runtime_iscgo) && (!runtime_cgoHasExtraM)) {
    local_20 = (char)runtime_badginsignalMsg.str;
    runtime_write1();
    runtime_exit();
    _DAT_0000007b = 2;
  }
  runtime_needm();
  runtime_sigsend((uint32)sig_spill);
  if (local_20 == '\0') {
    runtime_raisebadsignal((uint32)c_spill,c);
  }
  runtime_dropm();
  return;
}

