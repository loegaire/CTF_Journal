
/* WARNING: Unknown calling convention */

void runtime_sigprofNonGoPC(uintptr pc)

{
  undefined8 unaff_RBX;
  int in_RDI;
  __uintptr stk;
  uintptr pc_spill;
  undefined1 local_18 [8];
  undefined8 uStack_10;
  
  if (runtime_prof.hz != 0) {
    uStack_10 = 0x4f40c1;
    stk.len = (int)local_18;
    stk.array = (uintptr *)unaff_RBX;
    stk.cap = in_RDI;
    runtime___cpuProfile__addNonGo(&runtime_cpuprof,stk);
  }
  return;
}

