
/* std::__format::_Formatting_scanner<std::__format::_Sink_iter<char>, char>::_M_on_chars(char
   const*) */

void __thiscall
std::__format::_Formatting_scanner<std::__format::_Sink_iter<char>,char>::_M_on_chars
          (_Formatting_scanner<std::__format::_Sink_iter<char>,char> *this,char *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong __n;
  ulong uVar3;
  ulong __n_00;
  void *__dest;
  void *__src;
  
  __src = *(void **)(this + 8);
  lVar1 = *(long *)(this + 0x30);
  puVar2 = *(undefined8 **)(lVar1 + 0x10);
  __n_00 = (long)param_1 - (long)__src;
  if (__n_00 != 0) {
    __dest = (void *)puVar2[3];
    uVar3 = puVar2[2] - ((long)__dest - puVar2[1]);
    if (uVar3 <= __n_00) {
      do {
        __n = __n_00;
        if (uVar3 <= __n_00) {
          __n = uVar3;
        }
        if (__n != 0) {
          memcpy(__dest,__src,__n);
        }
        puVar2[3] = puVar2[3] + uVar3;
        __src = (void *)((long)__src + uVar3);
        __n_00 = __n_00 - uVar3;
        (**(code **)*puVar2)(puVar2);
        __dest = (void *)puVar2[3];
        uVar3 = puVar2[2] - ((long)__dest - puVar2[1]);
      } while (uVar3 <= __n_00);
      if (__n_00 == 0) goto LAB_00107b65;
    }
    memcpy(__dest,__src,__n_00);
    puVar2[3] = puVar2[3] + __n_00;
  }
LAB_00107b65:
  *(undefined8 **)(lVar1 + 0x10) = puVar2;
  return;
}

