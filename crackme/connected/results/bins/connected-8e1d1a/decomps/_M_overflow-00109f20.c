
/* std::__format::_Seq_sink<std::__cxx11::string >::_M_overflow() */

void __thiscall
std::__format::_Seq_sink<std::__cxx11::string>::_M_overflow(_Seq_sink<std::__cxx11::string> *this)

{
  ulong uVar1;
  _Seq_sink<std::__cxx11::string> *__src;
  ulong unaff_RBP;
  ulong uVar2;
  char *pcVar3;
  ulong __n;
  
  __src = *(_Seq_sink<std::__cxx11::string> **)(this + 8);
  __n = *(long *)(this + 0x18) - (long)__src;
  if (__n == 0) {
    return;
  }
  uVar2 = *(ulong *)(this + 0x128);
  if (0x7fffffffffffffff - uVar2 < __n) {
    pcVar3 = "basic_string::append";
    std::__throw_length_error("basic_string::append");
  }
  else {
    unaff_RBP = __n + uVar2;
    pcVar3 = *(char **)(this + 0x120);
    if ((_Seq_sink<std::__cxx11::string> *)pcVar3 != this + 0x130) {
      uVar1 = *(ulong *)(this + 0x130);
      goto LAB_00109f71;
    }
  }
  uVar1 = 0xf;
LAB_00109f71:
  if (uVar1 < unaff_RBP) {
    __cxx11::string::_M_mutate((string *)(this + 0x120),uVar2,0,(char *)__src,__n);
  }
  else if (__n == 1) {
    ((_Seq_sink<std::__cxx11::string> *)pcVar3)[uVar2] = *__src;
  }
  else {
    memcpy((_Seq_sink<std::__cxx11::string> *)pcVar3 + uVar2,__src,__n);
  }
  *(ulong *)(this + 0x128) = unaff_RBP;
  *(undefined1 *)(*(long *)(this + 0x120) + unaff_RBP) = 0;
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(this + 8);
  return;
}

