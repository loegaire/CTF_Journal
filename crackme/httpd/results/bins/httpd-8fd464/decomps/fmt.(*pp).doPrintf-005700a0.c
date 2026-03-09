
/* WARNING: Unknown calling convention */

void fmt___pp__doPrintf(fmt_pp *p,string format,__interface___ a)

{
  void *pvVar1;
  byte bVar2;
  undefined1 *puVar3;
  fmt_pp *pfVar4;
  fmt_pp *extraout_RAX;
  fmt_pp *extraout_RAX_00;
  ulong *extraout_RAX_01;
  ulong *extraout_RAX_02;
  fmt_pp *extraout_RAX_03;
  fmt_pp *extraout_RAX_04;
  fmt_pp *pfVar5;
  ulong *puVar6;
  fmt_pp *pfVar7;
  uint8 *puVar8;
  fmt_pp *pfVar9;
  long lVar10;
  long lVar11;
  fmt_pp *extraout_RDX;
  fmt_pp *extraout_RDX_00;
  fmt_pp *extraout_RDX_01;
  fmt_pp *pfVar12;
  fmt_pp *extraout_RDX_02;
  fmt_pp *extraout_RDX_03;
  fmt_pp *extraout_RDX_04;
  fmt_pp *extraout_RDX_05;
  fmt_pp *pfVar13;
  fmt_pp *pfVar14;
  fmt_pp *pfVar15;
  int iVar16;
  uint uVar17;
  fmt_pp *pfVar18;
  fmt_pp *pfVar19;
  undefined1 *puVar20;
  long in_FS_OFFSET;
  bool bVar21;
  string s;
  interface___ arg;
  interface___ arg_00;
  interface___ arg_01;
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
  __interface___ a_00;
  __interface___ a_01;
  multireturn_int_int_bool__conflict1 mVar22;
  string format_00;
  string format_01;
  string format_02;
  fmt_pp *p_spill;
  fmt_pp *in_stack_00000010;
  int end;
  __interface___ a_spill;
  fmt_pp *local_e0;
  fmt_pp *local_d8;
  fmt_pp *local_d0;
  fmt_pp *local_c0;
  fmt_pp *local_b8;
  fmt_pp *local_b0;
  byte local_a8;
  fmt_pp *local_68;
  fmt_pp *local_60;
  fmt_pp *local_58;
  fmt_pp *local_50;
  fmt_pp *local_48;
  fmt_pp *local_40;
  fmt_pp *local_38;
  fmt_pp *local_30;
  fmt_pp *local_28;
  ulong *local_20;
  fmt_pp *local_18;
  fmt_pp *local_10;
  
  pfVar12 = (fmt_pp *)a.cap;
                    /* Unresolved local var: int argNum@[???]
                       Unresolved local var: bool afterIndex@[???] */
  while (&local_68 <= *(fmt_pp ***)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  p_spill->reordered = false;
  pfVar4 = (fmt_pp *)0x0;
  pfVar9 = (fmt_pp *)0x0;
  pfVar14 = p_spill;
LAB_00570100:
  do {
    if (end <= (long)pfVar4) {
LAB_00570a29:
      if ((pfVar14->reordered == false) && ((long)pfVar9 < a_spill.len)) {
        (pfVar14->fmt).fmtFlags.widPresent = false;
        (pfVar14->fmt).fmtFlags.precPresent = false;
        (pfVar14->fmt).fmtFlags.minus = false;
        (pfVar14->fmt).fmtFlags.plus = false;
        (pfVar14->fmt).fmtFlags.sharp = false;
        (pfVar14->fmt).fmtFlags.space = false;
        (pfVar14->fmt).fmtFlags.zero = false;
        (pfVar14->fmt).fmtFlags.plusV = false;
        (pfVar14->fmt).fmtFlags.precPresent = false;
        (pfVar14->fmt).fmtFlags.minus = false;
        (pfVar14->fmt).fmtFlags.plus = false;
        (pfVar14->fmt).fmtFlags.sharp = false;
        (pfVar14->fmt).fmtFlags.space = false;
        (pfVar14->fmt).fmtFlags.zero = false;
        (pfVar14->fmt).fmtFlags.plusV = false;
        (pfVar14->fmt).fmtFlags.sharpV = false;
        pfVar4 = (fmt_pp *)(pfVar14->buf).len;
        pfVar12 = (fmt_pp *)((long)&(pfVar4->buf).len + 1);
        pfVar7 = (fmt_pp *)(pfVar14->buf).cap;
        pfVar5 = (fmt_pp *)(pfVar14->buf).array;
        pfVar15 = pfVar4;
        pfVar13 = pfVar5;
        if (pfVar7 < pfVar12) {
          old_03.len = (int)pfVar9;
          old_03.array = pfVar4;
          old_03.cap = (int)pfVar14;
          local_50 = pfVar4;
          local_48 = pfVar12;
          runtime_growslice((runtime__type *)&DAT_00225720,old_03,(int)pfVar12);
          pfVar15 = local_50;
          pfVar12 = local_48;
          pfVar14 = p_spill;
          pfVar7 = local_b0;
          pfVar13 = local_c0;
          local_e0 = pfVar5;
          local_d8 = pfVar4;
        }
        puVar8 = (pfVar15->fmt).intbuf + (long)&pfVar13[-1].fmt.prec;
        puVar8[0] = 0x25;
        puVar8[1] = 0x21;
        puVar8[2] = 0x28;
        puVar8[3] = 0x45;
        puVar8[4] = 0x58;
        puVar8[5] = 0x54;
        puVar8[6] = 0x52;
        puVar8[7] = 0x41;
        *(undefined1 *)((long)&(pfVar13->buf).len + (long)pfVar15) = 0x20;
        (pfVar14->buf).len = (int)pfVar12;
        (pfVar14->buf).cap = (int)pfVar7;
        if (runtime_writeBarrier._0_4_ == 0) {
          (pfVar14->buf).array = (uint8 *)pfVar13;
          bVar21 = (ulong)a_spill.len < pfVar9;
        }
        else {
          runtime_gcWriteBarrierR9();
          bVar21 = extraout_RDX_01 < pfVar9;
          a_spill.len = (int)extraout_RDX_01;
        }
        if (bVar21) {
                    /* WARNING: Subroutine does not return */
          runtime_panicSliceB();
        }
        pfVar12 = (fmt_pp *)(a_spill.len - (long)pfVar9);
        puVar6 = (ulong *)((long)&(a_spill.array)->_type +
                          ((long)pfVar9 - a_spill.cap >> 0x3f & (long)pfVar9 << 4));
        if (0 < (long)pfVar12) {
          lVar11 = 0;
          local_48 = pfVar12;
          while( true ) {
            pfVar4 = (fmt_pp *)*puVar6;
            local_30 = (fmt_pp *)puVar6[1];
            lVar10 = lVar11;
            pfVar9 = local_30;
            local_20 = puVar6;
            if (0 < lVar11) {
              pfVar7 = (fmt_pp *)(pfVar14->buf).len;
              pfVar9 = (fmt_pp *)((long)&(pfVar7->buf).array + 2);
              pfVar5 = (fmt_pp *)(pfVar14->buf).cap;
              pfVar15 = (fmt_pp *)(pfVar14->buf).array;
              pfVar13 = pfVar7;
              pfVar18 = pfVar15;
              if (pfVar5 < pfVar9) {
                old_05.len = lVar11;
                old_05.array = pfVar4;
                old_05.cap = (int)pfVar14;
                local_58 = pfVar9;
                local_50 = pfVar7;
                runtime_growslice((runtime__type *)&DAT_00225720,old_05,(int)local_30);
                pfVar12 = local_48;
                pfVar14 = p_spill;
                pfVar13 = local_50;
                pfVar9 = local_58;
                pfVar5 = local_b0;
                pfVar18 = local_c0;
                local_e0 = pfVar15;
                local_d8 = pfVar7;
              }
              puVar8 = (pfVar13->fmt).intbuf + (long)&pfVar18[-1].fmt.prec;
              puVar8[0] = 0x2c;
              puVar8[1] = 0x20;
              (pfVar14->buf).len = (int)pfVar9;
              (pfVar14->buf).cap = (int)pfVar5;
              pfVar9 = local_30;
              if (runtime_writeBarrier._0_4_ == 0) {
                (pfVar14->buf).array = (uint8 *)pfVar18;
                puVar6 = local_20;
              }
              else {
                runtime_gcWriteBarrierR8();
                puVar6 = extraout_RAX_01;
                pfVar12 = extraout_RDX_02;
              }
            }
            if (pfVar4 == (fmt_pp *)0x0) {
              pfVar9 = (fmt_pp *)(pfVar14->buf).len;
              pfVar4 = (fmt_pp *)((long)&(pfVar9->buf).array + 5);
              pfVar7 = (fmt_pp *)(pfVar14->buf).cap;
              pfVar5 = (fmt_pp *)(pfVar14->buf).array;
              pfVar15 = pfVar9;
              pfVar13 = pfVar5;
              if (pfVar7 < pfVar4) {
                old_06.len = lVar10;
                old_06.array = pfVar9;
                old_06.cap = (int)pfVar14;
                local_58 = pfVar4;
                local_50 = pfVar9;
                runtime_growslice((runtime__type *)&DAT_00225720,old_06,(int)pfVar4);
                puVar6 = local_20;
                lVar10 = lVar11;
                pfVar12 = local_48;
                pfVar15 = local_50;
                pfVar4 = local_58;
                pfVar14 = p_spill;
                pfVar7 = local_b0;
                pfVar13 = local_c0;
                local_e0 = pfVar5;
                local_d8 = pfVar9;
              }
              lVar11 = lVar10;
              puVar8 = (pfVar15->fmt).intbuf + (long)&pfVar13[-1].fmt.prec;
              puVar8[0] = 0x3c;
              puVar8[1] = 0x6e;
              puVar8[2] = 0x69;
              puVar8[3] = 0x6c;
              ((undefined1 *)((long)&(pfVar13->buf).array + 4))[(long)pfVar15] = 0x3e;
              (pfVar14->buf).len = (int)pfVar4;
              (pfVar14->buf).cap = (int)pfVar7;
              if (runtime_writeBarrier._0_4_ == 0) {
                (pfVar14->buf).array = (uint8 *)pfVar13;
              }
              else {
                runtime_gcWriteBarrierR9();
                puVar6 = extraout_RAX_02;
                pfVar12 = extraout_RDX_03;
              }
            }
            else {
              if (pfVar4 == (fmt_pp *)0x0) {
                puVar20 = (undefined1 *)0x0;
              }
              else {
                puVar20 = go_itab__reflect_rtype_reflect_Type;
              }
              local_18 = pfVar4;
              local_10 = pfVar9;
              (**(code **)(puVar20 + 0xf8))();
              local_50 = (fmt_pp *)(p_spill->buf).len;
              local_58 = (fmt_pp *)((local_d8->fmt).intbuf + (long)&local_50[-1].fmt.prec);
              pfVar12 = (fmt_pp *)(p_spill->buf).cap;
              pfVar9 = (fmt_pp *)(p_spill->buf).array;
              if (pfVar12 < local_58) {
                local_40 = local_e0;
                old_07.len = (int)p_spill;
                old_07.array = local_58;
                old_07.cap = (int)pfVar12;
                runtime_growslice((runtime__type *)&DAT_00225720,old_07,(int)local_e0);
                pfVar12 = local_b0;
                pfVar9 = local_c0;
              }
              local_60 = pfVar12;
              local_28 = pfVar9;
              runtime_memmove();
              pfVar9 = local_28;
              (p_spill->buf).len = (int)local_58;
              (p_spill->buf).cap = (int)local_60;
              pfVar12 = (fmt_pp *)
                        ((local_50->fmt).intbuf + (long)((long)&local_d8[-1].fmt.prec + 1));
              pfVar7 = local_60;
              pfVar14 = p_spill;
              if (runtime_writeBarrier._0_4_ == 0) {
                (p_spill->buf).array = (uint8 *)local_28;
                pfVar5 = local_58;
              }
              else {
                runtime_gcWriteBarrierBX();
                pfVar5 = extraout_RAX_03;
                pfVar12 = extraout_RDX_04;
              }
              if (pfVar7 < pfVar12) {
                old_08.len = (int)pfVar7;
                old_08.array = pfVar9;
                old_08.cap = (int)pfVar14;
                runtime_growslice((runtime__type *)pfVar5,old_08,0x225720);
                (p_spill->buf).cap = (int)local_b0;
                pfVar5 = local_b8;
                if (runtime_writeBarrier._0_4_ == 0) {
                  (p_spill->buf).array = (uint8 *)local_c0;
                  pfVar9 = local_c0;
                  pfVar14 = p_spill;
                }
                else {
                  pfVar14 = p_spill;
                  runtime_gcWriteBarrier();
                  pfVar9 = extraout_RAX_04;
                }
              }
              pvVar1 = (void *)((long)&(pfVar5->buf).array + 1);
              (pfVar14->buf).len = (int)pvVar1;
              (pfVar5->fmt).intbuf[(long)&pfVar9[-1].fmt.prec] = 0x3d;
              local_d8 = local_30;
              arg_01.data = pvVar1;
              arg_01._type = (runtime__type *)pfVar9;
              fmt___pp__printArg(local_30,arg_01,(int32)pfVar14);
              puVar6 = local_20;
              pfVar12 = local_48;
              pfVar14 = p_spill;
              local_e0 = pfVar4;
            }
            lVar11 = lVar11 + 1;
            if ((long)pfVar12 <= lVar11) break;
            puVar6 = puVar6 + 2;
          }
        }
        pfVar12 = (fmt_pp *)(pfVar14->buf).len;
        puVar20 = (undefined1 *)((long)&(pfVar12->buf).array + 1);
        puVar3 = (undefined1 *)(pfVar14->buf).cap;
        pfVar4 = (fmt_pp *)(pfVar14->buf).array;
        if (puVar3 < puVar20) {
          old_04.len = (int)puVar20;
          old_04.array = puVar3;
          old_04.cap = (int)pfVar14;
          runtime_growslice((runtime__type *)pfVar12,old_04,0x225720);
          (p_spill->buf).cap = (int)local_b0;
          pfVar12 = local_b8;
          if (runtime_writeBarrier._0_4_ == 0) {
            (p_spill->buf).array = (uint8 *)local_c0;
            pfVar4 = local_c0;
            pfVar14 = p_spill;
          }
          else {
            runtime_gcWriteBarrier();
            pfVar4 = extraout_RAX_00;
            pfVar14 = p_spill;
          }
        }
        (pfVar14->buf).len = (int)((long)&(pfVar12->buf).array + 1);
        (pfVar12->fmt).intbuf[(long)&pfVar4[-1].fmt.prec] = 0x29;
      }
      return;
    }
    pfVar14->goodArgNum = true;
    for (pfVar7 = pfVar4; (long)pfVar7 < end; pfVar7 = (fmt_pp *)((long)&(pfVar7->buf).array + 1)) {
      if ((ulong)end <= pfVar7) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      bVar2 = (pfVar7->fmt).intbuf[(long)&in_stack_00000010[-1].fmt.prec];
      pfVar12 = (fmt_pp *)(ulong)bVar2;
      if (bVar2 == 0x25) break;
    }
    if ((long)pfVar4 < (long)pfVar7) {
      if ((ulong)end < pfVar7) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceAlen();
      }
      if (pfVar7 < pfVar4) {
                    /* WARNING: Subroutine does not return */
        runtime_panicSliceB();
      }
      local_50 = (fmt_pp *)((long)pfVar7 - (long)pfVar4);
      local_e0 = (fmt_pp *)
                 ((in_stack_00000010->fmt).intbuf +
                 (((ulong)pfVar4 & -(long)local_50 >> 0x3f) - 0x68));
      pfVar4 = (fmt_pp *)(pfVar14->buf).len;
      local_48 = (fmt_pp *)((pfVar4->fmt).intbuf + (long)&local_50[-1].fmt.prec);
      pfVar5 = (fmt_pp *)(pfVar14->buf).cap;
      local_d8 = local_50;
      pfVar15 = (fmt_pp *)(pfVar14->buf).array;
      if (pfVar5 < local_48) {
        old.len = (int)pfVar9;
        old.array = (void *)end;
        old.cap = (int)pfVar14;
        local_58 = pfVar4;
        local_38 = local_e0;
        runtime_growslice((runtime__type *)&DAT_00225720,old,(int)in_stack_00000010);
        local_e0 = local_38;
        local_d8 = local_50;
        pfVar5 = local_b0;
        pfVar15 = local_c0;
      }
      local_50 = pfVar5;
      local_28 = pfVar15;
      runtime_memmove();
      (p_spill->buf).len = (int)local_48;
      (p_spill->buf).cap = (int)local_50;
      if (runtime_writeBarrier._0_4_ == 0) {
        (p_spill->buf).array = (uint8 *)local_28;
        pfVar14 = p_spill;
      }
      else {
        pfVar14 = p_spill;
        runtime_gcWriteBarrierDX();
      }
    }
    if (end <= (long)pfVar7) goto LAB_00570a29;
    (pfVar14->fmt).fmtFlags.widPresent = false;
    (pfVar14->fmt).fmtFlags.precPresent = false;
    (pfVar14->fmt).fmtFlags.minus = false;
    (pfVar14->fmt).fmtFlags.plus = false;
    (pfVar14->fmt).fmtFlags.sharp = false;
    (pfVar14->fmt).fmtFlags.space = false;
    (pfVar14->fmt).fmtFlags.zero = false;
    (pfVar14->fmt).fmtFlags.plusV = false;
    (pfVar14->fmt).fmtFlags.precPresent = false;
    (pfVar14->fmt).fmtFlags.minus = false;
    (pfVar14->fmt).fmtFlags.plus = false;
    (pfVar14->fmt).fmtFlags.sharp = false;
    (pfVar14->fmt).fmtFlags.space = false;
    (pfVar14->fmt).fmtFlags.zero = false;
    (pfVar14->fmt).fmtFlags.plusV = false;
    (pfVar14->fmt).fmtFlags.sharpV = false;
    pfVar4 = pfVar7;
    while (pfVar5 = (fmt_pp *)((long)&(pfVar4->buf).array + 1), (long)pfVar5 < end) {
      if ((ulong)end <= pfVar5) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      bVar2 = (pfVar5->fmt).intbuf[(long)&in_stack_00000010[-1].fmt.prec];
      pfVar12 = (fmt_pp *)(ulong)bVar2;
      if (bVar2 < 0x24) {
        if (bVar2 == 0x20) {
          (pfVar14->fmt).fmtFlags.space = true;
          pfVar4 = pfVar5;
        }
        else {
          if (bVar2 != 0x23) {
LAB_00570293:
            if (((byte)(bVar2 + 0x9f) < 0x1a) && ((long)pfVar9 < a_spill.len)) {
              if (bVar2 == 0x76) {
                (pfVar14->fmt).fmtFlags.sharpV = (pfVar14->fmt).fmtFlags.sharp;
                (pfVar14->fmt).fmtFlags.sharp = false;
                (pfVar14->fmt).fmtFlags.plusV = (pfVar14->fmt).fmtFlags.plus;
                (pfVar14->fmt).fmtFlags.plus = false;
              }
              if ((ulong)a_spill.len <= pfVar9) {
                    /* WARNING: Subroutine does not return */
                runtime_panicIndex();
              }
              local_e0 = (fmt_pp *)a_spill.array[(long)pfVar9]._type;
              local_d8 = a_spill.array[(long)pfVar9].data;
              arg.data = local_d8;
              arg._type = (runtime__type *)local_e0;
              fmt___pp__printArg(pfVar7,arg,(int32)pfVar14);
              pfVar4 = (fmt_pp *)((long)&(pfVar4->buf).array + 2);
              pfVar9 = (fmt_pp *)((long)&(pfVar9->buf).array + 1);
              pfVar14 = p_spill;
              goto LAB_00570100;
            }
            break;
          }
          (pfVar14->fmt).fmtFlags.sharp = true;
          pfVar4 = pfVar5;
        }
      }
      else if (bVar2 == 0x2b) {
        (pfVar14->fmt).fmtFlags.plus = true;
        pfVar4 = pfVar5;
      }
      else if (bVar2 == 0x2d) {
        (pfVar14->fmt).fmtFlags.minus = true;
        (pfVar14->fmt).fmtFlags.zero = false;
        pfVar4 = pfVar5;
      }
      else {
        if (bVar2 != 0x30) goto LAB_00570293;
        uVar17 = (pfVar14->fmt).fmtFlags.minus ^ 1;
        pfVar12 = (fmt_pp *)(ulong)uVar17;
        (pfVar14->fmt).fmtFlags.zero = SUB41(uVar17,0);
        pfVar4 = pfVar5;
      }
    }
    format_00.len = (int)pfVar14;
    format_00.str = (uint8 *)pfVar9;
    fmt___pp__argNumber(pfVar7,end,format_00,(int)in_stack_00000010,(int)pfVar12);
    puVar8 = (uint8 *)(ulong)local_a8;
    local_c0._0_1_ = SUB81(a_spill.len,0);
    pfVar12 = local_b8;
    if ((long)local_b0 < end) {
      if ((ulong)end <= local_b0) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      if ((local_b0->fmt).intbuf[(long)&in_stack_00000010[-1].fmt.prec] != 0x2a) goto LAB_0057052a;
      local_60 = local_b0;
      local_e0 = (fmt_pp *)a_spill.len;
      local_d8 = (fmt_pp *)a_spill.cap;
      local_d0 = local_b8;
      a_00.len = a_spill.cap;
      a_00.array = a_spill.array;
      a_00.cap = a_spill.len;
      fmt_intFromArg(a_00,(int)pfVar14);
      (p_spill->fmt).wid = (int)pfVar5;
      (p_spill->fmt).fmtFlags.widPresent = local_c0._0_1_;
      pfVar15 = p_spill;
      if (local_c0._0_1_ == false) {
        pfVar9 = (fmt_pp *)(p_spill->buf).len;
        pfVar4 = (fmt_pp *)((long)&(pfVar9->buf).len + 4);
        pfVar14 = (fmt_pp *)(p_spill->buf).cap;
        pfVar7 = (fmt_pp *)(p_spill->buf).array;
        pfVar13 = pfVar9;
        pfVar18 = pfVar14;
        pfVar19 = pfVar7;
        if (pfVar14 < pfVar4) {
          local_68 = local_b8;
          old_00.len = (int)pfVar5;
          old_00.array = pfVar9;
          old_00.cap = (int)p_spill;
          local_50 = pfVar9;
          local_48 = pfVar4;
          runtime_growslice((runtime__type *)&DAT_00225720,old_00,(int)pfVar4);
          pfVar12 = local_68;
          pfVar13 = local_50;
          pfVar4 = local_48;
          pfVar18 = local_b0;
          pfVar19 = (fmt_pp *)a_spill.len;
          local_e0 = pfVar7;
          local_d8 = pfVar9;
          local_d0 = pfVar14;
        }
        puVar8 = (pfVar13->fmt).intbuf + (long)&pfVar19[-1].fmt.prec;
        puVar8[0] = 0x25;
        puVar8[1] = 0x21;
        puVar8[2] = 0x28;
        puVar8[3] = 0x42;
        puVar8[4] = 0x41;
        puVar8[5] = 0x44;
        puVar8[6] = 0x57;
        puVar8[7] = 0x49;
        *(undefined4 *)((long)&(pfVar19->buf).len + (long)pfVar13) = 0x29485444;
        (p_spill->buf).len = (int)pfVar4;
        (p_spill->buf).cap = (int)pfVar18;
        if (runtime_writeBarrier._0_4_ == 0) {
          (p_spill->buf).array = (uint8 *)pfVar19;
        }
        else {
          runtime_gcWriteBarrierR9();
          pfVar12 = extraout_RDX;
        }
      }
      lVar11 = (pfVar15->fmt).wid;
      if (lVar11 < 0) {
        (pfVar15->fmt).wid = -lVar11;
        (pfVar15->fmt).fmtFlags.minus = true;
        (pfVar15->fmt).fmtFlags.zero = false;
      }
      pfVar7 = (fmt_pp *)((long)&(local_60->buf).array + 1);
      puVar8 = (uint8 *)0x0;
      pfVar14 = pfVar15;
    }
    else {
LAB_0057052a:
      if ((long)local_b0 < end) {
        pfVar15 = (fmt_pp *)0x0;
        lVar11 = 0;
        for (pfVar7 = local_b0; (long)pfVar7 < end;
            pfVar7 = (fmt_pp *)((long)&(pfVar7->buf).array + 1)) {
          if ((ulong)end <= pfVar7) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          bVar2 = (pfVar7->fmt).intbuf[(long)&in_stack_00000010[-1].fmt.prec];
          if ((bVar2 < 0x30) || (0x39 < bVar2)) break;
          if (2000000 < lVar11 + 1000000U) {
            pfVar15 = (fmt_pp *)0x0;
            lVar11 = 0;
            pfVar7 = (fmt_pp *)end;
            break;
          }
          lVar11 = (ulong)(bVar2 - 0x30 & 0xff) + lVar11 * 10;
          pfVar15 = (fmt_pp *)0x1;
        }
      }
      else {
        pfVar15 = (fmt_pp *)0x0;
        lVar11 = 0;
        pfVar7 = (fmt_pp *)end;
      }
      (p_spill->fmt).wid = lVar11;
      (p_spill->fmt).fmtFlags.widPresent = SUB81(pfVar15,0);
      pfVar14 = p_spill;
      local_e0 = pfVar9;
      local_d8 = in_stack_00000010;
      local_d0 = (fmt_pp *)end;
      if ((local_a8 != 0) && (SUB81(pfVar15,0) != false)) {
        p_spill->goodArgNum = false;
      }
    }
    pfVar4 = (fmt_pp *)((long)&(pfVar7->buf).array + 1);
    pfVar5 = pfVar12;
    pfVar9 = pfVar4;
    if ((long)pfVar4 < end) {
      if ((ulong)end <= pfVar7) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      if ((pfVar7->fmt).intbuf[(long)&in_stack_00000010[-1].fmt.prec] == 0x2e) {
        if ((char)puVar8 != '\0') {
          pfVar14->goodArgNum = false;
        }
        local_d8 = in_stack_00000010;
        local_d0 = (fmt_pp *)end;
        format_01.len = (int)pfVar15;
        format_01.str = puVar8;
        fmt___pp__argNumber((fmt_pp *)a_spill.len,end,format_01,(int)in_stack_00000010,(int)pfVar4);
        puVar8 = (uint8 *)(ulong)local_a8;
        pfVar5 = local_b8;
        if ((long)local_b0 < end) {
          if ((ulong)end <= local_b0) {
                    /* WARNING: Subroutine does not return */
            runtime_panicIndex();
          }
          bVar2 = (local_b0->fmt).intbuf[(long)&in_stack_00000010[-1].fmt.prec];
          pfVar9 = (fmt_pp *)(ulong)bVar2;
          if (bVar2 == 0x2a) {
            local_e0 = (fmt_pp *)a_spill.len;
            local_d8 = (fmt_pp *)a_spill.cap;
            local_d0 = local_b8;
            a_01.len = a_spill.cap;
            a_01.array = a_spill.array;
            a_01.cap = (int)local_b8;
            fmt_intFromArg(a_01,(int)pfVar15);
            (p_spill->fmt).prec = (int)pfVar4;
            (p_spill->fmt).fmtFlags.precPresent = local_c0._0_1_;
            if ((p_spill->fmt).prec < 0) {
              (p_spill->fmt).prec = 0;
              (p_spill->fmt).fmtFlags.precPresent = false;
            }
            pfVar14 = p_spill;
            if ((p_spill->fmt).fmtFlags.precPresent == false) {
              pfVar4 = (fmt_pp *)(p_spill->buf).len;
              pfVar12 = (fmt_pp *)((long)&(pfVar4->buf).len + 3);
              pfVar14 = (fmt_pp *)(p_spill->buf).cap;
              pfVar7 = (fmt_pp *)(p_spill->buf).array;
              pfVar15 = pfVar4;
              pfVar9 = pfVar14;
              pfVar13 = pfVar7;
              if (pfVar14 < pfVar12) {
                old_01.len._0_1_ = local_c0._0_1_;
                old_01.array = pfVar4;
                old_01.len._1_7_ = 0;
                old_01.cap = (int)p_spill;
                local_50 = pfVar4;
                local_48 = pfVar12;
                runtime_growslice((runtime__type *)&DAT_00225720,old_01,(int)pfVar12);
                pfVar15 = local_50;
                pfVar12 = local_48;
                pfVar9 = local_b0;
                pfVar13 = (fmt_pp *)a_spill.len;
                local_e0 = pfVar7;
                local_d8 = pfVar4;
                local_d0 = pfVar14;
              }
              puVar8 = (pfVar15->fmt).intbuf + (long)&pfVar13[-1].fmt.prec;
              puVar8[0] = 0x25;
              puVar8[1] = 0x21;
              puVar8[2] = 0x28;
              puVar8[3] = 0x42;
              puVar8[4] = 0x41;
              puVar8[5] = 0x44;
              puVar8[6] = 0x50;
              puVar8[7] = 0x52;
              *(undefined8 *)((undefined1 *)((long)&(pfVar13->buf).array + 3) + (long)pfVar15) =
                   0x2943455250444142;
              (p_spill->buf).len = (int)pfVar12;
              (p_spill->buf).cap = (int)pfVar9;
              if (runtime_writeBarrier._0_4_ == 0) {
                (p_spill->buf).array = (uint8 *)pfVar13;
                pfVar14 = p_spill;
              }
              else {
                pfVar14 = p_spill;
                runtime_gcWriteBarrierR9();
                pfVar5 = extraout_RDX_00;
              }
            }
            pfVar7 = (fmt_pp *)((long)&(local_b0->buf).array + 1);
            puVar8 = (uint8 *)0x0;
            pfVar15 = pfVar5;
            goto LAB_00570780;
          }
        }
        if ((long)local_b0 < end) {
          bVar21 = false;
          pfVar9 = (fmt_pp *)0x0;
          for (pfVar7 = local_b0; (long)pfVar7 < end;
              pfVar7 = (fmt_pp *)((long)&(pfVar7->buf).array + 1)) {
            if ((ulong)end <= pfVar7) {
                    /* WARNING: Subroutine does not return */
              runtime_panicIndex();
            }
            bVar2 = (pfVar7->fmt).intbuf[(long)&in_stack_00000010[-1].fmt.prec];
            if ((bVar2 < 0x30) || (0x39 < bVar2)) break;
            if ((fmt_pp *)0x1e8480 < pfVar9 + 5000) {
              bVar21 = false;
              pfVar9 = (fmt_pp *)0x0;
              pfVar7 = (fmt_pp *)end;
              break;
            }
            pfVar9 = (fmt_pp *)((ulong)(bVar2 - 0x30 & 0xff) + (long)pfVar9 * 10);
            bVar21 = true;
          }
        }
        else {
          bVar21 = false;
          pfVar9 = (fmt_pp *)0x0;
          pfVar7 = (fmt_pp *)end;
        }
        (p_spill->fmt).prec = (int)pfVar9;
        (p_spill->fmt).fmtFlags.precPresent = bVar21;
        pfVar15 = local_b8;
        pfVar14 = p_spill;
        local_e0 = pfVar12;
        if (bVar21 == false) {
          (p_spill->fmt).prec = 0;
          (p_spill->fmt).fmtFlags.precPresent = true;
        }
      }
    }
LAB_00570780:
    pfVar12 = pfVar5;
    if ((char)puVar8 == '\0') {
      local_d8 = in_stack_00000010;
      local_d0 = (fmt_pp *)end;
      format_02.len = (int)pfVar15;
      format_02.str = puVar8;
      mVar22 = fmt___pp__argNumber((fmt_pp *)a_spill.len,end,format_02,(int)in_stack_00000010,
                                   (int)pfVar9);
      puVar8 = (uint8 *)CONCAT71((int7)((ulong)puVar8 >> 8),mVar22.found);
      pfVar7 = local_b0;
      pfVar12 = local_b8;
      pfVar14 = p_spill;
      local_e0 = pfVar5;
    }
    local_c0 = (fmt_pp *)a_spill.len;
    local_48 = pfVar12;
    if (end <= (long)pfVar7) {
      pfVar4 = (fmt_pp *)(pfVar14->buf).len;
      pfVar12 = (fmt_pp *)((long)&(pfVar4->buf).len + 2);
      pfVar9 = (fmt_pp *)(pfVar14->buf).cap;
      pfVar7 = (fmt_pp *)(pfVar14->buf).array;
      pfVar5 = pfVar4;
      pfVar13 = pfVar7;
      if (pfVar9 < pfVar12) {
        old_09.len = (int)puVar8;
        old_09.array = pfVar4;
        old_09.cap = (int)pfVar15;
        local_58 = pfVar4;
        local_50 = pfVar12;
        runtime_growslice((runtime__type *)&DAT_00225720,old_09,(int)pfVar12);
        pfVar5 = local_58;
        pfVar12 = local_50;
        pfVar9 = local_b0;
        pfVar14 = p_spill;
        pfVar13 = (fmt_pp *)a_spill.len;
        local_e0 = pfVar7;
        local_d8 = pfVar4;
      }
      puVar8 = (pfVar5->fmt).intbuf + (long)&pfVar13[-1].fmt.prec;
      puVar8[0] = 0x25;
      puVar8[1] = 0x21;
      puVar8[2] = 0x28;
      puVar8[3] = 0x4e;
      puVar8[4] = 0x4f;
      puVar8[5] = 0x56;
      puVar8[6] = 0x45;
      puVar8[7] = 0x52;
      *(undefined2 *)((long)&(pfVar13->buf).len + (long)pfVar5) = 0x2942;
      (pfVar14->buf).len = (int)pfVar12;
      (pfVar14->buf).cap = (int)pfVar9;
      if (runtime_writeBarrier._0_4_ == 0) {
        (pfVar14->buf).array = (uint8 *)pfVar13;
        pfVar9 = local_48;
      }
      else {
        runtime_gcWriteBarrierBX();
        pfVar9 = extraout_RDX_05;
      }
      goto LAB_00570a29;
    }
    if ((ulong)end <= pfVar7) {
                    /* WARNING: Subroutine does not return */
      runtime_panicIndex();
    }
    bVar2 = (pfVar7->fmt).intbuf[(long)&in_stack_00000010[-1].fmt.prec];
    pfVar12 = (fmt_pp *)(ulong)bVar2;
    if (bVar2 < 0x80) {
      local_d0 = (fmt_pp *)0x1;
    }
    else {
      local_e0 = (fmt_pp *)(end - (long)pfVar7);
      s.len = (in_stack_00000010->fmt).intbuf + ((-(long)local_e0 >> 0x3f & (ulong)pfVar7) - 0x68);
      s.str = (uint8 *)pfVar7;
      unicode_utf8_DecodeRuneInString(s);
      pfVar12 = (fmt_pp *)((ulong)local_d8 & 0xffffffff);
      pfVar14 = p_spill;
    }
    pfVar4 = (fmt_pp *)((pfVar7->fmt).intbuf + (long)&local_d0[-1].fmt.prec);
    iVar16 = (int)pfVar12;
    if (iVar16 == 0x25) {
      pfVar9 = (fmt_pp *)(pfVar14->buf).len;
      pfVar7 = (fmt_pp *)(pfVar14->buf).array;
      pfVar12 = pfVar9;
      if ((undefined1 *)(pfVar14->buf).cap < (undefined1 *)((long)&(pfVar9->buf).array + 1U)) {
        old_02.len = (int)local_d0;
        old_02.array = (void *)end;
        old_02.cap = (int)pfVar15;
        runtime_growslice((runtime__type *)&DAT_00225720,old_02,(int)in_stack_00000010);
        (p_spill->buf).cap = (int)local_b0;
        local_e0 = pfVar7;
        pfVar12 = local_b8;
        local_d8 = pfVar9;
        if (runtime_writeBarrier._0_4_ == 0) {
          (p_spill->buf).array = (uint8 *)a_spill.len;
          pfVar14 = p_spill;
          pfVar7 = (fmt_pp *)a_spill.len;
        }
        else {
          pfVar14 = p_spill;
          runtime_gcWriteBarrier();
          pfVar7 = extraout_RAX;
        }
      }
      (pfVar14->buf).len = (int)((long)&(pfVar12->buf).array + 1);
      (pfVar12->fmt).intbuf[(long)&pfVar7[-1].fmt.prec] = 0x25;
      pfVar9 = local_48;
    }
    else if (pfVar14->goodArgNum == false) {
      local_e0 = (fmt_pp *)CONCAT44(local_e0._4_4_,iVar16);
      fmt___pp__badArgNum(pfVar7,(int32)end);
      pfVar9 = local_48;
      pfVar14 = p_spill;
    }
    else if ((long)local_48 < a_spill.len) {
      if (iVar16 == 0x76) {
        (pfVar14->fmt).fmtFlags.sharpV = (pfVar14->fmt).fmtFlags.sharp;
        (pfVar14->fmt).fmtFlags.sharp = false;
        bVar21 = (pfVar14->fmt).fmtFlags.plus;
        pfVar15 = (fmt_pp *)(ulong)bVar21;
        (pfVar14->fmt).fmtFlags.plusV = bVar21;
        (pfVar14->fmt).fmtFlags.plus = false;
      }
      if ((ulong)a_spill.len <= local_48) {
                    /* WARNING: Subroutine does not return */
        runtime_panicIndex();
      }
      local_e0 = (fmt_pp *)a_spill.array[(long)local_48]._type;
      local_d8 = a_spill.array[(long)local_48].data;
      arg_00.data = a_spill.array;
      arg_00._type = (runtime__type *)local_e0;
      fmt___pp__printArg(pfVar7,arg_00,(int32)pfVar15);
      pfVar9 = (fmt_pp *)((long)&(local_48->buf).array + 1);
      pfVar14 = p_spill;
    }
    else {
      local_e0 = (fmt_pp *)CONCAT44(local_e0._4_4_,iVar16);
      fmt___pp__missingArg(pfVar7,(int32)end);
      pfVar9 = local_48;
      pfVar14 = p_spill;
    }
  } while( true );
}

