
/* std::__format::_Sink<char>::_M_reserve(unsigned long) */

_Sink<char> * __thiscall std::__format::_Sink<char>::_M_reserve(_Sink<char> *this,ulong param_1)

{
  if (*(ulong *)(this + 0x10) - (*(long *)(this + 0x18) - *(long *)(this + 8)) < param_1) {
    if ((param_1 <= *(ulong *)(this + 0x10)) &&
       ((*(code *)**(undefined8 **)this)(),
       param_1 <= (ulong)(*(long *)(this + 0x10) - (*(long *)(this + 0x18) - *(long *)(this + 8)))))
    {
      return this;
    }
    this = (_Sink<char> *)0x0;
  }
  return this;
}

