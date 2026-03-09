
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strings.(*byteStringReplacer).Replace(strings.byteStringReplacer *
   r, string s, string ~r1) */

string strings___byteStringReplacer__Replace(strings_byteStringReplacer *r,string s)

{
  byte bVar1;
  uint8 *puVar2;
  byte *pbVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  string *psVar8;
  ulong uVar9;
  long lVar10;
  long in_FS_OFFSET;
  bool bVar11;
  string sVar12;
  string sVar13;
  string sVar14;
  string substr;
  strings_byteStringReplacer *r_spill;
  uint8 *in_stack_00000010;
  int newSize;
  runtime_tmpBuf *local_60;
  long local_58;
  
                    /* Unresolved local var: bool anyChanges@[???]
                       Unresolved local var: int j@[???]
                       Unresolved local var: []uint8 buf@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  lVar10 = (r_spill->toReplace).len;
  psVar8 = (r_spill->toReplace).array;
  uVar9 = newSize;
  if (newSize < lVar10 * 8) {
    bVar4 = false;
                    /* Unresolved local var: string x@[???]
                       Unresolved local var: int c@[???] */
    for (lVar10 = 0; lVar10 < newSize; lVar10 = lVar10 + 1) {
                    /* Unresolved local var: int i@[???] */
      bVar11 = r_spill->replacements[in_stack_00000010[lVar10]].array != (uint8 *)0x0;
      if (bVar11) {
        uVar9 = (uVar9 + r_spill->replacements[in_stack_00000010[lVar10]].len) - 1;
      }
      bVar4 = (bool)(bVar4 | bVar11);
    }
  }
  else if (lVar10 < 1) {
    bVar4 = false;
  }
  else {
    lVar5 = 0;
    bVar4 = false;
    while( true ) {
      local_60 = (runtime_tmpBuf *)psVar8->len;
      pbVar3 = psVar8->str;
      sVar13.len = (int)pbVar3;
      sVar13.str = (uint8 *)local_60;
      substr.len = lVar5;
      substr.str = (uint8 *)newSize;
      strings_Count(sVar13,substr);
      if (local_58 != 0) {
        if (local_60 == (runtime_tmpBuf *)0x0) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        uVar9 = (r_spill->replacements[*pbVar3].len + -1) * local_58 + uVar9;
        bVar4 = true;
      }
      lVar5 = lVar5 + 1;
      if (lVar10 <= lVar5) break;
      psVar8 = psVar8 + 1;
    }
  }
  if (!bVar4) {
    sVar12.len = lVar10;
    sVar12.str = in_stack_00000010;
    return sVar12;
  }
  runtime_makeslice((runtime__type *)&DAT_00225720,lVar10,newSize);
                    /* Unresolved local var: int i@[???] */
  lVar10 = 0;
  uVar7 = 0;
  do {
    if (newSize <= lVar10) {
      sVar13 = runtime_slicebytetostring(local_60,(uint8 *)newSize,(int)in_stack_00000010);
      sVar14.len = sVar13.len;
      sVar14.str = *local_60;
      return sVar14;
    }
    bVar1 = in_stack_00000010[lVar10];
    lVar5 = r_spill->replacements[bVar1].len;
    puVar2 = r_spill->replacements[bVar1].array;
    if (puVar2 == (uint8 *)0x0) {
      if (uVar9 <= uVar7) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      (*local_60)[uVar7] = bVar1;
      uVar7 = uVar7 + 1;
    }
    else {
      if (uVar9 < uVar7) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceB();
      }
      lVar6 = uVar9 - uVar7;
      if (lVar5 < (long)(uVar9 - uVar7)) {
        lVar6 = lVar5;
      }
      if (puVar2 != *local_60 + ((long)(uVar7 - uVar9) >> 0x3f & uVar7)) {
        runtime_memmove();
      }
      uVar7 = lVar6 + uVar7;
    }
    lVar10 = lVar10 + 1;
                    /* Unresolved local var: uint8 b@[???] */
  } while( true );
}

