
/* WARNING: Unknown calling convention */

void runtime_signalstack(runtime_stack *s)

{
  runtime_stack *s_spill;
  runtime_stackt st;
  
  runtime_sigaltstack();
  return;
}

