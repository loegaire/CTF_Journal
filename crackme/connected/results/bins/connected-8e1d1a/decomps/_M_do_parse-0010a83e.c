
/* std::__format::__formatter_int<char>::_M_do_parse(std::basic_format_parse_context<char>&,
   std::__format::_Pres_type) */

char * __thiscall
std::__format::__formatter_int<char>::_M_do_parse
          (__formatter_int<char> *this,basic_format_parse_context *param_1,uint param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  bool local_35;
  undefined8 local_34;
  undefined4 local_2c;
  
  local_2c = 0x20;
  local_34 = (ulong)(byte)((param_3 & 0xf) << 3) << 8;
  pcVar1 = *(char **)(param_1 + 8);
  pcVar3 = *(char **)param_1;
  if ((((pcVar1 == pcVar3) || (*pcVar3 == '}')) ||
      (pcVar2 = (char *)_Spec<char>::_M_parse_fill_and_align((_Spec<char> *)&local_34,pcVar3,pcVar1)
      , pcVar3 = pcVar1, pcVar2 == pcVar1)) || (cVar4 = *pcVar2, pcVar3 = pcVar2, cVar4 == '}'))
  goto LAB_0010aaeb;
  if (cVar4 == '+') {
    cVar4 = '\x01';
LAB_0010a8cc:
    local_34 = CONCAT71(local_34._1_7_,(byte)local_34._0_1_ & 0xf3 | cVar4 << 2);
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar2;
    if (pcVar1 == pcVar2) goto LAB_0010aaeb;
  }
  else {
    if (cVar4 == '-') {
      cVar4 = '\x02';
      goto LAB_0010a8cc;
    }
    if (cVar4 == ' ') {
      cVar4 = '\x03';
      goto LAB_0010a8cc;
    }
  }
  pcVar3 = pcVar2;
  if (*pcVar2 != '}') {
    if (*pcVar2 == '#') {
      local_34 = local_34 | 0x10;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar2;
      if (pcVar1 == pcVar2) goto LAB_0010aaeb;
    }
    pcVar3 = pcVar2;
    if (*pcVar2 != '}') {
      if (*pcVar2 == '0') {
        local_34 = local_34 | 0x40;
        pcVar2 = pcVar2 + 1;
        pcVar3 = pcVar2;
        if (pcVar1 == pcVar2) goto LAB_0010aaeb;
      }
      pcVar3 = pcVar2;
      if (*pcVar2 != '}') {
        local_35 = false;
        if (*pcVar2 == '0') {
                    /* WARNING: Subroutine does not return */
          __throw_format_error("format error: width must be non-zero in format string");
        }
        pcVar3 = (char *)_Spec<char>::_S_parse_width_or_precision
                                   (pcVar2,pcVar1,(ushort *)((long)&local_34 + 4),&local_35,param_1)
        ;
        if (pcVar2 != pcVar3) {
          local_34 = CONCAT62(local_34._2_6_,(local_35 + 1 & 3) << 7 | (ushort)local_34 & 0xfe7f);
        }
        if ((pcVar1 != pcVar3) && (*pcVar3 != '}')) {
          if (*pcVar3 == 'L') {
            local_34 = local_34 | 0x20;
            pcVar3 = pcVar3 + 1;
            if (pcVar1 == pcVar3) goto LAB_0010aaeb;
          }
          if (*pcVar3 != '}') {
            switch(*pcVar3) {
            case 'B':
              goto switchD_0010a9a7_caseD_42;
            default:
              goto switchD_0010a9a7_caseD_43;
            case 'X':
              local_34 = local_34 & 0xffffffffffff87ff | 0x3000;
              pcVar3 = pcVar3 + 1;
              goto switchD_0010a9a7_caseD_43;
            case 'b':
              local_34 = local_34 & 0xffffffffffff87ff | 0x1000;
              pcVar3 = pcVar3 + 1;
              goto switchD_0010a9a7_caseD_43;
            case 'c':
              if (param_3 == 0) goto LAB_0010aa23;
              local_34 = local_34 & 0xffffffffffff87ff | 0x3800;
              pcVar3 = pcVar3 + 1;
              goto switchD_0010a9a7_caseD_43;
            case 'd':
              local_34 = local_34 & 0xffffffffffff87ff | 0x800;
              pcVar3 = pcVar3 + 1;
              goto switchD_0010a9a7_caseD_43;
            case 'o':
              local_34 = local_34 & 0xffffffffffff87ff | 0x2000;
              pcVar3 = pcVar3 + 1;
              goto switchD_0010a9a7_caseD_43;
            case 's':
              if (param_3 != 0) goto LAB_0010aa23;
              local_34 = local_34 & 0xffffffffffff87ff;
              pcVar3 = pcVar3 + 1;
              goto switchD_0010a9a7_caseD_43;
            case 'x':
              local_34 = local_34 & 0xffffffffffff87ff | 0x2800;
              pcVar3 = pcVar3 + 1;
              goto switchD_0010a9a7_caseD_43;
            }
          }
        }
      }
    }
  }
LAB_0010aaeb:
  *(ulong *)this = local_34;
  *(undefined4 *)(this + 8) = local_2c;
  return pcVar3;
switchD_0010a9a7_caseD_42:
  local_34 = local_34 & 0xffffffffffff87ff | 0x1800;
  pcVar3 = pcVar3 + 1;
switchD_0010a9a7_caseD_43:
  if (pcVar1 == pcVar3) goto LAB_0010aaeb;
LAB_0010aa23:
  if (*pcVar3 == '}') goto LAB_0010aaeb;
  pcVar3 = (char *)__failed_to_parse_format_spec();
  goto switchD_0010a9a7_caseD_42;
}

