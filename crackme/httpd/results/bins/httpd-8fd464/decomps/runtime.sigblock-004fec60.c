
/* WARNING: Unknown calling convention */

void runtime_sigblock(bool exiting)

{
  bool exiting_spill;
  
  if (exiting_spill) {
    runtime_sigprocmask();
    return;
  }
  runtime_sigprocmask();
  return;
}

