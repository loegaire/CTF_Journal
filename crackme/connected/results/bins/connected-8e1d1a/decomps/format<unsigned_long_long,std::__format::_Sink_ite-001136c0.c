
/* std::basic_format_context<std::__format::_Sink_iter<char>, char>::iterator
   std::__format::__formatter_int<char>::format<unsigned long long, std::__format::_Sink_iter<char>
   >(unsigned long long, std::basic_format_context<std::__format::_Sink_iter<char>, char>&) const */

void __thiscall
std::__format::__formatter_int<char>::format<unsigned_long_long,std::__format::_Sink_iter<char>>
          (__formatter_int<char> *this,ulonglong param_1,basic_format_context *param_2)

{
  bool bVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  ulonglong uVar8;
  ulong uVar9;
  uint uVar10;
  byte bVar11;
  char *pcVar12;
  undefined1 *puVar13;
  char local_148 [207];
  char acStack_79 [68];
  char local_35 [13];
  
  bVar11 = (byte)this[1] & 0x78;
  if (bVar11 == 0x38) {
    if (param_1 < 0x80) {
      local_148[0] = (char)param_1;
      __write_padded_as_spec<char,std::__format::_Sink_iter<char>>
                ((__format *)0x1,local_148,1,param_2,this,1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    __throw_format_error("format error: integer not representable as character");
  }
  bVar3 = (byte)this[1] >> 3 & 0xf;
  if (bVar3 == 4) {
    if (param_1 == 0) {
      acStack_79[4] = '0';
      pcVar6 = acStack_79 + 5;
      pcVar12 = acStack_79 + 4;
      goto LAB_001137a9;
    }
    lVar7 = 0x3f;
    if (param_1 != 0) {
      for (; param_1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar10 = 0x42 - ((uint)lVar7 ^ 0x3f);
    uVar4 = uVar10 / 3 - 1;
    for (; bVar11 = (byte)param_1, 0x3f < param_1; param_1 = param_1 >> 6) {
      acStack_79[(ulong)uVar4 + 4] = (bVar11 & 7) + 0x30;
      acStack_79[(ulong)(uVar4 - 1) + 4] = ((byte)(param_1 >> 3) & 7) + 0x30;
      uVar4 = uVar4 - 2;
    }
    if (7 < param_1) {
      acStack_79[5] = (bVar11 & 7) + 0x30;
      bVar11 = (byte)(param_1 >> 3);
    }
    acStack_79[4] = bVar11 + 0x30;
    pcVar6 = acStack_79 + (ulong)(uVar10 / 3) + 4;
    puVar13 = &DAT_0011704f;
    lVar7 = 1;
  }
  else if (bVar3 < 5) {
    if (bVar3 < 2) {
      if (param_1 == 0) {
        acStack_79[4] = '0';
        pcVar6 = acStack_79 + 5;
      }
      else {
        if (param_1 < 10) {
          builtin_strncpy(local_148,
                          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                          ,0xc9);
          uVar4 = 1;
        }
        else {
          uVar4 = 1;
          uVar8 = param_1;
          do {
            if (uVar8 < 100) {
              uVar4 = uVar4 + 1;
              break;
            }
            if (uVar8 < 1000) {
              uVar4 = uVar4 + 2;
              break;
            }
            if (uVar8 < 10000) {
              uVar4 = uVar4 + 3;
              break;
            }
            uVar4 = uVar4 + 4;
            bVar1 = 99999 < uVar8;
            uVar8 = uVar8 / 10000;
          } while (bVar1);
          if (0x40 < uVar4) {
            pcVar6 = local_35;
            goto LAB_00113897;
          }
          builtin_strncpy(local_148,
                          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                          ,0xc9);
          uVar10 = uVar4 - 1;
          uVar9 = param_1;
          if (99 < param_1) {
            do {
              auVar2._8_8_ = 0;
              auVar2._0_8_ = uVar9 >> 2;
              param_1 = (uVar9 >> 2) / 0x19;
              lVar7 = (uVar9 + ((SUB168(auVar2 * ZEXT816(0x28f5c28f5c28f5c3),8) & 0xfffffffffffffffc
                                ) + param_1) * -0x14) * 2;
              acStack_79[(ulong)uVar10 + 4] = local_148[lVar7 + 1];
              acStack_79[(ulong)(uVar10 - 1) + 4] = local_148[lVar7];
              uVar10 = uVar10 - 2;
              bVar1 = 9999 < uVar9;
              uVar9 = param_1;
            } while (bVar1);
          }
        }
        builtin_strncpy(local_148,
                        "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                        ,0xc9);
        acStack_79[4] = (char)param_1 + '0';
        if (9 < param_1) {
          acStack_79[5] = local_148[param_1 * 2 + 1];
          acStack_79[4] = local_148[param_1 * 2];
        }
        pcVar6 = acStack_79 + (ulong)uVar4 + 4;
      }
LAB_00113897:
      pcVar12 = acStack_79 + 4;
      goto LAB_001137a9;
    }
    puVar13 = &DAT_00117187;
    if (bVar11 != 0x10) {
      puVar13 = &DAT_0011718a;
    }
    if (param_1 == 0) {
      acStack_79[4] = '0';
      pcVar6 = acStack_79 + 5;
    }
    else {
      lVar7 = 0x3f;
      if (param_1 != 0) {
        for (; param_1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uVar10 = (uint)lVar7 ^ 0x3f;
      uVar4 = 0x3f - uVar10;
      if (uVar4 != 0) {
        pcVar6 = acStack_79 + (ulong)uVar4 + 1;
        do {
          pcVar6[3] = ((byte)param_1 & 1) + 0x30;
          param_1 = param_1 >> 1;
          pcVar6 = pcVar6 + -1;
        } while (pcVar6 != acStack_79 + ((ulong)uVar4 - (ulong)(0x3e - uVar10)));
      }
      pcVar6 = acStack_79 + (ulong)(0x40 - uVar10) + 4;
      acStack_79[4] = '1';
    }
    lVar7 = 2;
  }
  else {
    puVar13 = &DAT_0011718d;
    if (bVar11 != 0x28) {
      puVar13 = &DAT_00117190;
    }
    if (param_1 == 0) {
      acStack_79[4] = '0';
      if (bVar11 == 0x30) {
        pcVar6 = acStack_79 + 5;
LAB_00113be7:
        pcVar12 = acStack_79 + 4;
        do {
          iVar5 = toupper((int)*pcVar12);
          *pcVar12 = (char)iVar5;
          pcVar12 = pcVar12 + 1;
        } while (pcVar12 != pcVar6);
        lVar7 = 2;
      }
      else {
        lVar7 = 2;
        pcVar6 = acStack_79 + 5;
      }
    }
    else {
      pcVar6 = (char *)__detail::__to_chars_16<unsigned_long>(acStack_79 + 4,local_35,param_1);
      lVar7 = 2;
      if (bVar11 == 0x30) {
        if (pcVar6 != acStack_79 + 4) goto LAB_00113be7;
        lVar7 = 2;
        pcVar6 = acStack_79 + 4;
      }
    }
  }
  if ((((byte)*this & 0x10) == 0) || (lVar7 == 0)) {
    pcVar12 = acStack_79 + 4;
  }
  else {
    pcVar12 = acStack_79 + (4 - lVar7);
    if ((uint)lVar7 != 0) {
      uVar4 = 0;
      do {
        pcVar12[uVar4] = puVar13[uVar4];
        uVar4 = uVar4 + 1;
      } while (uVar4 < (uint)lVar7);
    }
  }
LAB_001137a9:
  bVar11 = (byte)*this >> 2 & 3;
  if (bVar11 == 1) {
    pcVar12[-1] = '+';
    pcVar12 = pcVar12 + -1;
  }
  else if (bVar11 == 3) {
    pcVar12[-1] = ' ';
    pcVar12 = pcVar12 + -1;
  }
  _M_format_int<std::__format::_Sink_iter<char>>
            (this,(long)pcVar6 - (long)pcVar12,pcVar12,acStack_79 + (4 - (long)pcVar12),param_2);
  return;
}

