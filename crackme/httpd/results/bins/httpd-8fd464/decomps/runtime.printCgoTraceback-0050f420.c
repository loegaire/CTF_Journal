
/* WARNING: Unknown calling convention */

void runtime_printCgoTraceback(runtime_cgoCallers *callers)

{
  uint64 v;
  runtime_cgoSymbolizerArg *arg;
  long lVar1;
  int unaff_RBX;
  long in_FS_OFFSET;
  string s;
  runtime_cgoCallers *callers_spill;
  runtime_cgoSymbolizerArg local_40;
  
                    /* Unresolved local var: runtime.cgoSymbolizerArg arg@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (runtime_cgoSymbolizer != (void *)0x0) {
    local_40.pc = 0;
    local_40.file = (uint8 *)0x0;
    local_40.lineno = 0;
    local_40.funcName = (uint8 *)0x0;
    local_40.entry = 0;
    local_40.more = 0;
    local_40.data = 0;
                    /* Unresolved local var: uintptr c@[???] */
    for (arg = (runtime_cgoSymbolizerArg *)0x0;
        ((long)arg < 0x20 && ((*callers_spill)[(long)arg] != 0));
        arg = (runtime_cgoSymbolizerArg *)((long)&arg->pc + 1)) {
      runtime_printOneCgoTraceback((uintptr)&local_40,unaff_RBX,arg);
    }
    local_40.pc = 0;
    runtime_callCgoSymbolizer(&local_40);
    return;
  }
                    /* Unresolved local var: uintptr c@[???] */
  for (lVar1 = 0; (lVar1 < 0x20 && (v = (*callers_spill)[lVar1], v != 0)); lVar1 = lVar1 + 1) {
    runtime_printlock();
    s.len = unaff_RBX;
    s.str = &DAT_0029d38f;
    runtime_printstring(s);
    runtime_printhex(v);
    runtime_printnl();
    runtime_printunlock();
  }
  return;
}

