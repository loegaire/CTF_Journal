
/* std::basic_format_context<std::__format::_Sink_iter<char>, char>::iterator
   std::__format::__formatter_int<char>::format<unsigned char, std::__format::_Sink_iter<char>
   >(unsigned char, std::basic_format_context<std::__format::_Sink_iter<char>, char>&) const */

void __thiscall
std::__format::__formatter_int<char>::format<unsigned_char,std::__format::_Sink_iter<char>>
          (__formatter_int<char> *this,uchar param_1,basic_format_context *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  char *pcVar9;
  undefined1 *puVar10;
  uchar local_34;
  char local_33 [11];
  
  bVar8 = (byte)this[1] & 0x78;
  if (bVar8 == 0x38) {
    if (-1 < (char)param_1) {
      local_34 = param_1;
      __write_padded_as_spec<char,std::__format::_Sink_iter<char>>
                ((__format *)0x1,&local_34,1,param_2,this,1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    __throw_format_error("format error: integer not representable as character");
  }
  bVar5 = (byte)this[1] >> 3 & 0xf;
  if (bVar5 == 4) {
    if (param_1 == '\0') {
      local_33[3] = '0';
      pcVar4 = local_33 + 4;
      pcVar9 = local_33 + 3;
      goto LAB_00111fde;
    }
    uVar7 = 0x1f;
    if (param_1 != '\0') {
      for (; param_1 >> uVar7 == 0; uVar7 = uVar7 - 1) {
      }
    }
    if (param_1 < 0x40) {
      if (7 < param_1) {
        local_33[4] = (param_1 & 7) + 0x30;
        param_1 = param_1 >> 3;
      }
    }
    else {
      local_33[5] = (param_1 & 7) + 0x30;
      bVar8 = param_1 >> 3;
      param_1 = param_1 >> 6;
      local_33[4] = (bVar8 & 7) + 0x30;
    }
    local_33[3] = param_1 + 0x30;
    pcVar4 = local_33 + (ulong)(0x22 - (uVar7 ^ 0x1f)) / 3 + 3;
    puVar10 = &DAT_0011704f;
    lVar3 = 1;
  }
  else if (bVar5 < 5) {
    if (bVar5 < 2) {
      if (param_1 == '\0') {
        local_33[3] = '0';
        pcVar4 = local_33 + 4;
      }
      else {
        if (param_1 < 10) {
          uVar7 = 1;
        }
        else {
          uVar7 = (99 < param_1) + 2;
        }
        __detail::__to_chars_10_impl<unsigned_int>(local_33 + 3,uVar7,(uint)param_1);
        pcVar4 = local_33 + 3 + uVar7;
      }
      pcVar9 = local_33 + 3;
      goto LAB_00111fde;
    }
    puVar10 = &DAT_00117187;
    if (bVar8 != 0x10) {
      puVar10 = &DAT_0011718a;
    }
    if (param_1 == '\0') {
      local_33[3] = '0';
      pcVar4 = local_33 + 4;
    }
    else {
      uVar1 = (uint)param_1;
      uVar7 = 0x1f;
      if (param_1 != '\0') {
        for (; param_1 >> uVar7 == 0; uVar7 = uVar7 - 1) {
        }
      }
      uVar7 = uVar7 ^ 0x1f;
      uVar6 = 0x1f - uVar7;
      if (uVar6 != 0) {
        pcVar4 = local_33 + (ulong)uVar6 + 3;
        do {
          *pcVar4 = ((byte)uVar1 & 1) + 0x30;
          uVar1 = uVar1 >> 1;
          pcVar4 = pcVar4 + -1;
        } while (pcVar4 != local_33 + ((ulong)uVar6 - (ulong)(0x1e - uVar7)) + 2);
      }
      pcVar4 = local_33 + (ulong)(0x20 - uVar7) + 3;
      local_33[3] = '1';
    }
    lVar3 = 2;
  }
  else {
    puVar10 = &DAT_0011718d;
    if (bVar8 != 0x28) {
      puVar10 = &DAT_00117190;
    }
    if (param_1 == '\0') {
      local_33[3] = '0';
      if (bVar8 == 0x30) {
        pcVar4 = local_33 + 4;
LAB_001121d3:
        pcVar9 = local_33 + 3;
        do {
          iVar2 = toupper((int)*pcVar9);
          *pcVar9 = (char)iVar2;
          pcVar9 = pcVar9 + 1;
        } while (pcVar9 != pcVar4);
        lVar3 = 2;
      }
      else {
        lVar3 = 2;
        pcVar4 = local_33 + 4;
      }
    }
    else {
      pcVar4 = (char *)__detail::__to_chars_16<unsigned_int>
                                 (local_33 + 3,&stack0xffffffffffffffd8,(uint)param_1);
      lVar3 = 2;
      if (bVar8 == 0x30) {
        if (pcVar4 != local_33 + 3) goto LAB_001121d3;
        lVar3 = 2;
        pcVar4 = local_33 + 3;
      }
    }
  }
  if ((((byte)*this & 0x10) == 0) || (lVar3 == 0)) {
    pcVar9 = local_33 + 3;
  }
  else {
    pcVar9 = local_33 + (3 - lVar3);
    if ((uint)lVar3 != 0) {
      uVar7 = 0;
      do {
        pcVar9[uVar7] = puVar10[uVar7];
        uVar7 = uVar7 + 1;
      } while (uVar7 < (uint)lVar3);
    }
  }
LAB_00111fde:
  bVar8 = (byte)*this >> 2 & 3;
  if (bVar8 == 1) {
    pcVar9[-1] = '+';
    pcVar9 = pcVar9 + -1;
  }
  else if (bVar8 == 3) {
    pcVar9[-1] = ' ';
    pcVar9 = pcVar9 + -1;
  }
  _M_format_int<std::__format::_Sink_iter<char>>
            (this,(long)pcVar4 - (long)pcVar9,pcVar9,local_33 + (3 - (long)pcVar9),param_2);
  return;
}

