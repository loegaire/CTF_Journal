
/* std::__cxx11::string::_M_replace(unsigned long, unsigned long, char const*, unsigned long) */

string * __thiscall
std::__cxx11::string::_M_replace
          (string *this,ulong param_1,ulong param_2,char *param_3,ulong param_4)

{
  string *__dest;
  string *psVar1;
  long lVar2;
  string *unaff_RBX;
  char *unaff_RBP;
  ulong uVar3;
  size_t __n;
  ulong unaff_R12;
  undefined1 auVar4 [16];
  
  lVar2 = *(long *)(this + 8);
  if ((param_2 + 0x7fffffffffffffff) - lVar2 < param_4) {
    auVar4 = std::__throw_length_error("basic_string::_M_replace");
    param_2 = auVar4._8_8_;
    psVar1 = auVar4._0_8_;
  }
  else {
    unaff_R12 = (param_4 - param_2) + lVar2;
    psVar1 = *(string **)this;
    unaff_RBX = this;
    unaff_RBP = (char *)param_4;
    if (psVar1 != this + 0x10) {
      uVar3 = *(ulong *)(this + 0x10);
      goto LAB_00109e5d;
    }
  }
  uVar3 = 0xf;
LAB_00109e5d:
  if (uVar3 < unaff_R12) {
    _M_mutate(unaff_RBX,param_1,param_2,param_3,(ulong)unaff_RBP);
  }
  else {
    __dest = psVar1 + param_1;
    __n = lVar2 - (long)(param_2 + param_1);
    if ((param_3 < psVar1) || (psVar1 + lVar2 < param_3)) {
      if ((__n != 0) && ((char *)param_2 != unaff_RBP)) {
        if (__n == 1) {
          __dest[(long)unaff_RBP] = __dest[param_2];
        }
        else {
          memmove(__dest + (long)unaff_RBP,__dest + param_2,__n);
        }
      }
      if (unaff_RBP != (char *)0x0) {
        if (unaff_RBP == (char *)0x1) {
          *__dest = (string)*param_3;
        }
        else {
          memcpy(__dest,param_3,(size_t)unaff_RBP);
        }
      }
    }
    else {
      std::__cxx11::string::_M_replace_cold
                ((char *)unaff_RBX,(ulong)__dest,(char *)param_2,(ulong)param_3,(ulong)unaff_RBP);
    }
  }
  *(ulong *)(unaff_RBX + 8) = unaff_R12;
  *(undefined1 *)(*(long *)unaff_RBX + unaff_R12) = 0;
  return unaff_RBX;
}

