
/* std::basic_format_context<std::__format::_Sink_iter<char>, char>::iterator
   std::__format::__formatter_int<char>::format<__int128, std::__format::_Sink_iter<char>
   >(__int128, std::basic_format_context<std::__format::_Sink_iter<char>, char>&) const */

void std::__format::__formatter_int<char>::format<__int128,std::__format::_Sink_iter<char>>
               (__int128 param_1,basic_format_context *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  byte bVar5;
  int iVar6;
  char *pcVar7;
  undefined8 in_RCX;
  ulong uVar8;
  byte bVar9;
  ulong in_RDX;
  char *pcVar10;
  long lVar11;
  undefined1 *puVar12;
  ulong uVar13;
  ulong in_RSI;
  uint uVar14;
  ulong uVar15;
  char *pcVar16;
  uint uVar17;
  ulong uVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auVar21 [16];
  char local_198 [207];
  char acStack_c9 [132];
  char local_45 [21];
  
  bVar5 = (byte)param_2[1] & 0x78;
  if (bVar5 == 0x38) {
    if ((SBORROW8(0,in_RDX) != SBORROW8(-in_RDX,(ulong)(0x7f < in_RSI))) ==
        (long)(-in_RDX - (ulong)(0x7f < in_RSI)) < 0) {
      local_198[0] = (char)in_RSI;
      __write_padded_as_spec<char,std::__format::_Sink_iter<char>>
                ((__format *)0x1,local_198,1,in_RCX,param_2,1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    __throw_format_error("format error: integer not representable as character");
  }
  if ((long)in_RDX < 0) {
    bVar19 = in_RSI != 0;
    in_RSI = -in_RSI;
    uVar18 = -(in_RDX + bVar19);
    bVar9 = (byte)param_2[1] >> 3 & 0xf;
    if (bVar9 == 4) {
      puVar12 = &DAT_0011704f;
      lVar11 = 1;
      goto LAB_00114726;
    }
    if (4 < bVar9) {
      puVar12 = &DAT_00117190;
      if (bVar5 != 0x28) goto LAB_0011414f;
      puVar12 = &DAT_0011718d;
LAB_00114028:
      if (uVar18 == 0) {
        lVar11 = 0x3f;
        if (in_RSI != 0) {
          for (; in_RSI >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar17 = 0x43 - ((uint)lVar11 ^ 0x3f) >> 2;
        builtin_strncpy(local_198,"0123456789abcdef",0x10);
        uVar8 = 0;
        if (0xff < in_RSI) goto LAB_0011407a;
      }
      else {
        lVar11 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar17 = 0x83 - ((uint)lVar11 ^ 0x3f) >> 2;
        builtin_strncpy(local_198,"0123456789abcdef",0x10);
LAB_0011407a:
        uVar14 = uVar17 - 1;
        uVar8 = uVar18;
        do {
          acStack_c9[(ulong)uVar14 + 4] = local_198[(uint)in_RSI & 0xf];
          uVar18 = in_RSI >> 4;
          in_RSI = in_RSI >> 8 | uVar8 << 0x38;
          uVar8 = uVar8 >> 8;
          acStack_c9[(ulong)(uVar14 - 1) + 4] = local_198[(uint)uVar18 & 0xf];
          uVar14 = uVar14 - 2;
        } while (uVar8 != 0 || -uVar8 < (ulong)(0xff < in_RSI));
      }
      builtin_strncpy(local_198,"0123456789abcdef",0x10);
      if (uVar8 == 0 && (ulong)(0xf < in_RSI) <= -uVar8) {
        acStack_c9[4] = local_198[in_RSI];
      }
      else {
        acStack_c9[5] = local_198[(uint)in_RSI & 0xf];
        acStack_c9[4] = local_198[in_RSI >> 4 | uVar8 << 0x3c];
      }
      pcVar7 = acStack_c9 + (ulong)uVar17 + 4;
      lVar11 = 2;
      if (bVar5 == 0x30) goto LAB_001148c5;
      goto LAB_00114218;
    }
    if (1 < bVar9) goto LAB_0011417d;
LAB_00113fca:
    auVar21._8_8_ = uVar18;
    auVar21._0_8_ = in_RSI;
    uVar8 = in_RSI;
    uVar15 = uVar18;
    if (uVar18 == 0 && (ulong)(9 < in_RSI) <= -uVar18) {
      builtin_strncpy(local_198,
                      "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                      ,0xc9);
      uVar17 = 1;
LAB_00114676:
      builtin_strncpy(local_198,
                      "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                      ,0xc9);
      acStack_c9[4] = (char)uVar8 + '0';
      if (uVar15 != 0 || -uVar15 < (ulong)(9 < uVar8)) {
        acStack_c9[5] = local_198[uVar8 * 2 + 1];
        acStack_c9[4] = local_198[uVar8 * 2];
      }
      pcVar7 = acStack_c9 + (ulong)uVar17 + 4;
    }
    else {
      uVar17 = 1;
      do {
        lVar11 = auVar21._8_8_;
        uVar13 = auVar21._0_8_;
        if (lVar11 == 0 && (ulong)(99 < uVar13) <= (ulong)-lVar11) {
          uVar17 = uVar17 + 1;
          break;
        }
        if (lVar11 == 0 && (ulong)(999 < uVar13) <= (ulong)-lVar11) {
          uVar17 = uVar17 + 2;
          break;
        }
        if (lVar11 == 0 && (ulong)(9999 < uVar13) <= (ulong)-lVar11) {
          uVar17 = uVar17 + 3;
          break;
        }
        auVar21 = __udivti3(uVar13,lVar11,10000,0);
        uVar17 = uVar17 + 4;
      } while (lVar11 != 0 || (ulong)-lVar11 < (ulong)(99999 < uVar13));
      if (uVar17 < 0x81) {
        builtin_strncpy(local_198,
                        "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                        ,0xc9);
        uVar14 = uVar17 - 1;
        if (uVar18 != 0 || -uVar18 < (ulong)(99 < in_RSI)) {
          do {
            uVar8 = (in_RSI >> 0x3c | (uVar18 & 0xffffffffffffff) << 4) +
                    (in_RSI & 0xfffffffffffffff) + (uVar18 >> 0x38);
            auVar4._8_8_ = 0;
            auVar4._0_8_ = uVar8;
            lVar11 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar4,8);
            uVar8 = uVar8 + (lVar11 + (uVar8 - lVar11 >> 1) >> 4) * -0x19;
            uVar15 = in_RSI - uVar8;
            auVar2._8_8_ = 0;
            auVar2._0_8_ = uVar15;
            lVar11 = (in_RSI + (SUB168(auVar2 * ZEXT816(0x8f5c28f5c28f5c29),0) >> 2) * -100) * 2;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar15;
            uVar15 = (uVar18 - (in_RSI < uVar8)) * -0x70a3d70a3d70a3d7 + uVar15 * 0x28f5c28f5c28f5c2
                     + SUB168(auVar3 * ZEXT816(0x8f5c28f5c28f5c29),8);
            uVar8 = SUB168(auVar3 * ZEXT816(0x8f5c28f5c28f5c29),0) >> 2 | uVar15 << 0x3e;
            uVar15 = uVar15 >> 2;
            acStack_c9[(ulong)uVar14 + 4] = local_198[lVar11 + 1];
            acStack_c9[(ulong)(uVar14 - 1) + 4] = local_198[lVar11];
            uVar14 = uVar14 - 2;
            bVar19 = 9999 < in_RSI;
            bVar20 = uVar18 != 0;
            uVar13 = -uVar18;
            in_RSI = uVar8;
            uVar18 = uVar15;
          } while (bVar20 || uVar13 < bVar19);
        }
        goto LAB_00114676;
      }
      pcVar7 = local_45;
    }
    pcVar16 = acStack_c9 + 4;
LAB_0011422e:
    pcVar10 = pcVar16 + -1;
    if ((long)in_RDX < 0) {
      pcVar16[-1] = '-';
      pcVar16 = pcVar10;
      goto LAB_00114933;
    }
  }
  else {
    bVar9 = (byte)param_2[1] >> 3 & 0xf;
    uVar18 = in_RDX;
    if (bVar9 == 4) {
      if (in_RSI == 0 && in_RDX == 0) {
        puVar12 = (undefined1 *)0x0;
        lVar11 = 0;
      }
      else {
        puVar12 = &DAT_0011704f;
        lVar11 = 1;
      }
LAB_00114726:
      if (in_RSI == 0 && uVar18 == 0) {
        acStack_c9[4] = '0';
        pcVar7 = acStack_c9 + 5;
      }
      else {
        if (uVar18 == 0) {
          lVar1 = 0x3f;
          if (in_RSI != 0) {
            for (; in_RSI >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          uVar17 = 0x42 - ((uint)lVar1 ^ 0x3f);
          uVar14 = uVar17 / 3;
          uVar8 = 0;
          if (0x3f < in_RSI) goto LAB_0011476f;
        }
        else {
          lVar1 = 0x3f;
          if (uVar18 != 0) {
            for (; uVar18 >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          uVar17 = 0x82 - ((uint)lVar1 ^ 0x3f);
          uVar14 = uVar17 / 3;
LAB_0011476f:
          uVar17 = uVar17 / 3 - 1;
          uVar8 = uVar18;
          do {
            acStack_c9[(ulong)uVar17 + 4] = ((byte)in_RSI & 7) + 0x30;
            uVar18 = in_RSI >> 3;
            in_RSI = in_RSI >> 6 | uVar8 << 0x3a;
            uVar8 = uVar8 >> 6;
            acStack_c9[(ulong)(uVar17 - 1) + 4] = ((byte)uVar18 & 7) + 0x30;
            uVar17 = uVar17 - 2;
          } while (uVar8 != 0 || -uVar8 < (ulong)(0x3f < in_RSI));
        }
        bVar5 = (byte)in_RSI;
        if (uVar8 != 0 || -uVar8 < (ulong)(7 < in_RSI)) {
          acStack_c9[5] = (bVar5 & 7) + 0x30;
          bVar5 = (byte)(in_RSI >> 3);
        }
        acStack_c9[4] = bVar5 + 0x30;
        pcVar7 = acStack_c9 + (ulong)uVar14 + 4;
      }
LAB_00114218:
      if ((((byte)*param_2 & 0x10) == 0) || (lVar11 == 0)) {
        pcVar16 = acStack_c9 + 4;
      }
      else {
        pcVar16 = acStack_c9 + (4 - lVar11);
        if ((uint)lVar11 != 0) {
          uVar17 = 0;
          do {
            pcVar16[uVar17] = puVar12[uVar17];
            uVar17 = uVar17 + 1;
          } while (uVar17 < (uint)lVar11);
        }
      }
      goto LAB_0011422e;
    }
    if (4 < bVar9) {
      puVar12 = &DAT_00117190;
      if (bVar5 == 0x28) {
        puVar12 = &DAT_0011718d;
      }
LAB_0011414f:
      if (in_RSI != 0 || uVar18 != 0) goto LAB_00114028;
      acStack_c9[4] = '0';
      if (bVar5 != 0x30) {
        lVar11 = 2;
        pcVar7 = acStack_c9 + 5;
        goto LAB_00114218;
      }
      pcVar7 = acStack_c9 + 5;
LAB_001148c5:
      pcVar16 = acStack_c9 + 4;
      do {
        iVar6 = toupper((int)*pcVar16);
        *pcVar16 = (char)iVar6;
        pcVar16 = pcVar16 + 1;
      } while (pcVar16 != pcVar7);
      lVar11 = 2;
      goto LAB_00114218;
    }
    if (1 < bVar9) {
LAB_0011417d:
      puVar12 = &DAT_0011718a;
      if (bVar5 == 0x10) {
        puVar12 = &DAT_00117187;
      }
      if (in_RSI == 0 && uVar18 == 0) {
        acStack_c9[4] = '0';
        pcVar7 = acStack_c9 + 5;
      }
      else {
        if (uVar18 == 0) {
          lVar11 = 0x3f;
          if (in_RSI != 0) {
            for (; in_RSI >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          iVar6 = ((uint)lVar11 ^ 0x3f) + 0x40;
          uVar14 = 0x80 - iVar6;
          uVar17 = 0x7f - iVar6;
          if (uVar17 != 0) goto LAB_001141c1;
        }
        else {
          lVar11 = 0x3f;
          if (uVar18 != 0) {
            for (; uVar18 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          uVar17 = (uint)lVar11 ^ 0x3f;
          uVar14 = 0x80 - uVar17;
          uVar17 = 0x7f - uVar17;
LAB_001141c1:
          pcVar7 = acStack_c9 + (ulong)uVar17 + 1;
          do {
            pcVar7[3] = ((byte)in_RSI & 1) + 0x30;
            in_RSI = in_RSI >> 1 | uVar18 << 0x3f;
            uVar18 = uVar18 >> 1;
            pcVar7 = pcVar7 + -1;
          } while (pcVar7 != acStack_c9 + ((ulong)uVar17 - (ulong)(uVar17 - 1)));
        }
        pcVar7 = acStack_c9 + (ulong)uVar14 + 4;
        acStack_c9[4] = '1';
      }
      lVar11 = 2;
      goto LAB_00114218;
    }
    if (in_RSI != 0 || in_RDX != 0) goto LAB_00113fca;
    acStack_c9[4] = '0';
    pcVar7 = acStack_c9 + 5;
    pcVar16 = acStack_c9 + 4;
    pcVar10 = acStack_c9 + 3;
  }
  bVar5 = (byte)*param_2 >> 2 & 3;
  if (bVar5 == 1) {
    pcVar16[-1] = '+';
    pcVar16 = pcVar10;
  }
  else if (bVar5 == 3) {
    pcVar16[-1] = ' ';
    pcVar16 = pcVar10;
  }
LAB_00114933:
  _M_format_int<std::__format::_Sink_iter<char>>
            (param_2,(long)pcVar7 - (long)pcVar16,pcVar16,acStack_c9 + (4 - (long)pcVar16),in_RCX);
  return;
}

