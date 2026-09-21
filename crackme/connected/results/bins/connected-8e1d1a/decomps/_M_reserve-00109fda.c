
/* std::__format::_Seq_sink<std::__cxx11::string >::_M_reserve(unsigned long) */

_Seq_sink<std::__cxx11::string> * __thiscall
std::__format::_Seq_sink<std::__cxx11::string>::_M_reserve
          (_Seq_sink<std::__cxx11::string> *this,ulong param_1)

{
  size_t __n;
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  _Seq_sink<std::__cxx11::string> *__src;
  ulong uVar4;
  char *pcVar5;
  ulong unaff_R12;
  ulong unaff_R13;
  _Seq_sink<std::__cxx11::string> *unaff_R15;
  _Seq_sink<std::__cxx11::string> *local_40;
  
  __src = *(_Seq_sink<std::__cxx11::string> **)(this + 8);
  if (*(_Seq_sink<std::__cxx11::string> **)(this + 0x18) != __src) {
    uVar3 = (long)*(_Seq_sink<std::__cxx11::string> **)(this + 0x18) - (long)__src;
    uVar4 = *(ulong *)(this + 0x128);
    if (0x7fffffffffffffff - uVar4 < uVar3) {
      pcVar5 = "basic_string::append";
      std::__throw_length_error("basic_string::append");
LAB_0010a0cb:
      uVar2 = 0xf;
    }
    else {
      unaff_R12 = uVar3 + uVar4;
      pcVar5 = *(char **)(this + 0x120);
      if ((_Seq_sink<std::__cxx11::string> *)pcVar5 == this + 0x130) goto LAB_0010a0cb;
      uVar2 = *(ulong *)(this + 0x130);
    }
    if (uVar2 < unaff_R12) {
      __cxx11::string::_M_mutate((string *)(this + 0x120),uVar4,0,(char *)__src,uVar3);
    }
    else if (uVar3 == 1) {
      ((_Seq_sink<std::__cxx11::string> *)pcVar5)[uVar4] = *__src;
    }
    else {
      memcpy((_Seq_sink<std::__cxx11::string> *)pcVar5 + uVar4,__src,uVar3);
    }
    *(ulong *)(this + 0x128) = unaff_R12;
    *(undefined1 *)(*(long *)(this + 0x120) + unaff_R12) = 0;
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(this + 8);
  }
  lVar1 = *(long *)(this + 0x128);
  uVar4 = param_1 + lVar1;
  if (*(_Seq_sink<std::__cxx11::string> **)(this + 0x120) == this + 0x130) {
    uVar3 = 0xf;
  }
  else {
    uVar3 = *(ulong *)(this + 0x130);
  }
  if (uVar4 <= uVar3) goto LAB_0010a029;
  if ((long)uVar4 < 0) {
    std::__throw_length_error("basic_string::_M_create");
LAB_0010a19a:
    std::__throw_bad_alloc();
LAB_0010a19f:
    *local_40 = *unaff_R15;
joined_r0x0010a1ad:
    if (this + 0x130 != unaff_R15) goto LAB_0010a163;
  }
  else {
    uVar3 = uVar3 * 2;
    unaff_R13 = 0x7fffffffffffffff;
    if (uVar3 < 0x8000000000000000) {
      unaff_R13 = uVar3;
    }
    if (uVar3 <= uVar4) {
      unaff_R13 = uVar4;
    }
    if ((long)(unaff_R13 + 1) < 0) goto LAB_0010a19a;
    local_40 = operator_new(unaff_R13 + 1);
    __n = *(long *)(this + 0x128) + 1;
    unaff_R15 = *(_Seq_sink<std::__cxx11::string> **)(this + 0x120);
    if (*(long *)(this + 0x128) == 0) goto LAB_0010a19f;
    if (__n != 0) {
      memcpy(local_40,unaff_R15,__n);
      goto joined_r0x0010a1ad;
    }
LAB_0010a163:
    operator_delete(unaff_R15,*(long *)(this + 0x130) + 1);
  }
  *(_Seq_sink<std::__cxx11::string> **)(this + 0x120) = local_40;
  *(ulong *)(this + 0x130) = unaff_R13;
LAB_0010a029:
  *(ulong *)(this + 0x128) = uVar4;
  *(undefined1 *)(*(long *)(this + 0x120) + uVar4) = 0;
  *(long *)(this + 8) = *(long *)(this + 0x120);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(this + 0x128);
  *(long *)(this + 0x18) = *(long *)(this + 0x120) + lVar1;
  return this;
}

