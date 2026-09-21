
/* std::formatter<void const*, char>::parse(std::basic_format_parse_context<char>&) */

char * __thiscall
std::formatter<void_const*,char>::parse
          (formatter<void_const*,char> *this,basic_format_parse_context *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  bool local_35;
  undefined8 local_34;
  undefined4 local_2c;
  
  local_34 = 0;
  local_2c = 0x20;
  pcVar1 = *(char **)(param_1 + 8);
  pcVar4 = *(char **)param_1;
  if ((((pcVar1 != pcVar4) && (*pcVar4 != '}')) &&
      (pcVar2 = (char *)__format::_Spec<char>::_M_parse_fill_and_align
                                  ((_Spec<char> *)&local_34,pcVar4,pcVar1), pcVar4 = pcVar1,
      pcVar2 != pcVar1)) && (pcVar4 = pcVar2, *pcVar2 != '}')) {
    local_35 = false;
    if (*pcVar2 != '0') {
      pcVar3 = (char *)__format::_Spec<char>::_S_parse_width_or_precision
                                 (pcVar2,pcVar1,(ushort *)((long)&local_34 + 4),&local_35,param_1);
      if (pcVar2 != pcVar3) {
        local_34 = CONCAT62(local_34._2_6_,(local_35 + 1 & 3) << 7 | (ushort)local_34 & 0xfe7f);
      }
      pcVar4 = pcVar3;
      if (((pcVar1 == pcVar3) ||
          ((*pcVar3 == 'p' && (pcVar3 = pcVar3 + 1, pcVar4 = pcVar1, pcVar3 == pcVar1)))) ||
         (pcVar4 = pcVar3, *pcVar3 == '}')) goto LAB_0010cc68;
      __format::__failed_to_parse_format_spec();
    }
                    /* WARNING: Subroutine does not return */
    __throw_format_error("format error: width must be non-zero in format string");
  }
LAB_0010cc68:
  *(undefined8 *)this = local_34;
  *(undefined4 *)(this + 8) = local_2c;
  return pcVar4;
}

