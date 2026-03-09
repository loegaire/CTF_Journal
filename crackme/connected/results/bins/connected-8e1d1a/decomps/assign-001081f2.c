
/* std::__cxx11::string::assign(char const*) */

string * __thiscall std::__cxx11::string::assign(string *this,char *param_1)

{
  string *__dest;
  size_t __n;
  ulong uVar1;
  ulong uVar2;
  char *unaff_R15;
  
  __n = strlen(param_1);
  __dest = *(string **)this;
  if (__dest == this + 0x10) {
    uVar2 = 0xf;
  }
  else {
    uVar2 = *(ulong *)(this + 0x10);
  }
  if (__n <= uVar2) {
    if ((param_1 < __dest) || (__dest + (long)*(char **)(this + 8) < param_1)) {
      if (__n != 0) {
        if (__n == 1) {
          *__dest = (string)*param_1;
        }
        else {
          memcpy(__dest,param_1,__n);
        }
      }
    }
    else {
      std::__cxx11::string::_M_replace_cold
                ((char *)this,(ulong)__dest,*(char **)(this + 8),(ulong)param_1,__n);
    }
    goto LAB_00108245;
  }
  uVar2 = uVar2 * 2;
  if (__n < uVar2) {
    uVar1 = 0x7fffffffffffffff;
    if (uVar2 < 0x8000000000000000) {
      uVar1 = uVar2;
    }
    uVar2 = uVar1 + 1;
    if (-1 < (long)uVar2) goto LAB_001082b4;
    std::__throw_bad_alloc();
LAB_001082d7:
    *unaff_R15 = *param_1;
  }
  else {
    uVar2 = __n + 1;
    uVar1 = __n;
LAB_001082b4:
    unaff_R15 = operator_new(uVar2);
    if (__n == 1) goto LAB_001082d7;
    memcpy(unaff_R15,param_1,__n);
  }
  if (this + 0x10 != *(string **)this) {
    operator_delete(*(string **)this,*(long *)(this + 0x10) + 1);
  }
  *(char **)this = unaff_R15;
  *(ulong *)(this + 0x10) = uVar1;
LAB_00108245:
  *(size_t *)(this + 8) = __n;
  *(undefined1 *)(*(long *)this + __n) = 0;
  return this;
}

