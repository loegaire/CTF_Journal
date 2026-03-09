
/* std::basic_format_context<std::__format::_Sink_iter<char>, char>::iterator
   std::__format::__formatter_int<char>::format<int, std::__format::_Sink_iter<char> >(int,
   std::basic_format_context<std::__format::_Sink_iter<char>, char>&) const */

void __thiscall
std::__format::__formatter_int<char>::format<int,std::__format::_Sink_iter<char>>
          (__formatter_int<char> *this,int param_1,basic_format_context *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  char *pcVar10;
  undefined1 *puVar11;
  char *pcVar12;
  char local_69 [36];
  char local_45 [21];
  
  bVar8 = (byte)this[1] & 0x78;
  if (bVar8 == 0x38) {
    if (param_1 + 0x80U < 0x100) {
      local_69[0] = (char)param_1;
      __write_padded_as_spec<char,std::__format::_Sink_iter<char>>
                ((__format *)0x1,local_69,1,param_2,this,1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    __throw_format_error("format error: integer not representable as character");
  }
  if (param_1 < 0) {
    uVar7 = -param_1;
    bVar1 = (byte)this[1] >> 3 & 0xf;
    if (bVar1 == 4) {
      puVar11 = &DAT_0011704f;
      lVar4 = 1;
      goto LAB_001128b5;
    }
    if (4 < bVar1) {
      puVar11 = &DAT_00117190;
      if (bVar8 != 0x28) goto LAB_00112755;
      puVar11 = &DAT_0011718d;
LAB_001126fc:
      pcVar12 = (char *)__detail::__to_chars_16<unsigned_int>(local_69 + 4,local_45,uVar7);
      lVar4 = 2;
      if (bVar8 == 0x30) {
        if (pcVar12 != local_69 + 4) goto LAB_0011298b;
        lVar4 = 2;
        pcVar12 = local_69 + 4;
      }
      goto LAB_0011280c;
    }
    if (1 < bVar1) goto LAB_00112777;
LAB_00112695:
    if (uVar7 < 10) {
      uVar9 = 1;
LAB_00112868:
      __detail::__to_chars_10_impl<unsigned_int>(local_69 + 4,uVar9,uVar7);
      pcVar12 = local_69 + 4 + uVar9;
    }
    else {
      uVar5 = (ulong)uVar7;
      uVar9 = 1;
      do {
        uVar2 = (uint)uVar5;
        if (uVar2 < 100) {
          uVar9 = uVar9 + 1;
          break;
        }
        if (uVar2 < 1000) {
          uVar9 = uVar9 + 2;
          break;
        }
        if (uVar2 < 10000) {
          uVar9 = uVar9 + 3;
          break;
        }
        uVar5 = uVar5 / 10000;
        uVar9 = uVar9 + 4;
      } while (9 < (uint)uVar5);
      if (uVar9 < 0x21) goto LAB_00112868;
      pcVar12 = local_45;
    }
    pcVar10 = local_69 + 4;
LAB_0011281f:
    pcVar6 = pcVar10 + -1;
    if (param_1 < 0) {
      pcVar10[-1] = '-';
      pcVar10 = pcVar6;
      goto LAB_001129e5;
    }
  }
  else {
    bVar1 = (byte)this[1] >> 3 & 0xf;
    uVar7 = param_1;
    if (bVar1 == 4) {
      if (param_1 == 0) {
        puVar11 = (undefined1 *)0x0;
        lVar4 = 0;
      }
      else {
        puVar11 = &DAT_0011704f;
        lVar4 = 1;
      }
LAB_001128b5:
      if (uVar7 == 0) {
        local_69[4] = '0';
        pcVar12 = local_69 + 5;
      }
      else {
        uVar9 = 0x1f;
        if (uVar7 != 0) {
          for (; uVar7 >> uVar9 == 0; uVar9 = uVar9 - 1) {
          }
        }
        uVar2 = 0x22 - (uVar9 ^ 0x1f);
        uVar9 = uVar2 / 3 - 1;
        for (; bVar8 = (byte)uVar7, 0x3f < uVar7; uVar7 = uVar7 >> 6) {
          local_69[(ulong)uVar9 + 4] = (bVar8 & 7) + 0x30;
          local_69[(ulong)(uVar9 - 1) + 4] = ((byte)(uVar7 >> 3) & 7) + 0x30;
          uVar9 = uVar9 - 2;
        }
        if (7 < uVar7) {
          local_69[5] = (bVar8 & 7) + 0x30;
          bVar8 = (byte)(uVar7 >> 3);
        }
        local_69[4] = bVar8 + 0x30;
        pcVar12 = local_69 + (ulong)(uVar2 / 3) + 4;
      }
LAB_0011280c:
      if ((((byte)*this & 0x10) == 0) || (lVar4 == 0)) {
        pcVar10 = local_69 + 4;
      }
      else {
        pcVar10 = local_69 + (4 - lVar4);
        if ((uint)lVar4 != 0) {
          uVar7 = 0;
          do {
            pcVar10[uVar7] = puVar11[uVar7];
            uVar7 = uVar7 + 1;
          } while (uVar7 < (uint)lVar4);
        }
      }
      goto LAB_0011281f;
    }
    if (4 < bVar1) {
      puVar11 = &DAT_00117190;
      if (bVar8 == 0x28) {
        puVar11 = &DAT_0011718d;
      }
LAB_00112755:
      if (uVar7 != 0) goto LAB_001126fc;
      local_69[4] = '0';
      if (bVar8 == 0x30) {
        pcVar12 = local_69 + 5;
LAB_0011298b:
        pcVar10 = local_69 + 4;
        do {
          iVar3 = toupper((int)*pcVar10);
          *pcVar10 = (char)iVar3;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 != pcVar12);
        lVar4 = 2;
      }
      else {
        lVar4 = 2;
        pcVar12 = local_69 + 5;
      }
      goto LAB_0011280c;
    }
    if (1 < bVar1) {
LAB_00112777:
      puVar11 = &DAT_0011718a;
      if (bVar8 == 0x10) {
        puVar11 = &DAT_00117187;
      }
      if (uVar7 == 0) {
        local_69[4] = '0';
        pcVar12 = local_69 + 5;
      }
      else {
        uVar9 = 0x1f;
        if (uVar7 != 0) {
          for (; uVar7 >> uVar9 == 0; uVar9 = uVar9 - 1) {
          }
        }
        uVar9 = uVar9 ^ 0x1f;
        uVar2 = 0x1f - uVar9;
        if (uVar2 != 0) {
          pcVar12 = local_69 + (ulong)uVar2 + 1;
          do {
            pcVar12[3] = ((byte)uVar7 & 1) + 0x30;
            uVar7 = uVar7 >> 1;
            pcVar12 = pcVar12 + -1;
          } while (pcVar12 != local_69 + ((ulong)uVar2 - (ulong)(0x1e - uVar9)));
        }
        pcVar12 = local_69 + (ulong)(0x20 - uVar9) + 4;
        local_69[4] = '1';
      }
      lVar4 = 2;
      goto LAB_0011280c;
    }
    if (param_1 != 0) goto LAB_00112695;
    local_69[4] = '0';
    pcVar12 = local_69 + 5;
    pcVar10 = local_69 + 4;
    pcVar6 = local_69 + 3;
  }
  bVar8 = (byte)*this >> 2 & 3;
  if (bVar8 == 1) {
    pcVar10[-1] = '+';
    pcVar10 = pcVar6;
  }
  else if (bVar8 == 3) {
    pcVar10[-1] = ' ';
    pcVar10 = pcVar6;
  }
LAB_001129e5:
  _M_format_int<std::__format::_Sink_iter<char>>
            (this,(long)pcVar12 - (long)pcVar10,pcVar10,local_69 + (4 - (long)pcVar10),param_2);
  return;
}

