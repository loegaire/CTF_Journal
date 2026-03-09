
/* std::basic_string_view<char, std::char_traits<char> >::find(char, unsigned long) const */

long __thiscall
std::basic_string_view<char,std::char_traits<char>>::find
          (basic_string_view<char,std::char_traits<char>> *this,char param_1,ulong param_2)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  
  if (param_2 < *(ulong *)this) {
    lVar1 = *(long *)(this + 8);
    pvVar2 = memchr((void *)(lVar1 + param_2),(int)param_1,*(ulong *)this - param_2);
    lVar3 = -1;
    if (pvVar2 != (void *)0x0) {
      lVar3 = (long)pvVar2 - lVar1;
    }
    return lVar3;
  }
  return -1;
}

