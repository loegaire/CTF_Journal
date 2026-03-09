
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strings.TrimSpace(string s, string ~r1) */

string strings_TrimSpace(string s)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  string sVar4;
  string sVar5;
  string sVar6;
  string sVar7;
  string s_spill;
  uint8 *local_18;
  string s_00;
  
                    /* Unresolved local var: int start@[???]
                       Unresolved local var: int stop@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  for (uVar2 = 0; uVar1 = s_spill.len, (long)uVar2 < s_spill.len; uVar2 = uVar2 + 1) {
                    /* Unresolved local var: uint8 c@[???] */
    if (0x7f < s_spill.str[uVar2]) {
      sVar5.len = (int)s_spill.str;
      sVar5.str = (uint8 *)&PTR_unicode_IsSpace_002b3b68;
      sVar5 = strings_TrimFunc(sVar5,(func_int32__bool **)(s_spill.len - uVar2));
      sVar4.len = sVar5.len;
      sVar4.str = local_18;
      return sVar4;
    }
    if (strings_asciiSpace[s_spill.str[uVar2]] == 0) break;
  }
  do {
    uVar3 = uVar1;
    if ((long)uVar3 <= (long)uVar2) break;
                    /* Unresolved local var: uint8 c@[???] */
    if ((ulong)s_spill.len <= uVar3 - 1) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if (0x7f < s_spill.str[uVar3 - 1]) {
      if (uVar3 < uVar2) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceB();
      }
      s_00.len = (int)s_spill.str;
      s_00.str = (uint8 *)&PTR_unicode_IsSpace_002b3b68;
      sVar5 = strings_TrimFunc(s_00,(func_int32__bool **)(uVar3 - uVar2));
      sVar6.len = sVar5.len;
      sVar6.str = local_18;
      return sVar6;
    }
    uVar1 = uVar3 - 1;
  } while (strings_asciiSpace[s_spill.str[uVar3 - 1]] != 0);
  if ((ulong)s_spill.len < uVar3) {
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceAlen();
  }
  if (uVar3 < uVar2) {
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceB();
  }
  sVar7.str = s_spill.str + (uVar2 & (long)-(uVar3 - uVar2) >> 0x3f);
  sVar7.len = (int)s_spill.str;
  return sVar7;
}

