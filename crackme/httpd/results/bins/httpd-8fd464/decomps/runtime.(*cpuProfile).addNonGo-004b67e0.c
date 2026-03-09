
/* WARNING: Unknown calling convention */

void runtime___cpuProfile__addNonGo(runtime_cpuProfile *p,__uintptr stk)

{
  int iVar1;
  bool bVar2;
  runtime_cpuProfile *p_spill;
  __uintptr stk_spill;
  
  while( true ) {
    iVar1 = runtime_cpuprof.numExtra;
    LOCK();
    bVar2 = runtime_prof.signalLock == 0;
    if (bVar2) {
      runtime_prof.signalLock = 1;
    }
    UNLOCK();
    if (bVar2) break;
    runtime_osyield();
  }
  if (stk_spill.len + runtime_cpuprof.numExtra + 1 < 1000) {
    if (999 < (ulong)runtime_cpuprof.numExtra) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    runtime_cpuprof.extra[runtime_cpuprof.numExtra] = stk_spill.len + 1;
    if (stk_spill.array !=
        (uintptr *)((long)runtime_cpuprof.extra + ((iVar1 + 1) * 8 & iVar1 + -999 >> 0x3f))) {
      runtime_memmove();
    }
    runtime_cpuprof.numExtra = runtime_cpuprof.numExtra + stk_spill.len + 1;
  }
  else {
    runtime_cpuprof.lostExtra = runtime_cpuprof.lostExtra + 1;
  }
  LOCK();
  runtime_prof.signalLock = 0;
  UNLOCK();
  return;
}

