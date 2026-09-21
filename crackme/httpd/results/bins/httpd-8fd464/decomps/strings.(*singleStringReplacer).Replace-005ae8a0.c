
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void
   strings.(*singleStringReplacer).Replace(strings.singleStringReplacer * r, string s, string ~r1)
    */

string strings___singleStringReplacer__Replace(strings_singleStringReplacer *r,string s)

{
  uint8 *cap;
  uint8 *puVar1;
  int n;
  runtime__type *prVar2;
  runtime__type *prVar3;
  ulong uVar4;
  runtime__type *prVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  string sVar11;
  string sVar12;
  runtime_slice rVar13;
  runtime_slice old;
  runtime_slice old_00;
  strings_singleStringReplacer *r_spill;
  string s_spill;
  runtime__type *local_98;
  undefined8 local_88;
  runtime__type *local_78;
  ulong local_68;
  runtime__type *local_30;
  uint8 *local_28;
  strings_stringFinder *local_20;
  undefined8 local_18;
  uint8 *local_10;
  
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: bool matched@[???]
                       Unresolved local var: []uint8 buf@[???] */
  while (&local_30 <= *(runtime__type ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  puVar1 = (uint8 *)0x0;
  n = 0;
  prVar2 = (runtime__type *)0x0;
  prVar3 = (runtime__type *)0x0;
  uVar7 = 0;
  do {
    if ((ulong)s_spill.len < puVar1) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    local_20 = r_spill->finder;
    uVar4 = s_spill.len - (long)puVar1;
    rVar13.cap = s_spill.str + ((long)-uVar4 >> 0x3f & (ulong)puVar1);
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int j@[???] */
    uVar9 = (local_20->pattern).len - 1;
    for (uVar10 = uVar9; local_68 = uVar9, local_18 = uVar7, (long)uVar10 < (long)uVar4;
        uVar10 = uVar10 + lVar6) {
      while( true ) {
        if ((long)local_68 < 0) goto LAB_005aed20;
        if (uVar4 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        if ((local_20->pattern).str[local_68] != rVar13.cap[uVar10]) break;
        uVar10 = uVar10 - 1;
        local_68 = local_68 - 1;
      }
      if ((long)local_68 < 0) {
LAB_005aed20:
        lVar8 = uVar10 + 1;
        goto LAB_005ae9d2;
      }
      if (uVar4 <= uVar10) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      if ((ulong)(local_20->goodSuffixSkip).len <= local_68) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      lVar8 = (local_20->goodSuffixSkip).array[local_68];
      lVar6 = local_20->badCharSkip[rVar13.cap[uVar10]];
      if (local_20->badCharSkip[rVar13.cap[uVar10]] <= lVar8) {
        lVar6 = lVar8;
      }
    }
    lVar8 = -1;
LAB_005ae9d2:
    if (lVar8 == -1) {
      if ((char)n == '\0') {
        sVar12.len = (int)s_spill.str;
        sVar12.str = puVar1;
        return sVar12;
      }
      local_30 = (runtime__type *)(uVar4 + (long)prVar2);
      if (prVar3 < local_30) {
        rVar13.len = (int)&DAT_00225720;
        rVar13.array = s_spill.str;
        local_28 = rVar13.cap;
        rVar13 = runtime_growslice(local_30,rVar13,(int)r_spill);
        n = rVar13.cap;
        s_spill.str = (uint8 *)rVar13.len;
        local_18 = local_88;
        local_98 = prVar3;
      }
      runtime_memmove();
      sVar11 = runtime_slicebytetostring((runtime_tmpBuf *)local_30,s_spill.str,n);
      sVar11.str = (uint8 *)local_98;
      return sVar11;
    }
    if ((ulong)s_spill.len < puVar1 + lVar8) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAlen();
    }
    if (puVar1 + lVar8 < puVar1) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    local_30 = (runtime__type *)((long)&prVar2->size + lVar8);
    prVar5 = prVar3;
    if (prVar3 < local_30) {
      old.len = (int)local_30;
      old.array = s_spill.str;
      old.cap = lVar8;
      local_10 = s_spill.str + (-lVar8 >> 0x3f & (ulong)puVar1);
      runtime_growslice((runtime__type *)&DAT_00225720,old,(int)r_spill);
      prVar5 = local_78;
      local_18 = local_88;
      local_98 = prVar3;
    }
    runtime_memmove();
    prVar2 = (runtime__type *)((long)&local_30->size + (r_spill->value).len);
    cap = (r_spill->value).str;
    prVar3 = prVar5;
    if (prVar5 < prVar2) {
      old_00.len = local_18;
      old_00.array = prVar2;
      old_00.cap = (int)prVar5;
      local_10 = cap;
      runtime_growslice((runtime__type *)&DAT_00225720,old_00,(int)cap);
      prVar3 = local_78;
      local_18 = local_88;
      local_98 = prVar5;
    }
                    /* Unresolved local var: int match@[???] */
    runtime_memmove();
    puVar1 = puVar1 + (r_spill->finder->pattern).len + lVar8;
    n = 1;
    uVar7 = local_18;
  } while( true );
}

