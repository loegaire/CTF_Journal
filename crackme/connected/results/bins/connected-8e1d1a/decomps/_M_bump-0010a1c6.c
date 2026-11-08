
/* std::__format::_Seq_sink<std::__cxx11::string >::_M_bump(unsigned long) */

void __thiscall
std::__format::_Seq_sink<std::__cxx11::string>::_M_bump
          (_Seq_sink<std::__cxx11::string> *this,ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong __n;
  
  uVar3 = (*(long *)(this + 0x18) - *(long *)(this + 8)) + param_1;
  uVar1 = *(ulong *)(this + 0x128);
  if (uVar3 <= uVar1) {
    if (uVar3 < uVar1) {
      *(ulong *)(this + 0x128) = uVar3;
      *(undefined1 *)(*(long *)(this + 0x120) + uVar3) = 0;
    }
    goto LAB_0010a201;
  }
  __n = uVar3 - uVar1;
  if (0x7fffffffffffffff - uVar1 < __n) {
    std::__throw_length_error("basic_string::_M_replace_aux");
LAB_0010a27f:
    uVar2 = 0xf;
  }
  else {
    if (*(_Seq_sink<std::__cxx11::string> **)(this + 0x120) == this + 0x130) goto LAB_0010a27f;
    uVar2 = *(ulong *)(this + 0x130);
  }
  if (uVar2 < uVar3) {
    __cxx11::string::_M_mutate((string *)(this + 0x120),uVar1,0,(char *)0x0,__n);
  }
  if (__n == 1) {
    *(undefined1 *)(uVar1 + *(long *)(this + 0x120)) = 0;
  }
  else {
    memset((undefined1 *)(uVar1 + *(long *)(this + 0x120)),0,__n);
  }
  *(ulong *)(this + 0x128) = uVar3;
  *(undefined1 *)(*(long *)(this + 0x120) + uVar3) = 0;
LAB_0010a201:
  *(_Seq_sink<std::__cxx11::string> **)(this + 8) = this + 0x20;
  *(undefined8 *)(this + 0x10) = 0x100;
  *(_Seq_sink<std::__cxx11::string> **)(this + 0x18) = this + 0x20;
  return;
}

