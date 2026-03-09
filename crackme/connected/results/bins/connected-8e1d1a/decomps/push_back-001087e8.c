
/* std::__cxx11::string::push_back(char) */

void __thiscall std::__cxx11::string::push_back(string *this,char param_1)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  ulong unaff_R15;
  undefined1 *local_40;
  
  __n = *(size_t *)(this + 8);
  uVar1 = __n + 1;
  if (this + 0x10 == *(string **)this) {
    uVar2 = 0xf;
  }
  else {
    uVar2 = *(ulong *)(this + 0x10);
  }
  if (uVar1 <= uVar2) goto LAB_0010881a;
  if ((long)uVar1 < 0) {
    std::__throw_length_error("basic_string::_M_create");
LAB_00108848:
    std::__throw_bad_alloc();
LAB_0010884d:
    if (__n == 1) {
      *local_40 = **(undefined1 **)this;
    }
    else {
      memcpy(local_40,*(undefined1 **)this,__n);
    }
  }
  else {
    uVar2 = uVar2 * 2;
    unaff_R15 = 0x7fffffffffffffff;
    if (uVar2 < 0x8000000000000000) {
      unaff_R15 = uVar2;
    }
    if (uVar2 <= uVar1) {
      unaff_R15 = uVar1;
    }
    if ((long)(unaff_R15 + 1) < 0) goto LAB_00108848;
    local_40 = operator_new(unaff_R15 + 1);
    if (__n != 0) goto LAB_0010884d;
  }
  if (this + 0x10 != *(string **)this) {
    operator_delete(*(string **)this,*(long *)(this + 0x10) + 1);
  }
  *(undefined1 **)this = local_40;
  *(ulong *)(this + 0x10) = unaff_R15;
LAB_0010881a:
  *(char *)(*(long *)this + __n) = param_1;
  *(ulong *)(this + 8) = uVar1;
  *(undefined1 *)(*(long *)this + 1 + __n) = 0;
  return;
}

