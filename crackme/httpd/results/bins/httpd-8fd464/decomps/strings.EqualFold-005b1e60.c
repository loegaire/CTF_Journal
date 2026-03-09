
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strings.EqualFold(string s, string t, bool ~r2) */

bool strings_EqualFold(string s,string t)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  long in_FS_OFFSET;
  string s_00;
  string s_01;
  string s_spill;
  string t_spill;
  ulong local_58;
  uint local_50;
  undefined1 local_48;
  undefined7 uStack_47;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  do {
    while( true ) {
      do {
        if ((s_spill.len == 0) || (t_spill.len == 0)) {
          if (t_spill.len == s_spill.len) {
            runtime_memequal();
          }
          else {
            local_48 = 0;
          }
          return (bool)local_48;
        }
        if (*s_spill.str < 0x80) {
          uVar4 = (long)-(s_spill.len - 1U) >> 0x3f & 1;
          uVar2 = s_spill.len - 1U;
          uVar5 = (uint)*s_spill.str;
        }
        else {
          s_00.len = s_spill.len;
          s_00.str = t_spill.str;
                    /* Unresolved local var: int32 r@[???]
                       Unresolved local var: int size@[???] */
          unicode_utf8_DecodeRuneInString(s_00);
          uVar2 = CONCAT71(uStack_47,local_48);
          if ((ulong)s_spill.len < uVar2) {
                    /* WARNING: Subroutine does not return */
            runtime_panicSliceB();
          }
          uVar4 = uVar2 & (long)-(s_spill.len - uVar2) >> 0x3f;
          uVar2 = s_spill.len - uVar2;
          uVar5 = local_50;
          local_58 = s_spill.len;
        }
        s_spill.len = uVar2;
        s_spill.str = s_spill.str + uVar4;
        bVar1 = *t_spill.str;
        if (bVar1 < 0x80) {
          uVar4 = (long)-(t_spill.len - 1U) >> 0x3f & 1;
          uVar2 = t_spill.len - 1U;
          uVar3 = (uint)bVar1;
        }
        else {
          s_01.len._0_1_ = bVar1;
          s_01.str = t_spill.str;
          s_01.len._1_7_ = 0;
                    /* Unresolved local var: int32 r@[???]
                       Unresolved local var: int size@[???] */
          unicode_utf8_DecodeRuneInString(s_01);
          uVar2 = CONCAT71(uStack_47,local_48);
          if ((ulong)t_spill.len < uVar2) {
                    /* WARNING: Subroutine does not return */
            runtime_panicSliceB();
          }
          uVar4 = uVar2 & (long)-(t_spill.len - uVar2) >> 0x3f;
          uVar2 = t_spill.len - uVar2;
          uVar3 = local_50;
          local_58 = t_spill.len;
        }
        t_spill.len = uVar2;
        t_spill.str = t_spill.str + uVar4;
      } while (uVar5 == uVar3);
      uVar6 = uVar5;
      if ((int)uVar3 < (int)uVar5) {
        uVar6 = uVar3;
        uVar3 = uVar5;
      }
      if (0x7f < (int)uVar3) break;
      if ((0x19 < uVar6 - 0x41) || (uVar3 != uVar6 + 0x20)) {
        return SUB81(t_spill.str,0);
      }
    }
    unicode_SimpleFold((int32)t_spill.str);
    while (((uint)local_58 != uVar6 && ((int)(uint)local_58 < (int)uVar3))) {
      unicode_SimpleFold((uint)local_58);
    }
  } while ((uint)local_58 == uVar3);
  return SUB81(local_58,0);
}

