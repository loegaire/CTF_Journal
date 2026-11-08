
/* std::basic_format_context<std::__format::_Sink_iter<char>, char>::iterator
   std::__format::__formatter_int<char>::format<long long, std::__format::_Sink_iter<char> >(long
   long, std::basic_format_context<std::__format::_Sink_iter<char>, char>&) const */

void __thiscall
std::__format::__formatter_int<char>::format<long_long,std::__format::_Sink_iter<char>>
          (__formatter_int<char> *this,longlong param_1,basic_format_context *param_2)

{
  bool bVar1;
  long lVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  char *pcVar10;
  uint uVar11;
  ulong uVar12;
  byte bVar13;
  char *pcVar14;
  undefined1 *puVar15;
  char local_158 [207];
  char acStack_89 [68];
  char local_45 [21];
  
  bVar13 = (byte)this[1] & 0x78;
  if (bVar13 == 0x38) {
    if (param_1 + 0x80U < 0x100) {
      local_158[0] = (char)param_1;
      __write_padded_as_spec<char,std::__format::_Sink_iter<char>>
                ((__format *)0x1,local_158,1,param_2,this,1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    __throw_format_error("format error: integer not representable as character");
  }
  if (param_1 < 0) {
    uVar12 = -param_1;
    bVar4 = (byte)this[1] >> 3 & 0xf;
    if (bVar4 == 4) {
      puVar15 = &DAT_0011704f;
      lVar8 = 1;
      goto LAB_00113350;
    }
    if (4 < bVar4) {
      puVar15 = &DAT_00117190;
      if (bVar13 != 0x28) goto LAB_00112f7f;
      puVar15 = &DAT_0011718d;
LAB_00112f19:
      pcVar6 = (char *)__detail::__to_chars_16<unsigned_long>(acStack_89 + 4,local_45,uVar12);
      lVar8 = 2;
      if (bVar13 == 0x30) {
        if (pcVar6 != acStack_89 + 4) goto LAB_00113469;
        lVar8 = 2;
        pcVar6 = acStack_89 + 4;
      }
      goto LAB_00113033;
    }
    if (1 < bVar4) goto LAB_00112fa8;
LAB_00112ee4:
    if (uVar12 < 10) {
      builtin_strncpy(local_158,
                      "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                      ,0xc9);
      uVar11 = 1;
LAB_001132e8:
      builtin_strncpy(local_158,
                      "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                      ,0xc9);
      acStack_89[4] = (char)uVar12 + '0';
      if (9 < uVar12) {
        acStack_89[5] = local_158[uVar12 * 2 + 1];
        acStack_89[4] = local_158[uVar12 * 2];
      }
      pcVar6 = acStack_89 + (ulong)uVar11 + 4;
    }
    else {
      uVar11 = 1;
      uVar9 = uVar12;
      do {
        if (uVar9 < 100) {
          uVar11 = uVar11 + 1;
          break;
        }
        if (uVar9 < 1000) {
          uVar11 = uVar11 + 2;
          break;
        }
        if (uVar9 < 10000) {
          uVar11 = uVar11 + 3;
          break;
        }
        uVar11 = uVar11 + 4;
        bVar1 = 99999 < uVar9;
        uVar9 = uVar9 / 10000;
      } while (bVar1);
      if (uVar11 < 0x41) {
        builtin_strncpy(local_158,
                        "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                        ,0xc9);
        uVar7 = uVar11 - 1;
        uVar9 = uVar12;
        if (99 < uVar12) {
          do {
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar9 >> 2;
            uVar12 = (uVar9 >> 2) / 0x19;
            lVar8 = (uVar9 + ((SUB168(auVar3 * ZEXT816(0x28f5c28f5c28f5c3),8) & 0xfffffffffffffffc)
                             + uVar12) * -0x14) * 2;
            acStack_89[(ulong)uVar7 + 4] = local_158[lVar8 + 1];
            acStack_89[(ulong)(uVar7 - 1) + 4] = local_158[lVar8];
            uVar7 = uVar7 - 2;
            bVar1 = 9999 < uVar9;
            uVar9 = uVar12;
          } while (bVar1);
        }
        goto LAB_001132e8;
      }
      pcVar6 = local_45;
    }
    pcVar14 = acStack_89 + 4;
LAB_00113049:
    pcVar10 = pcVar14 + -1;
    if (param_1 < 0) {
      pcVar14[-1] = '-';
      pcVar14 = pcVar10;
      goto LAB_001134c9;
    }
  }
  else {
    bVar4 = (byte)this[1] >> 3 & 0xf;
    uVar12 = param_1;
    if (bVar4 == 4) {
      if (param_1 == 0) {
        puVar15 = (undefined1 *)0x0;
        lVar8 = 0;
      }
      else {
        puVar15 = &DAT_0011704f;
        lVar8 = 1;
      }
LAB_00113350:
      if (uVar12 == 0) {
        acStack_89[4] = '0';
        pcVar6 = acStack_89 + 5;
      }
      else {
        lVar2 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        uVar7 = 0x42 - ((uint)lVar2 ^ 0x3f);
        uVar11 = uVar7 / 3 - 1;
        for (; bVar13 = (byte)uVar12, 0x3f < uVar12; uVar12 = uVar12 >> 6) {
          acStack_89[(ulong)uVar11 + 4] = (bVar13 & 7) + 0x30;
          acStack_89[(ulong)(uVar11 - 1) + 4] = ((byte)(uVar12 >> 3) & 7) + 0x30;
          uVar11 = uVar11 - 2;
        }
        if (7 < uVar12) {
          acStack_89[5] = (bVar13 & 7) + 0x30;
          bVar13 = (byte)(uVar12 >> 3);
        }
        acStack_89[4] = bVar13 + 0x30;
        pcVar6 = acStack_89 + (ulong)(uVar7 / 3) + 4;
      }
LAB_00113033:
      if ((((byte)*this & 0x10) == 0) || (lVar8 == 0)) {
        pcVar14 = acStack_89 + 4;
      }
      else {
        pcVar14 = acStack_89 + (4 - lVar8);
        if ((uint)lVar8 != 0) {
          uVar11 = 0;
          do {
            pcVar14[uVar11] = puVar15[uVar11];
            uVar11 = uVar11 + 1;
          } while (uVar11 < (uint)lVar8);
        }
      }
      goto LAB_00113049;
    }
    if (4 < bVar4) {
      puVar15 = &DAT_00117190;
      if (bVar13 == 0x28) {
        puVar15 = &DAT_0011718d;
      }
LAB_00112f7f:
      if (uVar12 != 0) goto LAB_00112f19;
      acStack_89[4] = '0';
      if (bVar13 == 0x30) {
        pcVar6 = acStack_89 + 5;
LAB_00113469:
        pcVar14 = acStack_89 + 4;
        do {
          iVar5 = toupper((int)*pcVar14);
          *pcVar14 = (char)iVar5;
          pcVar14 = pcVar14 + 1;
        } while (pcVar14 != pcVar6);
        lVar8 = 2;
      }
      else {
        lVar8 = 2;
        pcVar6 = acStack_89 + 5;
      }
      goto LAB_00113033;
    }
    if (1 < bVar4) {
LAB_00112fa8:
      puVar15 = &DAT_0011718a;
      if (bVar13 == 0x10) {
        puVar15 = &DAT_00117187;
      }
      if (uVar12 == 0) {
        acStack_89[4] = '0';
        pcVar6 = acStack_89 + 5;
      }
      else {
        lVar8 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        uVar7 = (uint)lVar8 ^ 0x3f;
        uVar11 = 0x3f - uVar7;
        if (uVar11 != 0) {
          pcVar6 = acStack_89 + (ulong)uVar11 + 1;
          do {
            pcVar6[3] = ((byte)uVar12 & 1) + 0x30;
            uVar12 = uVar12 >> 1;
            pcVar6 = pcVar6 + -1;
          } while (pcVar6 != acStack_89 + ((ulong)uVar11 - (ulong)(0x3e - uVar7)));
        }
        pcVar6 = acStack_89 + (ulong)(0x40 - uVar7) + 4;
        acStack_89[4] = '1';
      }
      lVar8 = 2;
      goto LAB_00113033;
    }
    if (param_1 != 0) goto LAB_00112ee4;
    acStack_89[4] = '0';
    pcVar6 = acStack_89 + 5;
    pcVar14 = acStack_89 + 4;
    pcVar10 = acStack_89 + 3;
  }
  bVar13 = (byte)*this >> 2 & 3;
  if (bVar13 == 1) {
    pcVar14[-1] = '+';
    pcVar14 = pcVar10;
  }
  else if (bVar13 == 3) {
    pcVar14[-1] = ' ';
    pcVar14 = pcVar10;
  }
LAB_001134c9:
  _M_format_int<std::__format::_Sink_iter<char>>
            (this,(long)pcVar6 - (long)pcVar14,pcVar14,acStack_89 + (4 - (long)pcVar14),param_2);
  return;
}

