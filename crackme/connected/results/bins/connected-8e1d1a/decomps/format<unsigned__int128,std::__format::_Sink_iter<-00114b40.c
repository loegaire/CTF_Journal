
/* std::basic_format_context<std::__format::_Sink_iter<char>, char>::iterator
   std::__format::__formatter_int<char>::format<unsigned __int128, std::__format::_Sink_iter<char>
   >(unsigned __int128, std::basic_format_context<std::__format::_Sink_iter<char>, char>&) const */

void std::__format::__formatter_int<char>::format<unsigned__int128,std::__format::_Sink_iter<char>>
               (uint param_1,basic_format_context *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  byte bVar4;
  int iVar5;
  basic_format_context *pbVar6;
  undefined8 in_RCX;
  long lVar7;
  ulong uVar8;
  byte bVar9;
  uint uVar10;
  ulong in_RDX;
  ulong uVar11;
  undefined1 *puVar12;
  uint uVar13;
  undefined4 in_register_0000003c;
  byte *pbVar14;
  basic_format_context *pbVar15;
  bool bVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined8 local_d7;
  basic_format_context abStack_c9 [132];
  basic_format_context local_45 [21];
  
  auVar18._8_8_ = in_RDX;
  auVar18._0_8_ = param_2;
  pbVar14 = (byte *)CONCAT44(in_register_0000003c,param_1);
  bVar4 = pbVar14[1] & 0x78;
  if (bVar4 == 0x38) {
    if (in_RDX == 0 && (ulong)((basic_format_context *)0x7f < param_2) <= -in_RDX) {
      local_198 = CONCAT71(local_198._1_7_,(char)param_2);
      __write_padded_as_spec<char,std::__format::_Sink_iter<char>>
                ((__format *)0x1,&local_198,1,in_RCX,pbVar14,1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    __throw_format_error("format error: integer not representable as character");
  }
  bVar9 = pbVar14[1] >> 3 & 0xf;
  if (bVar9 == 4) {
    if (param_2 == (basic_format_context *)0x0 && in_RDX == 0) {
      abStack_c9[4] = (basic_format_context)0x30;
      pbVar6 = abStack_c9 + 5;
      pbVar15 = abStack_c9 + 4;
      goto LAB_00114c4e;
    }
    if (in_RDX == 0) {
      lVar7 = 0x3f;
      if (param_2 != (basic_format_context *)0x0) {
        for (; (ulong)param_2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uVar13 = 0x42 - ((uint)lVar7 ^ 0x3f);
      uVar10 = uVar13 / 3;
      uVar8 = 0;
      if ((basic_format_context *)0x3f < param_2) goto LAB_001154b1;
    }
    else {
      lVar7 = 0x3f;
      if (in_RDX != 0) {
        for (; in_RDX >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uVar13 = 0x82 - ((uint)lVar7 ^ 0x3f);
      uVar10 = uVar13 / 3;
LAB_001154b1:
      uVar13 = uVar13 / 3 - 1;
      do {
        abStack_c9[(ulong)uVar13 + 4] = (basic_format_context)(((byte)param_2 & 7) + 0x30);
        uVar8 = (ulong)param_2 >> 3;
        param_2 = (basic_format_context *)((ulong)param_2 >> 6 | in_RDX << 0x3a);
        in_RDX = in_RDX >> 6;
        abStack_c9[(ulong)(uVar13 - 1) + 4] = (basic_format_context)(((byte)uVar8 & 7) + 0x30);
        uVar13 = uVar13 - 2;
        uVar8 = in_RDX;
      } while (in_RDX != 0 || -in_RDX < (ulong)((basic_format_context *)0x3f < param_2));
    }
    bVar4 = (byte)param_2;
    if (uVar8 != 0 || -uVar8 < (ulong)((basic_format_context *)0x7 < param_2)) {
      abStack_c9[5] = (basic_format_context)((bVar4 & 7) + 0x30);
      bVar4 = (byte)((ulong)param_2 >> 3);
    }
    abStack_c9[4] = (basic_format_context)(bVar4 + 0x30);
    pbVar6 = abStack_c9 + (ulong)uVar10 + 4;
    puVar12 = &DAT_0011704f;
    lVar7 = 1;
  }
  else if (bVar9 < 5) {
    if (bVar9 < 2) {
      if (param_2 == (basic_format_context *)0x0 && in_RDX == 0) {
        abStack_c9[4] = (basic_format_context)0x30;
        pbVar6 = abStack_c9 + 5;
      }
      else {
        pbVar6 = param_2;
        uVar8 = in_RDX;
        if (in_RDX == 0 && (ulong)((basic_format_context *)0x9 < param_2) <= -in_RDX) {
          local_198 = 0x3330323031303030;
          local_190 = 0x3730363035303430;
          local_188 = 0x3131303139303830;
          local_180 = 0x3531343133313231;
          local_178 = 0x3931383137313631;
          local_170 = 0x3332323231323032;
          local_168 = 0x3732363235323432;
          local_160 = 0x3133303339323832;
          local_158 = 0x3533343333333233;
          local_150 = 0x3933383337333633;
          local_148 = 0x3334323431343034;
          local_140 = 0x3734363435343434;
          local_138 = 0x3135303539343834;
          local_130 = 0x3535343533353235;
          local_128 = 0x3935383537353635;
          local_120 = 0x3336323631363036;
          local_118 = 0x3736363635363436;
          local_110 = 0x3137303739363836;
          local_108 = 0x3537343733373237;
          local_100 = 0x3937383737373637;
          local_f8 = 0x3338323831383038;
          local_f0 = 0x3738363835383438;
          local_e8 = 0x3139303939383838;
          local_e0 = 0x39;
          uStack_df = 0x35393439333932;
          uStack_d8 = 0x39;
          local_d7 = 0x39393839373936;
          uVar13 = 1;
        }
        else {
          uVar13 = 1;
          do {
            lVar7 = auVar18._8_8_;
            uVar11 = auVar18._0_8_;
            if (lVar7 == 0 && (ulong)(99 < uVar11) <= (ulong)-lVar7) {
              uVar13 = uVar13 + 1;
              break;
            }
            if (lVar7 == 0 && (ulong)(999 < uVar11) <= (ulong)-lVar7) {
              uVar13 = uVar13 + 2;
              break;
            }
            if (lVar7 == 0 && (ulong)(9999 < uVar11) <= (ulong)-lVar7) {
              uVar13 = uVar13 + 3;
              break;
            }
            auVar18 = __udivti3(uVar11,lVar7,10000,0);
            uVar13 = uVar13 + 4;
          } while (lVar7 != 0 || (ulong)-lVar7 < (ulong)(99999 < uVar11));
          if (0x80 < uVar13) {
            pbVar6 = local_45;
            goto LAB_00114d70;
          }
          local_198 = 0x3330323031303030;
          local_190 = 0x3730363035303430;
          local_188 = 0x3131303139303830;
          local_180 = 0x3531343133313231;
          local_178 = 0x3931383137313631;
          local_170 = 0x3332323231323032;
          local_168 = 0x3732363235323432;
          local_160 = 0x3133303339323832;
          local_158 = 0x3533343333333233;
          local_150 = 0x3933383337333633;
          local_148 = 0x3334323431343034;
          local_140 = 0x3734363435343434;
          local_138 = 0x3135303539343834;
          local_130 = 0x3535343533353235;
          local_128 = 0x3935383537353635;
          local_120 = 0x3336323631363036;
          local_118 = 0x3736363635363436;
          local_110 = 0x3137303739363836;
          local_108 = 0x3537343733373237;
          local_100 = 0x3937383737373637;
          local_f8 = 0x3338323831383038;
          local_f0 = 0x3738363835383438;
          local_e8 = 0x3139303939383838;
          local_e0 = 0x39;
          uStack_df = 0x35393439333932;
          uStack_d8 = 0x39;
          local_d7 = 0x39393839373936;
          uVar10 = uVar13 - 1;
          if (in_RDX != 0 || -in_RDX < (ulong)((basic_format_context *)0x63 < param_2)) {
            do {
              uVar8 = ((ulong)param_2 & 0xfffffffffffffff) +
                      ((ulong)param_2 >> 0x3c | (in_RDX & 0xffffffffffffff) << 4) + (in_RDX >> 0x38)
              ;
              auVar3._8_8_ = 0;
              auVar3._0_8_ = uVar8;
              lVar7 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar3,8);
              pbVar6 = (basic_format_context *)(uVar8 + (lVar7 + (uVar8 - lVar7 >> 1) >> 4) * -0x19)
              ;
              uVar8 = (long)param_2 - (long)pbVar6;
              auVar1._8_8_ = 0;
              auVar1._0_8_ = uVar8;
              auVar2._8_8_ = 0;
              auVar2._0_8_ = uVar8;
              uVar8 = (in_RDX - (param_2 < pbVar6)) * -0x70a3d70a3d70a3d7 +
                      uVar8 * 0x28f5c28f5c28f5c2 + SUB168(auVar2 * ZEXT816(0x8f5c28f5c28f5c29),8);
              pbVar6 = (basic_format_context *)
                       (SUB168(auVar2 * ZEXT816(0x8f5c28f5c28f5c29),0) >> 2 | uVar8 << 0x3e);
              uVar8 = uVar8 >> 2;
              abStack_c9[(ulong)uVar10 + 4] =
                   *(basic_format_context *)
                    ((long)&local_198 +
                    (long)(param_2 + (SUB168(auVar1 * ZEXT816(0x8f5c28f5c28f5c29),0) >> 2) * -100) *
                    2 + 1);
              abStack_c9[(ulong)(uVar10 - 1) + 4] =
                   *(basic_format_context *)
                    ((long)&local_198 +
                    (long)(param_2 + (SUB168(auVar1 * ZEXT816(0x8f5c28f5c28f5c29),0) >> 2) * -100) *
                    2);
              uVar10 = uVar10 - 2;
              bVar16 = (basic_format_context *)0x270f < param_2;
              bVar17 = in_RDX != 0;
              uVar11 = -in_RDX;
              param_2 = pbVar6;
              in_RDX = uVar8;
            } while (bVar17 || uVar11 < bVar16);
          }
        }
        uStack_d8 = 0x39;
        uStack_df = 0x35393439333932;
        local_e0 = 0x39;
        local_d7 = 0x39393839373936;
        local_e8 = 0x3139303939383838;
        local_f0 = 0x3738363835383438;
        local_f8 = 0x3338323831383038;
        local_100 = 0x3937383737373637;
        local_108 = 0x3537343733373237;
        local_110 = 0x3137303739363836;
        local_118 = 0x3736363635363436;
        local_120 = 0x3336323631363036;
        local_128 = 0x3935383537353635;
        local_130 = 0x3535343533353235;
        local_138 = 0x3135303539343834;
        local_140 = 0x3734363435343434;
        local_148 = 0x3334323431343034;
        local_150 = 0x3933383337333633;
        local_158 = 0x3533343333333233;
        local_160 = 0x3133303339323832;
        local_168 = 0x3732363235323432;
        local_170 = 0x3332323231323032;
        local_178 = 0x3931383137313631;
        local_180 = 0x3531343133313231;
        local_188 = 0x3131303139303830;
        local_190 = 0x3730363035303430;
        local_198 = 0x3330323031303030;
        abStack_c9[4] = (basic_format_context)((char)pbVar6 + '0');
        if (uVar8 != 0 || -uVar8 < (ulong)((basic_format_context *)0x9 < pbVar6)) {
          abStack_c9[5] = (basic_format_context)*(char *)((long)&local_198 + (long)pbVar6 * 2 + 1);
          abStack_c9[4] = *(basic_format_context *)((long)&local_198 + (long)pbVar6 * 2);
        }
        pbVar6 = abStack_c9 + (ulong)uVar13 + 4;
      }
LAB_00114d70:
      pbVar15 = abStack_c9 + 4;
      goto LAB_00114c4e;
    }
    puVar12 = &DAT_00117187;
    if (bVar4 != 0x10) {
      puVar12 = &DAT_0011718a;
    }
    if (param_2 == (basic_format_context *)0x0 && in_RDX == 0) {
      abStack_c9[4] = (basic_format_context)0x30;
      pbVar6 = abStack_c9 + 5;
    }
    else {
      if (in_RDX == 0) {
        lVar7 = 0x3f;
        if (param_2 != (basic_format_context *)0x0) {
          for (; (ulong)param_2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar5 = ((uint)lVar7 ^ 0x3f) + 0x40;
        uVar13 = 0x80 - iVar5;
        uVar10 = 0x7f - iVar5;
        if (uVar10 != 0) goto LAB_00114bd4;
      }
      else {
        lVar7 = 0x3f;
        if (in_RDX != 0) {
          for (; in_RDX >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        uVar10 = (uint)lVar7 ^ 0x3f;
        uVar13 = 0x80 - uVar10;
        uVar10 = 0x7f - uVar10;
LAB_00114bd4:
        pbVar6 = abStack_c9 + (ulong)uVar10 + 1;
        do {
          pbVar6[3] = (basic_format_context)(((byte)param_2 & 1) + 0x30);
          param_2 = (basic_format_context *)((ulong)param_2 >> 1 | in_RDX << 0x3f);
          in_RDX = in_RDX >> 1;
          pbVar6 = pbVar6 + -1;
        } while (pbVar6 != abStack_c9 + ((ulong)uVar10 - (ulong)(uVar10 - 1)));
      }
      pbVar6 = abStack_c9 + (ulong)uVar13 + 4;
      abStack_c9[4] = (basic_format_context)0x31;
    }
    lVar7 = 2;
  }
  else {
    puVar12 = &DAT_0011718d;
    if (bVar4 != 0x28) {
      puVar12 = &DAT_00117190;
    }
    if (param_2 == (basic_format_context *)0x0 && in_RDX == 0) {
      abStack_c9[4] = (basic_format_context)0x30;
      if (bVar4 != 0x30) {
        lVar7 = 2;
        pbVar6 = abStack_c9 + 5;
        goto LAB_00114c38;
      }
      pbVar6 = abStack_c9 + 5;
    }
    else {
      if (in_RDX == 0) {
        lVar7 = 0x3f;
        if (param_2 != (basic_format_context *)0x0) {
          for (; (ulong)param_2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        uVar13 = 0x43 - ((uint)lVar7 ^ 0x3f) >> 2;
        local_198 = 0x3736353433323130;
        local_190 = 0x6665646362613938;
        uVar8 = 0;
        if ((basic_format_context *)0xff < param_2) goto LAB_001152da;
      }
      else {
        lVar7 = 0x3f;
        if (in_RDX != 0) {
          for (; in_RDX >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        uVar13 = 0x83 - ((uint)lVar7 ^ 0x3f) >> 2;
        local_198 = 0x3736353433323130;
        local_190 = 0x6665646362613938;
LAB_001152da:
        uVar10 = uVar13 - 1;
        do {
          abStack_c9[(ulong)uVar10 + 4] =
               *(basic_format_context *)((long)&local_198 + (ulong)((uint)param_2 & 0xf));
          uVar8 = (ulong)param_2 >> 4;
          param_2 = (basic_format_context *)((ulong)param_2 >> 8 | in_RDX << 0x38);
          in_RDX = in_RDX >> 8;
          abStack_c9[(ulong)(uVar10 - 1) + 4] =
               *(basic_format_context *)((long)&local_198 + (ulong)((uint)uVar8 & 0xf));
          uVar10 = uVar10 - 2;
          uVar8 = in_RDX;
        } while (in_RDX != 0 || -in_RDX < (ulong)((basic_format_context *)0xff < param_2));
      }
      local_190 = 0x6665646362613938;
      local_198 = 0x3736353433323130;
      if (uVar8 == 0 && (ulong)((basic_format_context *)0xf < param_2) <= -uVar8) {
        abStack_c9[4] = *(basic_format_context *)((long)&local_198 + (long)param_2);
      }
      else {
        abStack_c9[5] =
             (basic_format_context)*(char *)((long)&local_198 + (ulong)((uint)param_2 & 0xf));
        abStack_c9[4] =
             *(basic_format_context *)((long)&local_198 + ((ulong)param_2 >> 4 | uVar8 << 0x3c));
      }
      pbVar6 = abStack_c9 + (ulong)uVar13 + 4;
      lVar7 = 2;
      if (bVar4 != 0x30) goto LAB_00114c38;
    }
    pbVar15 = abStack_c9 + 4;
    do {
      iVar5 = toupper((int)(char)*pbVar15);
      *pbVar15 = SUB41(iVar5,0);
      pbVar15 = pbVar15 + 1;
    } while (pbVar15 != pbVar6);
    lVar7 = 2;
  }
LAB_00114c38:
  if (((*pbVar14 & 0x10) == 0) || (lVar7 == 0)) {
    pbVar15 = abStack_c9 + 4;
  }
  else {
    pbVar15 = abStack_c9 + (4 - lVar7);
    if ((uint)lVar7 != 0) {
      uVar13 = 0;
      do {
        pbVar15[uVar13] = *(basic_format_context *)(puVar12 + uVar13);
        uVar13 = uVar13 + 1;
      } while (uVar13 < (uint)lVar7);
    }
  }
LAB_00114c4e:
  bVar4 = *pbVar14 >> 2 & 3;
  if (bVar4 == 1) {
    pbVar15[-1] = (basic_format_context)0x2b;
    pbVar15 = pbVar15 + -1;
  }
  else if (bVar4 == 3) {
    pbVar15[-1] = (basic_format_context)0x20;
    pbVar15 = pbVar15 + -1;
  }
  _M_format_int<std::__format::_Sink_iter<char>>
            (pbVar14,(long)pbVar6 - (long)pbVar15,pbVar15,abStack_c9 + (4 - (long)pbVar15),in_RCX);
  return;
}

