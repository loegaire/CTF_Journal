
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void runtime_gcMarkTinyAllocs(void)

{
  runtime_p *refBase;
  runtime_p **p;
  int refOff;
  long lVar1;
  runtime_mcache *gcw;
  runtime_mspan *span;
  uintptr in_R8;
  long in_FS_OFFSET;
  multireturn_uintptr_runtime_mspan___uintptr_ mVar2;
  uintptr local_38;
  
  while (refOff = runtime_allp.len, p = runtime_allp.array,
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: runtime.p * p@[???] */
  for (lVar1 = 0; lVar1 < refOff; lVar1 = lVar1 + 1) {
    refBase = p[lVar1];
                    /* Unresolved local var: runtime.mcache * c@[???]
                       Unresolved local var: runtime.mspan * span@[???]
                       Unresolved local var: uintptr objIndex@[???]
                       Unresolved local var: runtime.gcWork * gcw@[???] */
    gcw = refBase->mcache;
    if ((gcw != (runtime_mcache *)0x0) &&
       (span = (runtime_mspan *)gcw->tiny, span != (runtime_mspan *)0x0)) {
      mVar2 = runtime_findObject((uintptr)p,(uintptr)refBase,refOff);
      runtime_greyobject((uintptr)&refBase->gcw,(uintptr)mVar2.s,local_38,span,(runtime_gcWork *)gcw
                         ,in_R8);
    }
  }
  return;
}

