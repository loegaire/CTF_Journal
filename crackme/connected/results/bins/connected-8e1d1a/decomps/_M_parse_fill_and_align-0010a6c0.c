
/* std::__format::_Spec<char>::_M_parse_fill_and_align(char const*, char const*) */

char * __thiscall
std::__format::_Spec<char>::_M_parse_fill_and_align(_Spec<char> *this,char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  undefined8 local_88;
  char *pcStack_80;
  char *local_78;
  byte bStack_70;
  byte bStack_6f;
  byte bStack_6e;
  undefined5 uStack_6d;
  char *local_68;
  undefined8 local_58;
  char *pcStack_50;
  char *local_48;
  undefined8 uStack_40;
  char *local_38;
  
  cVar1 = *param_1;
  if (cVar1 == '{') {
    return param_1;
  }
  if (param_1 == param_2) goto LAB_0010a822;
  bStack_70 = 0;
  bStack_6f = 0;
  bStack_6e = 0;
  pcStack_80 = param_1;
  local_78 = param_1;
  local_68 = param_2;
  __unicode::_Utf_iterator<char,char32_t,char_const*,char_const*,std::__unicode::_Repl>::
  _M_read_utf8((_Utf_iterator<char,char32_t,char_const*,char_const*,std::__unicode::_Repl> *)
               &local_88);
  bVar3 = bStack_70;
  local_58 = local_88;
  pcStack_50 = pcStack_80;
  local_48 = local_78;
  uStack_40 = CONCAT53(uStack_6d,CONCAT12(bStack_6e,CONCAT11(bStack_6f,bStack_70)));
  local_38 = local_68;
  if (bStack_70 + 1 == (uint)bStack_6f) {
    if ((param_2 != local_78) && (local_78 = local_78 + bStack_6e, param_2 != local_78)) {
      __unicode::_Utf_iterator<char,char32_t,char_const*,char_const*,std::__unicode::_Repl>::
      _M_read_utf8((_Utf_iterator<char,char32_t,char_const*,char_const*,std::__unicode::_Repl> *)
                   &local_88);
      goto LAB_0010a754;
    }
    uVar4 = *(uint *)((long)&local_58 + (ulong)bStack_70 * 4);
    if (uVar4 < 0xd800) goto LAB_0010a822;
LAB_0010a7c3:
    if (0x101fff < uVar4 - 0xe000) goto LAB_0010a822;
  }
  else {
LAB_0010a754:
    uVar4 = *(uint *)((long)&local_58 + (ulong)bVar3 * 4);
    if (0xd7ff < uVar4) goto LAB_0010a7c3;
  }
  if (param_2 == local_78) {
LAB_0010a822:
    if (cVar1 == '>') {
      bVar3 = 2;
    }
    else if (cVar1 == '^') {
      bVar3 = 3;
    }
    else {
      bVar3 = 1;
      if (cVar1 != '<') {
        return param_1;
      }
    }
    *(undefined4 *)(this + 8) = 0x20;
    *this = (_Spec<char>)((byte)*this & 0xfc | bVar3);
    return param_1 + 1;
  }
  cVar2 = *local_78;
  if (cVar2 == '>') {
    bVar3 = 2;
  }
  else if (cVar2 == '^') {
    bVar3 = 3;
  }
  else {
    if (cVar2 != '<') goto LAB_0010a822;
    bVar3 = 1;
  }
  *(uint *)(this + 8) = uVar4;
  *this = (_Spec<char>)((byte)*this & 0xfc | bVar3);
  return local_78 + 1;
}

