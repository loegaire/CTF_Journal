
/* std::__cxx11::string::reserve(unsigned long) */

void __thiscall std::__cxx11::string::reserve(string *this,ulong param_1)

{
  size_t __n;
  ulong uVar1;
  ulong uVar2;
  string *unaff_R13;
  string *unaff_R14;
  
  if (this + 0x10 == *(string **)this) {
    uVar1 = 0xf;
  }
  else {
    uVar1 = *(ulong *)(this + 0x10);
  }
  if (param_1 <= uVar1) {
    return;
  }
  if ((long)param_1 < 0) {
    std::__throw_length_error("basic_string::_M_create");
LAB_0010a433:
    std::__throw_bad_alloc();
LAB_0010a438:
    *unaff_R13 = *unaff_R14;
joined_r0x0010a443:
    if (this + 0x10 == unaff_R14) goto LAB_0010a41e;
  }
  else {
    uVar1 = uVar1 * 2;
    uVar2 = 0x7fffffffffffffff;
    if (uVar1 < 0x8000000000000000) {
      uVar2 = uVar1;
    }
    if (param_1 < uVar1) {
      param_1 = uVar2;
    }
    if ((long)(param_1 + 1) < 0) goto LAB_0010a433;
    unaff_R13 = operator_new(param_1 + 1);
    __n = *(long *)(this + 8) + 1;
    unaff_R14 = *(string **)this;
    if (*(long *)(this + 8) == 0) goto LAB_0010a438;
    if (__n != 0) {
      memcpy(unaff_R13,unaff_R14,__n);
      goto joined_r0x0010a443;
    }
  }
  operator_delete(unaff_R14,*(long *)(this + 0x10) + 1);
LAB_0010a41e:
  *(string **)this = unaff_R13;
  *(ulong *)(this + 0x10) = param_1;
  return;
}

