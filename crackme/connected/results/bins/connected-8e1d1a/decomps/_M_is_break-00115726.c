
/* std::__unicode::__v15_1_0::_Grapheme_cluster_view<std::basic_string_view<char,
   std::char_traits<char> > >::_Iterator::_M_is_break(std::__unicode::__v15_1_0::_Gcb_property,
   std::__unicode::__v15_1_0::_Gcb_property, std::__unicode::_Utf_iterator<char, char32_t, char
   const*, char const*, std::__unicode::_Repl>) const */

uint std::__unicode::__v15_1_0::
     _Grapheme_cluster_view<std::basic_string_view<char,std::char_traits<char>>>::_Iterator::
     _M_is_break(int *param_1,int param_2,uint param_3)

{
  char cVar1;
  wchar32 wVar2;
  undefined3 uVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  undefined1 *puVar11;
  _Utf_iterator<char,char32_t,char_const*,char_const*,std::__unicode::_Repl> *p_Var12;
  bool bVar13;
  byte bVar14;
  long in_stack_00000018;
  byte in_stack_00000020;
  char local_6a;
  _Utf_iterator<char,char32_t,char_const*,char_const*,std::__unicode::_Repl> local_68 [16];
  long local_58;
  byte local_50;
  byte local_4f;
  byte local_4e;
  long local_48;
  
  bVar4 = in_stack_00000020;
  bVar14 = 0;
  uVar6 = 1;
  if (((1 < param_2 - 1U) && (uVar6 = (uint)(param_3 != 2), param_2 != 3)) &&
     (uVar6 = 1, 2 < param_3 - 1)) {
    switch(param_2) {
    case 7:
      if ((int)param_3 < 9) {
        uVar6 = (uint)((int)param_3 < 7);
      }
      else {
        uVar6 = (uint)(1 < param_3 - 0xb);
      }
      break;
    case 8:
    case 0xb:
      uVar6 = (uint)(1 < param_3 - 8);
      break;
    case 9:
    case 0xc:
      uVar6 = (uint)(param_3 != 9);
      break;
    default:
      uVar6 = param_3 & 0xfffffffd;
      uVar3 = (undefined3)(uVar6 >> 8);
      bVar13 = (uVar6 == 4 || param_2 == 5) || param_3 == 10;
      if ((uVar6 == 4 || param_2 == 5) || param_3 == 10) {
        uVar6 = 0;
      }
      else {
        cVar1 = *(char *)((long)param_1 + 10);
        if ((cVar1 != '\0') && (0xc01 < (uint)(*param_1 << 2))) {
          puVar11 = __incb_edges;
          lVar8 = 0x185;
          while (lVar9 = lVar8, 0 < lVar9) {
            lVar8 = lVar9 >> 1;
            if (*(uint *)((long)puVar11 + lVar8 * 4) < (*param_1 << 2 | 3U)) {
              puVar11 = (undefined1 *)((uint *)((long)puVar11 + lVar8 * 4) + 1);
              lVar8 = (lVar9 - lVar8) + -1;
            }
          }
          if (((*(uint *)((long)puVar11 + -4) & 3) == 1) &&
             (iVar7 = __incb_property(*(wchar32 *)(&stack0x00000008 + (ulong)in_stack_00000020 * 4))
             , iVar7 == 1)) {
            piVar10 = param_1 + 4;
            p_Var12 = local_68;
            for (lVar8 = 10; cVar5 = bVar13, lVar8 != 0; lVar8 = lVar8 + -1) {
              *(int *)p_Var12 = *piVar10;
              piVar10 = piVar10 + (ulong)bVar14 * -2 + 1;
              p_Var12 = p_Var12 + ((ulong)bVar14 * -2 + 1) * 4;
            }
            do {
              while( true ) {
                do {
                  local_6a = cVar5;
                  if (local_50 + 1 == (uint)local_4f) {
                    if (local_58 != local_48) {
                      local_58 = local_58 + (ulong)local_4e;
                      if (local_48 == local_58) {
                        local_50 = 0;
                      }
                      else {
                        _Utf_iterator<char,char32_t,char_const*,char_const*,std::__unicode::_Repl>::
                        _M_read_utf8(local_68);
                      }
                    }
                  }
                  else if (local_50 + 1 < (uint)local_4f) {
                    local_50 = local_50 + 1;
                  }
                  if (local_58 == in_stack_00000018 && bVar4 == local_50) {
                    if (local_6a != '\0') {
                      return CONCAT31(uVar3,bVar13);
                    }
                    goto LAB_001157ee;
                  }
                  wVar2 = *(wchar32 *)(local_68 + (ulong)local_50 * 4);
                  cVar5 = cVar1;
                } while (((((wVar2 == L'्') || (wVar2 == L'্')) || (wVar2 == L'્')) ||
                         ((wVar2 == L'୍' || (wVar2 == L'్')))) || (wVar2 == L'്'));
                iVar7 = __incb_property(wVar2);
                if (iVar7 != 1) break;
                cVar5 = '\0';
              }
              cVar5 = local_6a;
            } while (iVar7 == 2);
          }
        }
LAB_001157ee:
        if (param_2 == 10) {
          uVar6 = CONCAT31(uVar3,(char)param_1[2] != '\x02');
        }
        else if ((param_2 == 0xd) && (param_3 == 0xd)) {
          uVar6 = *(byte *)((long)param_1 + 9) & 1 ^ 1;
        }
        else {
          uVar6 = 1;
        }
      }
    }
  }
  return uVar6;
}

