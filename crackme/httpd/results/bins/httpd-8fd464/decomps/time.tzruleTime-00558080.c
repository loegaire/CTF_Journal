
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.tzruleTime(int year, time.rule r, int off, int ~r3) */

int time_tzruleTime(int year,time_rule r,int off)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int yy0;
  time_rule r_spill;
  int off_spill;
  
                    /* Unresolved local var: int s@[???] */
  lVar3 = yy0 >> 0x3f;
  if (r_spill.kind == 0) {
    lVar2 = r_spill.day * 0x15180;
    if ((((yy0 & 3U) != 0) ||
        ((yy0 == ((SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(yy0),8) + yy0 >> 6) - lVar3) * 100
         && (0xa3d70a3d70a3d6 <
             (yy0 * -0x70a3d70a3d70a3d7 << 0x3c |
             yy0 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb0U >> 4))))) || (r_spill.day < 0x3c)) {
      lVar2 = lVar2 + -0x15180;
    }
  }
  else if (r_spill.kind == 1) {
    lVar2 = r_spill.day * 0x15180;
  }
  else {
                    /* Unresolved local var: int yy1@[???]
                       Unresolved local var: int yy2@[???]
                       Unresolved local var: int dow@[???]
                       Unresolved local var: int d@[???] */
    if (r_spill.kind == 2) {
      iVar4 = yy0;
      if (r_spill.mon < 3) {
        iVar4 = yy0 + -1;
      }
      lVar1 = (SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(iVar4),8) + iVar4 >> 6) -
              (iVar4 >> 0x3f);
      lVar6 = iVar4 + lVar1 * -100;
      lVar5 = (r_spill.mon +
              ((SUB168(SEXT816(-0x5555555555555555) * SEXT816(r_spill.mon + 9),8) + r_spill.mon + 9
               >> 3) - (r_spill.mon + 9 >> 0x3f)) * -0xc) * 0x1a;
      lVar2 = lVar5 + 0x102;
      lVar2 = ((lVar5 + SUB168(SEXT816(-0x3333333333333333) * SEXT816(lVar2),8) + 0x102 >> 3) -
              (lVar2 >> 0x3f)) + lVar6 + ((long)(lVar6 + ((ulong)(lVar6 >> 0x3f) >> 0x3e)) >> 2) +
              ((long)(((ulong)(lVar1 >> 0x3f) >> 0x3e) + lVar1) >> 2) + lVar1 * -2;
      lVar2 = lVar2 + ((lVar2 + 1) / 7) * -7;
      lVar1 = lVar2 + 1;
      if (lVar1 < 0) {
        lVar1 = lVar2 + 8;
      }
      lVar1 = r_spill.day - lVar1;
                    /* Unresolved local var: int i@[???] */
      if (lVar1 < 0) {
        lVar1 = lVar1 + 7;
      }
      for (lVar2 = 1; lVar2 < r_spill.week; lVar2 = lVar2 + 1) {
        if (((r_spill.mon == 2) && ((yy0 & 3U) == 0)) &&
           ((yy0 != ((SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(yy0),8) + yy0 >> 6) - lVar3) *
                    100 ||
            ((yy0 * -0x70a3d70a3d70a3d7 << 0x3c |
             yy0 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb0U >> 4) < 0xa3d70a3d70a3d7)))) {
          lVar5 = 0x1d;
        }
        else {
          if (0xc < (ulong)r_spill.mon) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          if (0xc < r_spill.mon - 1U) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          lVar5 = (long)(time_daysBefore[r_spill.mon] - *(int *)(&DAT_0075a1dc + r_spill.mon * 4));
        }
        if (lVar5 <= lVar1 + 7) break;
        lVar1 = lVar1 + 7;
      }
      if (0xc < r_spill.mon - 1U) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      lVar2 = *(int *)(&DAT_0075a1dc + r_spill.mon * 4) + lVar1;
      if (((yy0 & 3U) == 0) &&
         (((yy0 != ((SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(yy0),8) + yy0 >> 6) - lVar3) *
                   100 ||
           ((yy0 * -0x70a3d70a3d70a3d7 << 0x3c | yy0 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb0U >> 4
            ) < 0xa3d70a3d70a3d7)) && (2 < r_spill.mon)))) {
        lVar2 = lVar1 + *(int *)(&DAT_0075a1dc + r_spill.mon * 4) + 1;
      }
      lVar2 = lVar2 * 0x15180;
    }
    else {
      lVar2 = 0;
    }
  }
  return (lVar2 + r_spill.time) - off_spill;
}

