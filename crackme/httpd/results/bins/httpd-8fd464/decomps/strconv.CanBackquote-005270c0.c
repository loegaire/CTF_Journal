
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strconv.CanBackquote(string s, bool ~r1) */

bool strconv_CanBackquote(string s)

{
  uint8 *puVar1;
  long in_FS_OFFSET;
  string s_00;
  string s_spill;
  int local_28;
  uint8 *local_20;
  
  while (puVar1 = (uint8 *)s.len,
        &stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  do {
    while( true ) {
      while( true ) {
        if (s_spill.len < 1) {
          return SUB81(s_spill.len,0);
        }
        s_00.len = (int)puVar1;
        s_00.str = (uint8 *)s_spill.len;
                    /* Unresolved local var: int32 r@[???]
                       Unresolved local var: int wid@[???] */
        unicode_utf8_DecodeRuneInString(s_00);
        if ((ulong)s_spill.len < local_20) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceB();
        }
        s_spill.len = s_spill.len + -(long)local_20;
        puVar1 = (uint8 *)s_spill.len;
        if ((long)local_20 < 2) break;
        if (local_28 == 0xfeff) {
          return true;
        }
      }
      if (local_28 == 0xfffd) {
        return true;
      }
      if (0x1f < local_28) break;
      if (local_28 != 9) {
        return SUB41(local_28,0);
      }
    }
    if (local_28 == 0x60) {
      return true;
    }
  } while (local_28 != 0x7f);
  return true;
}

