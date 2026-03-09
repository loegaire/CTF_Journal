
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.isSystemGoroutine(runtime.g * gp, bool fixed, bool ~r2) */

bool runtime_isSystemGoroutine(runtime_g *gp,bool fixed)

{
  runtime_funcID rVar1;
  long in_FS_OFFSET;
  runtime_funcInfo rVar2;
  runtime_g *gp_spill;
  bool fixed_spill;
  runtime__func *local_20;
  undefined1 local_10;
  undefined7 uStack_f;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  rVar2 = runtime_findfunc(gp_spill->startpc);
  if (local_20 == (runtime__func *)0x0) {
    return false;
  }
  rVar1 = local_20->funcID;
  if ((rVar1 == 0x12) || (rVar1 == 10)) {
    return SUB81(local_20,0);
  }
  if (rVar1 != 0x11) {
    rVar2._func = local_20;
    runtime_funcname(rVar2);
    if (CONCAT71(uStack_f,local_10) < 8) {
      local_10 = 0;
    }
    else {
      runtime_memequal();
    }
    return (bool)local_10;
  }
  if (fixed_spill) {
    return true;
  }
  return (bool)(runtime_fingRunning ^ 1);
}

