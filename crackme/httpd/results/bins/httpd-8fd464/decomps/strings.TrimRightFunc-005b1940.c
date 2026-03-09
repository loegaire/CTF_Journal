
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strings.TrimRightFunc(string s, func(int32)_bool * * f, string
   ~r2) */

string strings_TrimRightFunc(string s,func_int32__bool **f)

{
  uint8 *puVar1;
  undefined1 in_DIL;
  long in_FS_OFFSET;
  string s_00;
  string s_01;
  string sVar2;
  string s_spill;
  func_int32__bool **f_spill;
  uint7 uStack_1f;
  uint8 *local_18;
  
  s_00.len = s.len;
                    /* Unresolved local var: int i@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  s_00.str = s_spill.str;
  strings_lastIndexFunc(s_00,(func_int32__bool **)s_spill.len,(bool)in_DIL);
  if (-1 < (long)local_18) {
    if ((ulong)s_spill.len <= local_18) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if (0x7f < s_spill.str[(long)local_18]) {
      s_01.len = (int)s_spill.str;
      s_01.str = local_18;
                    /* Unresolved local var: int wid@[???] */
      unicode_utf8_DecodeRuneInString(s_01);
      puVar1 = local_18 + (ulong)uStack_1f * 0x100;
      goto LAB_005b1a04;
    }
  }
  puVar1 = local_18 + 1;
LAB_005b1a04:
  if ((ulong)s_spill.len < puVar1) {
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceAlen();
  }
  sVar2.len = (int)s_spill.str;
  sVar2.str = puVar1;
  return sVar2;
}

