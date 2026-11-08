
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.plainError.Error(runtime.plainError e, string ~r0) */

string runtime_plainError_Error(runtime_plainError e)

{
  string sVar1;
  runtime_plainError e_spill;
  
  sVar1.len = e.len;
  sVar1.str = (uint8 *)e_spill.len;
  return sVar1;
}

