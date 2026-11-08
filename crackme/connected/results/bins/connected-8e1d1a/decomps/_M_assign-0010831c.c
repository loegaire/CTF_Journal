
/* std::__cxx11::string::_M_assign(std::__cxx11::string const&) */

void __thiscall std::__cxx11::string::_M_assign(string *this,string *param_1)

{
  ulong __n;
  ulong uVar1;
  void *pvVar2;
  char *__dest;
  ulong uVar3;
  
  if (this == param_1) {
    return;
  }
  __n = *(ulong *)(param_1 + 8);
  if (this + 0x10 == *(string **)this) {
    uVar1 = 0xf;
  }
  else {
    uVar1 = *(ulong *)(this + 0x10);
  }
  if (uVar1 < __n) {
    if ((long)__n < 0) {
      __dest = "basic_string::_M_create";
      std::__throw_length_error("basic_string::_M_create");
    }
    else {
      uVar1 = uVar1 * 2;
      uVar3 = 0x7fffffffffffffff;
      if (uVar1 < 0x8000000000000000) {
        uVar3 = uVar1;
      }
      if (uVar1 <= __n) {
        uVar3 = __n;
      }
      __dest = (char *)(uVar3 + 1);
      if (-1 < (long)__dest) {
        pvVar2 = operator_new((ulong)__dest);
        if (this + 0x10 != *(string **)this) {
          operator_delete(*(string **)this,*(long *)(this + 0x10) + 1);
        }
        *(void **)this = pvVar2;
        *(ulong *)(this + 0x10) = uVar3;
        goto LAB_001083c3;
      }
    }
    std::__throw_bad_alloc();
  }
  else {
    if (__n == 0) goto LAB_00108354;
LAB_001083c3:
    param_1 = *(string **)param_1;
    __dest = *(char **)this;
    if (__n != 1) {
      memcpy(__dest,param_1,__n);
      goto LAB_00108354;
    }
  }
  *__dest = (char)*param_1;
LAB_00108354:
  *(ulong *)(this + 8) = __n;
  *(undefined1 *)(*(long *)this + __n) = 0;
  return;
}

