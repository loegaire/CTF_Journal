
/* std::__cxx11::string::_M_dispose() */

void __thiscall std::__cxx11::string::_M_dispose(string *this)

{
  if (*(string **)this != this + 0x10) {
    operator_delete(*(string **)this,*(long *)(this + 0x10) + 1);
    return;
  }
  return;
}

