
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.tzset(string s, int64 initEnd, int64 sec, string name, int
   offset, int64 start, int64 end, bool isDST, bool ok) */

multireturn_string_int_int64_int64_bool_bool_ time_tzset(string s,int64 initEnd,int64 sec)

{
  long lVar1;
  byte bVar2;
  char *pcVar3;
  char *pcVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *pbVar9;
  undefined8 in_RSI;
  undefined8 uVar10;
  uint8 *in_R8;
  uint8 *puVar11;
  undefined1 uVar12;
  undefined8 in_R9;
  int off;
  long in_FS_OFFSET;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  string s_05;
  multireturn_int_time_Month_int_int_ mVar13;
  multireturn_string_int_int64_int64_bool_bool_ mVar14;
  multireturn_string_int_int64_int64_bool_bool_ mVar15;
  multireturn_string_int_int64_int64_bool_bool_ mVar16;
  multireturn_string_int_int64_int64_bool_bool_ mVar17;
  multireturn_string_int_int64_int64_bool_bool_ mVar18;
  multireturn_string_int_int64_int64_bool_bool_ mVar19;
  multireturn_string_int_int64_int64_bool_bool_ mVar20;
  multireturn_string_int_int64_int64_bool_bool_ mVar21;
  multireturn_string_int_int64_int64_bool_bool_ mVar22;
  multireturn_string_string_bool_ mVar23;
  multireturn_int_string_bool_ mVar24;
  multireturn_time_rule_string_bool_ mVar25;
  time_rule r;
  time_rule r_00;
  string s_spill;
  int64 initEnd_spill;
  int64 sec_spill;
  byte *local_130;
  byte *pbStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  byte bStack_110;
  char *local_108;
  long local_100;
  char local_f8;
  undefined1 local_c0 [24];
  char *local_a8;
  uint8 *local_a0;
  byte *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  byte *local_10;
  
  s_00.len = s.len;
                    /* Unresolved local var: int stdOffset@[???]
                       Unresolved local var: int dstOffset@[???]
                       Unresolved local var: int year@[???]
                       Unresolved local var: int yday@[???]
                       Unresolved local var: int64 ysec@[???]
                       Unresolved local var: uint64 d@[???]
                       Unresolved local var: int64 abs@[???]
                       Unresolved local var: int64 startSec@[???]
                       Unresolved local var: int64 endSec@[???]
                       Unresolved local var: bool stdIsDST@[???]
                       Unresolved local var: string stdName@[???]
                       Unresolved local var: string dstName@[???]
                       Unresolved local var: time.rule startRule@[???]
                       Unresolved local var: time.rule endRule@[???] */
  while (uVar12 = (undefined1)in_R9,
        local_c0 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  s_00.str = (uint8 *)s_spill.len;
  mVar23 = time_tzsetName(s_00);
  mVar14.isDST = SUB81(in_R8,0);
  uVar10 = CONCAT71((int7)((ulong)in_RSI >> 8),mVar23.~r3);
  mVar14.start = mVar23.~r2.len;
  pbVar6 = pbStack_120;
  pbVar7 = pbStack_118;
  pbVar9 = pbStack_128;
  if (bStack_110 != 0) {
    s_01.len = (int)pbStack_128;
    s_01.str = pbStack_120;
    mVar24 = time_tzsetOffset(s_01);
    mVar14.isDST = SUB81(in_R8,0);
    mVar14.start = CONCAT71((int7)((ulong)mVar14.start >> 8),mVar24.ok);
    mVar14.name.len = mVar24.rest.str;
    pbVar6 = local_130;
    pbVar7 = pbStack_120;
    pbVar9 = mVar14.name.len;
    if ((char)pbStack_118 != '\0') {
      s_02.str = (uint8 *)-(long)local_130;
      if ((pbStack_120 == (byte *)0x0) || (*pbStack_128 == 0x2c)) {
        mVar14.name.str = (uint8 *)0x7fffffffffffffff;
        mVar14.offset = (int)pbStack_128;
        mVar14.end = uVar10;
        mVar14.ok = (bool)uVar12;
        return mVar14;
      }
      s_02.len = (int)mVar14.name.len;
      mVar23 = time_tzsetName(s_02);
      s_03.str = (uint8 *)(ulong)bStack_110;
      pbVar6 = pbStack_118;
      local_10 = local_130;
      local_98 = pbStack_128;
      puVar11 = mVar23.~r2.len;
      if (bStack_110 != 0) {
        if ((pbStack_118 == (byte *)0x0) || (*pbStack_120 == 0x2c)) {
          in_R8 = s_02.str + 0xe10;
        }
        else {
          s_03.len = (int)local_130;
          time_tzsetOffset(s_03);
          s_03.str = (uint8 *)((ulong)pbStack_118 & 0xff);
          in_R8 = (uint8 *)-(long)local_130;
          pbVar6 = pbStack_120;
          pbStack_120 = pbStack_128;
        }
        puVar11 = s_02.str;
        if ((char)s_03.str != '\0') {
          if (pbVar6 == (byte *)0x0) {
            pbVar6 = &DAT_0000000f;
            pbStack_120 = &DAT_00298560;
          }
          if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          bVar2 = *pbStack_120;
          mVar15.name.str = (ulong)bVar2;
          if ((bVar2 != 0x2c) && (bVar2 != 0x3b)) {
            mVar15.name.len = (int)local_10;
            mVar15.start = (int64)s_02.str;
            mVar15.offset = (int)pbVar6;
            mVar15.isDST = SUB81(in_R8,0);
            mVar15.end = (int64)local_98;
            mVar15.ok = (bool)uVar12;
            return mVar15;
          }
          local_90 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_78 = 0;
          uStack_70 = 0;
          local_68 = 0;
          local_60 = 0;
          uStack_58 = 0;
          local_50 = 0;
          uStack_48 = 0;
          s_04.str = pbStack_120 + (-(long)(pbVar6 + -1) >> 0x3f & 1);
          s_04.len = (int)local_10;
          local_a0 = in_R8;
          mVar25 = time_tzsetRule(s_04);
          mVar20.start = mVar25.~r1.mon;
          s_05.len = mVar25.~r1.day;
          if (((local_f8 != '\0') && (local_100 != 0)) && (*local_108 == ',')) {
            s_05.str = (uint8 *)(local_108 + (-(local_100 + -1) >> 0x3f & 1));
            mVar25 = time_tzsetRule(s_05);
            off = mVar25.~r2.len;
            puVar11 = mVar25.~r2.str;
            mVar14.start = mVar25.~r1.time;
            mVar19.start = mVar25.~r1.mon;
            mVar19.name.len = mVar25.~r1.day;
            if ((local_f8 == '\0') || (0 < local_100)) {
              mVar19.name.str = (uint8 *)local_100;
              mVar19.offset = (int)local_130;
              mVar19.ok = (undefined1)mVar25.~r2.len;
              mVar19.end = (long)mVar25._32_9_;
              mVar19.isDST = (bool)(char)((unkuint9)mVar25._32_9_ >> 0x40);
              return mVar19;
            }
            mVar13 = time_absDate(sec_spill,mVar25.~r1.day._0_1_);
            r.week = mVar13.yday;
            r.kind = mVar13.month;
            r.day = (int)pbStack_118;
            r.time = (int)puVar11;
            r.mon = mVar14.start;
            time_tzruleTime((int)local_130,r,off);
            local_a8 = local_108;
            r_00.day = (int)local_130;
            r_00.kind = r.kind;
            r_00.week = r.week;
            r_00.time = (int)puVar11;
            r_00.mon = mVar14.start;
            time_tzruleTime((int)local_108,r_00,off);
            pbVar6 = local_98;
            pcVar3 = local_108;
            pcVar4 = local_a8;
            if ((long)local_108 < (long)local_a8) {
              pbVar6 = pbStack_128;
              pbStack_128 = local_98;
              pcVar3 = local_a8;
              pcVar4 = local_108;
            }
            lVar1 = (long)pbStack_118 * 0x15180 +
                    sec_spill +
                    ((SUB168(SEXT816(-0x3dd1baf98d76b549) * SEXT816(sec_spill),8) + sec_spill >>
                     0x10) - (sec_spill >> 0x3f)) * -0x15180;
                    /* Unresolved local var: uint64 y@[???]
                       Unresolved local var: uint64 n@[???]
                       Unresolved local var: uint64 d@[???] */
            uVar8 = (ulong)(local_130 + 0x440d116ebf) / 400;
            uVar5 = (ulong)(local_130 +
                            ((ulong)(local_130 + uVar8 * -400 + 0x440d116ebf) / 100) * -100 +
                            uVar8 * -400 + 0x440d116ebf) >> 2;
            mVar16.name.len = uVar5 * 0x5b5;
            mVar16.isDST = SUB81(pbVar6,0);
            if ((long)pcVar4 <= lVar1) {
              if ((long)pcVar3 <= lVar1) {
                mVar16.name.str = (ulong)((long)local_108 < (long)local_a8);
                mVar16.start = (int64)pbStack_128;
                mVar16.offset = 0x80000001e7076a80;
                mVar16.end = uVar5;
                mVar16.ok = true;
                return mVar16;
              }
              mVar17.name.len = mVar16.name.len;
              mVar17.name.str = (uint8 *)local_108;
              mVar17.start = (int64)pbStack_128;
              mVar17.offset = (int)local_a8;
              mVar17.isDST = (bool)mVar16.isDST;
              mVar17.end = uVar5;
              mVar17.ok = true;
              return mVar17;
            }
            mVar18.name.str = (ulong)((long)local_108 < (long)local_a8);
            mVar18.name.len =
                 ((long)(local_130 +
                        ((ulong)(local_130 + uVar8 * -400 + 0x440d116ebf) / 100) * -100 +
                        uVar8 * -400) * 0x16d + uVar5 + 0x6106a1dae653 +
                 ((ulong)(local_130 + uVar8 * -400 + 0x440d116ebf) / 100) * 0x8eac + uVar8 * 0x23ab1
                 ) * 0x15180 + -0x7ffffffe1ad9c900;
            mVar18.start = (int64)pbStack_128;
            mVar18.offset = (int)pcVar4;
            mVar18.isDST = (bool)mVar16.isDST;
            mVar18.end = uVar5;
            mVar18.ok = true;
            return mVar18;
          }
          mVar20.name.len = s_05.len;
          mVar20.name.str = (uint8 *)local_100;
          mVar20.offset = (int)local_108;
          mVar20.ok = (undefined1)mVar25.~r2.len;
          mVar20.end = (long)mVar25._32_9_;
          mVar20.isDST = (bool)(char)((unkuint9)mVar25._32_9_ >> 0x40);
          return mVar20;
        }
      }
      mVar21.name.len = (int)local_10;
      mVar21.name.str = s_03.str;
      mVar21.start = (int64)puVar11;
      mVar21.offset = (int)pbVar6;
      mVar21.isDST = SUB81(in_R8,0);
      mVar21.end = (int64)local_98;
      mVar21.ok = (bool)uVar12;
      return mVar21;
    }
  }
  mVar22.name.len = (int)pbVar9;
  mVar22.name.str = pbVar6;
  mVar22.start = mVar14.start;
  mVar22.offset = (int)pbVar7;
  mVar22.isDST = (bool)mVar14.isDST;
  mVar22.end = uVar10;
  mVar22.ok = (bool)uVar12;
  return mVar22;
}

