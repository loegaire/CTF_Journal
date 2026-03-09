
/* WARNING: Unknown calling convention */

void runtime_gcResetMarkState_func1(runtime_g *gp)

{
  runtime_g *gp_spill;
  
  gp_spill->gcscandone = false;
  gp_spill->gcAssistBytes = 0;
  return;
}

