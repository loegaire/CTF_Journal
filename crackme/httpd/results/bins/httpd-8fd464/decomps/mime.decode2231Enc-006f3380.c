
/* WARNING: Removing unreachable block (ram,0x006f349d) */
/* WARNING: Removing unreachable block (ram,0x006f342f) */
/* WARNING: Removing unreachable block (ram,0x006f3446) */
/* WARNING: Removing unreachable block (ram,0x006f344e) */
/* WARNING: Removing unreachable block (ram,0x006f3470) */
/* WARNING: Removing unreachable block (ram,0x006f34b9) */
/* WARNING: Removing unreachable block (ram,0x006f34d5) */
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void mime.decode2231Enc(string v, string ~r1, bool ~r2) */

multireturn_string_bool__conflict1 mime_decode2231Enc(string v)

{
  uint8 *in_RCX;
  int in_RSI;
  int in_RDI;
  int in_R8;
  long in_FS_OFFSET;
  string sVar1;
  __string _Var2;
  string sep;
  multireturn_string_bool__conflict1 mVar3;
  multireturn_string_bool__conflict1 mVar4;
  string v_spill;
  uint8 *local_28;
  long local_20;
  string s;
  
  sVar1.len = v.len;
                    /* Unresolved local var: string encv@[???]
                       Unresolved local var: []string sv@[???]
                       Unresolved local var: string charset@[???]
                       Unresolved local var: string * ~R0.ptr@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  sVar1.str = (uint8 *)&go_string__;
  sep.len = in_RDI;
  sep.str = in_RCX;
  _Var2 = strings_genSplit(sVar1,sep,in_RSI,in_R8);
  s.len = _Var2.len;
  if (local_20 == 3) {
    s.str = local_28;
    sVar1 = strings_ToLower(s);
    mVar3.~r1.len = sVar1.len;
    mVar3.~r1.str = (uint8 *)0x1;
    mVar3.~r2 = true;
    return mVar3;
  }
  mVar4.~r1.len = s.len;
  mVar4.~r1.str = local_28;
  mVar4.~r2 = _Var2.cap._0_1_;
  return mVar4;
}

