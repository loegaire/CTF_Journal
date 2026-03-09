
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.eqslice([]uintptr x, []uintptr y, bool ~r2) */

bool runtime_eqslice(__uintptr x,__uintptr y)

{
  long lVar1;
  __uintptr x_spill;
  __uintptr y_spill;
  
  if (y_spill.len != x_spill.len) {
    return SUB81(y_spill.len,0);
  }
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: uintptr xi@[???] */
  lVar1 = 0;
  while( true ) {
    if (x_spill.len <= lVar1) {
      return SUB81(y_spill.array,0);
    }
    if (y_spill.array[lVar1] != x_spill.array[lVar1]) break;
    lVar1 = lVar1 + 1;
  }
  return SUB81(y_spill.array,0);
}

