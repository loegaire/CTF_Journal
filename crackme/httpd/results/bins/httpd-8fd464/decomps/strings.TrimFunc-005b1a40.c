
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strings.TrimFunc(string s, func(int32)_bool * * f, string ~r2) */

string strings_TrimFunc(string s,func_int32__bool **f)

{
  undefined1 auVar1 [16];
  func_int32__bool **f_00;
  undefined1 in_DIL;
  long in_FS_OFFSET;
  string sVar2;
  string s_spill;
  func_int32__bool **f_spill;
  undefined7 uStack_17;
  ulong local_10;
  string s_00;
  
  sVar2.len = s.len;
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  sVar2.str = s_spill.str;
  f_00 = (func_int32__bool **)s_spill.len;
                    /* Unresolved local var: int i@[???] */
  strings_indexFunc(sVar2,(func_int32__bool **)s_spill.len,(bool)in_DIL);
  if ((local_10 != 0xffffffffffffffff) &&
     (f_00 = (func_int32__bool **)s_spill.str, (ulong)s_spill.len < local_10)) {
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceB();
  }
  s_00.len = sVar2.len;
  s_00.str = (uint8 *)f_spill;
  sVar2 = strings_TrimRightFunc(s_00,f_00);
  auVar1._7_8_ = sVar2.len;
  auVar1._0_7_ = uStack_17;
  auVar1[0xf] = 0;
  return (string)(auVar1 << 8);
}

