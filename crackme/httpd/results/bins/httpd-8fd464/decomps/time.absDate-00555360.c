
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.absDate(uint64 abs, bool full, int year, time.Month month,
   int day, int yday) */

multireturn_int_time_Month_int_int_ time_absDate(uint64 abs,bool full)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulong uVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  multireturn_int_time_Month_int_int_ mVar9;
  multireturn_int_time_Month_int_int_ mVar10;
  multireturn_int_time_Month_int_int_ mVar11;
  uint64 abs_spill;
  bool full_spill;
  
                    /* Unresolved local var: uint64 d@[???]
                       Unresolved local var: uint64 n@[???]
                       Unresolved local var: uint64 y@[???]
                       Unresolved local var: int begin@[???] */
  uVar3 = (abs_spill / 0x15180) % 0x23ab1;
  mVar9.day = uVar3 >> 1;
  lVar5 = mVar9.day / 0x4756 - mVar9.day / 0x11d58;
  uVar3 = uVar3 + lVar5 * -0x8eac;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  uVar6 = SUB168(ZEXT816(0x66db072f2284d191) * auVar1,8);
  uVar6 = (uVar6 + uVar3 >> 1 | (ulong)CARRY8(uVar6,uVar3) << 0x3f) >> 10;
  uVar3 = uVar3 + uVar6 * -0x5b5;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar3;
  uVar7 = SUB168(ZEXT816(0x6719f36016719f37) * auVar2,8);
  mVar11.year = SUB168(ZEXT816(0x6719f36016719f37) * auVar2,0);
  uVar7 = uVar7 + uVar3 >> 1 | (ulong)CARRY8(uVar7,uVar3) << 0x3f;
  lVar8 = (uVar7 >> 8) - (uVar7 >> 10);
  mVar11.month = ((abs_spill / 0x15180) / 0x23ab1) * 400 + lVar5 * 100 + uVar6 * 4 + lVar8;
  lVar5 = uVar3 + lVar8 * -0x16d;
  uVar3 = mVar11.month - 0x440d116ebf;
  if (!full_spill) {
    mVar11.yday = uVar3;
    mVar11.day = mVar9.day;
    return mVar11;
  }
  if ((uVar3 & 3) == 0) {
    mVar9.year = uVar3 * -0x5c28f5c28f5c28f5;
    lVar8 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((long)uVar3),8) + mVar11.month +
            -0x440d116ebf;
    mVar9.yday = (long)uVar3 >> 0x3f;
    if ((((lVar8 >> 6) - mVar9.yday) * 100 - uVar3 != 0) ||
       (((lVar8 >> 8) - mVar9.yday) * 400 - uVar3 == 0)) {
      if (lVar5 < 0x3c) {
        if (lVar5 == 0x3b) {
          mVar9.month = uVar3;
          return mVar9;
        }
      }
      else {
        lVar5 = lVar5 + -1;
      }
    }
  }
  piVar4 = (int *)(lVar5 >> 0x3f);
  uVar6 = (lVar5 + SUB168(SEXT816(-0x7bdef7bdef7bdef7) * SEXT816(lVar5),8) >> 4) - (long)piVar4;
  if (uVar6 + 1 < 0xd) {
    lVar8 = (long)time_daysBefore[uVar6 + 1];
    if (lVar5 < lVar8) {
      if (0xc < uVar6) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      piVar4 = time_daysBefore + uVar6;
      lVar8 = (long)*piVar4;
    }
    mVar10.month = uVar3;
    mVar10.year = (lVar5 - lVar8) + 1;
    mVar10.yday = uVar6 + 1;
    mVar10.day = (int)piVar4;
    return mVar10;
  }
                    /* WARNING: Subroutine does not return */
  runtime_panicIndex();
}

