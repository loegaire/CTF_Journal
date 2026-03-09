
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.getnum(string s, bool fixed, int ~r2, string ~r3, error ~r4)
    */

multireturn_int_string_error_ time_getnum(string s,bool fixed)

{
  void *in_RSI;
  runtime_itab *in_RDI;
  multireturn_int_string_error_ mVar1;
  multireturn_int_string_error_ mVar2;
  multireturn_int_string_error_ mVar3;
  multireturn_int_string_error_ mVar4;
  string s_spill;
  bool fixed_spill;
  
                    /* Unresolved local var: uint8 c@[???] */
  if ((s_spill.len < 1) || (9 < (byte)(*s_spill.str - 0x30))) {
    mVar4.~r3.str = time_errBad.data;
    mVar4.~r2 = s_spill.len;
    mVar4.~r3.len = (int)s_spill.str;
    mVar4.~r4.data = in_RSI;
    mVar4.~r4.tab = in_RDI;
    return mVar4;
  }
                    /* Unresolved local var: uint8 c@[???] */
  if ((1 < s_spill.len) && (mVar3.~r3.str._0_1_ = s_spill.str[1] - 0x30, (byte)mVar3.~r3.str < 10))
  {
    mVar3.~r2 = s_spill.str + (-(s_spill.len + -2) >> 0x3f & 2);
    mVar3.~r3.str._1_7_ = 0;
    mVar3.~r3.len = (int)s_spill.str;
    mVar3.~r4.data = in_RSI;
    mVar3.~r4.tab = in_RDI;
    return mVar3;
  }
  if (!fixed_spill) {
    mVar2.~r2 = s_spill.str + (-(s_spill.len + -1) >> 0x3f & 1);
    mVar2.~r3.str = (uint8 *)0x0;
    mVar2.~r3.len = (int)s_spill.str;
    mVar2.~r4.data = in_RSI;
    mVar2.~r4.tab = in_RDI;
    return mVar2;
  }
  mVar1.~r3.str = time_errBad.data;
  mVar1.~r2 = s_spill.len;
  mVar1.~r3.len = (int)s_spill.str;
  mVar1.~r4.data = in_RSI;
  mVar1.~r4.tab = in_RDI;
  return mVar1;
}

