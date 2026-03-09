
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void unicode.SimpleFold(int32 r, int32 ~r1) */

int32 unicode_SimpleFold(int32 r)

{
  ulong uVar1;
  ulong uVar2;
  ulong extraout_RAX;
  ulong uVar3;
  long lVar4;
  long in_FS_OFFSET;
  int32 r_spill;
  int32 local_10;
  
  uVar1 = (ulong)(uint)r;
                    /* Unresolved local var: int lo@[???]
                       Unresolved local var: int hi@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    uVar1 = extraout_RAX;
  }
  if (0x10ffff < (uint)r_spill) {
    return (int32)uVar1;
  }
  if ((long)r_spill < 0x80) {
    return (uint)unicode_asciiFold[r_spill];
  }
  uVar1 = 0;
  uVar2 = unicode_caseOrbit.len;
  while (uVar3 = uVar2, (long)uVar1 < (long)uVar3) {
                    /* Unresolved local var: int m@[???] */
    lVar4 = (long)(uVar3 - uVar1) / 2;
    uVar2 = lVar4 + uVar1;
    if ((ulong)unicode_caseOrbit.len <= uVar2) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if ((int)(uint)unicode_caseOrbit.array[uVar2].From < r_spill) {
      uVar1 = lVar4 + uVar1 + 1;
      uVar2 = uVar3;
    }
  }
  uVar2 = unicode_caseOrbit.len;
  if ((long)uVar1 < unicode_caseOrbit.len) {
    if ((ulong)unicode_caseOrbit.len <= uVar1) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    uVar2 = (ulong)unicode_caseOrbit.array[uVar1].From;
    if (r_spill == (uint)unicode_caseOrbit.array[uVar1].From) {
      return (uint)unicode_caseOrbit.array[uVar1].To;
    }
  }
                    /* Unresolved local var: int32 l@[???] */
  unicode_ToLower((int32)uVar2);
  if (r_spill == local_10) {
    unicode_ToUpper(local_10);
    return local_10;
  }
  return local_10;
}

