
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strings.LastIndex(string s, string substr, int ~r2) */

int strings_LastIndex(string s,string substr)

{
  ulong uVar1;
  int extraout_RAX;
  ulong extraout_RAX_00;
  int iVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  long in_FS_OFFSET;
  string s_spill;
  byte *in_stack_00000018;
  int n;
  char local_30;
  
                    /* Unresolved local var: uint32 hashss@[???]
                       Unresolved local var: uint32 pow@[???]
                       Unresolved local var: int last@[???]
                       Unresolved local var: uint32 h@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  if (n == 0) {
    return s_spill.len;
  }
  if (n == 1) {
    uVar1 = (ulong)*in_stack_00000018;
                    /* Unresolved local var: int i@[???] */
    do {
      s_spill.len = s_spill.len + -1;
      if (s_spill.len < 0) {
        return uVar1;
      }
    } while (s_spill.str[s_spill.len] != *in_stack_00000018);
    return uVar1;
  }
  if (s_spill.len == n) {
    runtime_memequal();
    if (local_30 != '\0') {
      return extraout_RAX;
    }
    return extraout_RAX;
  }
  if (n <= s_spill.len) {
    iVar2 = 0;
    lVar4 = n;
                    /* Unresolved local var: uint32 hash@[???]
                       Unresolved local var: int i@[???]
                       Unresolved local var: uint32 pow@[???]
                       Unresolved local var: uint32 sq@[???] */
    while (lVar4 = lVar4 + -1, -1 < lVar4) {
      iVar2 = (uint)in_stack_00000018[lVar4] + iVar2 * 0x1000193;
    }
    iVar7 = 0x1000193;
    iVar6 = 1;
    for (uVar1 = n; 0 < (long)uVar1; uVar1 = (long)uVar1 >> 1) {
      if ((uVar1 & 1) != 0) {
        iVar6 = iVar6 * iVar7;
      }
      iVar7 = iVar7 * iVar7;
    }
    uVar1 = s_spill.len - n;
    iVar7 = 0;
    uVar5 = s_spill.len;
                    /* Unresolved local var: int i@[???] */
    while (uVar5 = uVar5 - 1, (long)uVar1 <= (long)uVar5) {
      if ((ulong)s_spill.len <= uVar5) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      iVar7 = (uint)s_spill.str[uVar5] + iVar7 * 0x1000193;
    }
    uVar5 = uVar1;
    if (iVar7 == iVar2) {
      if ((ulong)s_spill.len < uVar1) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceB();
      }
      if (n == s_spill.len - uVar1) {
        runtime_memequal();
                    /* Unresolved local var: int i@[???] */
        cVar3 = local_30;
      }
      else {
        cVar3 = '\0';
      }
      if (cVar3 != '\0') {
        return uVar1;
      }
    }
    do {
      do {
        uVar5 = uVar5 - 1;
        if ((long)uVar5 < 0) {
          return uVar1;
        }
        if ((ulong)s_spill.len <= uVar5) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        uVar1 = uVar5 + n;
        if ((ulong)s_spill.len <= uVar1) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        iVar7 = (iVar7 * 0x1000193 + (uint)s_spill.str[uVar5]) - (uint)s_spill.str[uVar1] * iVar6;
      } while (iVar2 != iVar7);
      if (uVar1 < uVar5) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceB();
      }
      runtime_memequal();
      uVar1 = extraout_RAX_00;
    } while (local_30 == '\0');
    return uVar5;
  }
  return s_spill.len;
}

