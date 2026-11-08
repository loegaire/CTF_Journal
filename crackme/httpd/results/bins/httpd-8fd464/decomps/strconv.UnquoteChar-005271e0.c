
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void strconv.UnquoteChar(string s, uint8 quote, int32 value, bool
   multibyte, string tail, error err) */

multireturn_int32_bool_string_error_ strconv_UnquoteChar(string s,uint8 quote)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong uVar7;
  uint8 *extraout_RAX;
  uint8 *puVar8;
  long lVar9;
  uint8 *puVar10;
  undefined8 in_RSI;
  ulong uVar11;
  ulong uVar12;
  undefined8 in_RDI;
  undefined8 in_R8;
  long in_FS_OFFSET;
  string s_00;
  multireturn_int32_int__conflict mVar13;
  multireturn_int32_bool_string_error_ mVar14;
  multireturn_int32_bool_string_error_ mVar15;
  multireturn_int32_bool_string_error_ mVar16;
  multireturn_int32_bool_string_error_ mVar17;
  multireturn_int32_bool_string_error_ mVar18;
  multireturn_int32_bool_string_error_ mVar19;
  multireturn_int32_bool_string_error_ mVar20;
  multireturn_int32_bool_string_error_ mVar21;
  multireturn_int32_bool_string_error_ mVar22;
  multireturn_int32_bool_string_error_ mVar23;
  multireturn_int32_bool_string_error_ mVar24;
  multireturn_int32_bool_string_error_ mVar25;
  multireturn_int32_bool_string_error_ mVar26;
  multireturn_int32_bool_string_error_ mVar27;
  string s_spill;
  uint8 quote_spill;
  ulong local_10;
  
  puVar10 = s.str;
                    /* Unresolved local var: uint8 c@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    puVar10 = extraout_RAX;
  }
  mVar14.value = SUB84(strconv_ErrSyntax.tab,0);
  if (s_spill.len == 0) {
    mVar22.multibyte = (undefined1)s.len;
    mVar22.value = mVar14.value;
    mVar22.err.tab = (runtime_itab *)in_RSI;
    mVar22.tail.len = in_RDI;
    mVar22.tail.str = strconv_ErrSyntax.data;
    mVar22.err.data = (void *)in_R8;
    return mVar22;
  }
                    /* Unresolved local var: uint8 c@[???] */
  bVar2 = *s_spill.str;
  uVar11 = (ulong)bVar2;
  mVar14.tail.len = (ulong)quote_spill;
  mVar14.multibyte = SUB81(s_spill.str,0);
  if ((quote_spill == bVar2) && ((quote_spill == 0x27 || (quote_spill == 0x22)))) {
    mVar14.err.tab._0_1_ = bVar2;
    mVar14.err.tab._1_7_ = 0;
    mVar14.tail.str = strconv_ErrSyntax.data;
    mVar14.err.data = (void *)in_R8;
    return mVar14;
  }
                    /* Unresolved local var: int32 r@[???]
                       Unresolved local var: int size@[???] */
  if (0x7f < bVar2) {
    s_00.len = (int)s_spill.str;
    s_00.str = puVar10;
    mVar13 = unicode_utf8_DecodeRuneInString(s_00);
    if ((ulong)s_spill.len < local_10) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    mVar21.value = (int)s_spill.str +
                   ((uint)((long)-(s_spill.len - local_10) >> 0x3f) & (uint)local_10);
    mVar21.multibyte = (undefined1)mVar13.size;
    mVar21.err.tab = (runtime_itab *)uVar11;
    mVar21.tail.len = mVar14.tail.len;
    mVar21.tail.str = (uint8 *)(s_spill.len - local_10);
    mVar21.err.data = (void *)in_R8;
    return mVar21;
  }
  if (bVar2 != 0x5c) {
    mVar20.value = ((uint)(-(s_spill.len + -1) >> 0x3f) & 1) + (int)s_spill.str;
    mVar20.multibyte = (bool)mVar14.multibyte;
    mVar20.err.tab._0_1_ = bVar2;
    mVar20.tail.len = mVar14.tail.len;
    mVar20.err.tab._1_7_ = 0;
    mVar20.tail.str = (uint8 *)(s_spill.len + -1);
    mVar20.err.data = (void *)in_R8;
    return mVar20;
  }
  if (s_spill.len < 2) {
    mVar19.multibyte = (bool)mVar14.multibyte;
    mVar19.value = mVar14.value;
    mVar19.err.tab._0_1_ = 0x5c;
    mVar19.tail.len = mVar14.tail.len;
    mVar19.err.tab._1_7_ = 0;
    mVar19.tail.str = strconv_ErrSyntax.data;
    mVar19.err.data = (void *)in_R8;
    return mVar19;
  }
  bVar2 = s_spill.str[1];
  uVar12 = (ulong)bVar2;
  uVar11 = s_spill.len - 2;
  puVar8 = (uint8 *)((long)-uVar11 >> 0x3f & 2);
  puVar10 = s_spill.str + (long)puVar8;
  mVar15.multibyte = SUB81(puVar10,0);
  if (bVar2 < 99) {
                    /* Unresolved local var: int32 v@[???] */
    if (bVar2 < 0x38) {
      if ((bVar2 == 0x22) || (bVar2 == 0x27)) {
        if (quote_spill != bVar2) {
          mVar16.multibyte = (bool)mVar15.multibyte;
          mVar16.value = mVar14.value;
          mVar16.err.tab._0_1_ = bVar2;
          mVar16.tail.len = mVar14.tail.len;
          mVar16.err.tab._1_7_ = 0;
          mVar16.tail.str = strconv_ErrSyntax.data;
          mVar16.err.data = (void *)uVar11;
          return mVar16;
        }
        uVar6 = 0;
      }
      else {
        if (bVar2 < 0x30) goto LAB_005274c5;
        if ((long)uVar11 < 2) {
          mVar15.value = mVar14.value;
          mVar15.err.tab._0_1_ = bVar2;
          mVar15.tail.len = mVar14.tail.len;
          mVar15.err.tab._1_7_ = 0;
          mVar15.tail.str = strconv_ErrSyntax.data;
          mVar15.err.data = (void *)uVar11;
          return mVar15;
        }
        uVar5 = bVar2 - 0x30;
        for (lVar9 = 0; lVar9 < 2; lVar9 = lVar9 + 1) {
          mVar26.err.tab._0_4_ = puVar10[lVar9] - 0x30;
          uVar12 = (ulong)(uint)mVar26.err.tab;
          if (7 < (uint)mVar26.err.tab) {
            mVar26.multibyte = (bool)mVar15.multibyte;
            mVar26.value = mVar14.value;
            mVar26.tail.len = mVar14.tail.len;
            mVar26.err.tab._4_4_ = 0;
            mVar26.tail.str = strconv_ErrSyntax.data;
            mVar26.err.data = (void *)uVar11;
            return mVar26;
          }
                    /* Unresolved local var: int32 x@[???] */
          uVar5 = uVar5 << 3 | (uint)mVar26.err.tab;
                    /* Unresolved local var: int j@[???] */
        }
        puVar8 = puVar10 + ((long)-(s_spill.len - 4U) >> 0x3f & 2);
        if (0xff < (int)uVar5) {
          mVar27.multibyte = (bool)mVar15.multibyte;
          mVar27.value = mVar14.value;
          mVar27.err.tab = (runtime_itab *)uVar12;
          mVar27.tail.len = mVar14.tail.len;
          mVar27.tail.str = strconv_ErrSyntax.data;
          mVar27.err.data = (void *)uVar11;
          return mVar27;
        }
        uVar12 = (ulong)uVar5;
        uVar6 = 0;
        puVar10 = puVar8;
        uVar11 = s_spill.len - 4U;
      }
      goto LAB_00527618;
    }
    if (0x5c < bVar2) {
      if (bVar2 == 0x61) {
        uVar12 = 7;
        uVar6 = 0;
      }
      else {
        if (bVar2 != 0x62) goto LAB_005274c5;
        uVar12 = 8;
        uVar6 = 0;
      }
      goto LAB_00527618;
    }
                    /* Unresolved local var: int n@[???]
                       Unresolved local var: int32 v@[???] */
    if (bVar2 != 0x55) {
      if (bVar2 != 0x5c) {
LAB_005274c5:
        mVar18.multibyte = (bool)mVar15.multibyte;
        mVar18.value = mVar14.value;
        mVar18.err.tab._0_1_ = bVar2;
        mVar18.tail.len = mVar14.tail.len;
        mVar18.err.tab._1_7_ = 0;
        mVar18.tail.str = strconv_ErrSyntax.data;
        mVar18.err.data = (void *)uVar11;
        return mVar18;
      }
      uVar12 = 0x5c;
      uVar6 = 0;
      goto LAB_00527618;
    }
  }
  else {
    if (bVar2 < 0x73) {
      if (bVar2 == 0x66) {
        uVar12 = 0xc;
        uVar6 = 0;
      }
      else if (bVar2 == 0x6e) {
        uVar12 = 10;
        uVar6 = 0;
      }
      else {
        if (bVar2 != 0x72) goto LAB_005274c5;
        uVar12 = 0xd;
        uVar6 = 0;
      }
      goto LAB_00527618;
    }
    if (bVar2 < 0x76) {
      if (bVar2 == 0x74) {
        uVar12 = 9;
        uVar6 = 0;
        goto LAB_00527618;
      }
      if (bVar2 != 0x75) goto LAB_005274c5;
    }
    else {
      if (bVar2 == 0x76) {
        uVar12 = 0xb;
        uVar6 = 0;
        goto LAB_00527618;
      }
      if (bVar2 != 0x78) goto LAB_005274c5;
    }
  }
  if (bVar2 == 0x55) {
    uVar7 = 8;
  }
  else if (bVar2 == 0x75) {
    uVar7 = 4;
  }
  else if (bVar2 == 0x78) {
    uVar7 = 2;
  }
  else {
    uVar7 = 0;
  }
  if ((long)uVar11 < (long)uVar7) {
    mVar17.multibyte = (bool)mVar15.multibyte;
    mVar17.value = mVar14.value;
    mVar17.err.tab._0_1_ = bVar2;
    mVar17.tail.len = mVar14.tail.len;
    mVar17.err.tab._1_7_ = 0;
    mVar17.tail.str = strconv_ErrSyntax.data;
    mVar17.err.data = (void *)uVar11;
    return mVar17;
  }
  uVar12 = 0;
  for (lVar9 = 0; lVar9 < (long)uVar7; lVar9 = lVar9 + 1) {
    bVar3 = puVar10[lVar9];
    uVar5 = bVar3 - 0x30;
    if (uVar5 < 10) {
      bVar4 = true;
    }
    else if (bVar3 - 0x61 < 6) {
      uVar5 = bVar3 - 0x57;
      bVar4 = true;
    }
    else if (bVar3 - 0x41 < 6) {
      uVar5 = bVar3 - 0x37;
      bVar4 = true;
    }
    else {
      bVar4 = false;
      uVar5 = 0;
    }
    if (!bVar4) {
      mVar24.multibyte = (bool)mVar15.multibyte;
      mVar24.value = mVar14.value;
      mVar24.err.tab._0_1_ = bVar2;
      mVar24.tail.len = uVar12;
      mVar24.err.tab._1_7_ = 0;
      mVar24.tail.str = strconv_ErrSyntax.data;
      mVar24.err.data = (void *)uVar11;
      return mVar24;
    }
                    /* Unresolved local var: int32 x@[???]
                       Unresolved local var: bool ok@[???] */
    uVar12 = (ulong)((int)uVar12 << 4 | uVar5);
                    /* Unresolved local var: int j@[???] */
  }
  if (uVar11 < uVar7) {
                    /* WARNING: Subroutine does not return */
    runtime_panicSliceB();
  }
  uVar1 = (s_spill.len - uVar7) - 2;
  puVar8 = (uint8 *)((long)-uVar1 >> 0x3f & uVar7);
  puVar10 = puVar10 + (long)puVar8;
  mVar14.tail.len = uVar12;
  if (bVar2 == 0x78) {
    uVar6 = 0;
    uVar11 = uVar1;
  }
  else {
    if (0x10ffff < (int)uVar12) {
      mVar25.multibyte = (bool)mVar15.multibyte;
      mVar25.value = mVar14.value;
      mVar25.err.tab._0_1_ = bVar2;
      mVar25.tail.len = uVar12;
      mVar25.err.tab._1_7_ = 0;
      mVar25.tail.str = strconv_ErrSyntax.data;
      mVar25.err.data = (void *)uVar11;
      return mVar25;
    }
    uVar6 = 1;
    uVar11 = uVar1;
  }
LAB_00527618:
  mVar23.multibyte = SUB81(puVar10,0);
  mVar23.value = uVar6;
  mVar23.err.tab = (runtime_itab *)uVar12;
  mVar23.tail.len = mVar14.tail.len;
  mVar23.tail.str = puVar8;
  mVar23.err.data = (void *)uVar11;
  return mVar23;
}

