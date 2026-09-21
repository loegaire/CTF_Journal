
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strings.Count(string s, string substr, int ~r2) */

int strings_Count(string s,string substr)

{
  uint8 *puVar1;
  long lVar2;
  long in_FS_OFFSET;
  string s_00;
  string s_01;
  string substr_00;
  string s_spill;
  string substr_spill;
  long local_38;
  int local_30;
  long local_28;
  
  puVar1 = (uint8 *)substr.len;
  s_00.len = s.len;
                    /* Unresolved local var: int n@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (substr_spill.len != 0) {
    if (substr_spill.len == 1) {
      internal_bytealg_CountString();
      return local_30;
    }
                    /* Unresolved local var: int i@[???] */
    lVar2 = 0;
    while( true ) {
      s_01.len = lVar2;
      s_01.str = (uint8 *)substr_spill.len;
      substr_00.len = (int)puVar1;
      substr_00.str = (uint8 *)s_spill.len;
      strings_Index(s_01,substr_00);
      if (local_28 == -1) {
        return lVar2;
      }
      puVar1 = (uint8 *)(local_28 + substr_spill.len);
      if ((ulong)s_spill.len < puVar1) break;
      lVar2 = lVar2 + 1;
      s_spill.len = s_spill.len + -(long)puVar1;
      s_spill.str = s_spill.str + ((ulong)puVar1 & -s_spill.len >> 0x3f);
      puVar1 = s_spill.str;
    }
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceB();
  }
  s_00.str = (uint8 *)s_spill.len;
  unicode_utf8_RuneCountInString(s_00);
  return local_38 + 1;
}

