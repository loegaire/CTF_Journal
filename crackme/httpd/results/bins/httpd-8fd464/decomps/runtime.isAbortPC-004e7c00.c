
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.isAbortPC(uintptr pc, bool ~r1) */

bool runtime_isAbortPC(uintptr pc)

{
  uintptr pc_spill;
  undefined8 local_18;
  
  runtime_findfunc(pc_spill);
  if (local_18 != 0) {
    return SUB81(local_18,0);
  }
  return false;
}

