
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strings.(*genericReplacer).lookup(strings.genericReplacer * r,
   string s, bool ignoreRoot, string val, int keylen, bool found) */

multireturn_string_int_bool_
strings___genericReplacer__lookup(strings_genericReplacer *r,string s,bool ignoreRoot)

{
  long lVar1;
  strings_trieNode **ppsVar2;
  long lVar3;
  strings_genericReplacer *psVar4;
  long lVar5;
  ulong uVar6;
  char cVar7;
  long lVar8;
  long in_FS_OFFSET;
  multireturn_string_int_bool_ mVar9;
  strings_genericReplacer *r_spill;
  string s_spill;
  bool ignoreRoot_spill;
  char local_58;
  
                    /* Unresolved local var: int bestPriority@[???]
                       Unresolved local var: strings.trieNode * node@[???]
                       Unresolved local var: int n@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  lVar5 = 0;
  lVar3 = 0;
  psVar4 = r_spill;
  while (psVar4 != (strings_genericReplacer *)0x0) {
    lVar1 = (psVar4->root).priority;
    lVar8 = lVar3;
    if ((lVar3 < lVar1) && ((!ignoreRoot_spill || (r_spill != psVar4)))) {
      lVar8 = lVar1;
    }
    lVar3 = lVar5;
    if (s_spill.len == 0) break;
    ppsVar2 = (psVar4->root).table.array;
    if (ppsVar2 == (strings_trieNode **)0x0) {
      lVar1 = (psVar4->root).prefix.len;
      if (lVar1 == 0) {
        cVar7 = '\0';
      }
      else if (s_spill.len < lVar1) {
        cVar7 = '\0';
      }
      else {
        runtime_memequal();
        cVar7 = local_58;
      }
      if (cVar7 == '\0') break;
      uVar6 = (psVar4->root).prefix.len;
      lVar5 = lVar5 + uVar6;
      if ((ulong)s_spill.len < uVar6) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceB();
      }
      s_spill.len = s_spill.len - uVar6;
      uVar6 = -s_spill.len >> 0x3f & uVar6;
      psVar4 = (strings_genericReplacer *)(psVar4->root).next;
    }
    else {
      uVar6 = (ulong)r_spill->mapping[*s_spill.str];
      if (r_spill->tableSize == uVar6) break;
      if ((ulong)(psVar4->root).table.len <= uVar6) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      psVar4 = (strings_genericReplacer *)ppsVar2[uVar6];
      s_spill.len = s_spill.len - 1;
      uVar6 = -s_spill.len >> 0x3f & 1;
      lVar5 = lVar5 + 1;
    }
    s_spill.str = s_spill.str + uVar6;
    lVar3 = lVar8;
  }
  mVar9.val.len._0_1_ = ignoreRoot_spill;
  mVar9.val.str = (uint8 *)r_spill;
  mVar9.val.len._1_7_ = 0;
  mVar9.found = (undefined1)s_spill.len;
  mVar9.keylen = lVar3;
  return mVar9;
}

