
/* std::__format::_Sink_iter<char> std::__format::__write<std::__format::_Sink_iter<char>,
   char>(std::__format::_Sink_iter<char>, std::basic_string_view<char, std::char_traits<char> >) */

__format * __thiscall
std::__format::__write<std::__format::_Sink_iter<char>,char>
          (__format *this,ulong param_2,void *param_3)

{
  ulong __n;
  ulong uVar1;
  void *__dest;
  
  if (param_2 != 0) {
    __dest = *(void **)(this + 0x18);
    uVar1 = *(long *)(this + 0x10) - ((long)__dest - *(long *)(this + 8));
    if (uVar1 <= param_2) {
      do {
        __n = param_2;
        if (uVar1 <= param_2) {
          __n = uVar1;
        }
        if (__n != 0) {
          memcpy(__dest,param_3,__n);
        }
        *(ulong *)(this + 0x18) = *(long *)(this + 0x18) + uVar1;
        param_3 = (void *)((long)param_3 + uVar1);
        param_2 = param_2 - uVar1;
        (*(code *)**(undefined8 **)this)(this);
        __dest = *(void **)(this + 0x18);
        uVar1 = *(long *)(this + 0x10) - ((long)__dest - *(long *)(this + 8));
      } while (uVar1 <= param_2);
      if (param_2 == 0) {
        return this;
      }
    }
    memcpy(__dest,param_3,param_2);
    *(ulong *)(this + 0x18) = *(long *)(this + 0x18) + param_2;
  }
  return this;
}

