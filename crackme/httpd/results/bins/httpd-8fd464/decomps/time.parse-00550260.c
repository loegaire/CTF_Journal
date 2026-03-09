
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.parse(string layout, string value, time.Location *
   defaultLocation, time.Location * local, time.Time ~r4, error ~r5) */

multireturn_time_Time_error_
time_parse(string layout,string value,time_Location *defaultLocation,time_Location *local)

{
  time_Location *ptVar1;
  char cVar2;
  short sVar3;
  time_zone *ptVar4;
  time_zoneTrans *ptVar5;
  time_Location *ptVar6;
  time_Location *ptVar7;
  bool fixed;
  time_Location *ptVar8;
  time_Location *ptVar9;
  int64 iVar10;
  time_Location *ptVar11;
  long lVar12;
  time_Location *extraout_RDX;
  time_Location *extraout_RDX_00;
  uint uVar13;
  time_Location *ptVar15;
  void *pvVar16;
  long lVar17;
  runtime_itab *prVar18;
  time_Location *ptVar19;
  uint8 *puVar20;
  byte bVar21;
  time_Location *ptVar22;
  time_Location *ptVar23;
  long in_FS_OFFSET;
  string prefix;
  string value_00;
  string value_01;
  string s;
  string s_00;
  string s_01;
  string value_02;
  string s_02;
  string s_03;
  string s_04;
  string s_05;
  string s_06;
  string s_07;
  string layout_00;
  string s_08;
  string s_09;
  string s_10;
  string s_11;
  string sVar24;
  string value_03;
  string value_04;
  string val;
  string val_00;
  string val_01;
  string val_02;
  string a1;
  string a1_00;
  multireturn_int_bool__conflict4 mVar25;
  multireturn_int_error__conflict8 mVar26;
  __string tab;
  __string tab_00;
  __string tab_01;
  __string tab_02;
  time_Time tVar27;
  string name;
  string a0;
  string a0_00;
  multireturn_string_int_string_ mVar28;
  multireturn_time_Time_error_ mVar29;
  multireturn_time_Time_error_ mVar30;
  multireturn_time_Time_error_ mVar31;
  multireturn_time_Time_error_ mVar32;
  multireturn_time_Time_error_ mVar33;
  multireturn_time_Time_error_ mVar34;
  multireturn_time_Time_error_ mVar35;
  multireturn_time_Time_error_ mVar36;
  multireturn_time_Time_error_ mVar37;
  multireturn_time_Time_error_ mVar38;
  multireturn_time_Time_error_ mVar39;
  multireturn_time_Time_error_ mVar40;
  multireturn_time_Time_error_ mVar41;
  multireturn_time_Time_error_ mVar42;
  string a2;
  multireturn_string_int_int64_int64_bool_ mVar43;
  string layout_spill;
  string value_spill;
  time_Location *defaultLocation_spill;
  time_Location *local_spill;
  time_Location *local_1d8;
  time_Location *local_1d0;
  time_Location *local_1c8;
  time_Location *local_1c0;
  time_Location *local_1b8;
  time_Location *local_1b0;
  time_Location *local_1a8;
  time_Location *local_1a0;
  time_Location *local_198;
  time_Location *local_180;
  time_Location *local_178;
  time_Location *local_160;
  time_Location *local_158;
  time_Location *local_150;
  time_Location *local_148;
  time_Location *local_140;
  time_Location *local_138;
  time_Location *local_130;
  time_Location *local_128;
  time_Location *local_120;
  time_Location *local_118;
  time_Location *local_110;
  time_Location *local_108;
  time_Location *local_100;
  long local_f8;
  time_Location *local_f0;
  time_Location *local_e8;
  time_Location *local_e0;
  time_Location *local_d8;
  time_Location *local_d0;
  time_Location *local_c8;
  time_Location *local_c0;
  time_Location *local_b8;
  time_Location *local_b0;
  time_Location *local_a8;
  time_Location *local_a0;
  time_Location *local_98;
  uint8 *local_90;
  uint8 *local_88;
  time_Location *local_80;
  time_Location *local_78;
  time_Location *local_70;
  uint8 *local_68;
  time_Location *local_60;
  time_Location *local_58;
  time_Location *local_50;
  time_Location *local_48;
  time_Location *local_40;
  time_Location *local_38;
  time_Location *local_30;
  time_Location *local_20;
  time_Location *local_18;
  ulong uVar14;
  
                    /* Unresolved local var: bool amSet@[???]
                       Unresolved local var: bool pmSet@[???]
                       Unresolved local var: int year@[???]
                       Unresolved local var: int month@[???]
                       Unresolved local var: int day@[???]
                       Unresolved local var: int yday@[???]
                       Unresolved local var: int hour@[???]
                       Unresolved local var: int min@[???]
                       Unresolved local var: int sec@[???]
                       Unresolved local var: int nsec@[???]
                       Unresolved local var: time.Location * z@[???]
                       Unresolved local var: int zoneOffset@[???]
                       Unresolved local var: string alayout@[???]
                       Unresolved local var: string avalue@[???]
                       Unresolved local var: string rangeErrString@[???]
                       Unresolved local var: string zoneName@[???] */
  while (&local_160 <= *(time_Location ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
                    /* Unresolved local var: int std@[???]
                       Unresolved local var: error err@[???]
                       Unresolved local var: string prefix@[???]
                       Unresolved local var: string suffix@[???]
                       Unresolved local var: string stdstr@[???]
                       Unresolved local var: string p@[???] */
  ptVar22 = (time_Location *)0x0;
  local_a8 = (time_Location *)0x0;
  local_178 = (time_Location *)0x0;
  lVar17 = -1;
  ptVar19 = (time_Location *)0xffffffffffffffff;
  pvVar16 = (void *)0x0;
  puVar20 = (uint8 *)0x0;
  ptVar23 = (time_Location *)0xffffffffffffffff;
  local_180 = (time_Location *)0xffffffffffffffff;
  ptVar9 = (time_Location *)0x0;
  ptVar7 = (time_Location *)0x0;
  local_128 = (time_Location *)0x0;
  local_150 = (time_Location *)0x0;
  local_a0 = (time_Location *)0x0;
  local_140 = (time_Location *)0x0;
  local_78 = (time_Location *)0x0;
  local_b0 = (time_Location *)value_spill.len;
  local_40 = (time_Location *)value_spill.str;
  local_b8 = (time_Location *)layout_spill.len;
  local_98 = (time_Location *)layout_spill.str;
  local_e0 = local_b0;
  do {
    local_b0 = local_e0;
    ptVar11 = local_1c0;
    sVar24.len = (int)local_a8;
    sVar24.str = (uint8 *)local_b8;
    local_110 = ptVar23;
    local_100 = ptVar9;
    local_e8 = ptVar7;
    local_d0 = ptVar19;
    local_48 = local_98;
    time_nextStdChunk(sVar24);
    ptVar19 = local_b0;
    ptVar23 = (time_Location *)((long)local_b8 - (long)local_1b0);
    if (local_b8 < ptVar23) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceAlen();
    }
    if (ptVar23 < local_1c8) {
                    /* WARNING: Subroutine does not return */
      runtime_panicSliceB();
    }
    local_158 = local_1c0;
    local_138 = local_1c8;
    local_70 = local_1d0;
    local_98 = local_1b8;
    local_160 = local_1b0;
    local_1d8 = local_b0;
    prefix.len = (int)local_1d0;
    prefix.str = (uint8 *)local_1b0;
    value_00.len = (int)local_b8;
    value_00.str = (uint8 *)local_b0;
    local_b8 = ptVar23;
    time_skip(value_00,prefix);
    ptVar7 = local_100;
    ptVar23 = local_150;
    ptVar5 = (time_zoneTrans *)((long)local_b8 - (long)local_138);
    value_01.str = (uint8 *)((long)&((runtime__type *)&local_48->name)->size +
                            (-(long)ptVar5 >> 0x3f & (ulong)local_138));
    local_40 = local_1c0;
                    /* Unresolved local var: int n@[???] */
    local_e0 = local_1b8;
    if (local_1b0 != (time_Location *)0x0) {
      ptVar22 = local_138;
      runtime_newobject((runtime__type *)&DAT_0026b300);
      ((runtime__type *)&ptVar19->name)->ptrdata = layout_spill.len;
      if (runtime_writeBarrier._0_4_ == 0) {
        ((runtime__type *)&ptVar19->name)->size = (uintptr)layout_spill.str;
      }
      else {
        runtime_gcWriteBarrier();
      }
      (ptVar19->zone).len = value_spill.len;
      if (runtime_writeBarrier._0_4_ == 0) {
        (ptVar19->zone).array = (time_zone *)value_spill.str;
      }
      else {
        runtime_gcWriteBarrierDX();
        ptVar22 = ptVar19;
      }
      (ptVar19->tx).array = (time_zoneTrans *)local_138;
      if (runtime_writeBarrier._0_4_ == 0) {
        (ptVar19->zone).cap = (int)local_70;
      }
      else {
        runtime_gcWriteBarrierDX();
        ptVar22 = ptVar19;
      }
      (ptVar19->tx).cap = (int)local_e0;
      if (runtime_writeBarrier._0_4_ == 0) {
        (ptVar19->tx).len = (int)local_40;
      }
      else {
        runtime_gcWriteBarrierDX();
        ptVar22 = ptVar19;
      }
      (ptVar19->extend).len = 0;
      (ptVar19->extend).str = (uint8 *)0x0;
      mVar40.~r4.ext = (int64)local_1b0;
      mVar40.~r4.wall = (uint64)go_itab__time_ParseError_error;
      mVar40.~r4.loc = ptVar22;
      mVar40.~r5.data = local_1c0;
      mVar40.~r5.tab = (runtime_itab *)ptVar19;
      return mVar40;
    }
    if (local_158 == (time_Location *)0x0) {
      if (local_1b8 != (time_Location *)0x0) {
        s_11.len = 0;
        s_11.str = value_01.str;
        sVar24 = time_quote(s_11);
        a0.str = (uint8 *)sVar24.len;
        local_48 = local_1d0;
        local_b0 = local_1c8;
        runtime_newobject((runtime__type *)local_1d0);
        ((runtime__type *)&local_1b8->name)->ptrdata = layout_spill.len;
        ptVar22 = local_1b8;
        if (runtime_writeBarrier._0_4_ == 0) {
          ((runtime__type *)&local_1b8->name)->size = (uintptr)layout_spill.str;
        }
        else {
          runtime_gcWriteBarrier();
        }
        (ptVar22->zone).len = value_spill.len;
        if (runtime_writeBarrier._0_4_ == 0) {
          (ptVar22->zone).array = (time_zone *)value_spill.str;
        }
        else {
          runtime_gcWriteBarrierDX();
          local_1c8 = ptVar22;
        }
        (ptVar22->tx).array = (time_zoneTrans *)0x0;
        (ptVar22->zone).cap = 0;
        (ptVar22->tx).cap = (int)local_e0;
        local_50 = ptVar22;
        if (runtime_writeBarrier._0_4_ == 0) {
          (ptVar22->tx).len = (int)local_40;
        }
        else {
          ptVar22 = (time_Location *)&(ptVar22->tx).len;
          runtime_gcWriteBarrierDX();
        }
        a1.len = (int)local_1c0;
        a1.str = (uint8 *)ptVar22;
        a0.len = (int)local_1c8;
        sVar24 = runtime_concatstring2((runtime_tmpBuf *)local_b0,a0,a1);
        mVar39.~r4.ext = sVar24.len;
        (local_50->extend).len = 0;
        if (runtime_writeBarrier._0_4_ == 0) {
          (local_50->extend).str = (uint8 *)local_1b8;
        }
        else {
          ptVar22 = (time_Location *)&local_50->extend;
          runtime_gcWriteBarrier();
        }
        mVar39.~r4.wall = (uint64)go_itab__time_ParseError_error;
        mVar39.~r4.loc = local_1b0;
        mVar39.~r5.data = local_1c0;
        mVar39.~r5.tab = (runtime_itab *)ptVar22;
        return mVar39;
      }
      if (((char)pvVar16 == '\0') || (0xb < (long)local_e8)) {
        ptVar9 = local_e8;
        if (((char)puVar20 != '\0') && (local_e8 == (time_Location *)&DAT_0000000c)) {
          ptVar9 = (time_Location *)0x0;
        }
      }
      else {
        ptVar9 = (time_Location *)((long)&((runtime__type *)&local_e8->name)->ptrdata + 4);
      }
      ptVar11 = (time_Location *)((long)ptVar22 >> 0x3f);
      if (lVar17 < 0) {
        ptVar6 = local_110;
        if ((long)local_110 < 0) {
          ptVar6 = (time_Location *)0x1;
        }
        ptVar15 = local_d0;
        if ((long)local_d0 < 0) {
          ptVar15 = (time_Location *)0x1;
        }
      }
      else {
        if (((ulong)ptVar22 & 3) == 0) {
                    /* Unresolved local var: int d@[???]
                       Unresolved local var: int m@[???] */
          if ((ptVar22 ==
               (time_Location *)
               ((((long)&((runtime__type *)&ptVar22->name)->size +
                  SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((long)ptVar22),8) >> 6) -
                (long)ptVar11) * 100)) &&
             (0xa3d70a3d70a3d6 <
              ((long)ptVar22 * -0x70a3d70a3d70a3d7 << 0x3c |
              (long)ptVar22 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb0U >> 4))) {
            ptVar6 = (time_Location *)0x0;
            ptVar15 = (time_Location *)0x0;
          }
          else if (lVar17 == 0x3c) {
            ptVar6 = (time_Location *)0x2;
            ptVar15 = (time_Location *)&DAT_0000001d;
          }
          else {
            if (0x3c < lVar17) {
              lVar17 = lVar17 + -1;
            }
            ptVar6 = (time_Location *)0x0;
            ptVar15 = (time_Location *)0x0;
          }
        }
        else {
                    /* Unresolved local var: int offset@[???]
                       Unresolved local var: time.Time t@[???] */
          ptVar6 = (time_Location *)0x0;
          ptVar15 = (time_Location *)0x0;
        }
        if (0x16c < lVar17 - 1U) {
          runtime_newobject((runtime__type *)&DAT_0026b300);
          ((runtime__type *)&ptVar19->name)->ptrdata = layout_spill.len;
          if (runtime_writeBarrier._0_4_ == 0) {
            ((runtime__type *)&ptVar19->name)->size = (uintptr)layout_spill.str;
          }
          else {
            runtime_gcWriteBarrier();
          }
          (ptVar19->zone).len = value_spill.len;
          if (runtime_writeBarrier._0_4_ == 0) {
            (ptVar19->zone).array = (time_zone *)value_spill.str;
          }
          else {
            runtime_gcWriteBarrierDX();
            ptVar9 = ptVar19;
          }
          (ptVar19->tx).array = (time_zoneTrans *)0x0;
          (ptVar19->zone).cap = 0;
          (ptVar19->tx).cap = (int)local_e0;
          if (runtime_writeBarrier._0_4_ == 0) {
            (ptVar19->tx).len = (int)local_40;
          }
          else {
            runtime_gcWriteBarrierDX();
            ptVar9 = ptVar19;
          }
          (ptVar19->extend).len = (int)&DAT_0000001a;
          (ptVar19->extend).str = &DAT_0029f095;
          mVar31.~r4.ext = (int64)ptVar15;
          mVar31.~r4.wall = (uint64)go_itab__time_ParseError_error;
          mVar31.~r4.loc = ptVar9;
          mVar31.~r5.data = local_1c0;
          mVar31.~r5.tab = (runtime_itab *)ptVar19;
          return mVar31;
        }
        if (ptVar6 == (time_Location *)0x0) {
          lVar12 = SUB168(SEXT816(-0x7bdef7bdef7bdef7) * SEXT816((long)(lVar17 - 1U)),8) + lVar17 +
                   -1 >> 4;
          ptVar6 = (time_Location *)(lVar12 + 1);
          if ((time_Location *)&DAT_0000000c < ptVar6) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          if (time_daysBefore[lVar12 + 1] < lVar17) {
            ptVar6 = (time_Location *)(lVar12 + 2);
          }
          if (&DAT_0000000c < (undefined1 *)((long)&ptVar6[-1].cacheZone + 7)) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          ptVar15 = (time_Location *)(lVar17 - *(int *)(&DAT_0075a1dc + (long)ptVar6 * 4));
        }
        if ((-1 < (long)local_110) && (ptVar6 != local_110)) {
          runtime_newobject((runtime__type *)&DAT_0026b300);
          ((runtime__type *)&ptVar19->name)->ptrdata = layout_spill.len;
          if (runtime_writeBarrier._0_4_ == 0) {
            ((runtime__type *)&ptVar19->name)->size = (uintptr)layout_spill.str;
          }
          else {
            runtime_gcWriteBarrier();
          }
          (ptVar19->zone).len = value_spill.len;
          if (runtime_writeBarrier._0_4_ == 0) {
            (ptVar19->zone).array = (time_zone *)value_spill.str;
          }
          else {
            runtime_gcWriteBarrierDX();
            ptVar9 = ptVar19;
          }
          (ptVar19->tx).array = (time_zoneTrans *)0x0;
          (ptVar19->zone).cap = 0;
          (ptVar19->tx).cap = (int)local_e0;
          if (runtime_writeBarrier._0_4_ == 0) {
            (ptVar19->tx).len = (int)local_40;
          }
          else {
            runtime_gcWriteBarrierDX();
            ptVar9 = ptVar19;
          }
          (ptVar19->extend).len = 0x22;
          (ptVar19->extend).str = (uint8 *)0x2a36e4;
          mVar29.~r4.ext = (int64)ptVar15;
          mVar29.~r4.wall = (uint64)go_itab__time_ParseError_error;
          mVar29.~r4.loc = ptVar9;
          mVar29.~r5.data = local_1c0;
          mVar29.~r5.tab = (runtime_itab *)ptVar19;
          return mVar29;
        }
        if ((-1 < (long)local_d0) && (ptVar15 != local_d0)) {
          runtime_newobject((runtime__type *)&DAT_0026b300);
          ((runtime__type *)&ptVar19->name)->ptrdata = layout_spill.len;
          if (runtime_writeBarrier._0_4_ == 0) {
            ((runtime__type *)&ptVar19->name)->size = (uintptr)layout_spill.str;
          }
          else {
            runtime_gcWriteBarrier();
          }
          (ptVar19->zone).len = value_spill.len;
          if (runtime_writeBarrier._0_4_ == 0) {
            (ptVar19->zone).array = (time_zone *)value_spill.str;
          }
          else {
            runtime_gcWriteBarrierDX();
            ptVar9 = ptVar19;
          }
          (ptVar19->tx).array = (time_zoneTrans *)0x0;
          (ptVar19->zone).cap = 0;
          (ptVar19->tx).cap = (int)local_e0;
          if (runtime_writeBarrier._0_4_ == 0) {
            (ptVar19->tx).len = (int)local_40;
          }
          else {
            runtime_gcWriteBarrierDX();
            ptVar9 = ptVar19;
          }
          (ptVar19->extend).len = (int)&DAT_00000020;
          (ptVar19->extend).str = (uint8 *)0x2a2270;
          mVar30.~r4.ext = (int64)ptVar15;
          mVar30.~r4.wall = (uint64)go_itab__time_ParseError_error;
          mVar30.~r4.loc = ptVar9;
          mVar30.~r5.data = local_1c0;
          mVar30.~r5.tab = (runtime_itab *)ptVar19;
          return mVar30;
        }
      }
      if (0 < (long)ptVar15) {
        if (((ptVar6 == (time_Location *)0x2) && (((ulong)ptVar22 & 3) == 0)) &&
           ((ptVar22 !=
             (time_Location *)
             ((((long)&((runtime__type *)&ptVar22->name)->size +
                SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((long)ptVar22),8) >> 6) -
              (long)ptVar11) * 100) ||
            (lVar17 = (long)ptVar22 * -0x70a3d70a3d70a3d7,
            ptVar22 = (time_Location *)0xa3d70a3d70a3d6, ptVar11 = ptVar22,
            (lVar17 << 0x3c | lVar17 + 0x51eb851eb851eb0U >> 4) < 0xa3d70a3d70a3d7)))) {
          lVar17 = 0x1d;
          ptVar22 = ptVar11;
        }
        else {
          if ((time_Location *)&DAT_0000000c < ptVar6) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          if (&DAT_0000000c < (undefined1 *)((long)&ptVar6[-1].cacheZone + 7)) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          lVar17 = (long)(time_daysBefore[(long)ptVar6] - *(int *)(&DAT_0075a1dc + (long)ptVar6 * 4)
                         );
        }
        if ((long)ptVar15 <= lVar17) {
          if (local_a0 != (time_Location *)0x0) {
            tVar27 = time_Date((int)local_a0,(time_Month)ptVar15,(int)local_128,0,(int)local_1c0,
                               0x75a1e0,(int)ptVar22,ptVar6);
            mVar38.~r4.ext = tVar27.ext;
            mVar38.~r4.wall = (uint64)local_1a0;
            mVar38.~r4.loc = local_198;
            mVar38.~r5.data = local_1c0;
            mVar38.~r5.tab = (runtime_itab *)local_1b8;
            return mVar38;
          }
          if (local_180 == (time_Location *)0xffffffffffffffff) {
            if (local_178 == (time_Location *)0x0) {
              tVar27 = time_Date((int)defaultLocation_spill,(time_Month)ptVar15,(int)ptVar9,0,
                                 (int)local_1c0,0x75a1e0,(int)ptVar22,ptVar6);
              mVar35.~r4.ext = tVar27.ext;
              mVar35.~r4.wall = (uint64)local_1a0;
              mVar35.~r4.loc = local_198;
              mVar35.~r5.data = local_1c0;
              mVar35.~r5.tab = (runtime_itab *)local_1b8;
              return mVar35;
            }
            time_Date((int)time_UTC,(time_Month)ptVar15,(int)local_128,0,(int)local_1c0,0x75a1e0,
                      (int)ptVar22,ptVar6);
            local_38 = local_1a0;
            local_30 = local_198;
            if ((long)local_1a0 < 0) {
              local_198 = (time_Location *)(((ulong)((long)local_1a0 << 1) >> 0x1f) + 0xdd7b17f80);
            }
            local_1d8 = local_a8;
            pvVar16 = (void *)0xfffffff1886e0900;
            name.len = &local_198[-0x239c7afe].tx.len;
            name.str = (uint8 *)local_178;
            ptVar22 = local_1b8;
            mVar25 = time___Location__lookupName(local_spill,name,(int64)local_1b8);
            s_10.len = CONCAT71((int7)((ulong)local_178 >> 8),mVar25.ok);
            local_1b8._0_1_ = (char)ptVar23;
            if ((char)local_1b8 == '\0') {
              if (((3 < (long)local_178) &&
                  ((short)((runtime__type *)&local_a8->name)->size == 0x4d47)) &&
                 (*(char *)((long)&((runtime__type *)&local_a8->name)->size + 2) == 'T')) {
                local_1d8 = (time_Location *)((long)&local_178[-1].cacheZone + 5);
                s_10.str = (uint8 *)local_1d8;
                time_atoi(s_10);
                ptVar7 = (time_Location *)((long)local_178 * 0xe10);
              }
              local_130 = ptVar7;
              runtime_newobject((runtime__type *)ptVar7);
              local_58 = local_1d8;
              ((runtime__type *)&local_1d8->name)->ptrdata = (uintptr)local_178;
              if (runtime_writeBarrier._0_4_ == 0) {
                ((runtime__type *)&local_1d8->name)->size = (uintptr)local_a8;
              }
              else {
                runtime_gcWriteBarrierCX();
              }
              runtime_newobject((runtime__type *)&DAT_002267a0);
              ((runtime__type *)&local_1d8->name)->ptrdata = (uintptr)local_178;
              ptVar22 = local_1d8;
              if (runtime_writeBarrier._0_4_ == 0) {
                ((runtime__type *)&local_1d8->name)->size = (uintptr)local_a8;
              }
              else {
                runtime_gcWriteBarrier();
              }
              (ptVar22->zone).array = (time_zone *)local_130;
              *(undefined1 *)&(ptVar22->zone).len = 0;
              (local_58->zone).len = 1;
              (local_58->zone).cap = 1;
              if (runtime_writeBarrier._0_4_ == 0) {
                (local_58->zone).array = (time_zone *)ptVar22;
              }
              else {
                ptVar22 = (time_Location *)&local_58->zone;
                runtime_gcWriteBarrierDX();
              }
              runtime_newobject((runtime__type *)&DAT_00226800);
              iVar10 = -0x8000000000000000;
              ((runtime__type *)&local_1d8->name)->size = 0x8000000000000000;
              *(undefined2 *)&((runtime__type *)&local_1d8->name)->ptrdata = 0;
              *(undefined1 *)((long)&((runtime__type *)&local_1d8->name)->ptrdata + 2) = 0;
              (local_58->tx).len = 1;
              (local_58->tx).cap = 1;
              if (runtime_writeBarrier._0_4_ == 0) {
                (local_58->tx).array = (time_zoneTrans *)local_1d8;
                ptVar19 = local_58;
              }
              else {
                ptVar22 = (time_Location *)&local_58->tx;
                runtime_gcWriteBarrier();
                ptVar19 = extraout_RDX;
              }
              ptVar19->cacheStart = iVar10;
              ptVar19->cacheEnd = 0x7fffffffffffffff;
              ptVar4 = (ptVar19->zone).array;
              if ((func_unsafe_Pointer__unsafe_Pointer__bool **)(ptVar19->zone).len !=
                  (func_unsafe_Pointer__unsafe_Pointer__bool **)0x0) {
                if (runtime_writeBarrier._0_4_ == 0) {
                  ptVar19->cacheZone = ptVar4;
                }
                else {
                  ptVar22 = (time_Location *)&ptVar19->cacheZone;
                  runtime_gcWriteBarrierBX();
                }
                if ((long)local_38 < 0) {
                  local_30 = (time_Location *)(((ulong)((long)local_38 << 1) >> 0x1f) + 0xdd7b17f80)
                  ;
                  local_38 = (time_Location *)((ulong)local_38 & 0x3fffffff);
                }
                mVar33.~r4.ext = (int64)ptVar4;
                mVar33.~r4.wall = (uint64)local_38;
                mVar33.~r4.loc = local_30;
                mVar33.~r5.data = pvVar16;
                mVar33.~r5.tab = (runtime_itab *)ptVar22;
                return mVar33;
              }
                    /* WARNING: Subroutine does not return */
              runtime_panicIndex();
            }
            time___Time__addSec((time_Time *)-(long)ptVar7,s_10.len);
            if (local_spill == &time_utcLoc) {
              local_spill = (time_Location *)0x0;
            }
            if ((long)local_38 < 0) {
              local_38 = (time_Location *)((ulong)local_38 & 0x3fffffff);
            }
            mVar34.~r4.ext = s_10.len;
            mVar34.~r4.wall = (uint64)local_spill;
            mVar34.~r4.loc = local_38;
            mVar34.~r5.data = pvVar16;
            mVar34.~r5.tab = (runtime_itab *)ptVar22;
            return mVar34;
          }
                    /* Unresolved local var: string name@[???]
                       Unresolved local var: time.Time t@[???] */
          tVar27 = time_Date((int)time_UTC,(time_Month)ptVar15,(int)local_128,0,(int)local_1c0,
                             0x75a1e0,(int)ptVar22,ptVar6);
          local_20 = local_1a0;
          local_18 = local_198;
          time___Time__addSec((time_Time *)-(long)local_180,tVar27.ext);
          ptVar22 = local_18;
          if ((long)local_20 < 0) {
            ptVar22 = (time_Location *)(((ulong)((long)local_20 << 1) >> 0x1f) + 0xdd7b17f80);
          }
          local_1d8 = (time_Location *)&ptVar22[-0x239c7afe].tx.len;
          mVar43 = time___Location__lookup(local_1d8,tVar27.ext);
          pvVar16 = (void *)mVar43.end;
          prVar18 = (runtime_itab *)mVar43.start;
          if (ptVar7 == local_180) {
            if (local_178 == (time_Location *)0x0) {
              local_1c8._0_1_ = '\x01';
            }
            else if (local_178 == ptVar9) {
              local_1d8 = local_a8;
              runtime_memequal();
              local_1c8._0_1_ = (char)ptVar9;
                    /* Unresolved local var: time.Location * l@[???] */
            }
            else {
              local_1c8._0_1_ = '\0';
            }
          }
          else {
            local_1c8._0_1_ = '\0';
          }
          if ((char)local_1c8 != '\0') {
            if (local_spill == &time_utcLoc) {
              local_spill = (time_Location *)0x0;
            }
            if ((long)local_20 < 0) {
              local_20 = (time_Location *)((ulong)local_20 & 0x3fffffff);
            }
            mVar36.~r4.ext = (int64)local_178;
            mVar36.~r4.wall = (uint64)local_spill;
            mVar36.~r4.loc = local_20;
            mVar36.~r5.data = pvVar16;
            mVar36.~r5.tab = prVar18;
            return mVar36;
          }
          runtime_newobject((runtime__type *)&DAT_00271260);
          local_60 = local_1d8;
          (local_1d8->name).len = (int)local_178;
          if (runtime_writeBarrier._0_4_ == 0) {
            (local_1d8->name).str = (uint8 *)local_a8;
          }
          else {
            runtime_gcWriteBarrierCX();
          }
          runtime_newobject((runtime__type *)&DAT_002267a0);
          (local_1d8->name).len = (int)local_178;
          ptVar22 = local_1d8;
          if (runtime_writeBarrier._0_4_ == 0) {
            (local_1d8->name).str = (uint8 *)local_a8;
          }
          else {
            runtime_gcWriteBarrier();
          }
          (ptVar22->zone).array = (time_zone *)local_180;
          *(undefined1 *)&(ptVar22->zone).len = 0;
          (local_60->zone).len = 1;
          (local_60->zone).cap = 1;
          if (runtime_writeBarrier._0_4_ == 0) {
            (local_60->zone).array = (time_zone *)ptVar22;
          }
          else {
            ptVar22 = (time_Location *)&local_60->zone;
            runtime_gcWriteBarrierDX();
          }
          runtime_newobject((runtime__type *)&DAT_00226800);
          iVar10 = -0x8000000000000000;
          (local_1d8->name).str = (uint8 *)0x8000000000000000;
          *(undefined2 *)&(local_1d8->name).len = 0;
          *(undefined1 *)((long)&(local_1d8->name).len + 2) = 0;
          (local_60->tx).len = 1;
          (local_60->tx).cap = 1;
          if (runtime_writeBarrier._0_4_ == 0) {
            (local_60->tx).array = (time_zoneTrans *)local_1d8;
            ptVar19 = local_60;
          }
          else {
            ptVar22 = (time_Location *)&local_60->tx;
            runtime_gcWriteBarrier();
            ptVar19 = extraout_RDX_00;
          }
          ptVar19->cacheStart = iVar10;
          ptVar19->cacheEnd = 0x7fffffffffffffff;
          ptVar4 = (ptVar19->zone).array;
          if ((ptVar19->zone).len != 0) {
            if (runtime_writeBarrier._0_4_ == 0) {
              ptVar19->cacheZone = ptVar4;
            }
            else {
              ptVar22 = (time_Location *)&ptVar19->cacheZone;
              runtime_gcWriteBarrierBX();
            }
            if ((long)local_20 < 0) {
              local_18 = (time_Location *)(((ulong)((long)local_20 << 1) >> 0x1f) + 0xdd7b17f80);
              local_20 = (time_Location *)((ulong)local_20 & 0x3fffffff);
            }
            mVar37.~r4.ext = (int64)ptVar4;
            mVar37.~r4.wall = (uint64)local_20;
            mVar37.~r4.loc = local_18;
            mVar37.~r5.data = pvVar16;
            mVar37.~r5.tab = (runtime_itab *)ptVar22;
            return mVar37;
          }
                    /* WARNING: Subroutine does not return */
          runtime_panicIndex();
        }
      }
      runtime_newobject((runtime__type *)&DAT_0026b300);
      ((runtime__type *)&ptVar19->name)->ptrdata = layout_spill.len;
      if (runtime_writeBarrier._0_4_ == 0) {
        ((runtime__type *)&ptVar19->name)->size = (uintptr)layout_spill.str;
      }
      else {
        runtime_gcWriteBarrier();
      }
      (ptVar19->zone).len = value_spill.len;
      if (runtime_writeBarrier._0_4_ == 0) {
        (ptVar19->zone).array = (time_zone *)value_spill.str;
      }
      else {
        runtime_gcWriteBarrierDX();
        ptVar9 = ptVar19;
      }
      (ptVar19->tx).array = (time_zoneTrans *)0x0;
      (ptVar19->zone).cap = 0;
      (ptVar19->tx).cap = (int)local_e0;
      if (runtime_writeBarrier._0_4_ == 0) {
        (ptVar19->tx).len = (int)local_40;
      }
      else {
        runtime_gcWriteBarrierDX();
        ptVar9 = ptVar19;
      }
      (ptVar19->extend).len = (int)&DAT_00000012;
      (ptVar19->extend).str = &DAT_0029a542;
      mVar32.~r4.ext = (int64)ptVar15;
      mVar32.~r4.wall = (uint64)go_itab__time_ParseError_error;
      mVar32.~r4.loc = ptVar9;
      mVar32.~r5.data = local_1c0;
      mVar32.~r5.tab = (runtime_itab *)ptVar19;
      return mVar32;
    }
    uVar14 = (ulong)local_158 & 0xffff;
    fixed = SUB81(local_138,0);
    ptVar6 = local_1b0;
    ptVar19 = local_d0;
    ptVar23 = local_110;
    ptVar7 = local_e8;
    ptVar9 = local_100;
    ptVar15 = local_150;
    local_b0 = (time_Location *)ptVar5;
    local_90 = value_01.str;
    if (uVar14 < 0x107) {
      if (uVar14 < 0x24) {
        if (uVar14 < 0x22) {
          if (uVar14 == 0x17) {
            local_d8 = local_1b0;
            if ((((long)local_1b8 < 3) ||
                ((short)((runtime__type *)&local_1c0->name)->size != 0x5455)) ||
               (*(char *)((long)&((runtime__type *)&local_1c0->name)->size + 2) != 'C')) {
              local_1d8 = local_1b8;
              value_01.len = 0;
              time_parseTimeZone(value_01);
              ptVar11 = local_40;
              ptVar6 = (time_Location *)time_errBad.tab;
              ptVar19 = local_d0;
              ptVar23 = local_110;
              ptVar7 = local_e8;
              ptVar9 = local_100;
              ptVar15 = local_150;
              if ((char)local_1c8 != '\0') {
                if (local_e0 < local_1d0) {
                    /* WARNING: Subroutine does not return */
                  runtime_panicSliceAlen();
                }
                local_178 = local_1d0;
                local_a8 = local_40;
                ptVar11 = (time_Location *)
                          ((long)&((runtime__type *)&local_40->name)->size +
                          (-((long)local_e0 - (long)local_1d0) >> 0x3f & (ulong)local_1d0));
                ptVar6 = local_d8;
                local_e0 = (time_Location *)((long)local_e0 - (long)local_1d0);
              }
            }
            else {
              local_e0 = (time_Location *)((long)&local_1b8[-1].cacheZone + 5);
                    /* Unresolved local var: string hold@[???] */
                    /* Unresolved local var: int hr@[???]
                       Unresolved local var: int mm@[???]
                       Unresolved local var: int ss@[???]
                       Unresolved local var: string sign@[???]
                       Unresolved local var: string hour@[???]
                       Unresolved local var: string min@[???]
                       Unresolved local var: string seconds@[???] */
              local_a0 = time_UTC;
              ptVar11 = (time_Location *)
                        ((long)&((runtime__type *)&local_1c0->name)->size +
                        (-(long)local_e0 >> 0x3f & 3U));
                    /* Unresolved local var: int i@[???] */
            }
          }
          else if (0x17 < uVar14) {
            ptVar6 = (time_Location *)time_errBad.tab;
            if (((local_158 == (time_Location *)&DAT_00000018) ||
                (local_158 == (time_Location *)&DAT_0000001a)) ||
               (local_158 == (time_Location *)0x1b)) {
              if (((long)local_1b8 < 1) || ((char)((runtime__type *)&local_1c0->name)->size != 'Z'))
              {
                if (local_158 != (time_Location *)0x1b) goto LAB_0055078b;
                goto LAB_00550795;
              }
              local_e0 = (time_Location *)((long)&local_1b8[-1].cacheZone + 7);
              local_a0 = time_UTC;
              ptVar11 = (time_Location *)
                        ((long)&((runtime__type *)&local_1c0->name)->size +
                        (-(long)local_e0 >> 0x3f & 1U));
              ptVar6 = local_1b0;
            }
            else {
LAB_0055078b:
              if (local_158 == (time_Location *)&DAT_00000020) {
LAB_00550795:
                if ((5 < (long)local_1b8) &&
                   (*(char *)((long)&((runtime__type *)&local_1c0->name)->size + 3) == ':')) {
                  local_68 = (uint8 *)((long)&((runtime__type *)&local_1c0->name)->size + 4);
                  local_b8 = (time_Location *)((long)&local_1b8[-1].cacheZone + 2);
                  local_48 = (time_Location *)
                             ((long)&((runtime__type *)&local_1c0->name)->size +
                             (-(long)local_b8 >> 0x3f & 6U));
                  local_88 = &DAT_0028778d;
LAB_00550acb:
                  s.len = (int)local_68;
                  s.str = value_01.str;
                  mVar26 = time_atoi(s);
                  s_00.len = mVar26.err.tab;
                  local_f0 = local_1d0;
                  if (local_1c8 == (time_Location *)0x0) {
                    s_00.str = local_68;
                    mVar26 = time_atoi(s_00);
                    s_01.len = mVar26.err.tab;
                    s_01.str = local_88;
                    local_108 = local_1d0;
                    time_atoi(s_01);
                    ptVar19 = local_108;
                    local_180 = local_1d0;
                  }
                  else {
                    ptVar19 = (time_Location *)0x0;
                    local_180 = (time_Location *)0x0;
                  }
                  local_1d8 = (time_Location *)0x2;
                  local_180 = (time_Location *)
                              (((long)&ptVar19->name + (long)local_f0 * 0x3c) * 0x3c +
                              (long)local_180);
                  cVar2 = *(char *)&(local_40->name).str;
                  ptVar11 = local_48;
                  ptVar6 = local_1c8;
                  local_e0 = local_b8;
                  ptVar19 = local_d0;
                  ptVar23 = local_110;
                  ptVar7 = local_e8;
                  ptVar9 = local_100;
                  ptVar15 = local_150;
                  if ((cVar2 != '+') && (ptVar6 = (time_Location *)time_errBad.tab, cVar2 == '-')) {
                    local_180 = (time_Location *)-(long)local_180;
                    ptVar6 = local_1c8;
                  }
                }
              }
              else if ((local_158 == (time_Location *)&DAT_0000001f) ||
                      (local_158 == (time_Location *)&DAT_0000001a)) {
                if (2 < (long)local_1b8) {
                  local_b8 = (time_Location *)((long)&local_1b8[-1].cacheZone + 5);
                  local_48 = (time_Location *)
                             ((long)&((runtime__type *)&local_1c0->name)->size +
                             (-(long)local_b8 >> 0x3f & 3U));
                  local_88 = &DAT_0028778d;
                  local_68 = &DAT_0028778d;
                  goto LAB_00550acb;
                }
              }
              else if ((local_158 == (time_Location *)&DAT_0000001c) ||
                      (local_158 == (time_Location *)&DAT_00000021)) {
                if ((8 < (long)local_1b8) &&
                   ((*(char *)((long)&((runtime__type *)&local_1c0->name)->size + 3) == ':' &&
                    (*(char *)((long)&((runtime__type *)&local_1c0->name)->size + 6) == ':')))) {
                  local_68 = (uint8 *)((long)&((runtime__type *)&local_1c0->name)->size + 4);
                  local_88 = (uint8 *)((long)&((runtime__type *)&local_1c0->name)->size + 7);
                  local_b8 = (time_Location *)((long)&local_1b8[-1].cacheEnd + 7);
                  local_48 = (time_Location *)
                             ((long)&((runtime__type *)&local_1c0->name)->size +
                             (-(long)local_b8 >> 0x3f & 9U));
                  goto LAB_00550acb;
                }
              }
              else if ((local_158 == (time_Location *)&DAT_00000019) ||
                      (local_158 == (time_Location *)&DAT_0000001e)) {
                if (6 < (long)local_1b8) {
                  local_68 = (uint8 *)((long)&((runtime__type *)&local_1c0->name)->size + 3);
                  local_88 = (uint8 *)((long)&((runtime__type *)&local_1c0->name)->size + 5);
                  local_b8 = (time_Location *)((long)&local_1b8[-1].cacheZone + 1);
                  local_48 = (time_Location *)
                             ((long)&((runtime__type *)&local_1c0->name)->size +
                             (-(long)local_b8 >> 0x3f & 7U));
                  goto LAB_00550acb;
                }
              }
              else if (4 < (long)local_1b8) {
                local_68 = (uint8 *)((long)&((runtime__type *)&local_1c0->name)->size + 3);
                local_b8 = (time_Location *)((long)&local_1b8[-1].cacheZone + 3);
                local_48 = (time_Location *)
                           ((long)&((runtime__type *)&local_1c0->name)->size +
                           (-(long)local_b8 >> 0x3f & 5U));
                local_88 = &DAT_0028778d;
                goto LAB_00550acb;
              }
            }
          }
        }
        else {
                    /* Unresolved local var: int ndigit@[???] */
          if (uVar14 == 0x22) {
            local_b8 = (time_Location *)((long)local_158 >> 0x10);
            ptVar1 = (time_Location *)((long)local_b8 + 1);
            ptVar6 = (time_Location *)time_errBad.tab;
            if ((long)ptVar1 <= (long)local_1b8) {
              local_1d8 = local_1b8;
              value_02.len = 0;
              value_02.str = value_01.str;
              local_120 = ptVar1;
              time_parseNanoseconds(value_02,(int)ptVar1);
              if (local_e0 < local_120) {
                    /* WARNING: Subroutine does not return */
                runtime_panicSliceB();
              }
              local_e0 = (time_Location *)((long)local_e0 + (-1 - (long)local_b8));
              local_140 = local_1b8;
              local_78 = local_1c0;
              local_128 = local_1c8;
              ptVar11 = (time_Location *)
                        ((long)&(local_40->name).str + ((ulong)local_120 & -(long)local_e0 >> 0x3f))
              ;
              ptVar6 = local_1b0;
              ptVar19 = local_d0;
              ptVar23 = local_110;
              ptVar7 = local_e8;
              ptVar9 = local_100;
              local_1d0 = ptVar1;
              ptVar15 = local_150;
            }
          }
          else if ((1 < (long)local_1b8) &&
                  ((((cVar2 = (char)((runtime__type *)&local_1c0->name)->size, cVar2 == '.' ||
                     (cVar2 == ',')) &&
                    (bVar21 = *(byte *)((long)&((runtime__type *)&local_1c0->name)->size + 1),
                    0x2f < bVar21)) && (bVar21 < 0x3a)))) {
            lVar12 = 0;
            while ((local_f8 = lVar12, lVar12 = local_f8, local_f8 < 9 &&
                   (lVar12 = local_f8 + 1, lVar12 < (long)local_1b8))) {
              bVar21 = *(byte *)((long)&((runtime__type *)&local_1c0->name)->size + local_f8 + 1);
              if ((bVar21 < 0x30) || (0x39 < bVar21)) break;
            }
            local_1d8 = local_1b8;
            local_1d0 = (time_Location *)(local_f8 + 1);
            value_04.len = lVar12;
            value_04.str = (uint8 *)local_1d0;
            local_b8 = local_1d0;
            time_parseNanoseconds(value_04,local_f8);
            if (local_e0 < local_b8) {
                    /* WARNING: Subroutine does not return */
              runtime_panicSliceB();
            }
            local_e0 = (time_Location *)((long)local_e0 + (-1 - local_f8));
            ptVar11 = (time_Location *)
                      ((long)&(local_40->name).str + (-(long)local_e0 >> 0x3f & (ulong)local_b8));
            ptVar19 = local_d0;
            ptVar23 = local_110;
            ptVar7 = local_e8;
            ptVar9 = local_100;
            ptVar15 = local_150;
            local_140 = local_1b8;
            local_128 = local_1c8;
            local_78 = local_1c0;
          }
        }
      }
      else {
        local_e0 = local_1a8;
        if (uVar14 < 0x103) {
          if (uVar14 == 0x101) {
            local_1d8 = (time_Location *)time_longMonthNames.len;
            local_1d0 = (time_Location *)time_longMonthNames.cap;
            local_1c8 = local_1c0;
            local_1c0 = local_1b8;
            val_00.len = (int)ptVar11;
            val_00.str = (uint8 *)local_1b8;
            tab_00.len = 0;
            tab_00.array = time_longMonthNames.array;
            tab_00.cap = time_longMonthNames.len;
            time_lookup(tab_00,val_00);
            ptVar11 = local_1b0;
            ptVar6 = local_1a0;
            ptVar19 = local_d0;
            ptVar23 = (time_Location *)((long)&((runtime__type *)&local_1b8->name)->size + 1);
            ptVar7 = local_e8;
            ptVar9 = local_100;
            ptVar15 = local_150;
          }
          else {
            local_e0 = local_1b8;
            if (uVar14 == 0x102) {
              local_1d8 = (time_Location *)time_shortMonthNames.len;
              local_1d0 = (time_Location *)time_shortMonthNames.cap;
              local_1c8 = local_1c0;
              local_1c0 = local_1b8;
              val.len = (int)ptVar11;
              val.str = (uint8 *)local_1b8;
              tab.len = 0;
              tab.array = time_shortMonthNames.array;
              tab.cap = time_shortMonthNames.len;
              time_lookup(tab,val);
              ptVar11 = local_1b0;
              ptVar6 = local_1a0;
              local_e0 = local_1a8;
              ptVar19 = local_d0;
              ptVar23 = (time_Location *)((long)&((runtime__type *)&local_1b8->name)->size + 1);
              ptVar7 = local_e8;
              ptVar9 = local_100;
              ptVar15 = local_150;
            }
          }
        }
        else if (uVar14 < 0x105) {
          local_1d8 = local_1b8;
          local_1d0 = (time_Location *)CONCAT71(local_1d0._1_7_,local_158 == (time_Location *)0x104)
          ;
          s_02.len = 0;
          s_02.str = value_01.str;
          time_getnum(s_02,fixed);
          local_e0 = local_1b8;
          ptVar19 = local_d0;
          ptVar23 = local_1c8;
          ptVar7 = local_e8;
          ptVar9 = local_100;
          ptVar15 = local_150;
          if (&DAT_0000000c <= (undefined1 *)((long)&local_1c8[-1].cacheZone + 7)) {
            local_140 = (time_Location *)&DAT_00000005;
            local_78 = (time_Location *)&DAT_00288f39;
            ptVar23 = local_1c8;
          }
        }
        else if (uVar14 == 0x105) {
          local_1d8 = (time_Location *)time_longDayNames.len;
          local_1d0 = (time_Location *)time_longDayNames.cap;
          local_1c8 = local_1c0;
          local_1c0 = local_1b8;
          val_02.len = (int)ptVar11;
          val_02.str = (uint8 *)local_1b8;
          tab_02.len = 0;
          tab_02.array = time_longDayNames.array;
          tab_02.cap = time_longDayNames.len;
          time_lookup(tab_02,val_02);
          ptVar11 = local_1b0;
          ptVar6 = local_1a0;
          ptVar19 = local_d0;
          ptVar23 = local_110;
          ptVar7 = local_e8;
          ptVar9 = local_100;
          ptVar15 = local_150;
        }
        else {
          local_e0 = local_1b8;
          if (uVar14 == 0x106) {
            local_1d8 = (time_Location *)time_shortDayNames.len;
            local_1d0 = (time_Location *)time_shortDayNames.cap;
            local_1c8 = local_1c0;
            local_1c0 = local_1b8;
            val_01.len = (int)ptVar11;
            val_01.str = (uint8 *)local_1b8;
            tab_01.len = 0;
            tab_01.array = time_shortDayNames.array;
            tab_01.cap = time_shortDayNames.len;
            time_lookup(tab_01,val_01);
            ptVar11 = local_1b0;
            ptVar6 = local_1a0;
            local_e0 = local_1a8;
            ptVar19 = local_d0;
            ptVar23 = local_110;
            ptVar7 = local_e8;
            ptVar9 = local_100;
            ptVar15 = local_150;
          }
        }
      }
    }
    else if (uVar14 < 0x20d) {
      if (uVar14 < 0x10c) {
        if (uVar14 < 0x10a) {
          ptVar19 = local_138;
          local_1d8 = local_1b8;
          if (((local_158 == (time_Location *)0x108) && (0 < (long)local_1b8)) &&
             ((char)((runtime__type *)&local_1c0->name)->size == ' ')) {
            ptVar19 = (time_Location *)((long)&local_1b8[-1].cacheZone + 7);
            local_1d8 = ptVar19;
          }
          local_1d0 = (time_Location *)CONCAT71(local_1d0._1_7_,local_158 == (time_Location *)0x109)
          ;
          s_03.len = 0;
          s_03.str = value_01.str;
          time_getnum(s_03,SUB81(ptVar19,0));
          ptVar11 = local_1c0;
          local_e0 = local_1b8;
          ptVar19 = local_1c8;
          ptVar23 = local_110;
          ptVar7 = local_e8;
          ptVar9 = local_100;
          ptVar15 = local_150;
        }
        else {
          for (lVar17 = 0; lVar17 < 2; lVar17 = lVar17 + 1) {
            if (((local_158 == (time_Location *)0x10a) && (0 < (long)local_e0)) &&
               ((char)((runtime__type *)&ptVar11->name)->size == ' ')) {
              local_e0 = (time_Location *)((long)&local_e0[-1].cacheZone + 7);
              ptVar11 = (time_Location *)
                        ((long)&((runtime__type *)&ptVar11->name)->size +
                        (-(long)local_e0 >> 0x3f & 1U));
            }
                    /* Unresolved local var: int i@[???] */
          }
          lVar17 = 0;
                    /* Unresolved local var: int n@[???]
                       Unresolved local var: int i@[???] */
          for (ptVar6 = (time_Location *)0x0; (long)ptVar6 < 3;
              ptVar6 = (time_Location *)((long)&((runtime__type *)&ptVar6->name)->size + 1)) {
                    /* Unresolved local var: uint8 c@[???] */
            if (((long)local_e0 <= (long)ptVar6) ||
               (bVar21 = *(char *)((long)&((runtime__type *)&ptVar6->name)->size +
                                  (long)&((runtime__type *)&ptVar11->name)->size) - 0x30, 9 < bVar21
               )) {
              if (ptVar6 == (time_Location *)0x0) goto LAB_005532d4;
              break;
            }
            lVar17 = (ulong)bVar21 + lVar17 * 10;
          }
          if ((local_158 == (time_Location *)0x10b) && (ptVar6 != (time_Location *)0x3)) {
LAB_005532d4:
            lVar17 = 0;
            ptVar6 = (time_Location *)time_errBad.tab;
          }
          else {
            if (local_e0 < ptVar6) {
                    /* WARNING: Subroutine does not return */
              runtime_panicSliceB();
            }
            local_e0 = (time_Location *)((long)local_e0 - (long)ptVar6);
            ptVar11 = (time_Location *)
                      ((long)&((runtime__type *)&ptVar11->name)->size +
                      (-(long)local_e0 >> 0x3f & (ulong)ptVar6));
            ptVar6 = (time_Location *)0x0;
          }
        }
      }
      else if (uVar14 == 0x113) {
        ptVar6 = (time_Location *)time_errBad.tab;
                    /* Unresolved local var: uint8 c@[???] */
        if ((3 < (long)local_1b8) &&
           (ptVar6 = (time_Location *)time_errBad.tab,
           (byte)((char)((runtime__type *)&local_1c0->name)->size - 0x30U) < 10)) {
          local_1d8 = (time_Location *)&DAT_00000004;
          s_04.len = 0;
          s_04.str = value_01.str;
          time_atoi(s_04);
          local_e0 = (time_Location *)((long)&local_e0[-1].cacheZone + 4);
          ptVar11 = (time_Location *)((long)&(local_40->name).str + (-(long)local_e0 >> 0x3f & 4U));
          ptVar6 = local_1c8;
          ptVar22 = local_1d0;
          ptVar19 = local_d0;
          ptVar23 = local_110;
          ptVar7 = local_e8;
          ptVar9 = local_100;
          ptVar15 = local_150;
        }
      }
      else if (uVar14 == 0x114) {
        ptVar6 = (time_Location *)time_errBad.tab;
        if (1 < (long)local_1b8) {
          local_1d8 = (time_Location *)0x2;
          s_05.len = 0;
          s_05.str = value_01.str;
          time_atoi(s_05);
          ptVar1 = (time_Location *)((long)&local_e0[-1].cacheZone + 6);
          ptVar8 = (time_Location *)
                   ((long)&((runtime__type *)&local_40->name)->size + (-(long)ptVar1 >> 0x3f & 2U));
          ptVar11 = local_40;
          ptVar6 = local_1c8;
          local_e0 = local_e0;
          ptVar22 = local_1d0;
          ptVar19 = local_d0;
          ptVar23 = local_110;
          ptVar7 = local_e8;
          ptVar9 = local_100;
          ptVar15 = local_150;
          if (local_1c8 == (time_Location *)0x0) {
            ptVar11 = ptVar8;
            ptVar6 = local_1c8;
            local_e0 = ptVar1;
            ptVar22 = (time_Location *)&local_1d0[0x13].zone.len;
            if (0x44 < (long)local_1d0) {
              ptVar6 = local_1c8;
              ptVar22 = (time_Location *)((long)&local_1d0[0x12].zone.len + 4);
            }
          }
        }
      }
      else if (uVar14 == 0x20c) {
        local_1d8 = local_1b8;
        local_1d0 = (time_Location *)((ulong)local_1d0._1_7_ << 8);
        s_06.len = 0;
        s_06.str = value_01.str;
        time_getnum(s_06,fixed);
        ptVar11 = local_1c0;
        local_e0 = local_1b8;
        ptVar19 = local_d0;
        ptVar23 = local_110;
        ptVar7 = local_1c8;
        ptVar9 = local_100;
        ptVar15 = local_150;
        if ((time_Location *)&DAT_00000018 <= local_1c8) {
          local_140 = (time_Location *)&DAT_00000004;
          local_78 = (time_Location *)&DAT_00288301;
          ptVar11 = local_1c0;
          local_e0 = local_1b8;
          ptVar7 = local_1c8;
        }
      }
    }
    else if (uVar14 < 0x211) {
      if (uVar14 < 0x20f) {
        local_1d8 = local_1b8;
        local_1d0 = (time_Location *)CONCAT71(local_1d0._1_7_,local_158 == (time_Location *)0x20e);
        s_08.len = 0;
        s_08.str = value_01.str;
        time_getnum(s_08,fixed);
        ptVar11 = local_1c0;
        local_e0 = local_1b8;
        ptVar19 = local_d0;
        ptVar23 = local_110;
        ptVar7 = local_1c8;
        ptVar9 = local_100;
        ptVar15 = local_150;
        if ((time_Location *)&DAT_0000000d <= local_1c8) {
          local_140 = (time_Location *)&DAT_00000004;
          local_78 = (time_Location *)&DAT_00288301;
          ptVar11 = local_1c0;
          local_e0 = local_1b8;
          ptVar7 = local_1c8;
        }
      }
      else {
        local_1d8 = local_1b8;
        local_1d0 = (time_Location *)CONCAT71(local_1d0._1_7_,local_158 == (time_Location *)0x210);
        s_09.len = 0;
        s_09.str = value_01.str;
        time_getnum(s_09,fixed);
        ptVar11 = local_1c0;
        local_e0 = local_1b8;
        ptVar19 = local_d0;
        ptVar23 = local_110;
        ptVar7 = local_e8;
        ptVar9 = local_1c8;
        ptVar15 = local_150;
        if ((time_Location *)&DAT_0000003c <= local_1c8) {
          local_140 = (time_Location *)&DAT_00000006;
          local_78 = (time_Location *)&DAT_00289ccc;
          ptVar11 = local_1c0;
          local_e0 = local_1b8;
          ptVar9 = local_1c8;
        }
      }
    }
    else if (uVar14 < 0x213) {
      local_1d8 = local_1b8;
      local_1d0 = (time_Location *)CONCAT71(local_1d0._1_7_,local_158 == (time_Location *)0x212);
      s_07.len = 0;
      s_07.str = value_01.str;
      time_getnum(s_07,fixed);
                    /* Unresolved local var: int n@[???] */
      ptVar19 = local_d0;
      ptVar23 = local_110;
      ptVar7 = local_e8;
      ptVar9 = local_100;
      if (local_1c8 < (time_Location *)&DAT_0000003c) {
        ptVar11 = local_1c0;
        local_e0 = local_1b8;
        ptVar15 = local_1c8;
                    /* Unresolved local var: uint8 c@[???] */
        if (((1 < (long)local_1b8) &&
            ((cVar2 = (char)((runtime__type *)&local_1c0->name)->size, cVar2 == '.' ||
             (ptVar11 = local_1c0, local_e0 = local_1b8, ptVar15 = local_1c8, cVar2 == ',')))) &&
           (ptVar11 = local_1c0, local_e0 = local_1b8, ptVar15 = local_1c8,
           (byte)(*(char *)((long)&((runtime__type *)&local_1c0->name)->size + 1) - 0x30U) < 10)) {
          local_c0 = local_1c8;
          local_c8 = local_1b0;
          local_148 = local_1b8;
          local_80 = local_1c0;
          local_1d8 = local_160;
          layout_00.len = 0;
          layout_00.str = (uint8 *)local_98;
          mVar28 = time_nextStdChunk(layout_00);
          uVar14 = mVar28.prefix.len;
          if ((((ulong)local_1c0 & 0xffff) == 0x22) || (((ulong)local_1c0 & 0xffff) == 0x23)) {
            local_150 = local_c0;
            ptVar11 = local_80;
            ptVar6 = local_c8;
            local_e0 = local_148;
            ptVar19 = local_d0;
            ptVar23 = local_110;
            ptVar7 = local_e8;
            ptVar9 = local_100;
            ptVar15 = local_150;
          }
          else {
            local_1d0 = (time_Location *)0x2;
                    /* Unresolved local var: uint8 c@[???] */
            while (((long)local_1d0 < (long)local_148 &&
                   (uVar13 = *(byte *)((long)&((runtime__type *)&local_1d0->name)->size +
                                      (long)&((runtime__type *)&local_80->name)->size) - 0x30,
                   uVar14 = (ulong)uVar13, (byte)uVar13 < 10))) {
              local_1d0 = (time_Location *)((long)&((runtime__type *)&local_1d0->name)->size + 1);
            }
            local_1d8 = local_148;
            value_03.len = uVar14;
            value_03.str = (uint8 *)local_148;
            local_118 = local_1d0;
            time_parseNanoseconds(value_03,(int)local_80);
            if (local_148 < local_118) {
                    /* WARNING: Subroutine does not return */
              runtime_panicSliceB();
            }
            ptVar11 = (time_Location *)
                      ((long)&((runtime__type *)&local_80->name)->size +
                      ((ulong)local_118 & -((long)local_148 - (long)local_118) >> 0x3f));
            local_e0 = (time_Location *)((long)local_148 - (long)local_118);
            ptVar19 = local_d0;
            ptVar23 = local_110;
            ptVar7 = local_e8;
            ptVar9 = local_100;
            ptVar15 = local_c0;
            local_140 = local_1b8;
            local_128 = local_1c8;
            local_78 = local_1c0;
          }
        }
      }
      else {
        local_150 = local_1c8;
        local_140 = (time_Location *)&DAT_00000006;
        local_78 = (time_Location *)&DAT_0028a056;
        ptVar11 = local_1c0;
        local_e0 = local_1b8;
        ptVar15 = local_150;
      }
    }
    else if (uVar14 == 0x215) {
      ptVar11 = local_1c0;
      ptVar6 = (time_Location *)time_errBad.tab;
      local_e0 = local_1b8;
      if (1 < (long)local_1b8) {
        local_e0 = (time_Location *)((long)&local_1b8[-1].cacheZone + 6);
        ptVar11 = (time_Location *)
                  ((long)&((runtime__type *)&local_1c0->name)->size + (-(long)local_e0 >> 0x3f & 2U)
                  );
        sVar3 = (short)((runtime__type *)&local_1c0->name)->size;
        if (sVar3 == 0x4d41) {
          puVar20 = (uint8 *)0x1;
          ptVar6 = local_1b0;
        }
        else {
          ptVar6 = (time_Location *)time_errBad.tab;
          if (sVar3 == 0x4d50) {
            pvVar16 = (void *)0x1;
            ptVar6 = local_1b0;
          }
        }
      }
    }
    else if ((uVar14 == 0x216) &&
            (ptVar11 = local_1c0, ptVar6 = (time_Location *)time_errBad.tab, local_e0 = local_1b8,
            1 < (long)local_1b8)) {
      local_e0 = (time_Location *)((long)&local_1b8[-1].cacheZone + 6);
      ptVar11 = (time_Location *)
                ((long)&((runtime__type *)&local_1c0->name)->size + (-(long)local_e0 >> 0x3f & 2U));
      sVar3 = (short)((runtime__type *)&local_1c0->name)->size;
      if (sVar3 == 0x6d61) {
        puVar20 = (uint8 *)0x1;
        ptVar6 = local_1b0;
      }
      else {
        ptVar6 = (time_Location *)time_errBad.tab;
        if (sVar3 == 0x6d70) {
          pvVar16 = (void *)0x1;
          ptVar6 = local_1b0;
        }
      }
    }
    local_150 = ptVar15;
    local_40 = ptVar11;
    if (local_140 != (time_Location *)0x0) {
      local_b8 = local_e0;
      runtime_newobject((runtime__type *)&DAT_0026b300);
      ((runtime__type *)&local_1d8->name)->ptrdata = layout_spill.len;
      if (runtime_writeBarrier._0_4_ == 0) {
        ((runtime__type *)&local_1d8->name)->size = (uintptr)layout_spill.str;
      }
      else {
        runtime_gcWriteBarrier();
      }
      (local_1d8->zone).len = value_spill.len;
      if (runtime_writeBarrier._0_4_ == 0) {
        (local_1d8->zone).array = (time_zone *)value_spill.str;
      }
      else {
        runtime_gcWriteBarrierDX();
        ptVar11 = local_1d8;
      }
      (local_1d8->tx).array = (time_zoneTrans *)local_b0;
      if (runtime_writeBarrier._0_4_ == 0) {
        (local_1d8->zone).cap = (int)local_90;
      }
      else {
        runtime_gcWriteBarrierDX();
        ptVar11 = local_1d8;
      }
      (local_1d8->tx).cap = (int)local_b8;
      local_50 = local_1d8;
      if (runtime_writeBarrier._0_4_ == 0) {
        (local_1d8->tx).len = (int)local_40;
      }
      else {
        local_1d8 = (time_Location *)&(local_1d8->tx).len;
        runtime_gcWriteBarrierDX();
      }
      a1_00.len = (int)pvVar16;
      a1_00.str = (uint8 *)local_1d8;
      a0_00.len = (int)ptVar11;
      a0_00.str = (uint8 *)ptVar6;
      a2.len = (int)ptVar22;
      a2.str = puVar20;
      sVar24 = runtime_concatstring3((runtime_tmpBuf *)&DAT_00294544,a0_00,a1_00,a2);
      mVar42.~r4.ext = sVar24.len;
      (local_50->extend).len = (int)local_1a0;
      if (runtime_writeBarrier._0_4_ == 0) {
        (local_50->extend).str = (uint8 *)local_1a8;
      }
      else {
        local_1d8 = (time_Location *)&local_50->extend;
        runtime_gcWriteBarrier();
      }
      mVar42.~r4.wall = (uint64)go_itab__time_ParseError_error;
      mVar42.~r4.loc = local_1a0;
      mVar42.~r5.data = pvVar16;
      mVar42.~r5.tab = (runtime_itab *)local_1d8;
      return mVar42;
    }
    local_b8 = local_160;
    if (ptVar6 != (time_Location *)0x0) {
      local_b8 = local_e0;
      runtime_newobject((runtime__type *)&DAT_0026b300);
      ((runtime__type *)&local_1d8->name)->ptrdata = layout_spill.len;
      if (runtime_writeBarrier._0_4_ == 0) {
        ((runtime__type *)&local_1d8->name)->size = (uintptr)layout_spill.str;
      }
      else {
        runtime_gcWriteBarrier();
      }
      (local_1d8->zone).len = value_spill.len;
      if (runtime_writeBarrier._0_4_ == 0) {
        (local_1d8->zone).array = (time_zone *)value_spill.str;
      }
      else {
        runtime_gcWriteBarrierDX();
        ptVar11 = local_1d8;
      }
      (local_1d8->tx).array = (time_zoneTrans *)local_b0;
      if (runtime_writeBarrier._0_4_ == 0) {
        (local_1d8->zone).cap = (int)local_90;
      }
      else {
        runtime_gcWriteBarrierDX();
        ptVar11 = local_1d8;
      }
      (local_1d8->tx).cap = (int)local_b8;
      if (runtime_writeBarrier._0_4_ == 0) {
        (local_1d8->tx).len = (int)local_40;
      }
      else {
        runtime_gcWriteBarrierDX();
        ptVar11 = local_1d8;
      }
      (local_1d8->extend).len = 0;
      (local_1d8->extend).str = (uint8 *)0x0;
      mVar41.~r4.ext = (int64)ptVar6;
      mVar41.~r4.wall = (uint64)go_itab__time_ParseError_error;
      mVar41.~r4.loc = ptVar11;
      mVar41.~r5.data = pvVar16;
      mVar41.~r5.tab = (runtime_itab *)local_1d8;
      return mVar41;
    }
  } while( true );
}

