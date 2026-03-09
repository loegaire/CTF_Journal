
/* std::__format::__formatter_str<char>::parse(std::basic_format_parse_context<char>&) */

char * __thiscall
std::__format::__formatter_str<char>::parse
          (__formatter_str<char> *this,basic_format_parse_context *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  bool local_35;
  undefined8 local_34;
  undefined4 local_2c;
  
  pcVar2 = *(char **)param_1;
  pcVar1 = *(char **)(param_1 + 8);
  local_34 = 0;
  local_2c = 0x20;
  pcVar3 = pcVar1;
  if ((((pcVar2 != pcVar1) && (pcVar3 = pcVar2, *pcVar2 != '}')) &&
      (pcVar2 = (char *)_Spec<char>::_M_parse_fill_and_align((_Spec<char> *)&local_34,pcVar2,pcVar1)
      , pcVar3 = pcVar1, pcVar2 != pcVar1)) && (pcVar3 = pcVar2, *pcVar2 != '}')) {
    local_35 = false;
    if (*pcVar2 == '0') {
LAB_0010cb33:
                    /* WARNING: Subroutine does not return */
      __throw_format_error("format error: width must be non-zero in format string");
    }
    pcVar3 = (char *)_Spec<char>::_S_parse_width_or_precision
                               (pcVar2,pcVar1,(ushort *)((long)&local_34 + 4),&local_35,param_1);
    if (pcVar2 != pcVar3) {
      local_34 = CONCAT62(local_34._2_6_,(local_35 + 1 & 3) << 7 | (ushort)local_34 & 0xfe7f);
    }
    if ((pcVar1 != pcVar3) && (*pcVar3 != '}')) {
      if (*pcVar3 == '.') {
        pcVar2 = pcVar3 + 1;
        local_35 = false;
        if ((pcVar1 == pcVar2) ||
           (pcVar3 = (char *)_Spec<char>::_S_parse_width_or_precision
                                       (pcVar2,pcVar1,(ushort *)((long)&local_34 + 6),&local_35,
                                        param_1), pcVar2 == pcVar3)) {
                    /* WARNING: Subroutine does not return */
          __throw_format_error("format error: missing precision after \'.\' in format string");
        }
        local_34._0_2_ = CONCAT11(local_34._1_1_ & 0xf9 | local_35 * '\x02' + 2U & 6,local_34._0_1_)
        ;
        if (pcVar1 == pcVar3) goto LAB_0010cb5c;
      }
      if ((*pcVar3 != '}') &&
         (((*pcVar3 != 's' || (pcVar3 = pcVar3 + 1, pcVar3 != pcVar1)) && (*pcVar3 != '}')))) {
        __failed_to_parse_format_spec();
        goto LAB_0010cb33;
      }
    }
  }
LAB_0010cb5c:
  *(undefined8 *)this = local_34;
  *(undefined4 *)(this + 8) = local_2c;
  return pcVar3;
}

