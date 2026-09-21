
/* net_switch::~net_switch() */

void __thiscall net_switch::~net_switch(net_switch *this)

{
  _Rb_tree<unsigned_short,std::pair<unsigned_short_const,unsigned_char>,std::_Select1st<std::pair<unsigned_short_const,unsigned_char>>,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,unsigned_char>>>
  *p_Var1;
  _Rb_tree<unsigned_short,std::pair<unsigned_short_const,unsigned_char>,std::_Select1st<std::pair<unsigned_short_const,unsigned_char>>,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,unsigned_char>>>
  *p_Var2;
  
  *(undefined ***)this = &PTR_run_0011dbf8;
  std::
  _Rb_tree<unsigned_short,std::pair<unsigned_short_const,unsigned_char>,std::_Select1st<std::pair<unsigned_short_const,unsigned_char>>,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,unsigned_char>>>
  ::_M_erase((_Rb_tree<unsigned_short,std::pair<unsigned_short_const,unsigned_char>,std::_Select1st<std::pair<unsigned_short_const,unsigned_char>>,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,unsigned_char>>>
              *)(this + 0x238),*(_Rb_tree_node **)(this + 0x248));
  *(undefined ***)this = &PTR___cxa_pure_virtual_0011dda0;
  p_Var2 = (_Rb_tree<unsigned_short,std::pair<unsigned_short_const,unsigned_char>,std::_Select1st<std::pair<unsigned_short_const,unsigned_char>>,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,unsigned_char>>>
            *)(this + 0x238);
  do {
    p_Var1 = p_Var2 + -0x70;
    std::_Deque_base<frame,std::allocator<frame>>::~_Deque_base
              ((_Deque_base<frame,std::allocator<frame>> *)(p_Var2 + -0x60));
    p_Var2 = p_Var1;
  } while ((_Rb_tree<unsigned_short,std::pair<unsigned_short_const,unsigned_char>,std::_Select1st<std::pair<unsigned_short_const,unsigned_char>>,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,unsigned_char>>>
            *)(this + 8) != p_Var1);
  return;
}

