
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void io.discard.WriteString(string s, int ~r1, error ~r2) */

multireturn_int_error__conflict io_discard_WriteString(string s)

{
  void *in_RCX;
  multireturn_int_error__conflict mVar1;
  string s_spill;
  
  mVar1.~r2.tab = s.len;
  mVar1.~r1 = s_spill.len;
  mVar1.~r2.data = in_RCX;
  return mVar1;
}

