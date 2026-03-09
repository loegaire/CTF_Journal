
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.skip(string value, string prefix, string ~r2, error ~r3) */

multireturn_string_error__conflict time_skip(string value,string prefix)

{
  multireturn_string_error__conflict mVar1;
  multireturn_string_error__conflict mVar2;
  multireturn_string_error__conflict mVar3;
  string value_spill;
  string prefix_spill;
  
  mVar1.~r3.data = (void *)prefix.len;
  while( true ) {
    while( true ) {
      if (prefix_spill.len < 1) {
        mVar3.~r2.len = prefix_spill.len;
        mVar3.~r2.str = value_spill.str;
        mVar3.~r3.data = mVar1.~r3.data;
        mVar3.~r3.tab = (runtime_itab *)value_spill.len;
        return mVar3;
      }
      if (*prefix_spill.str == 0x20) break;
      if (((runtime_itab *)value_spill.len == (runtime_itab *)0x0) ||
         (*value_spill.str != *prefix_spill.str)) {
        mVar2.~r2.len = (int)time_errBad.data;
        mVar2.~r2.str = value_spill.str;
        mVar2.~r3.data = mVar1.~r3.data;
        mVar2.~r3.tab = (runtime_itab *)value_spill.len;
        return mVar2;
      }
      prefix_spill.len = prefix_spill.len + -1;
      prefix_spill.str = prefix_spill.str + (-prefix_spill.len >> 0x3f & 1);
      value_spill.len = (long)((runtime_itab *)(value_spill.len + -0x20))->fun + 7;
      value_spill.str = value_spill.str + (-value_spill.len >> 0x3f & 1);
    }
    if ((0 < value_spill.len) && (*value_spill.str != 0x20)) break;
    for (; (0 < prefix_spill.len && (*prefix_spill.str == 0x20));
        prefix_spill.str = prefix_spill.str + (-prefix_spill.len >> 0x3f & 1)) {
      prefix_spill.len = prefix_spill.len + -1;
    }
    for (; (0 < value_spill.len && (*value_spill.str == 0x20));
        value_spill.str = value_spill.str + (-value_spill.len >> 0x3f & 1)) {
      value_spill.len = (long)((runtime_itab *)(value_spill.len + -0x20))->fun + 7;
    }
  }
  mVar1.~r2.len = (int)time_errBad.data;
  mVar1.~r2.str = value_spill.str;
  mVar1.~r3.tab = (runtime_itab *)value_spill.len;
  return mVar1;
}

