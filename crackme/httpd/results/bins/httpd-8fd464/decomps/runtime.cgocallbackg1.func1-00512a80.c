
/* WARNING: Unknown calling convention */

void runtime_cgocallbackg1_func1(runtime_g *gp)

{
  int *piVar1;
  runtime_g *gp_spill;
  
  piVar1 = &(gp_spill->cgoCtxt).len;
  *piVar1 = *piVar1 + -1;
  return;
}

