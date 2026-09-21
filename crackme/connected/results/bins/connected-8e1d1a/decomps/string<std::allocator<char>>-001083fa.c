
/* std::__cxx11::string::string<std::allocator<char> >(char const*, std::allocator<char> const&) */

void __thiscall
std::__cxx11::string::string<std::allocator<char>>(string *this,char *param_1,allocator *param_2)

{
  size_t __n;
  string *__dest;
  string *unaff_RBX;
  size_t unaff_RBP;
  char *unaff_R13;
  
  __dest = this + 0x10;
  *(string **)this = __dest;
  if (param_1 == (char *)0x0) {
    __n = std::__throw_logic_error("basic_string: construction from null is not valid");
LAB_00108440:
    __dest = operator_new(__n + 1);
    *(string **)unaff_RBX = __dest;
    *(size_t *)(unaff_RBX + 0x10) = unaff_RBP;
    this = unaff_RBX;
    __n = unaff_RBP;
    param_1 = unaff_R13;
  }
  else {
    __n = strlen(param_1);
    unaff_RBX = this;
    unaff_RBP = __n;
    unaff_R13 = param_1;
    if (0xf < __n) goto LAB_00108440;
    if (__n == 1) {
      this[0x10] = (string)*param_1;
      goto LAB_0010846b;
    }
    if (__n == 0) goto LAB_0010846b;
  }
  memcpy(__dest,param_1,__n);
LAB_0010846b:
  *(size_t *)(this + 8) = __n;
  *(undefined1 *)(*(long *)this + __n) = 0;
  return;
}

