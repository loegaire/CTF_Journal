
/* std::bad_optional_access::~bad_optional_access() */

void __thiscall std::bad_optional_access::~bad_optional_access(bad_optional_access *this)

{
  *(undefined ***)this = &PTR__bad_optional_access_0011db90;
  std::exception::~exception((exception *)this);
  operator_delete(this,8);
  return;
}

