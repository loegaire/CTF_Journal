
/* std::__cxx11::string::_M_replace_aux(unsigned long, unsigned long, unsigned long, char) */

string * __thiscall
std::__cxx11::string::_M_replace_aux
          (string *this,ulong param_1,ulong param_2,ulong param_3,char param_4)

{
  ulong uVar1;
  size_t __n;
  long lVar2;
  ulong extraout_RDX;
  string *unaff_RBX;
  char *pcVar3;
  ulong unaff_R12;
  ulong unaff_R13;
  char unaff_R14B;
  
  lVar2 = *(long *)(this + 8);
  if ((param_2 + 0x7fffffffffffffff) - lVar2 < param_3) {
    pcVar3 = "basic_string::_M_replace_aux";
    std::__throw_length_error("basic_string::_M_replace_aux");
    param_2 = extraout_RDX;
    param_4 = unaff_R14B;
  }
  else {
    unaff_R12 = (param_3 - param_2) + lVar2;
    pcVar3 = *(char **)this;
    unaff_RBX = this;
    unaff_R13 = param_1;
    if ((string *)pcVar3 != this + 0x10) {
      uVar1 = *(ulong *)(this + 0x10);
      goto LAB_0010dd78;
    }
  }
  uVar1 = 0xf;
LAB_0010dd78:
  if (uVar1 < unaff_R12) {
    _M_mutate(unaff_RBX,unaff_R13,param_2,(char *)0x0,param_3);
  }
  else {
    __n = lVar2 - (param_2 + unaff_R13);
    if ((__n != 0) && (param_2 != param_3)) {
      if (__n == 1) {
        ((string *)pcVar3)[param_3 + unaff_R13] = ((string *)pcVar3)[param_2 + unaff_R13];
      }
      else {
        memmove((string *)pcVar3 + param_3 + unaff_R13,(string *)pcVar3 + param_2 + unaff_R13,__n);
      }
    }
  }
  if (param_3 != 0) {
    if (param_3 == 1) {
      *(char *)(unaff_R13 + *(long *)unaff_RBX) = param_4;
    }
    else {
      memset((char *)(unaff_R13 + *(long *)unaff_RBX),(int)param_4,param_3);
    }
  }
  *(ulong *)(unaff_RBX + 8) = unaff_R12;
  *(undefined1 *)(*(long *)unaff_RBX + unaff_R12) = 0;
  return unaff_RBX;
}

