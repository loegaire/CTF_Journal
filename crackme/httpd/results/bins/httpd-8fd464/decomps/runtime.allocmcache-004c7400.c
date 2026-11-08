
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.allocmcache(runtime.mcache * ~r0) */

runtime_mcache * runtime_allocmcache(void)

{
  long lVar1;
  uintptr uVar2;
  long in_FS_OFFSET;
  int local_28;
  runtime_mcache *local_20;
  code *local_18;
  runtime_mcache **pprStack_10;
  
                    /* Unresolved local var: runtime.mcache * c@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_20 = (runtime_mcache *)0x0;
  local_18 = runtime_allocmcache_func1;
  pprStack_10 = &local_20;
  runtime_systemstack();
                    /* Unresolved local var: int i@[???] */
  for (lVar1 = 0; lVar1 < 0x88; lVar1 = lVar1 + 1) {
    local_20->alloc[lVar1] = &runtime_emptymspan;
  }
  if (runtime_MemProfileRate == 1) {
    uVar2 = 0;
  }
  else {
    runtime_fastexprand(runtime_MemProfileRate);
    uVar2 = (uintptr)local_28;
  }
  local_20->nextSample = uVar2;
  return local_20;
}

