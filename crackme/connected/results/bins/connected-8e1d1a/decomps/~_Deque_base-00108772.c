
/* std::_Deque_base<frame, std::allocator<frame> >::~_Deque_base() */

void __thiscall
std::_Deque_base<frame,std::allocator<frame>>::~_Deque_base
          (_Deque_base<frame,std::allocator<frame>> *this)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  lVar1 = *(long *)(this + 0x48);
  for (puVar2 = *(undefined8 **)(this + 0x28); puVar2 < (undefined8 *)(lVar1 + 8U);
      puVar2 = puVar2 + 1) {
    operator_delete((void *)*puVar2,0x4b6);
  }
  operator_delete(*(void **)this,*(long *)(this + 8) * 8);
  return;
}

