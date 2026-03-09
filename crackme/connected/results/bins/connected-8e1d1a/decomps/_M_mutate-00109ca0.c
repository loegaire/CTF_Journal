
/* std::__cxx11::string::_M_mutate(unsigned long, unsigned long, char const*, unsigned long) */

void __thiscall
std::__cxx11::string::_M_mutate
          (string *this,ulong param_1,ulong param_2,char *param_3,ulong param_4)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  ulong uVar3;
  undefined1 *__src;
  undefined1 *local_50;
  
  __n = *(long *)(this + 8) - (param_1 + param_2);
  uVar3 = (param_4 - param_2) + *(long *)(this + 8);
  if (this + 0x10 == *(string **)this) {
    uVar1 = 0xf;
  }
  else {
    uVar1 = *(ulong *)(this + 0x10);
  }
  if ((long)uVar3 < 0) {
    std::__throw_length_error("basic_string::_M_create");
LAB_00109d89:
    std::__throw_bad_alloc();
  }
  else {
    if (uVar1 < uVar3) {
      uVar1 = uVar1 * 2;
      uVar2 = 0x7fffffffffffffff;
      if (uVar1 < 0x8000000000000000) {
        uVar2 = uVar1;
      }
      if (uVar3 < uVar1) {
        uVar3 = uVar2;
      }
    }
    if ((long)(uVar3 + 1) < 0) goto LAB_00109d89;
    local_50 = operator_new(uVar3 + 1);
    if (param_1 == 0) goto LAB_00109d2a;
  }
  if (param_1 == 1) {
    *local_50 = **(undefined1 **)this;
  }
  else {
    memcpy(local_50,*(undefined1 **)this,param_1);
  }
LAB_00109d2a:
  if ((param_3 != (char *)0x0) && (param_4 != 0)) {
    if (param_4 == 1) {
      local_50[param_1] = *param_3;
    }
    else {
      memcpy(local_50 + param_1,param_3,param_4);
    }
  }
  if (__n != 0) {
    __src = (undefined1 *)(param_1 + param_2 + *(long *)this);
    if (__n == 1) {
      local_50[param_1 + param_4] = *__src;
    }
    else {
      memcpy(local_50 + param_1 + param_4,__src,__n);
    }
  }
  if (this + 0x10 != *(string **)this) {
    operator_delete(*(string **)this,*(long *)(this + 0x10) + 1);
  }
  *(undefined1 **)this = local_50;
  *(ulong *)(this + 0x10) = uVar3;
  return;
}

