
/* std::basic_format_context<std::__format::_Sink_iter<char>, char>::iterator
   std::__format::__formatter_int<char>::format<unsigned int, std::__format::_Sink_iter<char>
   >(unsigned int, std::basic_format_context<std::__format::_Sink_iter<char>, char>&) const */

void __thiscall
std::__format::__formatter_int<char>::format<unsigned_int,std::__format::_Sink_iter<char>>
          (__formatter_int<char> *this,uint param_1,basic_format_context *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  uint uVar6;
  byte bVar7;
  char *pcVar8;
  undefined1 *puVar9;
  char local_59 [36];
  char local_35 [13];
  
  bVar7 = (byte)this[1] & 0x78;
  if (bVar7 == 0x38) {
    if (param_1 < 0x80) {
      local_59[0] = (char)param_1;
      __write_padded_as_spec<char,std::__format::_Sink_iter<char>>
                ((__format *)0x1,local_59,1,param_2,this,1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    __throw_format_error("format error: integer not representable as character");
  }
  bVar1 = (byte)this[1] >> 3 & 0xf;
  if (bVar1 == 4) {
    if (param_1 == 0) {
      local_59[4] = '0';
      pcVar4 = local_59 + 5;
      pcVar8 = local_59 + 4;
      goto LAB_00112b1f;
    }
    uVar6 = 0x1f;
    if (param_1 != 0) {
      for (; param_1 >> uVar6 == 0; uVar6 = uVar6 - 1) {
      }
    }
    uVar2 = 0x22 - (uVar6 ^ 0x1f);
    uVar6 = uVar2 / 3 - 1;
    for (; bVar7 = (byte)param_1, 0x3f < param_1; param_1 = param_1 >> 6) {
      local_59[(ulong)uVar6 + 4] = (bVar7 & 7) + 0x30;
      local_59[(ulong)(uVar6 - 1) + 4] = ((byte)(param_1 >> 3) & 7) + 0x30;
      uVar6 = uVar6 - 2;
    }
    if (7 < param_1) {
      local_59[5] = (bVar7 & 7) + 0x30;
      bVar7 = (byte)(param_1 >> 3);
    }
    local_59[4] = bVar7 + 0x30;
    pcVar4 = local_59 + (ulong)(uVar2 / 3) + 4;
    puVar9 = &DAT_0011704f;
    lVar5 = 1;
  }
  else if (bVar1 < 5) {
    if (bVar1 < 2) {
      if (param_1 == 0) {
        local_59[4] = '0';
        pcVar4 = local_59 + 5;
      }
      else {
        if (param_1 < 10) {
          uVar6 = 1;
        }
        else {
          uVar6 = 1;
          uVar2 = param_1;
          do {
            if (uVar2 < 100) {
              uVar6 = uVar6 + 1;
              break;
            }
            if (uVar2 < 1000) {
              uVar6 = uVar6 + 2;
              break;
            }
            if (uVar2 < 10000) {
              uVar6 = uVar6 + 3;
              break;
            }
            uVar2 = uVar2 / 10000;
            uVar6 = uVar6 + 4;
          } while (9 < uVar2);
          if (0x20 < uVar6) {
            pcVar4 = local_35;
            goto LAB_00112bfb;
          }
        }
        __detail::__to_chars_10_impl<unsigned_int>(local_59 + 4,uVar6,param_1);
        pcVar4 = local_59 + 4 + uVar6;
      }
LAB_00112bfb:
      pcVar8 = local_59 + 4;
      goto LAB_00112b1f;
    }
    puVar9 = &DAT_00117187;
    if (bVar7 != 0x10) {
      puVar9 = &DAT_0011718a;
    }
    if (param_1 == 0) {
      local_59[4] = '0';
      pcVar4 = local_59 + 5;
    }
    else {
      uVar6 = 0x1f;
      if (param_1 != 0) {
        for (; param_1 >> uVar6 == 0; uVar6 = uVar6 - 1) {
        }
      }
      uVar6 = uVar6 ^ 0x1f;
      uVar2 = 0x1f - uVar6;
      if (uVar2 != 0) {
        pcVar4 = local_59 + (ulong)uVar2 + 1;
        do {
          pcVar4[3] = ((byte)param_1 & 1) + 0x30;
          param_1 = param_1 >> 1;
          pcVar4 = pcVar4 + -1;
        } while (pcVar4 != local_59 + ((ulong)uVar2 - (ulong)(0x1e - uVar6)));
      }
      pcVar4 = local_59 + (ulong)(0x20 - uVar6) + 4;
      local_59[4] = '1';
    }
    lVar5 = 2;
  }
  else {
    puVar9 = &DAT_0011718d;
    if (bVar7 != 0x28) {
      puVar9 = &DAT_00117190;
    }
    if (param_1 == 0) {
      local_59[4] = '0';
      if (bVar7 == 0x30) {
        pcVar4 = local_59 + 5;
LAB_00112ce7:
        pcVar8 = local_59 + 4;
        do {
          iVar3 = toupper((int)*pcVar8);
          *pcVar8 = (char)iVar3;
          pcVar8 = pcVar8 + 1;
        } while (pcVar8 != pcVar4);
        lVar5 = 2;
      }
      else {
        lVar5 = 2;
        pcVar4 = local_59 + 5;
      }
    }
    else {
      pcVar4 = (char *)__detail::__to_chars_16<unsigned_int>(local_59 + 4,local_35,param_1);
      lVar5 = 2;
      if (bVar7 == 0x30) {
        if (pcVar4 != local_59 + 4) goto LAB_00112ce7;
        lVar5 = 2;
        pcVar4 = local_59 + 4;
      }
    }
  }
  if ((((byte)*this & 0x10) == 0) || (lVar5 == 0)) {
    pcVar8 = local_59 + 4;
  }
  else {
    pcVar8 = local_59 + (4 - lVar5);
    if ((uint)lVar5 != 0) {
      uVar6 = 0;
      do {
        pcVar8[uVar6] = puVar9[uVar6];
        uVar6 = uVar6 + 1;
      } while (uVar6 < (uint)lVar5);
    }
  }
LAB_00112b1f:
  bVar7 = (byte)*this >> 2 & 3;
  if (bVar7 == 1) {
    pcVar8[-1] = '+';
    pcVar8 = pcVar8 + -1;
  }
  else if (bVar7 == 3) {
    pcVar8[-1] = ' ';
    pcVar8 = pcVar8 + -1;
  }
  _M_format_int<std::__format::_Sink_iter<char>>
            (this,(long)pcVar4 - (long)pcVar8,pcVar8,local_59 + (4 - (long)pcVar8),param_2);
  return;
}

