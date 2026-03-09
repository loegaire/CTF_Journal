
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.Date(int year, time.Month month, int day, int hour, int min,
   int sec, int nsec, time.Location * loc, time.Time ~r8) */

time_Time time_Date(int year,time_Month month,int day,int hour,int min,int sec,int nsec,
                   time_Location *loc)

{
  int *sec_00;
  time_Location *ptVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined1 *unaff_RBP;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long in_FS_OFFSET;
  interface___ e;
  time_Time tVar12;
  int year_spill;
  time_Month month_spill;
  int day_spill;
  int hour_spill;
  int min_spill;
  int sec_spill;
  int nsec_spill;
  time_Location *loc_spill;
  
  do {
                    /* Unresolved local var: int m@[???]
                       Unresolved local var: uint64 d@[???]
                       Unresolved local var: uint64 abs@[???]
                       Unresolved local var: int64 unix@[???]
                       Unresolved local var: int offset@[???]
                       Unresolved local var: int64 start@[???]
                       Unresolved local var: int64 end@[???]
                       Unresolved local var: time.Time t@[???] */
    puVar8 = (undefined1 *)register0x00000020;
    if (*(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10) < register0x00000020) {
      puVar8 = (undefined1 *)((long)register0x00000020 + -0x80);
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
      if (*(long *)((long)register0x00000020 + 0x40) != 0) {
        uVar9 = *(long *)((long)register0x00000020 + 0x10) - 1;
        if ((long)uVar9 < 0) {
          lVar2 = ((long)((SUB168(SEXT816(-0x5555555555555555) * SEXT816((long)(-1 - uVar9)),8) -
                          uVar9) + -1) >> 3) - ((long)(-1 - uVar9) >> 0x3f);
          uVar10 = (*(long *)((long)register0x00000020 + 8) - lVar2) - 1;
          uVar9 = *(long *)((long)register0x00000020 + 0x10) + lVar2 * 0xc + 0xb;
        }
        else {
          uVar10 = *(ulong *)((long)register0x00000020 + 8);
        }
        if (0xb < (long)uVar9) {
          lVar2 = (long)(SUB168(SEXT816(-0x5555555555555555) * SEXT816((long)uVar9),8) + uVar9) >> 3
          ;
          uVar10 = uVar10 + lVar2;
          uVar9 = uVar9 + lVar2 * -0xc;
        }
        lVar2 = *(long *)((long)register0x00000020 + 0x38);
        if (lVar2 < 0) {
          lVar3 = (-1 - lVar2) / 1000000000;
          lVar11 = (*(long *)((long)register0x00000020 + 0x30) - lVar3) + -1;
          lVar2 = lVar2 + lVar3 * 1000000000 + 1000000000;
        }
        else {
          lVar11 = *(long *)((long)register0x00000020 + 0x30);
        }
        if (999999999 < lVar2) {
          lVar3 = lVar2 / 1000000000 + (lVar2 >> 0x3f);
          lVar11 = lVar11 + lVar3;
          lVar2 = lVar2 + lVar3 * -1000000000;
        }
        if (lVar11 < 0) {
          lVar4 = ((SUB168(SEXT816(-0x7777777777777777) * SEXT816(-1 - lVar11),8) - lVar11) + -1 >>
                  5) - (-1 - lVar11 >> 0x3f);
          lVar3 = (*(long *)((long)register0x00000020 + 0x28) - lVar4) + -1;
          lVar11 = lVar11 + lVar4 * 0x3c + 0x3c;
        }
        else {
          lVar3 = *(long *)((long)register0x00000020 + 0x28);
        }
        if (0x3b < lVar11) {
          lVar4 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar11),8) + lVar11 >> 5;
          lVar3 = lVar3 + lVar4;
          lVar11 = lVar11 + lVar4 * -0x3c;
        }
        if (lVar3 < 0) {
          lVar5 = ((SUB168(SEXT816(-0x7777777777777777) * SEXT816(-1 - lVar3),8) - lVar3) + -1 >> 5)
                  - (-1 - lVar3 >> 0x3f);
          lVar4 = (*(long *)((long)register0x00000020 + 0x20) - lVar5) + -1;
          lVar3 = lVar3 + lVar5 * 0x3c + 0x3c;
        }
        else {
          lVar4 = *(long *)((long)register0x00000020 + 0x20);
        }
        if (0x3b < lVar3) {
          lVar5 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar3),8) + lVar3 >> 5;
          lVar4 = lVar4 + lVar5;
          lVar3 = lVar3 + lVar5 * -0x3c;
        }
        if (lVar4 < 0) {
          lVar6 = ((SUB168(SEXT816(-0x5555555555555555) * SEXT816(-1 - lVar4),8) - lVar4) + -1 >> 4)
                  - (-1 - lVar4 >> 0x3f);
          lVar5 = (*(long *)((long)register0x00000020 + 0x18) - lVar6) + -1;
          lVar4 = lVar4 + lVar6 * 0x18 + 0x18;
        }
        else {
          lVar5 = *(long *)((long)register0x00000020 + 0x18);
        }
        if (0x17 < lVar4) {
          lVar6 = SUB168(SEXT816(-0x5555555555555555) * SEXT816(lVar4),8) + lVar4 >> 4;
          lVar5 = lVar5 + lVar6;
          lVar4 = lVar4 + lVar6 * -0x18;
        }
                    /* Unresolved local var: uint64 y@[???]
                       Unresolved local var: uint64 n@[???]
                       Unresolved local var: uint64 d@[???] */
        uVar7 = (uVar10 + 0x440d116ebf) / 400;
        lVar6 = uVar10 + uVar7 * -400;
        *(ulong *)((long)register0x00000020 + -0x38) = uVar7 * 0x23ab1;
        uVar7 = (lVar6 + 0x440d116ebfU) / 100;
        lVar6 = lVar6 + uVar7 * -100;
        lVar6 = uVar7 * 0x8eac + *(long *)((long)register0x00000020 + -0x38) +
                (lVar6 + 0x440d116ebfU >> 2) + lVar6 * 0x16d + 0x6106a1dae653;
        if (0xc < uVar9) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)register0x00000020 + -0x88) = 0x556425;
          runtime_panicIndex();
        }
        *(long *)((long)register0x00000020 + -0x28) = lVar2;
        lVar2 = time_daysBefore[uVar9] + lVar6;
        if (((uVar10 & 3) == 0) &&
           (((uVar10 != (((long)(SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((long)uVar10),8) +
                                uVar10) >> 6) - ((long)uVar10 >> 0x3f)) * 100 ||
             ((uVar10 * -0x70a3d70a3d70a3d7 << 0x3c |
              uVar10 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb0 >> 4) < 0xa3d70a3d70a3d7)) &&
            (2 < (long)(uVar9 + 1))))) {
          lVar2 = lVar6 + time_daysBefore[uVar9] + 1;
        }
        *(long *)((long)register0x00000020 + -0x80) = *(long *)((long)register0x00000020 + 0x40);
        ptVar1 = (time_Location *)
                 ((lVar2 + lVar5 + -1) * 0x15180 + lVar4 * 0xe10 + lVar3 * 0x3c + lVar11);
        *(time_Location **)((long)register0x00000020 + -0x30) = ptVar1;
        sec_00 = &ptVar1[-0x13b13b136697a8d].extend.len;
        *(int **)((long)register0x00000020 + -0x40) = sec_00;
        *(int **)((long)register0x00000020 + -0x78) = sec_00;
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x5562c6;
        time___Location__lookup(ptVar1,(int64)sec_00);
        lVar2 = *(long *)((long)register0x00000020 + -0x60);
        if (lVar2 == 0) {
          lVar2 = *(long *)((long)register0x00000020 + -0x40);
        }
        else {
                    /* Unresolved local var: int64 utc@[???] */
          lVar11 = *(long *)((long)register0x00000020 + -0x30);
          lVar3 = (lVar11 - lVar2) + -0x7ffffffe1ad9c900;
          if (lVar3 < *(long *)((long)register0x00000020 + -0x58)) {
            *(time_Location **)((long)register0x00000020 + -0x80) =
                 *(time_Location **)((long)register0x00000020 + 0x40);
            *(long *)((long)register0x00000020 + -0x78) =
                 *(long *)((long)register0x00000020 + -0x58) + -1;
            *(undefined8 *)((long)register0x00000020 + -0x88) = 0x55634a;
            time___Location__lookup(*(time_Location **)((long)register0x00000020 + 0x40),lVar3);
            lVar2 = *(long *)((long)register0x00000020 + -0x60);
            lVar11 = *(long *)((long)register0x00000020 + -0x30);
          }
          else if (*(long *)((long)register0x00000020 + -0x50) <= lVar3) {
            *(time_Location **)((long)register0x00000020 + -0x80) =
                 *(time_Location **)((long)register0x00000020 + 0x40);
            *(long *)((long)register0x00000020 + -0x78) =
                 *(long *)((long)register0x00000020 + -0x50);
            *(undefined8 *)((long)register0x00000020 + -0x88) = 0x55631b;
            time___Location__lookup(*(time_Location **)((long)register0x00000020 + 0x40),lVar3);
            lVar2 = *(long *)((long)register0x00000020 + -0x60);
            lVar11 = *(long *)((long)register0x00000020 + -0x30);
          }
          lVar2 = (lVar11 - lVar2) + -0x7ffffffe1ad9c900;
        }
        uVar9 = (ulong)(int)*(undefined8 *)((long)register0x00000020 + -0x28);
        *(ulong *)((long)register0x00000020 + -0x20) = uVar9;
        *(long *)((long)register0x00000020 + -0x18) = lVar2 + 0xe7791f700;
        *(time_Location **)((long)register0x00000020 + -0x10) = time_Local;
        ptVar1 = *(time_Location **)((long)register0x00000020 + 0x40);
        if (ptVar1 == &time_utcLoc) {
          ptVar1 = (time_Location *)0x0;
        }
        if ((long)uVar9 < 0) {
          lVar2 = 0xdd7b17f80;
          *(ulong *)((long)register0x00000020 + -0x18) = ((uVar9 << 1) >> 0x1f) + 0xdd7b17f80;
          *(ulong *)((long)register0x00000020 + -0x20) = uVar9 & 0x3fffffff;
        }
        *(time_Location **)((long)register0x00000020 + -0x10) = ptVar1;
        *(time_Location **)((long)register0x00000020 + 0x48) =
             *(time_Location **)((long)register0x00000020 + -0x20);
        *(undefined8 *)((long)register0x00000020 + 0x50) =
             *(undefined8 *)((long)register0x00000020 + -0x18);
        *(time_Location **)((long)register0x00000020 + 0x58) = ptVar1;
        tVar12.ext = lVar2;
        tVar12.wall = (uint64)ptVar1;
        tVar12.loc = *(time_Location **)((long)register0x00000020 + -0x20);
        return tVar12;
      }
      *(undefined **)((long)register0x00000020 + -0x80) = &DAT_00225520;
      *(undefined1 **)((long)register0x00000020 + -0x78) = time__stmp_9;
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x556445;
      e.data = (void *)month;
      e._type = (runtime__type *)time__stmp_9;
      runtime_gopanic(e);
    }
    *(undefined8 *)(puVar8 + -8) = 0x55644b;
    runtime_morestack_noctxt();
    register0x00000020 = (BADSPACEBASE *)puVar8;
  } while( true );
}

