
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strings.makeStringFinder(string pattern, strings.stringFinder *
   ~r1) */

strings_stringFinder * strings_makeStringFinder(string pattern)

{
  strings_stringFinder *psVar1;
  strings_stringFinder *psVar2;
  long extraout_RAX;
  int in_RCX;
  strings_stringFinder *psVar3;
  long lVar4;
  strings_stringFinder *extraout_RDX;
  strings_stringFinder *extraout_RDX_00;
  strings_stringFinder *psVar5;
  strings_stringFinder *psVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  string pattern_spill;
  char local_40;
  undefined7 uStack_3f;
  
                    /* Unresolved local var: strings.stringFinder * f@[???]
                       Unresolved local var: int last@[???]
                       Unresolved local var: int lastPrefix@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_makeslice((runtime__type *)pattern_spill.len,pattern.len,in_RCX);
  runtime_newobject((runtime__type *)CONCAT71(uStack_3f,local_40));
  *(int *)(pattern_spill.len + 8) = pattern_spill.len;
  lVar7 = pattern_spill.len;
  if (runtime_writeBarrier._0_4_ == 0) {
    *(uint8 **)pattern_spill.len = pattern_spill.str;
    psVar5 = (strings_stringFinder *)pattern_spill.len;
  }
  else {
    runtime_gcWriteBarrierBX();
    psVar5 = extraout_RDX;
  }
  *(strings_stringFinder **)(lVar7 + 0x818) = psVar5;
  *(strings_stringFinder **)(lVar7 + 0x820) = psVar5;
  if (runtime_writeBarrier._0_4_ == 0) {
    *(runtime__type **)(lVar7 + 0x810) = (runtime__type *)CONCAT71(uStack_3f,local_40);
  }
  else {
    runtime_gcWriteBarrierR8();
                    /* Unresolved local var: int i@[???] */
    psVar5 = extraout_RDX_00;
    lVar7 = extraout_RAX;
  }
  for (lVar4 = 0; lVar4 < 0x100; lVar4 = lVar4 + 1) {
    *(strings_stringFinder **)(lVar7 + 0x10 + lVar4 * 8) = psVar5;
  }
  psVar1 = (strings_stringFinder *)((long)&psVar5[-1].goodSuffixSkip.cap + 7);
  for (lVar4 = 0; psVar3 = psVar1, psVar6 = psVar1, lVar4 < (long)psVar1; lVar4 = lVar4 + 1) {
                    /* Unresolved local var: int i@[???] */
    *(undefined1 **)(lVar7 + 0x10 + (ulong)pattern_spill.str[lVar4] * 8) =
         (undefined1 *)((long)psVar5 + (-1 - lVar4));
  }
  for (; -1 < (long)psVar6;
      psVar6 = (strings_stringFinder *)((long)&psVar6[-1].goodSuffixSkip.cap + 7)) {
    psVar2 = (strings_stringFinder *)((long)&(psVar6->pattern).str + 1);
    if (psVar5 < psVar2) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    if (((long)((long)psVar5 + (-1 - (long)psVar6)) <= (long)psVar5) &&
       (runtime_memequal(), psVar5 = (strings_stringFinder *)pattern_spill.len, local_40 != '\0')) {
      psVar3 = psVar2;
                    /* Unresolved local var: int i@[???] */
    }
    if (*(strings_stringFinder **)(lVar7 + 0x818) <= psVar6) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    *(undefined1 **)(*(long *)(lVar7 + 0x810) + (long)psVar6 * 8) =
         (undefined1 *)((long)psVar5 + (long)psVar3->badCharSkip + (-0x11 - (long)psVar6));
  }
  psVar3 = (strings_stringFinder *)0x0;
  do {
    psVar6 = psVar3;
    if ((long)psVar1 <= (long)psVar6) {
      return psVar1;
    }
                    /* Unresolved local var: int lenSuffix@[???] */
    psVar3 = (strings_stringFinder *)((long)&(psVar6->pattern).str + 1);
    if (psVar5 < psVar3) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAlen();
    }
    if (psVar3 == (strings_stringFinder *)0x0) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    for (lVar4 = 0; (lVar4 < (long)psVar5 && (lVar4 < (long)psVar6)); lVar4 = lVar4 + 1) {
      if (psVar5 <= (strings_stringFinder *)((long)psVar5 + (-1 - lVar4))) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      if (psVar6 <= (strings_stringFinder *)((long)psVar6 + (-1 - lVar4))) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      if (pattern_spill.str[(long)((long)psVar6 + (((-(long)psVar6 >> 0x3f & 1U) - 1) - lVar4))] !=
          pattern_spill.str[(long)((long)psVar5 + (-1 - lVar4))]) break;
    }
    if (psVar5 <= (strings_stringFinder *)((long)psVar6 - lVar4)) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    lVar8 = (long)psVar5 - lVar4;
    if (psVar5 <= (strings_stringFinder *)(lVar8 + -1)) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    if (pattern_spill.str[lVar8 + -1] != pattern_spill.str[(long)psVar6 - lVar4]) {
      if (*(strings_stringFinder **)(lVar7 + 0x818) <= (strings_stringFinder *)(lVar8 + -1)) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      *(undefined1 **)(*(long *)(lVar7 + 0x810) + -8 + lVar8 * 8) =
           (undefined1 *)((long)psVar5 + (lVar4 - (long)psVar6) + -1);
    }
  } while( true );
}

