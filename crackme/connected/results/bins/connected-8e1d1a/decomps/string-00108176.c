
/* std::__cxx11::string::string(std::__cxx11::string const&) */

void __thiscall std::__cxx11::string::string(string *this,string *param_1)

{
  string *__src;
  ulong __n;
  string *__dest;
  
  __dest = this + 0x10;
  *(string **)this = __dest;
  __src = *(string **)param_1;
  __n = *(ulong *)(param_1 + 8);
  if (__n < 0x10) {
    if (__n != 1) {
      if (__n == 0) goto LAB_001081e1;
LAB_001081bb:
      memcpy(__dest,__src,__n);
      goto LAB_001081e1;
    }
  }
  else {
    if ((long)__n < 0) {
      std::__throw_length_error("basic_string::_M_create");
    }
    else if (-1 < (long)(__n + 1)) {
      __dest = operator_new(__n + 1);
      *(string **)this = __dest;
      *(ulong *)(this + 0x10) = __n;
      goto LAB_001081bb;
    }
    std::__throw_bad_alloc();
  }
  this[0x10] = *__src;
LAB_001081e1:
  *(ulong *)(this + 8) = __n;
  *(undefined1 *)(*(long *)this + __n) = 0;
  return;
}

