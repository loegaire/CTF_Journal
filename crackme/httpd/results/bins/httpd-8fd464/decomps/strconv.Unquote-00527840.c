
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strconv.Unquote(string s, string ~r1, error ~r2) */

multireturn_string_error_ strconv_Unquote(string s)

{
  undefined8 in_RCX;
  long in_FS_OFFSET;
  string in;
  multireturn_string_error_ mVar1;
  multireturn_string_error_ mVar2;
  multireturn_string_string_error_ mVar3;
  string s_spill;
  undefined8 local_38;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  in.len = s.len;
                    /* Unresolved local var: string out@[???]
                       Unresolved local var: error err@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  in.str = (uint8 *)s_spill.len;
  mVar3 = strconv_unquote(in,SUB81(in_RCX,0));
  mVar1.~r2.data = mVar3.rem.len;
  if (0 < local_20) {
    mVar1.~r1.len = local_10;
    mVar1.~r1.str = (uint8 *)strconv_ErrSyntax.tab;
    mVar1.~r2.tab = strconv_ErrSyntax.data;
    return mVar1;
  }
  mVar2.~r1.len = local_10;
  mVar2.~r1.str = local_38;
  mVar2.~r2.data = mVar1.~r2.data;
  mVar2.~r2.tab = local_18;
  return mVar2;
}

