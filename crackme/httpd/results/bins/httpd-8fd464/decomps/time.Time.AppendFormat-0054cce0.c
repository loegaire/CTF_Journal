
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void time.Time.AppendFormat(time.Time t, []uint8 b, string layout,
   []uint8 ~r2) */

__uint8 time_Time_AppendFormat(time_Time t,__uint8 b,string layout)

{
  uint8 uVar1;
  time_Location *ptVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  uint8 *puVar6;
  time_Location *ptVar7;
  time_Location *ptVar8;
  time_Location *ptVar9;
  long lVar10;
  time_Location *ptVar11;
  time_Location *ptVar12;
  ulong uVar13;
  time_Location *ptVar14;
  undefined1 *puVar15;
  time_Location *ptVar16;
  time_Location *ptVar17;
  long in_FS_OFFSET;
  string layout_00;
  string a1;
  string a1_00;
  string a1_01;
  string a1_02;
  string a0;
  string a0_00;
  string a0_01;
  string a0_02;
  runtime_slice old;
  runtime_slice old_00;
  runtime_slice old_01;
  runtime_slice old_02;
  runtime_slice old_03;
  runtime_slice old_04;
  runtime_slice old_05;
  runtime_slice old_06;
  runtime_slice old_07;
  runtime_slice old_08;
  runtime_slice old_09;
  runtime_slice old_10;
  runtime_slice old_11;
  runtime_slice old_12;
  runtime_slice old_13;
  runtime_slice old_14;
  runtime_slice old_15;
  runtime_slice old_16;
  runtime_slice old_17;
  runtime_slice old_18;
  runtime_slice old_19;
  runtime_slice old_20;
  time_Time t_00;
  __uint8 b_00;
  __uint8 b_01;
  __uint8 b_02;
  __uint8 b_03;
  __uint8 b_04;
  __uint8 b_05;
  __uint8 b_06;
  __uint8 b_07;
  __uint8 b_08;
  __uint8 b_09;
  __uint8 b_10;
  __uint8 b_11;
  __uint8 b_12;
  __uint8 b_13;
  __uint8 b_14;
  __uint8 b_15;
  __uint8 b_16;
  __uint8 b_17;
  __uint8 b_18;
  __uint8 b_19;
  __uint8 _Var19;
  string a2;
  string a2_00;
  string a2_01;
  string a2_02;
  time_Time t_spill;
  __uint8 b_spill;
  string layout_spill;
  time_Location *local_2e8;
  time_Location *local_2e0;
  time_Location *local_2d8;
  uint8 *local_2d0;
  time_Location *local_2c8;
  time_Location *local_2c0;
  time_Location *local_2b8;
  time_Location *local_278;
  undefined1 *local_270;
  ulong local_268;
  ulong local_260;
  undefined1 *local_258;
  ulong local_250;
  time_Location *local_248;
  time_Location *local_240;
  long local_238;
  time_Location *local_230;
  undefined1 *local_228;
  time_Location *local_220;
  uint8 *local_218;
  time_Location *local_210;
  time_Location *local_208;
  time_Location *local_200;
  time_Location *local_1f8;
  time_Location *local_1f0;
  time_Location *local_1e8;
  time_Location *local_1e0;
  time_Location *local_1d8;
  uint8 *local_1d0;
  time_Location *local_1c8;
  time_Location *local_1c0;
  time_Location *local_1b8;
  time_Location *local_1b0;
  time_Location *local_1a8;
  time_Location *local_1a0;
  time_Location *local_198;
  time_Location *local_190;
  time_Location *local_188;
  time_Location *local_180;
  time_Location *local_178;
  time_Location *local_170;
  time_Location *local_168;
  time_Location *local_160;
  time_Location *local_158;
  char acStack_14a [10];
  undefined1 local_140 [24];
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined1 local_118 [24];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  time_Location *local_70;
  uint8 *local_68;
  time_Location *local_60;
  time_Location *local_58;
  time_Location *local_50;
  uint8 *local_48;
  time_Location *local_40;
  time_Location *local_38;
  uint8 *local_30;
  uint8 *local_28;
  __uint8 _Var18;
  
  t_00.ext = t.ext;
                    /* Unresolved local var: int offset@[???]
                       Unresolved local var: uint64 abs@[???]
                       Unresolved local var: int year@[???]
                       Unresolved local var: time.Month month@[???]
                       Unresolved local var: int day@[???]
                       Unresolved local var: int yday@[???]
                       Unresolved local var: int hour@[???]
                       Unresolved local var: int min@[???]
                       Unresolved local var: int sec@[???]
                       Unresolved local var: string name@[???] */
  while (&local_278 <= *(time_Location ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  local_2e8 = t_spill.loc;
  t_00.wall = t_spill.wall;
  t_00.loc = (time_Location *)t_spill.ext;
  time_Time_locabs(t_00);
  local_218 = local_2d0;
  local_1c8 = local_2c8;
                    /* Unresolved local var: int std@[???]
                       Unresolved local var: string prefix@[???]
                       Unresolved local var: string suffix@[???]
                       Unresolved local var: uint8 * ~R0.ptr@[???]
                       Unresolved local var: int ~R0.cap@[???]
                       Unresolved local var: int ~R0.len@[???]
                       Unresolved local var: int zone@[???] */
  local_210 = local_2d8;
  local_38 = local_2e0;
  local_158 = (time_Location *)b_spill.cap;
  local_160 = (time_Location *)b_spill.len;
  local_28 = b_spill.array;
  ptVar14 = (time_Location *)0xffffffffffffffff;
  local_1f0 = (time_Location *)0xffffffffffffffff;
  local_200 = (time_Location *)0x0;
  ptVar11 = (time_Location *)0x0;
  local_278 = (time_Location *)0x0;
  local_1f8 = (time_Location *)0x0;
  local_230 = (time_Location *)0x0;
  ptVar9 = local_160;
  ptVar7 = local_158;
  puVar6 = local_28;
LAB_0054ce40:
  do {
    local_28 = puVar6;
    local_158 = ptVar7;
    local_160 = ptVar9;
    ptVar9 = local_2e0;
    puVar6 = local_218;
    ptVar7 = local_1c8;
    ptVar17 = local_160;
    if ((time_Location *)layout_spill.len == (time_Location *)0x0) {
LAB_0054eb63:
      _Var19.len = (int)ptVar17;
      _Var19.array = puVar6;
      _Var19.cap = (int)ptVar7;
      return _Var19;
    }
    layout_00.len = (int)local_38;
    layout_00.str = local_218;
    local_1e8 = ptVar11;
    time_nextStdChunk(layout_00);
    local_48 = local_2d0;
    local_248 = local_2c8;
    local_240 = local_2d8;
    ptVar17 = local_160;
    if (local_2e0 != (time_Location *)0x0) {
      ptVar7 = (time_Location *)((long)&(local_2e0->name).str + (long)&(local_160->name).str);
      local_168 = ptVar7;
      if (local_158 < ptVar7) {
        local_220 = local_2e0;
        local_40 = local_2e8;
        local_2e0 = local_158;
        old.len = (int)local_28;
        old.array = ptVar9;
        old.cap = (int)local_160;
        runtime_growslice((runtime__type *)&DAT_00225720,old,(int)local_2e8);
        ptVar9 = local_220;
        local_158 = local_2c0;
        local_28 = local_2d0;
        local_2d8 = ptVar7;
      }
      runtime_memmove();
      ptVar17 = local_168;
      local_2e8 = ptVar9;
    }
    puVar6 = local_48;
    ptVar7 = local_248;
    if (local_240 == (time_Location *)0x0) goto LAB_0054eb63;
    local_1d8 = local_158;
    local_30 = local_28;
    ptVar8 = ptVar14;
    ptVar16 = local_200;
    ptVar11 = local_1e8;
    ptVar9 = local_278;
    local_1e0 = ptVar17;
    if (((long)ptVar14 < 0) && (((uint)local_240 >> 8 & 1) != 0)) {
      time_absDate((uint64)local_1c8,SUB81(ptVar17,0));
      ptVar8 = local_2e8;
      ptVar16 = local_2e0;
      ptVar11 = local_2d8;
      ptVar9 = (time_Location *)(local_2d0 + 1);
    }
    ptVar2 = local_1d8;
    ptVar17 = local_1e0;
    ptVar12 = local_1f0;
    if (((long)local_1f0 < 0) && (((uint)local_240 >> 9 & 1) != 0)) {
                    /* Unresolved local var: int y@[???] */
      uVar4 = ((ulong)local_1c8 % 0x15180) % 0xe10;
      local_1f8 = (time_Location *)
                  ((long)(uVar4 + SUB168(SEXT816(-0x7777777777777777) * SEXT816((long)uVar4),8)) >>
                  5);
      local_230 = (time_Location *)(uVar4 + (long)local_1f8 * -0x3c);
      ptVar12 = (time_Location *)(((ulong)local_1c8 % 0x15180) / 0xe10);
    }
    uVar4 = (ulong)local_240 & 0xffff;
    local_160 = ptVar11;
    ptVar7 = local_1d8;
    layout_spill.len = (int)local_248;
    puVar6 = local_30;
    ptVar14 = ptVar8;
    local_1f0 = ptVar12;
    local_158 = ptVar8;
    local_200 = ptVar16;
    local_278 = ptVar9;
    if (uVar4 < 0x10a) {
      if (uVar4 < 0x104) {
        if (uVar4 < 0x24) {
          lVar10 = (long)local_218 >> 0x3f;
          if (uVar4 == 0x17) {
            if (local_210 == (time_Location *)0x0) {
              local_168 = (time_Location *)
                          ((long)(local_218 +
                                 SUB168(SEXT816(-0x7777777777777777) * SEXT816((long)local_218),8))
                          >> 5);
              ptVar9 = (time_Location *)((long)local_168 - lVar10);
              if ((long)ptVar9 < 0) {
                local_170 = (time_Location *)lVar10;
                if (local_1d8 < (time_Location *)((long)&(local_1e0->name).str + 1)) {
                  old_06.len = (int)local_248;
                  old_06.array = local_1e0;
                  old_06.cap = (int)local_30;
                  runtime_growslice((runtime__type *)&DAT_00225720,old_06,(int)local_1d8);
                  ptVar7 = local_2c0;
                  puVar6 = local_2d0;
                }
                puVar6[(long)local_1e0] = 0x2d;
                ptVar9 = local_168;
                local_168 = (time_Location *)((long)local_170 - (long)local_168);
              }
              else {
                if (local_1d8 < (time_Location *)((long)&(local_1e0->name).str + 1)) {
                  old_07.len = (int)local_248;
                  old_07.array = local_1e0;
                  old_07.cap = (int)local_30;
                  runtime_growslice((runtime__type *)&DAT_00225720,old_07,(int)local_1d8);
                  ptVar7 = local_2c0;
                  puVar6 = local_2d0;
                }
                puVar6[(long)local_1e0] = 0x2b;
                local_168 = ptVar9;
              }
              b_03.array = (long)local_168 * -0x7777777777777777;
              local_170 = (time_Location *)
                          (((long)((long)&(local_168->name).str +
                                  SUB168(SEXT816(-0x7777777777777777) * SEXT816((long)local_168),8))
                           >> 5) - ((long)local_168 >> 0x3f));
              b_03.len = (int)ptVar9;
              b_03.cap = (int)local_168;
              _Var18 = time_appendInt(b_03,(int)puVar6,(int)ptVar7);
              b_04.array = _Var18.array;
              local_2e8 = local_2c0;
              b_04.cap = (long)local_170 * 0x3c;
              local_2e0 = (time_Location *)((long)local_168 + (long)local_170 * -0x3c);
              local_2d8 = (time_Location *)0x2;
              b_04.len = (int)local_2c0;
              time_appendInt(b_04,(int)puVar6,(int)ptVar7);
              layout_spill.len = (int)local_248;
              ptVar14 = local_158;
              ptVar11 = local_160;
              ptVar9 = local_2c8;
              ptVar7 = local_2c0;
              puVar6 = local_2d0;
            }
            else {
              ptVar9 = (time_Location *)
                       ((long)&(local_210->name).str + (long)&(local_1e0->name).str);
              local_168 = ptVar9;
              if (local_1d8 < ptVar9) {
                old_05.len = (int)local_248;
                old_05.array = local_1e0;
                old_05.cap = (int)local_30;
                runtime_growslice((runtime__type *)&DAT_00225720,old_05,(int)local_1d8);
                ptVar7 = local_2c0;
                puVar6 = local_2d0;
                local_2e0 = ptVar2;
                local_2d8 = ptVar9;
              }
              local_2e8 = local_210;
              local_170 = ptVar7;
              local_28 = puVar6;
              runtime_memmove();
              layout_spill.len = (int)local_248;
              ptVar14 = local_158;
              ptVar11 = local_160;
              ptVar9 = local_168;
              ptVar7 = local_170;
              puVar6 = local_28;
            }
          }
          else {
            if (uVar4 - 0x18 < 10) {
              if ((local_218 != (uint8 *)0x0) ||
                 ((((local_240 != (time_Location *)&DAT_00000018 &&
                    (local_240 != (time_Location *)0x1b)) &&
                   (local_240 != (time_Location *)&DAT_00000019)) &&
                  ((local_240 != (time_Location *)&DAT_0000001a &&
                   (local_240 != (time_Location *)&DAT_0000001c)))))) {
                local_168 = (time_Location *)
                            ((long)(local_218 +
                                   SUB168(SEXT816(-0x7777777777777777) * SEXT816((long)local_218),8)
                                   ) >> 5);
                ptVar9 = (time_Location *)((long)local_168 - lVar10);
                if ((long)ptVar9 < 0) {
                  local_2e8 = local_1d8;
                  local_170 = (time_Location *)lVar10;
                  if (local_1d8 < (time_Location *)((long)&(local_1e0->name).str + 1)) {
                    old_01.len = (int)local_248;
                    old_01.array = local_1e0;
                    old_01.cap = (int)local_30;
                    runtime_growslice((runtime__type *)&DAT_00225720,old_01,(int)local_1d8);
                    local_2e8 = local_2c0;
                    puVar6 = local_2d0;
                  }
                  puVar6[(long)local_1e0] = 0x2d;
                  local_1d0 = (uint8 *)-(long)local_218;
                  ptVar9 = local_168;
                  local_168 = (time_Location *)((long)local_170 - (long)local_168);
                }
                else {
                  local_2e8 = local_1d8;
                  if (local_1d8 < (time_Location *)((long)&(local_1e0->name).str + 1)) {
                    old_02.len = (int)local_248;
                    old_02.array = local_1e0;
                    old_02.cap = (int)local_30;
                    runtime_growslice((runtime__type *)&DAT_00225720,old_02,(int)local_1d8);
                    local_2e8 = local_2c0;
                    puVar6 = local_2d0;
                  }
                  puVar6[(long)local_1e0] = 0x2b;
                  local_1d0 = local_218;
                  local_168 = ptVar9;
                }
                b_00.array = (long)local_168 * -0x7777777777777777;
                local_2e0 = (time_Location *)
                            (((long)((long)&(local_168->name).str +
                                    SUB168(SEXT816(-0x7777777777777777) * SEXT816((long)local_168),8
                                          )) >> 5) - ((long)local_168 >> 0x3f));
                local_2d8 = (time_Location *)0x2;
                b_00.len = (int)ptVar9;
                b_00.cap = (int)local_248;
                local_170 = local_2e0;
                time_appendInt(b_00,(int)puVar6,(int)local_2e8);
                old_03.len = (int)local_2c8;
                old_03.array = local_2d0;
                if (((local_240 == (time_Location *)0x1b) ||
                    (local_240 == (time_Location *)&DAT_00000020)) ||
                   ((local_240 == (time_Location *)&DAT_0000001c ||
                    (ptVar9 = local_2c8, local_240 == (time_Location *)&DAT_00000021)))) {
                  ptVar9 = (time_Location *)((long)&(local_2c8->name).str + 1);
                  ptVar7 = local_2c8;
                  if (local_2c0 < ptVar9) {
                    local_178 = local_2c8;
                    local_2e8 = local_2c8;
                    local_2e0 = local_2c0;
                    old_03.cap = (int)ptVar9;
                    runtime_growslice((runtime__type *)&DAT_00225720,old_03,(int)local_240);
                    ptVar7 = local_178;
                    local_2d8 = ptVar9;
                  }
                  local_2d0[(long)ptVar7] = 0x3a;
                  ptVar9 = (time_Location *)((long)&(local_2c8->name).str + 1);
                }
                if ((local_240 != (time_Location *)&DAT_0000001f) &&
                   (local_240 != (time_Location *)&DAT_0000001a)) {
                  local_2e8 = local_2c0;
                  b_01.array = (long)local_170 * 0x3c;
                  b_01.cap = (time_Location *)((long)local_168 + (long)local_170 * -0x3c);
                  local_2d8 = (time_Location *)0x2;
                  b_01.len = (int)local_2d0;
                  time_appendInt(b_01,(int)ptVar9,(int)local_240);
                  ptVar9 = local_2c8;
                  local_2e0 = b_01.cap;
                }
                ptVar17 = local_240;
                if ((local_240 != (time_Location *)&DAT_00000019) &&
                   (local_240 != (time_Location *)&DAT_0000001e)) {
                  if ((local_240 != (time_Location *)&DAT_00000021) &&
                     (layout_spill.len = (int)local_248, ptVar14 = local_158, ptVar11 = local_160,
                     ptVar7 = local_2c0, puVar6 = local_2d0,
                     local_240 != (time_Location *)&DAT_0000001c)) goto LAB_0054ce40;
                  ptVar7 = (time_Location *)((long)&(ptVar9->name).str + 1);
                  if (local_2c0 < ptVar7) {
                    old_04.len = (int)ptVar7;
                    old_04.array = local_2d0;
                    old_04.cap = (int)ptVar9;
                    local_180 = ptVar9;
                    runtime_growslice((runtime__type *)&DAT_00225720,old_04,(int)local_240);
                    ptVar9 = local_180;
                  }
                  local_2d0[(long)ptVar9] = 0x3a;
                }
                local_2e8 = local_2c0;
                b_02.array = (long)local_1d0 * -0x7777777777777777;
                lVar10 = ((long)(local_1d0 +
                                SUB168(SEXT816(-0x7777777777777777) * SEXT816((long)local_1d0),8))
                         >> 5) - ((long)local_1d0 >> 0x3f);
                b_02.cap = lVar10 * 0x3c;
                b_02.len = (time_Location *)(local_1d0 + lVar10 * -0x3c);
                local_2d8 = (time_Location *)0x2;
                time_appendInt(b_02,(int)ptVar9,(int)ptVar17);
                layout_spill.len = (int)local_248;
                ptVar14 = local_158;
                ptVar11 = local_160;
                local_2e0 = b_02.len;
                ptVar9 = local_2c8;
                ptVar7 = local_2c0;
                puVar6 = local_2d0;
                goto LAB_0054ce40;
              }
              ptVar14 = (time_Location *)((long)&(local_1e0->name).str + 1);
              ptVar9 = ptVar14;
              if (local_1d8 < ptVar14) {
                old_00.len = (int)local_248;
                old_00.array = local_1e0;
                old_00.cap = (int)local_30;
                runtime_growslice((runtime__type *)&DAT_00225720,old_00,(int)local_1d8);
                ptVar9 = (time_Location *)((long)&(local_2c8->name).str + 1);
                ptVar7 = local_2c0;
                puVar6 = local_2d0;
                local_2e8 = ptVar17;
                local_2e0 = ptVar2;
                local_2d8 = ptVar14;
              }
              puVar6[(long)local_1e0] = 0x5a;
              layout_spill.len = (int)local_248;
              ptVar14 = local_158;
              ptVar11 = local_160;
              goto LAB_0054ce40;
            }
            ptVar9 = local_1e0;
            ptVar7 = local_1d8;
            puVar6 = local_30;
            if (0x21 < uVar4) {
                    /* Unresolved local var: uint u@[???]
                       Unresolved local var: uint8[9] buf@[???]
                       Unresolved local var: int start@[???] */
              acStack_14a[1] = 0;
              acStack_14a[2] = '\0';
              acStack_14a[3] = '\0';
              acStack_14a[4] = '\0';
              acStack_14a[5] = '\0';
              acStack_14a[6] = '\0';
              acStack_14a[7] = '\0';
              acStack_14a[8] = '\0';
              acStack_14a[9] = 0;
              uVar13 = (long)(int)((uint)t_spill.wall & 0x3fffffff);
              for (local_238 = 9; 0 < local_238; local_238 = local_238 + -1) {
                acStack_14a[local_238] = (char)uVar13 + (char)(uVar13 / 10) * -10 + '0';
                uVar13 = uVar13 / 10;
              }
              ptVar17 = (time_Location *)((long)local_240 >> 0x10);
              if (9 < (long)ptVar17) {
                ptVar17 = (time_Location *)&DAT_00000009;
              }
              ptVar9 = ptVar17;
              local_1c0 = ptVar11;
              if (uVar4 == 0x23) {
                do {
                  ptVar17 = ptVar9;
                  if ((long)ptVar17 < 1) break;
                  ptVar9 = (time_Location *)((long)&ptVar17[-1].cacheZone + 7);
                  if ((time_Location *)&DAT_00000008 < ptVar9) {
                    /* WARNING: Subroutine does not return */
                    runtime_panicIndex();
                  }
                } while (acStack_14a[(long)ptVar17] == '0');
                ptVar9 = local_1e0;
                ptVar7 = local_1d8;
                puVar6 = local_30;
                if (ptVar17 == (time_Location *)0x0) goto LAB_0054ce40;
              }
              ptVar9 = (time_Location *)((long)&(local_1e0->name).str + 1);
              ptVar11 = local_1d8;
              puVar6 = local_30;
              ptVar14 = ptVar9;
              local_208 = ptVar17;
              if (local_1d8 < ptVar9) {
                old_19.len = (int)local_248;
                old_19.array = local_1e0;
                old_19.cap = (int)local_30;
                runtime_growslice((runtime__type *)&DAT_00225720,old_19,(int)local_1d8);
                ptVar14 = (time_Location *)((long)&(local_2c8->name).str + 1);
                ptVar11 = local_2c0;
                puVar6 = local_2d0;
                local_2e0 = ptVar2;
                local_2d8 = ptVar9;
              }
              puVar6[(long)local_1e0] = 0x2e;
              if ((time_Location *)&DAT_00000009 < local_208) {
                    /* WARNING: Subroutine does not return */
                runtime_panicSliceAlen();
              }
              ptVar9 = (time_Location *)((long)&(local_208->name).str + (long)&(ptVar14->name).str);
              ptVar7 = ptVar11;
              if (ptVar11 < ptVar9) {
                old_20.len = (int)local_248;
                old_20.array = ptVar9;
                old_20.cap = (int)puVar6;
                local_168 = ptVar14;
                runtime_growslice((runtime__type *)&DAT_00225720,old_20,(int)ptVar11);
                ptVar7 = local_2c0;
                puVar6 = local_2d0;
                local_2e0 = ptVar11;
                local_2d8 = ptVar9;
              }
              local_2e8 = local_208;
              local_68 = puVar6;
              runtime_memmove();
              layout_spill.len = (int)local_248;
              ptVar14 = local_158;
              ptVar11 = local_160;
              puVar6 = local_68;
            }
          }
        }
        else {
                    /* Unresolved local var: string m@[???]
                       Unresolved local var: uint8 * ~R0.ptr@[???]
                       Unresolved local var: int ~R0.len@[???] */
          if (uVar4 == 0x101) {
                    /* Unresolved local var: []uint8 buf@[???]
                       Unresolved local var: int n@[???] */
            puVar15 = (undefined1 *)((long)&ptVar16[-1].cacheZone + 7);
            if (puVar15 < &DAT_0000000c) {
              if ((ulong)time_longMonthNames.len <= puVar15) {
                    /* WARNING: Subroutine does not return */
                runtime_panicIndex();
              }
              ptVar9 = (time_Location *)time_longMonthNames.array[(long)puVar15].str;
              local_2e8 = (time_Location *)time_longMonthNames.array[(long)puVar15].len;
            }
            else {
              local_118._20_4_ = 0;
              uStack_100 = 0;
              uStack_fc = 0;
              uStack_f8 = 0;
                    /* Unresolved local var: int w@[???] */
              if (ptVar16 == (time_Location *)0x0) {
                uStack_f8 = 0x3000000000000000;
                    /* Unresolved local var: []uint8 buf@[???]
                       Unresolved local var: int n@[???]
                       Unresolved local var: int w@[???] */
                uVar4 = 0x13;
              }
              else {
                uVar4 = 0x14;
                while (ptVar16 != (time_Location *)0x0) {
                  local_268 = uVar4 - 1;
                  if (0x13 < local_268) {
                    /* WARNING: Subroutine does not return */
                    runtime_panicIndex();
                  }
                  local_118[uVar4 + 0x13] =
                       (char)ptVar16 + (char)(time_Location *)((ulong)ptVar16 / 10) * -10 + '0';
                  ptVar16 = (time_Location *)((ulong)ptVar16 / 10);
                  uVar4 = local_268;
                }
              }
              if (0x14 < uVar4) {
                    /* WARNING: Subroutine does not return */
                runtime_panicSliceB();
              }
              a2_02.len = uVar4 & (long)(uVar4 - 0x14) >> 0x3f;
              local_2e0 = (time_Location *)(local_118 + a2_02.len + 0x14);
              local_2d8 = (time_Location *)-(uVar4 - 0x14);
              local_2d0 = (uint8 *)((long)&go_string__ + 2);
              local_2c8 = (time_Location *)0x1;
              a1_02.len = (int)local_1d8;
              a1_02.str = local_30;
              a0_02.len = 0x287742;
              a0_02.str = (uint8 *)local_1e0;
              a2_02.str = (uint8 *)ptVar12;
              runtime_concatstring3((runtime_tmpBuf *)&DAT_0028b8ca,a0_02,a1_02,a2_02);
              ptVar9 = local_2c0;
              local_2e8 = local_2b8;
            }
            ptVar14 = local_1d8;
            ptVar7 = (time_Location *)((long)&(local_2e8->name).str + (long)&(local_1e0->name).str);
            ptVar11 = local_1d8;
            puVar6 = local_30;
            local_168 = ptVar7;
            if (local_1d8 < ptVar7) {
              old_18.len = (int)local_248;
              old_18.array = local_1e0;
              old_18.cap = (int)local_30;
              local_58 = ptVar9;
              runtime_growslice((runtime__type *)&DAT_00225720,old_18,(int)local_1d8);
              ptVar11 = local_2c0;
              puVar6 = local_2d0;
              local_2e0 = ptVar14;
              local_2d8 = ptVar7;
            }
            local_170 = ptVar11;
            local_28 = puVar6;
            runtime_memmove();
            layout_spill.len = (int)local_248;
            ptVar14 = local_158;
            ptVar11 = local_160;
            ptVar9 = local_168;
            ptVar7 = local_170;
            puVar6 = local_28;
          }
          else if (uVar4 == 0x102) {
            puVar15 = (undefined1 *)((long)&ptVar16[-1].cacheZone + 7);
            if (puVar15 < (undefined1 *)0xc) {
              if ((ulong)time_longMonthNames.len <= puVar15) {
                    /* WARNING: Subroutine does not return */
                runtime_panicIndex();
              }
              ptVar14 = (time_Location *)time_longMonthNames.array[(long)puVar15].str;
              ptVar9 = (time_Location *)time_longMonthNames.array[(long)puVar15].len;
            }
            else {
              local_140._0_4_ = 0;
              local_140._4_4_ = 0;
              local_140._8_4_ = 0;
              local_140._12_8_ = 0;
              if (ptVar16 == (time_Location *)0x0) {
                local_140._12_8_ = 0x3000000000000000;
                uVar4 = 0x13;
              }
              else {
                uVar4 = 0x14;
                while (ptVar16 != (time_Location *)0x0) {
                  local_260 = uVar4 - 1;
                  if (0x13 < local_260) {
                    /* WARNING: Subroutine does not return */
                    runtime_panicIndex();
                  }
                  acStack_14a[uVar4 + 9] =
                       (char)ptVar16 + (char)(time_Location *)((ulong)ptVar16 / 10) * -10 + '0';
                  ptVar16 = (time_Location *)((ulong)ptVar16 / 10);
                  uVar4 = local_260;
                }
              }
              if (0x14 < uVar4) {
                    /* WARNING: Subroutine does not return */
                runtime_panicSliceB();
              }
              local_2e8 = (time_Location *)&DAT_00000008;
              a2_01.len = uVar4 & (long)(uVar4 - 0x14) >> 0x3f;
              local_2e0 = (time_Location *)(local_140 + a2_01.len);
              local_2d8 = (time_Location *)-(uVar4 - 0x14);
              local_2d0 = (uint8 *)((long)&go_string__ + 2);
              local_2c8 = (time_Location *)0x1;
              a1_01.len = (int)local_1d8;
              a1_01.str = local_30;
              a0_01.len = 0x287742;
              a0_01.str = (uint8 *)local_1e0;
              a2_01.str = (uint8 *)ptVar12;
              runtime_concatstring3((runtime_tmpBuf *)&DAT_0028b8ca,a0_01,a1_01,a2_01);
              ptVar14 = local_2c0;
              ptVar9 = local_2b8;
            }
            ptVar17 = local_1d8;
            ptVar11 = local_1e0;
            if (ptVar9 < (time_Location *)0x3) {
                    /* WARNING: Subroutine does not return */
              runtime_panicSliceAlen();
            }
            ptVar8 = (time_Location *)((long)&(local_1e0->name).str + 3);
            ptVar7 = local_1d8;
            puVar6 = local_30;
            ptVar9 = ptVar8;
            if (local_1d8 < ptVar8) {
              old_17.len = (int)local_248;
              old_17.array = local_1e0;
              old_17.cap = (int)local_30;
              local_1b8 = ptVar8;
              local_50 = ptVar14;
              runtime_growslice((runtime__type *)&DAT_00225720,old_17,(int)local_1d8);
              ptVar7 = local_2c0;
              puVar6 = local_2d0;
              ptVar14 = local_50;
              ptVar9 = local_1b8;
              local_2e8 = ptVar11;
              local_2e0 = ptVar17;
              local_2d8 = ptVar8;
            }
            uVar1 = *(uint8 *)((long)&(ptVar14->name).str + 2);
            *(undefined2 *)(puVar6 + (long)local_1e0) = *(undefined2 *)&(ptVar14->name).str;
            (puVar6 + 2)[(long)local_1e0] = uVar1;
            layout_spill.len = (int)local_248;
            ptVar14 = local_158;
            ptVar11 = local_160;
          }
          else {
            ptVar9 = local_1e0;
            ptVar7 = local_1d8;
            puVar6 = local_30;
            if (uVar4 == 0x103) {
              local_2d8 = (time_Location *)0x0;
              b_05.len = (int)local_1e0;
              b_05.array = (uint8 *)ptVar11;
              b_05.cap = (int)local_248;
              time_appendInt(b_05,(int)local_30,(int)local_1d8);
              layout_spill.len = (int)local_248;
              ptVar14 = local_158;
              ptVar11 = local_160;
              local_2e8 = ptVar2;
              local_2e0 = ptVar16;
              ptVar9 = local_2c8;
              ptVar7 = local_2c0;
              puVar6 = local_2d0;
            }
          }
        }
      }
      else if (uVar4 < 0x107) {
        if (uVar4 == 0x104) {
          local_2d8 = (time_Location *)0x2;
          b_06.len = (int)local_1e0;
          b_06.array = (uint8 *)ptVar11;
          b_06.cap = (int)local_248;
          time_appendInt(b_06,(int)local_30,(int)local_1d8);
          layout_spill.len = (int)local_248;
          ptVar14 = local_158;
          ptVar11 = local_160;
          local_2e8 = ptVar2;
          local_2e0 = ptVar16;
          ptVar9 = local_2c8;
          ptVar7 = local_2c0;
          puVar6 = local_2d0;
        }
        else {
                    /* Unresolved local var: string s@[???]
                       Unresolved local var: uint8 * ~R0.ptr@[???]
                       Unresolved local var: int ~R0.len@[???] */
          if (uVar4 == 0x105) {
                    /* Unresolved local var: uint64 sec@[???] */
            puVar15 = (undefined1 *)
                      ((long)local_1c8 + ((ulong)&local_1c8[0x33e].cacheStart / 0x93a80) * -0x93a80)
            ;
            local_228 = puVar15 + 0x15180;
            uVar4 = ((long)(puVar15 +
                           SUB168(SEXT816(-0x3dd1baf98d76b549) * SEXT816((long)local_228),8) +
                           0x15180) >> 0x10) - ((long)local_228 >> 0x3f);
                    /* Unresolved local var: []uint8 buf@[???]
                       Unresolved local var: int n@[???] */
            if (uVar4 < 7) {
              if ((ulong)time_longDayNames.len <= uVar4) {
                    /* WARNING: Subroutine does not return */
                runtime_panicIndex();
              }
              ptVar9 = (time_Location *)time_longDayNames.array[uVar4].str;
              local_2e8 = (time_Location *)time_longDayNames.array[uVar4].len;
            }
            else {
              local_140._20_4_ = 0;
              uStack_128 = 0;
              uStack_124 = 0;
              uStack_120 = 0;
                    /* Unresolved local var: int w@[???] */
              if (uVar4 == 0) {
                uStack_120 = 0x3000000000000000;
                puVar5 = (undefined1 *)0x13;
              }
              else {
                puVar3 = &DAT_00000014;
                while (puVar5 = puVar3, uVar4 != 0) {
                  local_270 = puVar5;
                  local_250 = uVar4;
                  if ((undefined1 *)0x13 < puVar5 + -1) {
                    /* WARNING: Subroutine does not return */
                    runtime_panicIndex();
                  }
                  puVar5[(long)(local_140 + 0x13)] = (char)uVar4 + (char)(uVar4 / 10) * -10 + '0';
                  uVar4 = uVar4 / 10;
                  puVar3 = puVar5 + -1;
                  puVar15 = puVar5;
                }
              }
              if (&DAT_00000014 < puVar5) {
                    /* WARNING: Subroutine does not return */
                runtime_panicSliceB();
              }
              local_2e0 = (time_Location *)
                          (local_140 + ((ulong)puVar5 & (long)(puVar5 + -0x14) >> 0x3f) + 0x14);
              a0_00.str = (time_Location *)-(long)(puVar5 + -0x14);
              local_2d0 = (uint8 *)((long)&go_string__ + 2);
              local_2c8 = (time_Location *)0x1;
              a1_00.len = (int)local_1d8;
              a1_00.str = local_30;
              a0_00.len = (int)&DAT_0028ec6a;
              a2_00.len = (int)puVar15;
              a2_00.str = (uint8 *)ptVar12;
              runtime_concatstring3((runtime_tmpBuf *)((long)&go_string__ + 2),a0_00,a1_00,a2_00);
              local_2e8 = local_2b8;
              ptVar9 = local_2c0;
              local_2d8 = a0_00.str;
            }
            ptVar14 = local_1d8;
            ptVar7 = (time_Location *)((long)&(local_2e8->name).str + (long)&(local_1e0->name).str);
            ptVar11 = local_1d8;
            puVar6 = local_30;
            local_168 = ptVar7;
            if (local_1d8 < ptVar7) {
              old_16.len = (int)local_248;
              old_16.array = local_1e0;
              old_16.cap = (int)local_30;
              local_70 = ptVar9;
              runtime_growslice((runtime__type *)&DAT_00225720,old_16,(int)local_1d8);
              ptVar11 = local_2c0;
              puVar6 = local_2d0;
              local_2e0 = ptVar14;
              local_2d8 = ptVar7;
            }
            local_170 = ptVar11;
            local_28 = puVar6;
            runtime_memmove();
            layout_spill.len = (int)local_248;
            ptVar14 = local_158;
            ptVar11 = local_160;
            ptVar9 = local_168;
            ptVar7 = local_170;
            puVar6 = local_28;
          }
          else {
                    /* Unresolved local var: uint64 sec@[???] */
            puVar15 = (undefined1 *)
                      ((long)local_1c8 + ((ulong)&local_1c8[0x33e].cacheStart / 0x93a80) * -0x93a80)
            ;
            uVar4 = ((long)(puVar15 +
                           SUB168(SEXT816(-0x3dd1baf98d76b549) * SEXT816((long)(puVar15 + 0x15180)),
                                  8) + 0x15180) >> 0x10) - ((long)(puVar15 + 0x15180) >> 0x3f);
                    /* Unresolved local var: []uint8 buf@[???]
                       Unresolved local var: int n@[???] */
            if (uVar4 < 7) {
              if ((ulong)time_longDayNames.len <= uVar4) {
                    /* WARNING: Subroutine does not return */
                runtime_panicIndex();
              }
              ptVar9 = (time_Location *)time_longDayNames.array[uVar4].len;
              ptVar14 = (time_Location *)time_longDayNames.array[uVar4].str;
            }
            else {
              local_118._0_4_ = 0;
              local_118._4_4_ = 0;
              local_118._8_4_ = 0;
              local_118._12_8_ = 0;
                    /* Unresolved local var: int w@[???] */
              if (uVar4 == 0) {
                local_118._12_8_ = 0x3000000000000000;
                puVar5 = (undefined1 *)0x13;
              }
              else {
                puVar3 = &DAT_00000014;
                while (puVar5 = puVar3, uVar4 != 0) {
                  local_258 = puVar5;
                  if ((undefined1 *)0x13 < puVar5 + -1) {
                    /* WARNING: Subroutine does not return */
                    runtime_panicIndex();
                  }
                  puVar5[(long)&uStack_120 + 7] = (char)uVar4 + (char)(uVar4 / 10) * -10 + '0';
                  uVar4 = uVar4 / 10;
                  puVar3 = puVar5 + -1;
                  puVar15 = puVar5;
                }
              }
              if (&DAT_00000014 < puVar5) {
                    /* WARNING: Subroutine does not return */
                runtime_panicSliceB();
              }
              local_2e8 = (time_Location *)&DAT_0000000a;
              local_2e0 = (time_Location *)
                          (local_118 + ((ulong)puVar5 & (long)(puVar5 + -0x14) >> 0x3f));
              a0.str = (time_Location *)-(long)(puVar5 + -0x14);
              local_2d0 = (uint8 *)((long)&go_string__ + 2);
              local_2c8 = (time_Location *)0x1;
              a1.len = (int)local_1d8;
              a1.str = local_30;
              a0.len = (int)&DAT_0028ec6a;
              a2.len = (int)puVar15;
              a2.str = (uint8 *)ptVar12;
              runtime_concatstring3((runtime_tmpBuf *)((long)&go_string__ + 2),a0,a1,a2);
              ptVar9 = local_2b8;
              ptVar14 = local_2c0;
              local_2d8 = a0.str;
            }
            ptVar17 = local_1d8;
            ptVar11 = local_1e0;
            if (ptVar9 < (time_Location *)0x3) {
                    /* WARNING: Subroutine does not return */
              runtime_panicSliceAlen();
            }
            ptVar8 = (time_Location *)((long)&(local_1e0->name).str + 3);
            ptVar9 = ptVar8;
            ptVar7 = local_1d8;
            puVar6 = local_30;
            if (local_1d8 < ptVar8) {
              old_15.len = (int)&DAT_00225720;
              old_15.array = local_1e0;
              old_15.cap = (int)local_30;
              local_1b0 = ptVar8;
              local_60 = ptVar14;
              runtime_growslice((runtime__type *)ptVar8,old_15,(int)local_1d8);
              ptVar9 = local_1b0;
              ptVar7 = local_2c0;
              puVar6 = local_2d0;
              ptVar14 = local_60;
              local_2e8 = ptVar11;
              local_2e0 = ptVar17;
              local_2d8 = ptVar8;
            }
            uVar1 = *(uint8 *)((long)&(ptVar14->name).str + 2);
            *(undefined2 *)(puVar6 + (long)local_1e0) = *(undefined2 *)&(ptVar14->name).str;
            (puVar6 + 2)[(long)local_1e0] = uVar1;
            layout_spill.len = (int)local_248;
            ptVar14 = local_158;
            ptVar11 = local_160;
          }
        }
      }
      else {
        local_2e0 = ptVar11;
        if (uVar4 == 0x107) {
          local_2d8 = (time_Location *)0x0;
          b_09.len = (int)local_1e0;
          b_09.array = (uint8 *)ptVar11;
          b_09.cap = (int)local_248;
          time_appendInt(b_09,(int)local_30,(int)local_1d8);
          layout_spill.len = (int)local_248;
          ptVar14 = local_158;
          ptVar11 = local_160;
          local_2e8 = ptVar2;
          ptVar9 = local_2c8;
          ptVar7 = local_2c0;
          puVar6 = local_2d0;
        }
        else if (uVar4 == 0x108) {
          local_2e8 = local_1d8;
          if ((long)ptVar11 < 10) {
            if (local_1d8 < (time_Location *)((long)&(local_1e0->name).str + 1)) {
              old_08.len = (int)local_248;
              old_08.array = local_1e0;
              old_08.cap = (int)local_30;
              runtime_growslice((runtime__type *)&DAT_00225720,old_08,(int)local_1d8);
              local_2e8 = local_2c0;
              puVar6 = local_2d0;
            }
            puVar6[(long)local_1e0] = 0x20;
          }
          local_2e0 = local_160;
          local_2d8 = (time_Location *)0x0;
          b_07.len = (int)local_1e0;
          b_07.array = (uint8 *)local_160;
          b_07.cap = (int)local_248;
          time_appendInt(b_07,(int)puVar6,(int)local_2e8);
          layout_spill.len = (int)local_248;
          ptVar14 = local_158;
          ptVar11 = local_160;
          ptVar9 = local_2c8;
          ptVar7 = local_2c0;
          puVar6 = local_2d0;
        }
        else {
          local_2d8 = (time_Location *)0x2;
          b_08.len = (int)local_1e0;
          b_08.array = (uint8 *)ptVar11;
          b_08.cap = (int)local_248;
          time_appendInt(b_08,(int)local_30,(int)local_1d8);
          layout_spill.len = (int)local_248;
          ptVar14 = local_158;
          ptVar11 = local_160;
          local_2e8 = ptVar2;
          ptVar9 = local_2c8;
          ptVar7 = local_2c0;
          puVar6 = local_2d0;
        }
      }
      goto LAB_0054ce40;
    }
    if (uVar4 < 0x20e) {
      if (uVar4 < 0x114) {
        if (uVar4 == 0x10a) {
          ptVar7 = local_1e0;
          local_2e8 = local_1d8;
          if ((long)ptVar9 < 100) {
            ptVar7 = (time_Location *)((long)&(local_1e0->name).str + 1);
            if (local_1d8 < ptVar7) {
              old_09.len = (int)local_248;
              old_09.array = local_1e0;
              old_09.cap = (int)local_30;
              runtime_growslice((runtime__type *)&DAT_00225720,old_09,(int)local_1d8);
              ptVar7 = (time_Location *)((long)&(local_2c8->name).str + 1);
              local_2e8 = local_2c0;
              puVar6 = local_2d0;
            }
            puVar6[(long)local_1e0] = 0x20;
            if ((long)local_278 < 10) {
              ptVar9 = (time_Location *)((long)&(ptVar7->name).str + 1);
              if (local_2e8 < ptVar9) {
                old_10.len = (int)local_248;
                old_10.array = ptVar9;
                old_10.cap = (int)puVar6;
                local_188 = ptVar7;
                runtime_growslice((runtime__type *)&DAT_00225720,old_10,(int)local_2e8);
                ptVar9 = (time_Location *)((long)&(local_2c8->name).str + 1);
                local_2e8 = local_2c0;
                puVar6 = local_2d0;
                ptVar7 = local_188;
              }
              puVar6[(long)ptVar7] = 0x20;
              ptVar7 = ptVar9;
            }
          }
          local_2e0 = local_278;
          local_2d8 = (time_Location *)0x0;
          b_12.len = (int)ptVar7;
          b_12.array = (uint8 *)local_160;
          b_12.cap = (int)local_248;
          time_appendInt(b_12,(int)puVar6,(int)local_2e8);
          layout_spill.len = (int)local_248;
          ptVar14 = local_158;
          ptVar11 = local_160;
          ptVar9 = local_2c8;
          ptVar7 = local_2c0;
          puVar6 = local_2d0;
        }
        else if (uVar4 == 0x10b) {
          local_2d8 = (time_Location *)0x3;
          b_11.len = (int)local_1e0;
          b_11.array = (uint8 *)ptVar11;
          b_11.cap = (int)local_248;
          time_appendInt(b_11,(int)local_30,(int)local_1d8);
          layout_spill.len = (int)local_248;
          ptVar14 = local_158;
          ptVar11 = local_160;
          local_2e8 = ptVar2;
          local_2e0 = ptVar9;
          ptVar9 = local_2c8;
          ptVar7 = local_2c0;
          puVar6 = local_2d0;
        }
        else {
          ptVar9 = local_1e0;
          ptVar7 = local_1d8;
          puVar6 = local_30;
          if (uVar4 == 0x113) {
            local_2d8 = (time_Location *)&DAT_00000004;
            b_10.len = (int)local_1e0;
            b_10.array = (uint8 *)ptVar11;
            b_10.cap = (int)local_248;
            time_appendInt(b_10,(int)local_30,(int)local_1d8);
            layout_spill.len = (int)local_248;
            ptVar14 = local_158;
            ptVar11 = local_160;
            local_2e8 = ptVar2;
            local_2e0 = ptVar8;
            ptVar9 = local_2c8;
            ptVar7 = local_2c0;
            puVar6 = local_2d0;
          }
        }
      }
      else if (uVar4 == 0x114) {
        if ((long)ptVar8 < 0) {
          ptVar8 = (time_Location *)-(long)ptVar8;
        }
        b_15.array = (long)ptVar8 * -0x5c28f5c28f5c28f5;
        lVar10 = ((long)((long)&(ptVar8->name).str +
                        SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((long)ptVar8),8)) >> 6) -
                 ((long)ptVar8 >> 0x3f);
        b_15.cap = lVar10 * 100;
        local_2e0 = (time_Location *)((long)ptVar8 + lVar10 * -100);
        local_2d8 = (time_Location *)0x2;
        b_15.len = (int)local_1e0;
        time_appendInt(b_15,(int)local_30,(int)local_2e0);
        layout_spill.len = (int)local_248;
        ptVar14 = local_158;
        ptVar11 = local_160;
        local_2e8 = ptVar2;
        ptVar9 = local_2c8;
        ptVar7 = local_2c0;
        puVar6 = local_2d0;
      }
      else if (uVar4 == 0x20c) {
        local_2d8 = (time_Location *)0x2;
        b_14.len = (int)local_1e0;
        b_14.array = (uint8 *)ptVar11;
        b_14.cap = (int)local_248;
        time_appendInt(b_14,(int)local_30,(int)local_1d8);
        layout_spill.len = (int)local_248;
        ptVar14 = local_158;
        ptVar11 = local_160;
        local_2e8 = ptVar2;
        local_2e0 = ptVar12;
        ptVar9 = local_2c8;
        ptVar7 = local_2c0;
        puVar6 = local_2d0;
      }
      else {
        ptVar9 = local_1e0;
        ptVar7 = local_1d8;
        puVar6 = local_30;
                    /* Unresolved local var: int hr@[???] */
        if (uVar4 == 0x20d) {
          b_13.array = (long)ptVar12 * -0x5555555555555555;
          local_2e0 = (time_Location *)
                      ((long)ptVar12 +
                      (((long)((long)&(ptVar12->name).str +
                              SUB168(SEXT816(-0x5555555555555555) * SEXT816((long)ptVar12),8)) >> 3)
                      - ((long)ptVar12 >> 0x3f)) * -0xc);
          if (local_2e0 == (time_Location *)0x0) {
            local_2e0 = (time_Location *)&DAT_0000000c;
          }
          local_2d8 = (time_Location *)0x0;
          b_13.len = (int)local_1e0;
          b_13.cap = 0xc;
          time_appendInt(b_13,(int)local_30,(int)local_1d8);
          layout_spill.len = (int)local_248;
          ptVar14 = local_158;
          ptVar11 = local_160;
          local_2e8 = ptVar2;
          ptVar9 = local_2c8;
          ptVar7 = local_2c0;
          puVar6 = local_2d0;
        }
      }
    }
    else if (uVar4 < 0x211) {
                    /* Unresolved local var: int hr@[???] */
      if (uVar4 == 0x20e) {
        _Var18.array = (long)ptVar12 * -0x5555555555555555;
        local_2e0 = (time_Location *)
                    ((long)ptVar12 +
                    (((long)((long)&(ptVar12->name).str +
                            SUB168(SEXT816(-0x5555555555555555) * SEXT816((long)ptVar12),8)) >> 3) -
                    ((long)ptVar12 >> 0x3f)) * -0xc);
        if (local_2e0 == (time_Location *)0x0) {
          local_2e0 = (time_Location *)&DAT_0000000c;
        }
        local_2d8 = (time_Location *)0x2;
        _Var18.len = (int)local_1e0;
        _Var18.cap = 0xc;
        time_appendInt(_Var18,(int)local_30,(int)local_1d8);
        layout_spill.len = (int)local_248;
        ptVar14 = local_158;
        ptVar11 = local_160;
        local_2e8 = ptVar2;
        ptVar9 = local_2c8;
        ptVar7 = local_2c0;
        puVar6 = local_2d0;
      }
      else {
        local_2e0 = local_1f8;
        if (uVar4 == 0x20f) {
          local_2d8 = (time_Location *)0x0;
          b_18.len = (int)local_1e0;
          b_18.array = (uint8 *)ptVar11;
          b_18.cap = (int)local_248;
          time_appendInt(b_18,(int)local_30,(int)local_1d8);
          layout_spill.len = (int)local_248;
          ptVar14 = local_158;
          ptVar11 = local_160;
          local_2e8 = ptVar2;
          ptVar9 = local_2c8;
          ptVar7 = local_2c0;
          puVar6 = local_2d0;
        }
        else {
          local_2d8 = (time_Location *)0x2;
          b_19.len = (int)local_1e0;
          b_19.array = (uint8 *)ptVar11;
          b_19.cap = (int)local_248;
          time_appendInt(b_19,(int)local_30,(int)local_1d8);
          layout_spill.len = (int)local_248;
          ptVar14 = local_158;
          ptVar11 = local_160;
          local_2e8 = ptVar2;
          ptVar9 = local_2c8;
          ptVar7 = local_2c0;
          puVar6 = local_2d0;
        }
      }
    }
    else if (uVar4 < 0x213) {
      local_2e0 = local_230;
      if (uVar4 == 0x211) {
        local_2d8 = (time_Location *)0x0;
        b_16.len = (int)local_1e0;
        b_16.array = (uint8 *)ptVar11;
        b_16.cap = (int)local_248;
        time_appendInt(b_16,(int)local_30,(int)local_1d8);
        layout_spill.len = (int)local_248;
        ptVar14 = local_158;
        ptVar11 = local_160;
        local_2e8 = ptVar2;
        ptVar9 = local_2c8;
        ptVar7 = local_2c0;
        puVar6 = local_2d0;
      }
      else {
        local_2d8 = (time_Location *)0x2;
        b_17.len = (int)local_1e0;
        b_17.array = (uint8 *)ptVar11;
        b_17.cap = (int)local_248;
        time_appendInt(b_17,(int)local_30,(int)local_1d8);
        layout_spill.len = (int)local_248;
        ptVar14 = local_158;
        ptVar11 = local_160;
        local_2e8 = ptVar2;
        ptVar9 = local_2c8;
        ptVar7 = local_2c0;
        puVar6 = local_2d0;
      }
    }
    else if (uVar4 == 0x215) {
      if ((long)ptVar12 < 0xc) {
        ptVar14 = (time_Location *)((long)&(local_1e0->name).str + 2);
        ptVar9 = ptVar14;
        if (local_1d8 < ptVar14) {
          old_12.len = (int)local_248;
          old_12.array = local_1e0;
          old_12.cap = (int)local_30;
          local_198 = ptVar14;
          runtime_growslice((runtime__type *)&DAT_00225720,old_12,(int)local_1d8);
          ptVar7 = local_2c0;
          puVar6 = local_2d0;
          ptVar9 = local_198;
          local_2e8 = ptVar17;
          local_2e0 = ptVar2;
          local_2d8 = ptVar14;
        }
        (puVar6 + (long)local_1e0)[0] = 0x41;
        (puVar6 + (long)local_1e0)[1] = 0x4d;
        layout_spill.len = (int)local_248;
        ptVar14 = local_158;
        ptVar11 = local_160;
      }
      else {
        ptVar14 = (time_Location *)((long)&(local_1e0->name).str + 2);
        ptVar9 = ptVar14;
        if (local_1d8 < ptVar14) {
          old_11.len = (int)local_248;
          old_11.array = local_1e0;
          old_11.cap = (int)local_30;
          local_190 = ptVar14;
          runtime_growslice((runtime__type *)&DAT_00225720,old_11,(int)local_1d8);
          ptVar7 = local_2c0;
          puVar6 = local_2d0;
          ptVar9 = local_190;
          local_2e8 = ptVar17;
          local_2e0 = ptVar2;
          local_2d8 = ptVar14;
        }
        (puVar6 + (long)local_1e0)[0] = 0x50;
        (puVar6 + (long)local_1e0)[1] = 0x4d;
        layout_spill.len = (int)local_248;
        ptVar14 = local_158;
        ptVar11 = local_160;
      }
    }
    else {
      ptVar9 = local_1e0;
      if (uVar4 == 0x216) {
        if ((long)ptVar12 < 0xc) {
          ptVar14 = (time_Location *)((long)&(local_1e0->name).str + 2);
          ptVar9 = ptVar14;
          if (local_1d8 < ptVar14) {
            old_14.len = (int)local_248;
            old_14.array = local_1e0;
            old_14.cap = (int)local_30;
            local_1a8 = ptVar14;
            runtime_growslice((runtime__type *)&DAT_00225720,old_14,(int)local_1d8);
            ptVar7 = local_2c0;
            puVar6 = local_2d0;
            ptVar9 = local_1a8;
            local_2e8 = ptVar17;
            local_2e0 = ptVar2;
            local_2d8 = ptVar14;
          }
          (puVar6 + (long)local_1e0)[0] = 0x61;
          (puVar6 + (long)local_1e0)[1] = 0x6d;
          layout_spill.len = (int)local_248;
          ptVar14 = local_158;
          ptVar11 = local_160;
        }
        else {
          ptVar14 = (time_Location *)((long)&(local_1e0->name).str + 2);
          ptVar9 = ptVar14;
          if (local_1d8 < ptVar14) {
            old_13.len = (int)local_248;
            old_13.array = local_1e0;
            old_13.cap = (int)local_30;
            local_1a0 = ptVar14;
            runtime_growslice((runtime__type *)&DAT_00225720,old_13,(int)local_1d8);
            ptVar7 = local_2c0;
            puVar6 = local_2d0;
            ptVar9 = local_1a0;
            local_2e8 = ptVar17;
            local_2e0 = ptVar2;
            local_2d8 = ptVar14;
          }
          (puVar6 + (long)local_1e0)[0] = 0x70;
          (puVar6 + (long)local_1e0)[1] = 0x6d;
          layout_spill.len = (int)local_248;
          ptVar14 = local_158;
          ptVar11 = local_160;
        }
      }
    }
  } while( true );
}

