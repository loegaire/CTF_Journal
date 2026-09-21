
/* std::deque<frame, std::allocator<frame> >::_M_pop_front_aux() */

void __thiscall
std::deque<frame,std::allocator<frame>>::_M_pop_front_aux(deque<frame,std::allocator<frame>> *this)

{
  long lVar1;
  
  operator_delete(*(void **)(this + 0x18),0x4b6);
  lVar1 = *(long *)(this + 0x28);
  *(long *)(this + 0x28) = lVar1 + 8;
  lVar1 = *(long *)(lVar1 + 8);
  *(long *)(this + 0x18) = lVar1;
  *(long *)(this + 0x20) = lVar1 + 0x4b6;
  *(long *)(this + 0x10) = lVar1;
  return;
}

