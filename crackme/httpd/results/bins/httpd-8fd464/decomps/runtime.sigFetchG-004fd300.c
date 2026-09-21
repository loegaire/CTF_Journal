
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void runtime.sigFetchG(runtime.sigctxt * c, runtime.g * ~r1) */

runtime_g * runtime_sigFetchG(runtime_sigctxt *c)

{
  long in_FS_OFFSET;
  runtime_sigctxt *c_spill;
  
  return *(runtime_g **)(in_FS_OFFSET + -8);
}

