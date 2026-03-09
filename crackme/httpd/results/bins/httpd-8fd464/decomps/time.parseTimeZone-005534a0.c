
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.parseTimeZone(string value, int length, bool ok) */

multireturn_int_bool__conflict3 time_parseTimeZone(string value)

{
  long lVar1;
  int iVar2;
  uint8 *puVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  uint8 *extraout_RAX;
  long in_FS_OFFSET;
  string value_00;
  string value_01;
  multireturn_int_bool__conflict3 mVar7;
  multireturn_int_bool__conflict3 mVar8;
  multireturn_int_bool__conflict3 mVar9;
  multireturn_int_bool__conflict3 mVar10;
  multireturn_int_bool__conflict3 mVar11;
  multireturn_int_bool__conflict3 mVar12;
  multireturn_int_bool__conflict3 mVar13;
  multireturn_int_bool__conflict3 mVar14;
  multireturn_int_bool__conflict3 mVar15;
  string value_spill;
  long local_10;
  
  puVar3 = value.str;
                    /* Unresolved local var: int nUpper@[???] */
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
    puVar3 = extraout_RAX;
  }
  if (value_spill.len < 3) {
    mVar10.ok = value.len._0_1_;
    mVar10.length = (int)puVar3;
    return mVar10;
  }
  if ((3 < value_spill.len) &&
     ((iVar2 = *(int *)value_spill.str, iVar2 == 0x54536843 || (iVar2 == 0x5453654d)))) {
    mVar7.ok = SUB41(iVar2,0);
    mVar7.length = (int)puVar3;
    return mVar7;
  }
  if ((*(short *)value_spill.str == 0x4d47) && (value_spill.str[2] == 0x54)) {
    lVar1 = value_spill.len + -3;
    value_00.str = value_spill.str + (-lVar1 >> 0x3f & 3);
    if (value_spill.len == 3) {
      lVar4 = 3;
    }
    else {
      value_00.len = lVar1;
      time_parseSignedOffset(value_00);
      lVar4 = local_10 + 3;
    }
    mVar8.ok = SUB81(lVar1,0);
    mVar8.length = lVar4;
    return mVar8;
  }
  bVar6 = *value_spill.str;
  if ((bVar6 == 0x2b) || (bVar6 == 0x2d)) {
    value_01.len._0_1_ = (bool)bVar6;
    value_01.str = puVar3;
    value_01.len._1_7_ = 0;
    time_parseSignedOffset(value_01);
    mVar9.ok = (bool)bVar6;
    mVar9.length = local_10;
    return mVar9;
  }
  uVar5 = 0;
  do {
    if (5 < (long)uVar5) {
LAB_00553684:
      if (uVar5 == 6) {
LAB_00553686:
        mVar14.ok = (bool)bVar6;
        mVar14.length = uVar5;
        return mVar14;
      }
LAB_0055369e:
      mVar15.ok = (bool)bVar6;
      mVar15.length = uVar5;
      return mVar15;
    }
                    /* Unresolved local var: uint8 c@[???] */
    if ((value_spill.len <= (long)uVar5) || (bVar6 = value_spill.str[uVar5] + 0xbf, 0x19 < bVar6)) {
      if ((long)uVar5 < 4) {
        if (uVar5 < 3) goto LAB_00553686;
        if (uVar5 == 3) {
          mVar11.ok = (bool)bVar6;
          mVar11.length = 3;
          return mVar11;
        }
        goto LAB_0055369e;
      }
      if (uVar5 == 4) {
        if ((ulong)value_spill.len < 4) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        if ((value_spill.str[3] == 0x54) || (*(int *)value_spill.str == 0x41544957)) {
          mVar12.ok = (bool)bVar6;
          mVar12.length = 4;
          return mVar12;
        }
        goto LAB_0055369e;
      }
      if (uVar5 == 5) {
        if ((ulong)value_spill.len < 5) {
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
        if (value_spill.str[4] == 0x54) {
          mVar13.ok = (bool)bVar6;
          mVar13.length = 5;
          return mVar13;
        }
        goto LAB_0055369e;
      }
      goto LAB_00553684;
    }
    uVar5 = uVar5 + 1;
  } while( true );
}

