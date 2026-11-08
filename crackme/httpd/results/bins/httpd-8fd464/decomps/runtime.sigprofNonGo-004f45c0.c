
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_sigprofNonGo(void)

{
  runtime_cpuProfile *p;
  int in_RDI;
  __uintptr stk;
  
  if (runtime_prof.hz != 0) {
    for (p = (runtime_cpuProfile *)0x0; ((long)p < 0x20 && (runtime_sigprofCallers[(long)p] != 0));
        p = (runtime_cpuProfile *)((long)&(p->lock).key + 1)) {
                    /* Unresolved local var: int n@[???] */
    }
    if ((runtime_cpuProfile *)&DAT_00000020 < p) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAlen();
    }
    stk.len = (int)&runtime_cpuprof;
    stk.array = runtime_sigprofCallers;
    stk.cap = in_RDI;
    runtime___cpuProfile__addNonGo(p,stk);
  }
  LOCK();
  runtime_sigprofCallersUse = 0;
  UNLOCK();
  return;
}

